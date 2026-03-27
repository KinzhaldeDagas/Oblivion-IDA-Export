int __thiscall sub_6CD570(char *this, int a2)
{
  _DWORD *v2; // edi
  int v4; // eax
  int v5; // ebx
  int v6; // ebp
  void (__cdecl *v7)(int, char *, int, int *, int); // eax
  void (__cdecl *v8)(int, char *, int, int *, int); // eax
  int v9; // eax
  void (__cdecl *v10)(int, int *, int, int *, int); // eax
  void (__cdecl *v11)(int, char *, int, int *, int); // eax
  int v12; // edi
  int (__cdecl *v13)(int, char *, int, int *, int); // edx
  int v15; // [esp-28h] [ebp-3Ch]
  int v16; // [esp-14h] [ebp-28h]
  int v17; // [esp-14h] [ebp-28h]
  int v18; // [esp-14h] [ebp-28h]
  int v19; // [esp+10h] [ebp-4h] BYREF

  v2 = (_DWORD *)a2;
  v4 = sub_712A90((_DWORD *)a2);
  v5 = *(_DWORD *)this;
  v6 = v4;
  if ( *(_DWORD *)this != v4 )
  {
    if ( v5 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
        (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    }
    *(_DWORD *)this = v6;
    if ( v6 )
      InterlockedIncrement((volatile LONG *)(v6 + 4));
  }
  v16 = v2[0x87];
  v7 = *(void (__cdecl **)(int, char *, int, int *, int))(v16 + 4);
  a2 = 4;
  v7(v16, this + 4, 4, &a2, 1);
  v15 = v2[0x87];
  v8 = *(void (__cdecl **)(int, char *, int, int *, int))(v15 + 4);
  a2 = 4;
  v8(v15, this + 8, 4, &a2, 1);
  v9 = v2[0x87];
  if ( v2[0x36] >= 0xA01006Eu )
  {
    v18 = v2[0x87];
    v11 = *(void (__cdecl **)(int, char *, int, int *, int))(v9 + 4);
    a2 = 1;
    v11(v18, this + 0xC, 1, &a2, 1);
  }
  else
  {
    v17 = v2[0x87];
    v10 = *(void (__cdecl **)(int, int *, int, int *, int))(v9 + 4);
    a2 = 4;
    v10(v17, &v19, 4, &a2, 1);
    if ( v19 == 0x80000000 )
      *(this + 0xC) = 0x80;
    else
      *(this + 0xC) = v19;
  }
  v12 = v2[0x87];
  v13 = *(int (__cdecl **)(int, char *, int, int *, int))(v12 + 4);
  a2 = 4;
  return v13(v12, this + 0x10, 4, &a2, 1);
}
