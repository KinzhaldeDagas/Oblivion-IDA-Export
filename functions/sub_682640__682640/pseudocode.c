void __thiscall sub_682640(_DWORD *this, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // edi
  _DWORD *v5; // eax
  _DWORD *v6; // ecx

  v3 = a2; /*0x682642*/
  if ( a2 ) /*0x68264a*/
  {
    sub_49F470(&unk_B3C000); /*0x682651*/
    a2 = 0; /*0x68265f*/
    NiTMap_GetAt(this + 8, (int)v3, &a2); /*0x682667*/
    v5 = a2; /*0x68266c*/
    if ( a2 /*0x68269e*/
      || (NiTMap_GetAt(this + 4, (int)v3, &a2), (v5 = a2) != 0)
      || (NiTMap_GetAt(this + 0xC, (int)v3, &a2), (v5 = a2) != 0) )
    {
      v6 = a3; /*0x6826a0*/
      v5[5] = *a3; /*0x6826a6*/
      v5[6] = v6[1]; /*0x6826ac*/
      v5[7] = v6[2]; /*0x6826b2*/
    }
    j_NiLeaveCriticalSection_0((LPCRITICAL_SECTION)&unk_B3C000); /*0x6826ba*/
  }
}
