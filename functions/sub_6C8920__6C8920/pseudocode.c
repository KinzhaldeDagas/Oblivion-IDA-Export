int __thiscall sub_6C8920(_DWORD *this, unsigned int a2)
{
  unsigned int v2; // edi
  unsigned __int16 v4; // ax
  void (__cdecl *v5)(int, unsigned int *, int, int *, int); // eax
  unsigned __int16 v6; // ax
  void (__cdecl *v7)(int, unsigned int *, int, int *, int); // edx
  unsigned __int16 v8; // ax
  void (__cdecl *v9)(int, unsigned int *, int, int *, int); // eax
  unsigned __int16 v10; // ax
  void (__cdecl *v11)(int, unsigned int *, int, int *, int); // edx
  unsigned __int16 v12; // ax
  int v13; // edi
  int (__cdecl *v14)(int, unsigned int *, int, int *, int); // eax
  int v16; // [esp-14h] [ebp-28h]
  int v17; // [esp-14h] [ebp-28h]
  int v18; // [esp-14h] [ebp-28h]
  int v19; // [esp-14h] [ebp-28h]
  int v20; // [esp+10h] [ebp-4h] BYREF

  v2 = a2;
  (*(void (__thiscall **)(unsigned int, _DWORD))(*(_DWORD *)a2 + 0x2C))(a2, *this);
  v4 = *((_WORD *)this + 2);
  if ( v4 == 0xFFFF )
    a2 = 0xFFFFFFFF;
  else
    a2 = v4;
  v16 = *(_DWORD *)(v2 + 0x220);
  v5 = *(void (__cdecl **)(int, unsigned int *, int, int *, int))(v16 + 8);
  v20 = 4;
  v5(v16, &a2, 4, &v20, 1);
  v6 = *((_WORD *)this + 3);
  if ( v6 == 0xFFFF )
    a2 = 0xFFFFFFFF;
  else
    a2 = v6;
  v7 = *(void (__cdecl **)(int, unsigned int *, int, int *, int))(*(_DWORD *)(v2 + 0x220) + 8);
  v17 = *(_DWORD *)(v2 + 0x220);
  v20 = 4;
  v7(v17, &a2, 4, &v20, 1);
  v8 = *((_WORD *)this + 4);
  if ( v8 == 0xFFFF )
    a2 = 0xFFFFFFFF;
  else
    a2 = v8;
  v18 = *(_DWORD *)(v2 + 0x220);
  v9 = *(void (__cdecl **)(int, unsigned int *, int, int *, int))(v18 + 8);
  v20 = 4;
  v9(v18, &a2, 4, &v20, 1);
  v10 = *((_WORD *)this + 5);
  if ( v10 == 0xFFFF )
    a2 = 0xFFFFFFFF;
  else
    a2 = v10;
  v11 = *(void (__cdecl **)(int, unsigned int *, int, int *, int))(*(_DWORD *)(v2 + 0x220) + 8);
  v19 = *(_DWORD *)(v2 + 0x220);
  v20 = 4;
  v11(v19, &a2, 4, &v20, 1);
  v12 = *((_WORD *)this + 6);
  if ( v12 == 0xFFFF )
    a2 = 0xFFFFFFFF;
  else
    a2 = v12;
  v13 = *(_DWORD *)(v2 + 0x220);
  v14 = *(int (__cdecl **)(int, unsigned int *, int, int *, int))(v13 + 8);
  v20 = 4;
  return v14(v13, &a2, 4, &v20, 1);
}
