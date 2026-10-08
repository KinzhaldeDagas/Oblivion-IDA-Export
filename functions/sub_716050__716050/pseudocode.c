// Saves the first manager-controlled controller found in the next chain, then flags +0x08, frequency +0x0C, phase +0x10, low/high key times +0x14/+0x18, and target +0x30. Runtime caches are not serialized.
int __thiscall NiTimeController_SaveBinary(_DWORD *this, signed int a2)
{
  _DWORD *v2; // esi
  _DWORD *i; // ebx
  void (__cdecl *v5)(int, _DWORD *, int, signed int *, int); // eax
  void (__cdecl *v6)(int, _DWORD *, int, signed int *, int); // eax
  void (__cdecl *v7)(int, _DWORD *, int, signed int *, int); // eax
  void (__cdecl *v8)(int, _DWORD *, int, signed int *, int); // eax
  void (__cdecl *v9)(int, _DWORD *, int, signed int *, int); // eax
  int v11; // [esp-50h] [ebp-5Ch]
  int v12; // [esp-3Ch] [ebp-48h]
  int v13; // [esp-28h] [ebp-34h]
  int v14; // [esp-14h] [ebp-20h]
  int v15; // [esp-14h] [ebp-20h]

  v2 = (_DWORD *)a2; /*0x716052*/
  nullsub_returnvVoid_1arg(a2); /*0x71605a*/
  for ( i = (_DWORD *)*(this + 0xD); i; i = (_DWORD *)i[0xD] ) /*0x716064*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*i + 0x6C))(i) ) /*0x71606d*/
      break; /*0x716071*/
  }
  (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v2 + 0x2C))(v2, i); /*0x716082*/
  v14 = v2[0x88]; /*0x716097*/
  v5 = *(void (__cdecl **)(int, _DWORD *, int, signed int *, int))(v14 + 8); /*0x716098*/
  a2 = 2; /*0x71609b*/
  v5(v14, this + 2, 2, &a2, 1); /*0x7160a3*/
  v13 = v2[0x88]; /*0x7160bc*/
  v6 = *(void (__cdecl **)(int, _DWORD *, int, signed int *, int))(v13 + 8); /*0x7160bd*/
  a2 = 4; /*0x7160c0*/
  v6(v13, this + 3, 4, &a2, 1); /*0x7160c4*/
  v12 = v2[0x88]; /*0x7160d8*/
  v7 = *(void (__cdecl **)(int, _DWORD *, int, signed int *, int))(v12 + 8); /*0x7160d9*/
  a2 = 4; /*0x7160dc*/
  v7(v12, this + 4, 4, &a2, 1); /*0x7160e0*/
  v11 = v2[0x88]; /*0x7160f4*/
  v8 = *(void (__cdecl **)(int, _DWORD *, int, signed int *, int))(v11 + 8); /*0x7160f5*/
  a2 = 4; /*0x7160f8*/
  v8(v11, this + 5, 4, &a2, 1); /*0x7160fc*/
  v15 = v2[0x88]; /*0x716113*/
  v9 = *(void (__cdecl **)(int, _DWORD *, int, signed int *, int))(v15 + 8); /*0x716114*/
  a2 = 4; /*0x716117*/
  v9(v15, this + 6, 4, &a2, 1); /*0x71611b*/
  return (*(int (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(this + 0xC)); /*0x71612d*/
}
