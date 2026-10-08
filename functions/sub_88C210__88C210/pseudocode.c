void __userpurge sub_88C210(int *a1@<ecx>, int a2@<ebp>, int a3)
{
  _DWORD *v4; // ecx
  int v5; // ecx
  int v6; // eax
  int v7; // edx
  int v8; // ecx
  char v9; // al
  int v10; // edx

  if ( a1 ) /*0x88c215*/
  {
    v4 = (_DWORD *)(*(int (__thiscall **)(int *))(*a1 + 0x58))(a1); /*0x88c222*/
    if ( v4 ) /*0x88c226*/
    {
      if ( *(_BYTE *)(a3 + 0x2C) == 1 ) /*0x88c235*/
      {
        if ( a1[7] ) /*0x88c237*/
        {
          if ( (unsigned int)a1[0xB] >= 0xBB8 ) /*0x88c244*/
          {
            sub_889F20(a1, 0); /*0x88c24a*/
            sub_88AD90(a1); /*0x88c251*/
            sub_88A080((unsigned int *)a1); /*0x88c258*/
            sub_88A120(a1, a2); /*0x88c25f*/
          }
          v5 = *(_DWORD *)(a3 + 0xC); /*0x88c264*/
          if ( v5 ) /*0x88c269*/
          {
            v6 = *(_DWORD *)(v5 + 0x18); /*0x88c26f*/
            if ( (v6 & 0x30) == 0 ) /*0x88c274*/
            {
              *(_DWORD *)(v5 + 0x18) = v6 | 0x10; /*0x88c27d*/
              sub_8BC720((_WORD *)a3); /*0x88c282*/
              *(_DWORD *)(a1[0xA] + 4 * a1[0xB]++) = a3; /*0x88c28d*/
            }
          }
        }
        else
        {
          v7 = *(_DWORD *)(a3 + 0xC); /*0x88c299*/
          if ( v7 ) /*0x88c29e*/
          {
            if ( (*(_BYTE *)(v7 + 0x18) & 0x30) == 0 ) /*0x88c2a4*/
              sub_8994E0(v4, (_DWORD *)a3, 1); /*0x88c2a9*/
          }
        }
      }
      else if ( a1[7] ) /*0x88c2b3*/
      {
        if ( (unsigned int)a1[0xD] >= 0xC8 ) /*0x88c2c0*/
        {
          sub_889F20(a1, 0); /*0x88c2c6*/
          sub_88AD90(a1); /*0x88c2cd*/
          sub_88A080((unsigned int *)a1); /*0x88c2d4*/
          sub_88A120(a1, a2); /*0x88c2db*/
        }
        v8 = *(_DWORD *)(a3 + 0xC); /*0x88c2e0*/
        if ( v8 ) /*0x88c2e5*/
        {
          v9 = *(_BYTE *)(v8 + 0x10); /*0x88c2e7*/
          if ( (v9 & 3) == 0 ) /*0x88c2ec*/
          {
            *(_BYTE *)(v8 + 0x10) = v9 | 1; /*0x88c2f0*/
            sub_8BC720((_WORD *)a3); /*0x88c2f5*/
            *(_DWORD *)(a1[0xC] + 4 * a1[0xD]++) = a3; /*0x88c300*/
          }
        }
      }
      else
      {
        v10 = *(_DWORD *)(a3 + 0xC); /*0x88c30c*/
        if ( v10 ) /*0x88c311*/
        {
          if ( (*(_BYTE *)(v10 + 0x10) & 3) == 0 ) /*0x88c317*/
            sub_899A50(v4, (int *)a3); /*0x88c31a*/
        }
      }
    }
  }
}
