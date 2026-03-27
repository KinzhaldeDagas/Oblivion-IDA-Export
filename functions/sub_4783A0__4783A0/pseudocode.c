int sub_4783A0()
{
  int *v0; // eax
  int v2; // [esp+0h] [ebp-4h] BYREF

  v2 = 0;
  if ( dword_B39B80 )
  {
    v0 = (int *)(dword_B39B80 + 0xDB8);
  }
  else
  {
    v2 = 0;
    v0 = &v2;
  }
  return *v0;
}
