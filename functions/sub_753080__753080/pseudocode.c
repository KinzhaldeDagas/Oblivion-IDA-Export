bool __thiscall sub_753080(float *this, int a2)
{
  if ( !sub_74F160(this, (float *)a2) )
    return 0;
  if ( *((_DWORD *)this + 0x14) )
    return *(_DWORD *)(a2 + 0x50) != 0;
  return !*(_DWORD *)(a2 + 0x50);
}
