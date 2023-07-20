# TODO's:
  **Start with this tutorial:**
  https://developer.android.com/jetpack/compose/tutorial <br>
  **1** <br>
    ***Link to use:***
    https://developer.android.com/courses/jetpack-compose/course
    ***DO*** From "PATHWAY1" "Compose essentials", do the 4 activity "Write your first Compose app" in android studio and make sure it works. Take time to read and understand what is described there, but `the important part in my opinion is from the "private fun MyApp()"` the line ***"var shouldShowOnboarding by rememberSaveable { mutableStateOf(true) }"***. Make sure you know what it does and how it does it. I modified(mine) in that tutorial in the following way:
     1. Once the text is expanded, I included a button that takes me back to the onboarding screen." The functionality of the button works in a similar way as the functionality from the ***"var shouldShowOnboarding by rememberSaveable { mutableStateOf(true) }"*** part. <br>
  **2** see, **3** after reading **2**<br>
  I then create this folder in vscode to try and recreate the JetSurvey App from scratch. `Vscode doesn't actually do anything` I use it since its low on memory and doesn't give me .kt file errors. I us the .cpp file extension instead of .kt in vscode to get some syntax highlighting "MainActivity.cpp".
  I didn't learn the code in the MainActivity since it's usually the same so I started with the Navigation.kt with the by writing all of the `JetsurveyNavHost` function and the immediately started working on the file `WelcomeRoute.kt` and then the implemented and understood what the function: `WelcomeScreen()`, which is called from `WelcomeRoute.kt`, which is implemented in `WelcomeScreen.kt` does. The goal/method here is to be able to look at a screen like the WelcomeScreen and 1: create a route for it, 2: Create the actual screen and functionality. I do this for the rest of the app. <br>
  **3** https://developer.android.com/studio<br>
  To download the complete JetSurvey app, using Android Studio(I from "link in 3"), create a new project, use the Empty Activity template. In this new empty activity go to: File(to left corner), New, Import Sample an then search for JetSurvey. The sample is actually called "JetSurvey Sample", but just type "JetSurvey". Other samples can be found here:
  https://developer.android.com/samples?language=kotlin
  and select "Kotlin".  