int __thiscall sub_628A80(int this, int a2, int a3, int a4)
{
  if ( a3 == 0xB )
  {
    *(float *)(this + 0x294) = (float)a4;
    return sub_643480(a2, 0xB, a4);
  }
  else
  {
    if ( a3 == 0x30 )
      *(_DWORD *)(this + 0x298) = a4;
    return sub_643480(a2, a3, a4);
  }
}
