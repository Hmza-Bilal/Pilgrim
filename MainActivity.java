static {
    System.loadLibrary("native-lib");
}

public native double calculate(double num1, double num2, int op);

// Inside onClick() method of the operator buttons:
double num1 = Double.parseDouble(firstNumEditText.getText().toString());
double num2 = Double.parseDouble(secondNumEditText.getText().toString());
double result = calculate(num1, num2, op);
resultTextView.setText(String.valueOf(result));
