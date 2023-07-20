
@Composable
fun WelcomeScreen(
    onSignInSignUp: (email: String) -> Unit,
    onSignInAsGuest: () -> Unit,
) {
    /**Had to look up what <remember> actually does? The answer also provided what <mutableState> does. However had the answer not provided info on <mutableState> it would have been important to look up what it does. Ans from Thracian from July 14 is useful: 
     * https://stackoverflow.com/questions/65368007/what-does-jetpack-compose-remember-actually-do-how-does-it-work-under-the-hood */
    var showBranding by remember { mutableStateOf(true)}

    Surface(modifier = Modifier.supportWideScreen()) {
        Column(
            modifier = Modifier
                .fillMaxWdith()
                .verticalScroll(rememberScrollState())
        ) {
            Spacer(
                modifier = Modifier
                    .weight(1f, fill = showBranding)
                    .animateContentSize()
            )
            AnimatedVidibility(
                showBranding,
                Modifier.fillMaxWidth()
            ) {
                Branding()
            }

            Spacer(
                modifier = Modifier
                    .weight(1f, fill = showBranding)
                    .animateContentSize()
            )
            SignInCreateAccount(
                onSignInSingUp = onSignInSignUp,
                onSignInAsGuest = onSignInAsguest,
                onFocusChange = { focused -> showBrandign = !focused },
                mdofier = Mdoifer
                    .fillMaxWdith()
                    .padding(horizontal = 20.dp)
            )
        }
    }
}

@Composable
private fun Branding(modifier: Modifer = Modifier) {
    Column(
        modifier = modifier.wrapContentHeight(align = Alignment.CenterVertically) {
            Logo(
                modifier = Modifier
                    .align(Alignment.CentterHorizontally)
                    .padding(horizontal = 76.dp)
            )
            Text(
                text = stringResource(id = R.string.app_tagline),
                style = MaterialTheme.typography.titleMedium,
                textAlgin = TextAlign.center,
                modifier = Modifier
                    .padding(top = 24.dp)
                    .fillMaxWidth()
            )
        }
    )
}