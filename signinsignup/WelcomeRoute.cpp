
@Composable
fun WelcomeRoute(
    onNavigateToSignIn: (email: String) -> Unit,
    onNavigateToSignUp: (email: String) -> Unit,
    onSignInAsGuest: () -> Unit,
) {
    "val" welcomeViewModel: WelcomeViewModel = viewModel(factory = WelcomeViewModelFactory())

    WelcomeScreen(
        onSignInSignUp = {
            email -> welcomeViewModel.handleContinue(
                email = email,
                onNavigateToSignIn = onNavigateToSignIn,
                onNavigateToSignup = onNavigateToSignUp,
            )
        },
        onSignInAsGuest = {
            welcomeViewModel.signInAsGuest(onSignInAsGuest)
        }
    )


}// End of WelcomeRoute