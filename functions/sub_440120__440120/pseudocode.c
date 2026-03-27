unsigned int __userpurge sub_440120@<eax>(
        _DWORD *this@<ecx>,
        double st5_0@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        TESObjectCELL *a1)
{
  unsigned int result; // eax
  unsigned int i; // esi
  int v8; // edx

  result = uInteriorCellBuffer;
  for ( i = 0; ; ++i )
  {
    if ( i >= result )
      goto LABEL_7;
    if ( a1 == *(TESObjectCELL **)(*(this + 0xE) + 4 * i) )
      break;
  }
  sub_447BA0(st5_0, a3, a4, a1);
  *(_DWORD *)(*(this + 0xE) + 4 * i) = 0;
  while ( 1 )
  {
    result = uInteriorCellBuffer;
LABEL_7:
    v8 = *(this + 0xE);
    if ( i >= result - 1 )
      break;
    *(_DWORD *)(v8 + 4 * i) = *(_DWORD *)(v8 + 4 * i + 4);
    ++i;
  }
  *(_DWORD *)(v8 + 4 * result - 4) = 0;
  *((_BYTE *)this + 0x69) = 1;
  return result;
}
