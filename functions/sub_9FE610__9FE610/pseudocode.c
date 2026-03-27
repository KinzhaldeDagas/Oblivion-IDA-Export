int sub_9FE610()
{
  _DWORD *v0; // eax

  v0 = (_DWORD *)FormHeapAlloc(8u);
  if ( v0 )
  {
    *v0 = 0;
    v0[1] = 0;
    dword_B3BDB0 = (int)v0;
  }
  else
  {
    dword_B3BDB0 = 0;
  }
  return atexit(sub_A25DB0);
}
