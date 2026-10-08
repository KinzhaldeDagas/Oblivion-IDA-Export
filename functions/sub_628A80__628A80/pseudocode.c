int __thiscall sub_628A80(int this, int a2, int a3, int a4)
{
  if ( a3 == 0xB ) /*0x628a8b*/
  {
    *(float *)(this + 0x294) = (float)a4; /*0x628a99*/
    return sub_643480(a2, 0xB, a4); /*0x628a9f*/
  }
  else
  {
    if ( a3 == 0x30 ) /*0x628aa7*/
      *(_DWORD *)(this + 0x298) = a4; /*0x628aa9*/
    return sub_643480(a2, a3, a4); /*0x628ab7*/
  }
}
