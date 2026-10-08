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

  result = uExteriorCellBuffer; /*0x4400a0*/
  for ( i = 0; ; ++i ) /*0x4400ae*/
  {
    if ( i >= result ) /*0x4400b2*/
      goto LABEL_9; /*0x4400b2*/
    if ( a1 == *(TESObjectCELL **)(*(_DWORD *)(this + 0x3C) + 4 * i) ) /*0x4400ba*/
      break; /*0x4400ba*/
  }
  sub_482530(*(_DWORD **)(this + 8), (int)a1); /*0x4400c5*/
  if ( a6 ) /*0x4400cf*/
    TESObjectCELL_Deactivate(st5_0, st6_0, a4, a1); /*0x4400d8*/
  *(_DWORD *)(*(_DWORD *)(this + 0x3C) + 4 * i) = 0; /*0x4400e0*/
  while ( 1 ) /*0x4400e7*/
  {
    result = uExteriorCellBuffer; /*0x4400e7*/
LABEL_9:
    v9 = *(_DWORD *)(this + 0x3C); /*0x4400f0*/
    if ( i >= result - 1 ) /*0x4400f8*/
      break; /*0x4400f8*/
    *(_DWORD *)(v9 + 4 * i) = *(_DWORD *)(v9 + 4 * i + 4); /*0x440101*/
    ++i; /*0x440103*/
  }
  *(_DWORD *)(v9 + 4 * result - 4) = 0; /*0x440108*/
  *(_BYTE *)(this + 0x69) = 1; /*0x440110*/
  return result; /*0x440114*/
}
