# TODO's:
  **Start with this tutorial:**
  https://developer.android.com/jetpack/compose/tutorial <br>
  **1.**
    ***Link to use:***
    https://developer.android.com/courses/jetpack-compose/course
    ***DO*** From "PATHWAY1" "Compose essentials", do the 4 activity "Write your first Compose app" in android studio and make sure it works. Take time to read and understand what is described there, but `the important part in my opinion is from the "private fun MyApp()"` the line ***"var shouldShowOnboarding by rememberSaveable { mutableStateOf(true) }"***. Make sure you know what it does and how it does it. I modified(mine) in that tutorial in the following way:
     1. Once the text is expanded, I included a button that takes me back to the onboarding screen." The functionality of the button works in a similar way as the functionality from the ***"var shouldShowOnboarding by rememberSaveable { mutableStateOf(true) }"*** part. <br>
  **2.** see **3** after reading **2**
  I then create this folder in vscode to try and recreate the JetSurvey App from scratch. `Vscode doesn't actually do anything` I use it since its low on memory and doesn't give me .kt file errors. I us the .cpp file extension instead of .kt in vscode to get some syntax highlighting "MainActivity.cpp".
  I didn't learn the code in the MainActivity since it's usually the same so I started with the Navigation.kt with the by writing all of the `JetsurveyNavHost` function and the immediately started working on the file `WelcomeRoute.kt` and then the implemented and understood what the function: `WelcomeScreen()`, which is called from `WelcomeRoute.kt`, which is implemented in `WelcomeScreen.kt` does. The goal/method here is to be able to look at a screen like the WelcomeScreen and 1: create a route for it, 2: Create the actual screen and functionality. I do this for the rest of the app. <br>
  **3.** https://developer.android.com/studio
  To download the complete JetSurvey app, using Android Studio(I from "link in 3"), create a new project, use the Empty Activity template. In this new empty activity go to: File(to left corner), New, Import Sample an then search for JetSurvey. The sample is actually called "JetSurvey Sample", but just type "JetSurvey". Other samples can be found here:
  https://developer.android.com/samples?language=kotlin
  and select "Kotlin".  




In this video everything I type is completely from memory. The only thing I read are the instructions of a given step. When the video starts the right screen shows section 5 step 3. Again, Every thing I type is straight from memory because I have already done step 3 in section 5. I have also done the tutorial from the 2nd link and so I use the stuff I remember from that tutorial to help me when completing other steps. After trying to complete a step, I check with the "answer" which are on the right side of the instruction. If I get even one thing wrong I mark it as an [x] i.e: /***toolbar ScrollView attribute->done right[x]***/. I will intentionally make a mistake, I made earlier, and show where that mistake is. When doing a step for the first time, I try to see if I can complete the step without using the answer(right side of the instru ctions)by relying on the other tutorials I've done. It is important to note that I do the sections and steps in order. That is, if a step I'm doing uses a variable but none of the steps I've done before showed how to create that variable, I will not use that variable, instead I will use something like /*TODO*/ or ?. I'll also show Section 4 steps 2-4. Note that the code that i have is missing a ZStack container while the sample/solution on the right side has a ZStack container. This is because the ZStack is mentioned in step 5. This is the last thing I will show in the video.
