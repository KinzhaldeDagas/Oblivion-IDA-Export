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

  v1 = 0; /*0x97a479*/
  v2 = 0; /*0x97a47b*/
  if ( *a1 ) /*0x97a477*/
  {
    v3 = *(_DWORD *)(*a1 + 0xA8); /*0x97a481*/
    if ( v3 || (v3 = *(_DWORD *)(a1[2] + 0xA8)) != 0 ) /*0x97a496*/
    {
      v4 = *(int (__cdecl **)(_DWORD *))(v3 + 0x38); /*0x97a498*/
      if ( v4 ) /*0x97a49d*/
        v1 = v4(a1); /*0x97a4a5*/
    }
  }
  v5 = a1[1]; /*0x97a4a7*/
  if ( v5 ) /*0x97a4ac*/
  {
    v6 = *(_DWORD *)(v5 + 0xA8); /*0x97a4ae*/
    if ( v6 || (v6 = *(_DWORD *)(a1[3] + 0xA8)) != 0 ) /*0x97a4c3*/
    {
      v7 = *(int (__cdecl **)(_DWORD *))(v6 + 0x38); /*0x97a4c6*/
      if ( v7 ) /*0x97a4cb*/
      {
        v8 = *a1; /*0x97a4cd*/
        v9 = a1[0xB]; /*0x97a4cf*/
        v10 = a1[0xA]; /*0x97a4d2*/
        *a1 = v5; /*0x97a4d5*/
        v11 = a1[9]; /*0x97a4d7*/
        a1[1] = v8; /*0x97a4da*/
        v12 = a1[8]; /*0x97a4dd*/
        a1[8] = v9; /*0x97a4e0*/
        a1[9] = a1[0xC]; /*0x97a4e6*/
        v13 = a1[0xD]; /*0x97a4e9*/
        a1[0xB] = v12; /*0x97a4ec*/
        a1[0xC] = v11; /*0x97a4ef*/
        a1[0xA] = v13; /*0x97a4f3*/
        a1[0xD] = v10; /*0x97a4f6*/
        v2 = v7(a1); /*0x97a4fe*/
      }
    }
  }
  if ( !v1 ) /*0x97a503*/
  {
    if ( !v2 ) /*0x97a507*/
      return 0; /*0x97a50e*/
LABEL_15:
    result = 1; /*0x97a516*/
    if ( v2 != 2 ) /*0x97a51e*/
      return result; /*0x97a51e*/
    return 2; /*0x97a51e*/
  }
  if ( v1 != 2 ) /*0x97a514*/
    goto LABEL_15; /*0x97a514*/
  return 2; /*0x97a509*/
}
