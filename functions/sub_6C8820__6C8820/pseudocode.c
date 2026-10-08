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

  v2 = (_DWORD *)a2; /*0x6c8823*/
  v4 = sub_712A90((_DWORD *)a2); /*0x6c882d*/
  v5 = *(_DWORD *)this; /*0x6c8832*/
  v6 = v4; /*0x6c8834*/
  if ( *(_DWORD *)this != v4 ) /*0x6c8838*/
  {
    if ( v5 ) /*0x6c883c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) ) /*0x6c8842*/
        (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x6c8858*/
    }
    *(_DWORD *)this = v6; /*0x6c885c*/
    if ( v6 ) /*0x6c885e*/
      InterlockedIncrement((volatile LONG *)(v6 + 4)); /*0x6c8864*/
  }
  result = sub_712A90(v2); /*0x6c886c*/
  v8 = *((_DWORD *)this + 1); /*0x6c8871*/
  v9 = result; /*0x6c8874*/
  if ( v8 != result ) /*0x6c8878*/
  {
    if ( v8 ) /*0x6c887c*/
    {
      result = InterlockedDecrement((volatile LONG *)(v8 + 4)); /*0x6c8882*/
      if ( !result ) /*0x6c888a*/
        result = (**(int (__thiscall ***)(int, int))v8)(v8, 1); /*0x6c8898*/
    }
    *((_DWORD *)this + 1) = v9; /*0x6c889c*/
    if ( v9 ) /*0x6c889f*/
      result = InterlockedIncrement((volatile LONG *)(v9 + 4)); /*0x6c88a5*/
  }
  if ( v2[0x36] < 0xA01006Fu ) /*0x6c88b5*/
  {
    sub_712A90(v2); /*0x6c88b9*/
    v13 = v2[0x87]; /*0x6c88d2*/
    v10 = *(int (__cdecl **)(int, int *, int, int *, int))(v13 + 4); /*0x6c88d3*/
    v14 = 2; /*0x6c88d6*/
    result = v10(v13, &a2, 2, &v14, 1); /*0x6c88de*/
  }
  if ( v2[1] ) /*0x6c88e3*/
  {
    v11 = v2[0x87]; /*0x6c88e9*/
    v12 = *(int (__cdecl **)(int, char *, int, int *, int))(v11 + 4); /*0x6c88ef*/
    a2 = 1; /*0x6c8900*/
    return v12(v11, this + 0xD, 1, &a2, 1); /*0x6c8908*/
  }
  return result; /*0x6c890d*/
}
