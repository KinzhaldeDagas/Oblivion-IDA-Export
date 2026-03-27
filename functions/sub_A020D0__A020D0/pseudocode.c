int sub_A020D0()
{
  int result; // eax

  result = dword_B3CA30 + 1;
  if ( dword_B3CA30++ == 0 )
    return sub_747C40((int)sub_6C2DB0, (int)sub_6C31F0);
  return result;
}
