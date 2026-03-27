int sub_A0AA00()
{
  int result; // eax

  result = dword_B40818 + 1;
  if ( dword_B40818++ == 0 )
    return sub_747C40((int)sub_748D20, (int)sub_749060);
  return result;
}
