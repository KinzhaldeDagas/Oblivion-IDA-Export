void __stdcall sub_8ED450(int a1, int a2, _OWORD *a3)
{
  if ( a2 - 1 >= 0 )
  {
    *a3 = 0;
    qmemcpy(a3 + 1, a3, 0x10 * (a2 - 1));
  }
}
