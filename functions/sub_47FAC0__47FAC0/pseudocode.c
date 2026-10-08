// ODismemberment: authoritative NiAVObject collision getter. Reads NiAVObject+0xA8 and accepts objects whose class chain includes bhkCollisionObject.
int __cdecl NiAVObject_GetBhkCollisionObject(int a1)
{
  int v1; // esi
  NiRTTI *v3; // eax

  v1 = *(_DWORD *)(a1 + 0xA8); /*0x47fac5*/
  if ( !v1 ) /*0x47facd*/
    return 0; /*0x47facf*/
  v3 = (NiRTTI *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)v1 + 4))(*(_DWORD *)(a1 + 0xA8)); /*0x47fada*/
  if ( !v3 ) /*0x47fade*/
    return 0; /*0x47faee*/
  while ( v3 != &MEMORY[0xBA7D24] ) /*0x47fae5*/
  {
    v3 = v3->parent; /*0x47fae7*/
    if ( !v3 ) /*0x47faec*/
      return 0; /*0x47faec*/
  }
  return v1; /*0x47fad1*/
}
