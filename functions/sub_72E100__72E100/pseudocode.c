int __thiscall sub_72E100(_DWORD *this, int a2)
{
  int v3; // eax
  int (__cdecl *v4)(int, _DWORD *, int, int *, int); // edx
  int result; // eax
  unsigned int v6; // ebx
  int v7; // ebp
  int v8; // [esp+Ch] [ebp-4h] BYREF

  nullsub_returnvVoid_1arg(a2); /*0x72e10b*/
  v3 = *(_DWORD *)(a2 + 0x220); /*0x72e110*/
  v4 = *(int (__cdecl **)(int, _DWORD *, int, int *, int))(v3 + 8); /*0x72e116*/
  v8 = 4; /*0x72e127*/
  result = v4(v3, this + 2, 4, &v8, 1); /*0x72e12f*/
  v6 = 0; /*0x72e131*/
  if ( *(this + 2) ) /*0x72e136*/
  {
    v7 = 0; /*0x72e13b*/
    do /*0x72e157*/
    {
      result = sub_72DBC0((unsigned __int16 *)(v7 + *(this + 3)), a2); /*0x72e14a*/
      ++v6; /*0x72e14f*/
      v7 += 0x2C; /*0x72e152*/
    }
    while ( v6 < *(this + 2) ); /*0x72e157*/
  }
  return result; /*0x72e15a*/
}
