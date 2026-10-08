void __thiscall sub_8C1270(_DWORD *this, char a2)
{
  int v3; // eax
  _DWORD *v4; // esi

  if ( a2 ) /*0x8c1278*/
  {
    v3 = *(this + 3); /*0x8c127a*/
    if ( v3 ) /*0x8c127f*/
    {
      v4 = (_DWORD *)(v3 - 4); /*0x8c1282*/
      if ( v3 != 4 ) /*0x8c1287*/
      {
        *v4 = &hkConstraintCinfo::`vftable'; /*0x8c128d*/
        sub_8A0200((_DWORD *)(v3 - 4), 0); /*0x8c1293*/
        FormHeapFree((unsigned int)v4); /*0x8c1299*/
      }
    }
    *(this + 3) = 0; /*0x8c12a2*/
  }
}
