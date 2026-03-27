char __usercall ShowMessageBox_Callback@<al>(char a1@<bpl>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  char result; // al

  result = sub_578D70(a1, a2, a3, a4);
  ShowMessageBox_button = result;
  return result;
}
