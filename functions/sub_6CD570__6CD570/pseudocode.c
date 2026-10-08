int __thiscall sub_6CD570(char *this, int a2)
{
  int v2; // edi
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

  v2 = a2; /*0x6cd575*/
  v4 = sub_712A90((_DWORD *)a2); /*0x6cd57d*/
  v5 = *(_DWORD *)this; /*0x6cd582*/
  v6 = v4; /*0x6cd584*/
  if ( *(_DWORD *)this != v4 ) /*0x6cd588*/
  {
    if ( v5 ) /*0x6cd58c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) ) /*0x6cd592*/
        (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x6cd5a8*/
    }
    *(_DWORD *)this = v6; /*0x6cd5ac*/
    if ( v6 ) /*0x6cd5ae*/
      InterlockedIncrement((volatile LONG *)(v6 + 4)); /*0x6cd5b4*/
  }
  v16 = *(_DWORD *)(v2 + 0x21C); /*0x6cd5d1*/
  v7 = *(void (__cdecl **)(int, char *, int, int *, int))(v16 + 4); /*0x6cd5d2*/
  a2 = 4; /*0x6cd5d5*/
  v7(v16, this + 4, 4, &a2, 1); /*0x6cd5d9*/
  v15 = *(_DWORD *)(v2 + 0x21C); /*0x6cd5ed*/
  v8 = *(void (__cdecl **)(int, char *, int, int *, int))(v15 + 4); /*0x6cd5ee*/
  a2 = 4; /*0x6cd5f1*/
  v8(v15, this + 8, 4, &a2, 1); /*0x6cd5f5*/
  v9 = *(_DWORD *)(v2 + 0x21C); /*0x6cd5f7*/
  if ( *(_DWORD *)(v2 + 0xD8) >= 0xA01006Eu ) /*0x6cd611*/
  {
    v18 = *(_DWORD *)(v2 + 0x21C); /*0x6cd642*/
    v11 = *(void (__cdecl **)(int, char *, int, int *, int))(v9 + 4); /*0x6cd643*/
    a2 = 1; /*0x6cd646*/
    v11(v18, this + 0xC, 1, &a2, 1); /*0x6cd64e*/
  }
  else
  {
    v17 = *(_DWORD *)(v2 + 0x21C); /*0x6cd619*/
    v10 = *(void (__cdecl **)(int, int *, int, int *, int))(v9 + 4); /*0x6cd61a*/
    a2 = 4; /*0x6cd61d*/
    v10(v17, &v19, 4, &a2, 1); /*0x6cd621*/
    if ( v19 == 0x80000000 ) /*0x6cd62a*/
      *(this + 0xC) = 0x80; /*0x6cd631*/
    else
      *(this + 0xC) = v19; /*0x6cd637*/
  }
  v12 = *(_DWORD *)(v2 + 0x21C); /*0x6cd653*/
  v13 = *(int (__cdecl **)(int, char *, int, int *, int))(v12 + 4); /*0x6cd659*/
  a2 = 4; /*0x6cd669*/
  return v13(v12, this + 0x10, 4, &a2, 1); /*0x6cd672*/
}
