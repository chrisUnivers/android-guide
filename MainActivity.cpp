class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        setContent {
            JetsurveyTheme {
                JetsurveyNavHost()
            }
        }
    }
}