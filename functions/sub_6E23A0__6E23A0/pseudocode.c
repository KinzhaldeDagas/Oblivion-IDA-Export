int __thiscall sub_6E23A0(_DWORD *this, int a2)
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

  v2 = a2;
  nullsub_returnvVoid_1arg(a2);
  a2 = *((unsigned __int16 *)this + 4);
  v22 = *(_DWORD *)(v2 + 0x220);
  v4 = *(void (__cdecl **)(int, int *, int, int *, int))(v22 + 8);
  v26 = 4;
  v4(v22, &a2, 4, &v26, 1);
  if ( *((_WORD *)this + 4) )
  {
    v5 = *(void (__cdecl **)(int, _DWORD *, int, int *, int))(*(_DWORD *)(v2 + 0x220) + 8);
    v23 = *(_DWORD *)(v2 + 0x220);
    v26 = 4;
    v5(v23, this + 4, 4, &v26, 1);
    v6 = *(this + 4);
    v19 = *((unsigned __int16 *)this + 4);
    v16 = *(this + 8);
    a2 = v19;
    (*(void (__cdecl **)(int, int, int))(4 * v6 + 0xB3D5F0))(v2, v16, v19);
  }
  v7 = *(_DWORD *)(v2 + 0x220);
  a2 = *((unsigned __int16 *)this + 5);
  v8 = *(void (__cdecl **)(int, int *, int, int *, int))(v7 + 8);
  v26 = 4;
  v8(v7, &a2, 4, &v26, 1);
  if ( *((_WORD *)this + 5) )
  {
    v9 = *(void (__cdecl **)(int, _DWORD *, int, int *, int))(*(_DWORD *)(v2 + 0x220) + 8);
    v24 = *(_DWORD *)(v2 + 0x220);
    v26 = 4;
    v9(v24, this + 5, 4, &v26, 1);
    v10 = *(this + 5);
    v20 = *((unsigned __int16 *)this + 5);
    v17 = *(this + 9);
    a2 = v20;
    (*(void (__cdecl **)(int, int, int))(4 * v10 + 0xB3D5D8))(v2, v17, v20);
  }
  v11 = *(_DWORD *)(v2 + 0x220);
  a2 = *((unsigned __int16 *)this + 6);
  v12 = *(int (__cdecl **)(int, int *, int, int *, int))(v11 + 8);
  v26 = 4;
  result = v12(v11, &a2, 4, &v26, 1);
  if ( *((_WORD *)this + 6) )
  {
    v14 = *(void (__cdecl **)(int, _DWORD *, int, int *, int))(*(_DWORD *)(v2 + 0x220) + 8);
    v25 = *(_DWORD *)(v2 + 0x220);
    v26 = 4;
    v14(v25, this + 6, 4, &v26, 1);
    v15 = *(this + 6);
    v21 = *((unsigned __int16 *)this + 6);
    v18 = *(this + 0xA);
    a2 = v21;
    return (*(int (__cdecl **)(int, int, int))(4 * v15 + 0xB3D5C0))(v2, v18, v21);
  }
  return result;
}
