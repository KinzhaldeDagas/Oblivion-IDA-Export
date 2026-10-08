int __thiscall bhkSphereShapeProbeCollector_SetCollisionIdentityHigh16(_DWORD *this, int a2)
{
  _DWORD *v3; // ecx
  int v4; // eax
  int v5; // eax
  int v6; // edx
  int v7; // edx
  int v8; // eax
  int v9; // eax

  v3 = (_DWORD *)*(this + 0x68); /*0x535463*/
  if ( v3 && (v4 = v3[2]) != 0 && (v5 = v4 + 0x14) != 0 ) /*0x535477*/
    v6 = *(_DWORD *)(v5 + 0x1C); /*0x535479*/
  else
    LOWORD(v6) = 0; /*0x53547e*/
  *(this + 0x6A) = a2; /*0x535484*/
  v7 = (a2 << 0x10) | (unsigned __int16)v6; /*0x535490*/
  if ( v3 ) /*0x535495*/
  {
    v8 = v3[2]; /*0x535497*/
    if ( v8 ) /*0x53549c*/
    {
      v9 = v8 + 0x14; /*0x53549e*/
      if ( v9 ) /*0x5354a1*/
        *(_DWORD *)(v9 + 0x1C) = v7;            // TES4 authoritative: rewrites phantom collision filter high 16 bits while preserving low 16 layer/filter bits, then refreshes the phantom. /*0x5354a3*/
    }
  }
  return (*(int (__thiscall **)(_DWORD *))(*v3 + 0x80))(v3); /*0x5354b0*/
}
