// Oblivion NiTransformData binary save. Writes rotation, translation, then scale counts; for each nonempty channel writes numeric type and dispatches the channel/type-specific key-array serializer with its pointer and UInt16 count.
int __thiscall NiTransformData_SaveBinary(_DWORD *this, int a2)
{
  int v2; // edi
  void (__cdecl *v4)(int, int *, int, int *, int); // eax
  void (__cdecl *v5)(int, _DWORD *, int, int *, int); // edx
  int v6; // ecx
  int v7; // eax
  void (__cdecl *v8)(int, int *, int, int *, int); // edx
  void (__cdecl *v9)(int, _DWORD *, int, int *, int); // edx
  int v10; // ecx
  int v11; // eax
  int (__cdecl *v12)(int, int *, int, int *, int); // edx
  int result; // eax
  void (__cdecl *v14)(int, _DWORD *, int, int *, int); // edx
  int v15; // ecx
  int v16; // [esp-1Ch] [ebp-30h]
  int v17; // [esp-1Ch] [ebp-30h]
  int v18; // [esp-1Ch] [ebp-30h]
  int v19; // [esp-18h] [ebp-2Ch]
  int v20; // [esp-18h] [ebp-2Ch]
  int v21; // [esp-18h] [ebp-2Ch]
  int v22; // [esp-14h] [ebp-28h]
  int v23; // [esp-14h] [ebp-28h]
  int v24; // [esp-14h] [ebp-28h]
  int v25; // [esp-14h] [ebp-28h]
  int v26; // [esp+10h] [ebp-4h] BYREF

  v2 = a2; /*0x6e23a5*/
  nullsub_returnvVoid_1arg(a2); /*0x6e23ac*/
  a2 = *((unsigned __int16 *)this + 4); /*0x6e23c1*/
  v22 = *(_DWORD *)(v2 + 0x220); /*0x6e23d1*/
  v4 = *(void (__cdecl **)(int, int *, int, int *, int))(v22 + 8); /*0x6e23d2*/
  v26 = 4; /*0x6e23d5*/
  v4(v22, &a2, 4, &v26, 1); /*0x6e23d9*/
  if ( *((_WORD *)this + 4) ) /*0x6e23de*/
  {
    v5 = *(void (__cdecl **)(int, _DWORD *, int, int *, int))(*(_DWORD *)(v2 + 0x220) + 8); /*0x6e23eb*/
    v23 = *(_DWORD *)(v2 + 0x220); /*0x6e23fa*/
    v26 = 4; /*0x6e23fb*/
    v5(v23, this + 4, 4, &v26, 1); /*0x6e23ff*/
    v6 = *(this + 4); /*0x6e2408*/
    v19 = *((unsigned __int16 *)this + 4); /*0x6e240a*/
    v16 = *(this + 8); /*0x6e240b*/
    a2 = v19; /*0x6e240c*/
    (*(void (__cdecl **)(int, int, int))(4 * v6 + 0xB3D5F0))(v2, v16, v19); /*0x6e2418*/
  }
  v7 = *(_DWORD *)(v2 + 0x220); /*0x6e2421*/
  a2 = *((unsigned __int16 *)this + 5); /*0x6e242e*/
  v8 = *(void (__cdecl **)(int, int *, int, int *, int))(v7 + 8); /*0x6e2432*/
  v26 = 4; /*0x6e243c*/
  v8(v7, &a2, 4, &v26, 1); /*0x6e2440*/
  if ( *((_WORD *)this + 5) ) /*0x6e2445*/
  {
    v9 = *(void (__cdecl **)(int, _DWORD *, int, int *, int))(*(_DWORD *)(v2 + 0x220) + 8); /*0x6e2452*/
    v24 = *(_DWORD *)(v2 + 0x220); /*0x6e2461*/
    v26 = 4; /*0x6e2462*/
    v9(v24, this + 5, 4, &v26, 1); /*0x6e2466*/
    v10 = *(this + 5); /*0x6e246f*/
    v20 = *((unsigned __int16 *)this + 5); /*0x6e2471*/
    v17 = *(this + 9); /*0x6e2472*/
    a2 = v20; /*0x6e2473*/
    (*(void (__cdecl **)(int, int, int))(4 * v10 + 0xB3D5D8))(v2, v17, v20); /*0x6e247f*/
  }
  v11 = *(_DWORD *)(v2 + 0x220); /*0x6e2488*/
  a2 = *((unsigned __int16 *)this + 6); /*0x6e2495*/
  v12 = *(int (__cdecl **)(int, int *, int, int *, int))(v11 + 8); /*0x6e2499*/
  v26 = 4; /*0x6e24a3*/
  result = v12(v11, &a2, 4, &v26, 1); /*0x6e24a7*/
  if ( *((_WORD *)this + 6) ) /*0x6e24ac*/
  {
    v14 = *(void (__cdecl **)(int, _DWORD *, int, int *, int))(*(_DWORD *)(v2 + 0x220) + 8); /*0x6e24b9*/
    v25 = *(_DWORD *)(v2 + 0x220); /*0x6e24c8*/
    v26 = 4; /*0x6e24c9*/
    v14(v25, this + 6, 4, &v26, 1); /*0x6e24cd*/
    v15 = *(this + 6); /*0x6e24d6*/
    v21 = *((unsigned __int16 *)this + 6); /*0x6e24d8*/
    v18 = *(this + 0xA); /*0x6e24d9*/
    a2 = v21; /*0x6e24da*/
    return (*(int (__cdecl **)(int, int, int))(4 * v15 + 0xB3D5C0))(v2, v18, v21); /*0x6e24e6*/
  }
  return result; /*0x6e24eb*/
}
