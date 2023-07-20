object Destinations {
    const val WELCOME_ROUTE = "welcome"
    const val SING_UP_ROUTE = "signup/{email}"
    const val SIGN_IN_ROUTE = "signin/{email}"
    const val SURVEY_ROUTE = "survey"
    const val SURVEY_RESULTS_ROUTE = "surveyresults"
}

@Compsable
fun JetsurveyNavHost(navController: 
NavHostController = rememberNavController,) {
    
    /**Had to look up what navhost does. The video below is helpful. Watch it from start to finish: 
     * https://www.youtube.com/watch?v=4gUeyNkGE3g*/
    NavHost(navController = navController,
    startDestination = WELCOME_ROUTE,
    ) {
        composable(WELCOME_ROUTE) {
            WelcomeRoute(
                onNavigateToSignIn = {
                    navController.navigate("signin/$it")
                },
                onNavigateToSignUp = {
                    navController.navigate("signup/$it")
                },
                onSignInAsGuest = {
                    navController.navigate(SURVEY_ROUTE)
                },
            )
        }// End of WELCOME_ROUTE

        composable(SIGN_IN_ROUTE) {
            val startingEmail = it.arguments?.getString("email")
            SignInRoute(
                email = startingEmail,
                onSignInSubmitted = {
                    navController.navigate(SURVEY_ROUTE)
                },
                onSignInAsGuest = {
                    navController.navigate(SURVEY_ROUTE)
                },
                onNavUp = navController::navigateUp,
            )
        } // End of SIGN_IN_ROUTE

        composable(SURVEY_ROUTE) {
            SurveyRoute(
                onSurveyComplete = {
                    navController.navigate(SURVEY_RESULTS_ROUTE)
                },
                onNavUp = navController::navigateUp,
            )
        } // End of SURVEY_ROUTE

        composable(SURVEY_RESULTS_ROUTE) {
            SurveyResultScreen {
                navController.popBackStack(WELCOME_ROUTE, false)
            }
        }// End of SURVEY_RESULTS_ROUTE



    } //End of NavHost

}