unsigned int __userpurge sub_4400A0@<eax>(
        int this@<ecx>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double a4@<st0>,
        TESObjectCELL *a1,
        char a6)
{
  unsigned int result; // eax
  unsigned int i; // esi
  int v9; // edx

  result = uExteriorCellBuffer;
  for ( i = 0; ; ++i )
  {
    if ( i >= result )
      goto LABEL_9;
    if ( a1 == *(TESObjectCELL **)(*(_DWORD *)(this + 0x3C) + 4 * i) )
      break;
  }
  sub_482530(*(_DWORD **)(this + 8), (int)a1);
  if ( a6 )
    sub_447BA0(st5_0, st6_0, a4, a1);
  *(_DWORD *)(*(_DWORD *)(this + 0x3C) + 4 * i) = 0;
  while ( 1 )
  {
    result = uExteriorCellBuffer;
LABEL_9:
    v9 = *(_DWORD *)(this + 0x3C);
    if ( i >= result - 1 )
      break;
    *(_DWORD *)(v9 + 4 * i) = *(_DWORD *)(v9 + 4 * i + 4);
    ++i;
  }
  *(_DWORD *)(v9 + 4 * result - 4) = 0;
  *(_BYTE *)(this + 0x69) = 1;
  return result;
}
