int __thiscall sub_72C0D0(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  int v4; // eax
  int (__cdecl *v5)(int, _DWORD **, int, int *, int); // edx
  int result; // eax
  unsigned int v7; // ebx
  int v8; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2; /*0x72c0d3*/
  nullsub_returnvVoid_1arg((int)a2); /*0x72c0db*/
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(this + 2)); /*0x72c0eb*/
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(this + 3)); /*0x72c0f8*/
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(this + 4)); /*0x72c105*/
  v4 = v2[0x88]; /*0x72c10d*/
  a2 = *(_DWORD **)(*(this + 2) + 0x40); /*0x72c11a*/
  v5 = *(int (__cdecl **)(int, _DWORD **, int, int *, int))(v4 + 8); /*0x72c11e*/
  v8 = 4; /*0x72c129*/
  result = v5(v4, &a2, 4, &v8, 1); /*0x72c131*/
  v7 = 0; /*0x72c133*/
  if ( a2 ) /*0x72c13c*/
  {
    do /*0x72c157*/
      result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(_DWORD *)(*(this + 5) + 4 * v7++)); /*0x72c14e*/
    while ( v7 < (unsigned int)a2 ); /*0x72c157*/
  }
  return result; /*0x72c159*/
}
