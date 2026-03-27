signed int __stdcall sub_97A470(_DWORD *a1)
{
  int v1; // ebp
  int v2; // ebx
  int v3; // eax
  int (__cdecl *v4)(_DWORD *); // eax
  int v5; // ecx
  int v6; // eax
  int (__cdecl *v7)(_DWORD *); // edi
  int v8; // eax
  int v9; // ebx
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  int v13; // ebx
  signed int result; // eax

  v1 = 0;
  v2 = 0;
  if ( *a1 )
  {
    v3 = *(_DWORD *)(*a1 + 0xA8);
    if ( v3 || (v3 = *(_DWORD *)(a1[2] + 0xA8)) != 0 )
    {
      v4 = *(int (__cdecl **)(_DWORD *))(v3 + 0x38);
      if ( v4 )
        v1 = v4(a1);
    }
  }
  v5 = a1[1];
  if ( v5 )
  {
    v6 = *(_DWORD *)(v5 + 0xA8);
    if ( v6 || (v6 = *(_DWORD *)(a1[3] + 0xA8)) != 0 )
    {
      v7 = *(int (__cdecl **)(_DWORD *))(v6 + 0x38);
      if ( v7 )
      {
        v8 = *a1;
        v9 = a1[0xB];
        v10 = a1[0xA];
        *a1 = v5;
        v11 = a1[9];
        a1[1] = v8;
        v12 = a1[8];
        a1[8] = v9;
        a1[9] = a1[0xC];
        v13 = a1[0xD];
        a1[0xB] = v12;
        a1[0xC] = v11;
        a1[0xA] = v13;
        a1[0xD] = v10;
        v2 = v7(a1);
      }
    }
  }
  if ( !v1 )
  {
    if ( !v2 )
      return 0;
LABEL_15:
    result = 1;
    if ( v2 != 2 )
      return result;
    return 2;
  }
  if ( v1 != 2 )
    goto LABEL_15;
  return 2;
}
