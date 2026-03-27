int __thiscall sub_6C8820(char *this, int a2)
{
  _DWORD *v2; // ebp
  int v4; // eax
  int v5; // esi
  int v6; // edi
  int result; // eax
  int v8; // esi
  int v9; // edi
  int (__cdecl *v10)(int, int *, int, int *, int); // eax
  int v11; // ebp
  int (__cdecl *v12)(int, char *, int, int *, int); // edx
  int v13; // [esp-14h] [ebp-28h]
  int v14; // [esp+10h] [ebp-4h] BYREF

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
  result = sub_712A90(v2);
  v8 = *((_DWORD *)this + 1);
  v9 = result;
  if ( v8 != result )
  {
    if ( v8 )
    {
      result = InterlockedDecrement((volatile LONG *)(v8 + 4));
      if ( !result )
        result = (**(int (__thiscall ***)(int, int))v8)(v8, 1);
    }
    *((_DWORD *)this + 1) = v9;
    if ( v9 )
      result = InterlockedIncrement((volatile LONG *)(v9 + 4));
  }
  if ( v2[0x36] < 0xA01006Fu )
  {
    sub_712A90(v2);
    v13 = v2[0x87];
    v10 = *(int (__cdecl **)(int, int *, int, int *, int))(v13 + 4);
    v14 = 2;
    result = v10(v13, &a2, 2, &v14, 1);
  }
  if ( v2[1] )
  {
    v11 = v2[0x87];
    v12 = *(int (__cdecl **)(int, char *, int, int *, int))(v11 + 4);
    a2 = 1;
    return v12(v11, this + 0xD, 1, &a2, 1);
  }
  return result;
}
