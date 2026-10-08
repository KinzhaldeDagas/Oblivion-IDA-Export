int __thiscall sub_6D2030(_DWORD *this, unsigned int a2)
{
  _DWORD *v2; // edi
  void (__cdecl *v4)(int, _DWORD *, int, int *, int); // eax
  int v5; // eax
  int (__cdecl *v6)(int, unsigned int *, int, int *, int); // edx
  int result; // eax
  unsigned int i; // ebx
  int v9; // [esp-14h] [ebp-24h]
  int v10; // [esp+Ch] [ebp-4h] BYREF

  v2 = (_DWORD *)a2; /*0x6d2034*/
  j_NiSingleInterpController_SaveBinary(this, a2); /*0x6d203b*/
  v9 = v2[0x88]; /*0x6d2057*/
  v4 = *(void (__cdecl **)(int, _DWORD *, int, int *, int))(v9 + 8); /*0x6d2058*/
  v10 = 4; /*0x6d205b*/
  v4(v9, this + 0x15, 4, &v10, 1); /*0x6d205f*/
  v5 = v2[0x88]; /*0x6d2065*/
  a2 = *((unsigned __int16 *)this + 0x25); /*0x6d2072*/
  v6 = *(int (__cdecl **)(int, unsigned int *, int, int *, int))(v5 + 8); /*0x6d2076*/
  v10 = 4; /*0x6d2080*/
  result = v6(v5, &a2, 4, &v10, 1); /*0x6d2084*/
  for ( i = 0; i < a2; ++i ) /*0x6d208f*/
    result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(_DWORD *)(*(this + 0x11) + 4 * i)); /*0x6d209f*/
  return result; /*0x6d20aa*/
}
