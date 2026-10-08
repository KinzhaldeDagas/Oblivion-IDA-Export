int __thiscall sub_723590(char *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  Atmosphere *v4; // ecx
  int (__cdecl *v5)(int, _DWORD **, int, int *, int); // eax
  int result; // eax
  int v7; // [esp-14h] [ebp-20h]
  int v8; // [esp+8h] [ebp-4h] BYREF

  v2 = a2; /*0x723592*/
  sub_708330(this, (signed int)a2); /*0x72359a*/
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *((_DWORD *)this + 0x2D)); /*0x7235ad*/
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *((_DWORD *)this + 0x2E)); /*0x7235bd*/
  v4 = *((Atmosphere **)this + 0x2F); /*0x7235bf*/
  LOBYTE(a2) = 0; /*0x7235c7*/
  if ( v4 ) /*0x7235cc*/
    LOBYTE(a2) = Shared_GetPointerAtOffset08(v4) != 0; /*0x7235d7*/
  v7 = v2[0x88]; /*0x7235f0*/
  v5 = *(int (__cdecl **)(int, _DWORD **, int, int *, int))(v7 + 8); /*0x7235f1*/
  v8 = 1; /*0x7235f4*/
  result = v5(v7, &a2, 1, &v8, 1); /*0x7235fc*/
  if ( (_BYTE)a2 ) /*0x723606*/
    return sub_738720(*((const char ***)this + 0x2F), (int)v2); /*0x72360f*/
  return result; /*0x723614*/
}
