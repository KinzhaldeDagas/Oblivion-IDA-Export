void __userpurge sub_88C210(int *a1@<ecx>, int a2@<ebp>, int a3)
{
  _DWORD *v4; // ecx
  int v5; // ecx
  int v6; // eax
  int v7; // edx
  int v8; // ecx
  char v9; // al
  int v10; // edx

  if ( a1 )
  {
    v4 = (_DWORD *)(*(int (__thiscall **)(int *))(*a1 + 0x58))(a1);
    if ( v4 )
    {
      if ( *(_BYTE *)(a3 + 0x2C) == 1 )
      {
        if ( a1[7] )
        {
          if ( (unsigned int)a1[0xB] >= 0xBB8 )
          {
            sub_889F20(a1, 0);
            sub_88AD90(a1);
            sub_88A080((unsigned int *)a1);
            sub_88A120(a1, a2);
          }
          v5 = *(_DWORD *)(a3 + 0xC);
          if ( v5 )
          {
            v6 = *(_DWORD *)(v5 + 0x18);
            if ( (v6 & 0x30) == 0 )
            {
              *(_DWORD *)(v5 + 0x18) = v6 | 0x10;
              sub_8BC720((_WORD *)a3);
              *(_DWORD *)(a1[0xA] + 4 * a1[0xB]++) = a3;
            }
          }
        }
        else
        {
          v7 = *(_DWORD *)(a3 + 0xC);
          if ( v7 )
          {
            if ( (*(_BYTE *)(v7 + 0x18) & 0x30) == 0 )
              sub_8994E0(v4, (_DWORD *)a3, 1);
          }
        }
      }
      else if ( a1[7] )
      {
        if ( (unsigned int)a1[0xD] >= 0xC8 )
        {
          sub_889F20(a1, 0);
          sub_88AD90(a1);
          sub_88A080((unsigned int *)a1);
          sub_88A120(a1, a2);
        }
        v8 = *(_DWORD *)(a3 + 0xC);
        if ( v8 )
        {
          v9 = *(_BYTE *)(v8 + 0x10);
          if ( (v9 & 3) == 0 )
          {
            *(_BYTE *)(v8 + 0x10) = v9 | 1;
            sub_8BC720((_WORD *)a3);
            *(_DWORD *)(a1[0xC] + 4 * a1[0xD]++) = a3;
          }
        }
      }
      else
      {
        v10 = *(_DWORD *)(a3 + 0xC);
        if ( v10 )
        {
          if ( (*(_BYTE *)(v10 + 0x10) & 3) == 0 )
            sub_899A50(v4, (int *)a3);
        }
      }
    }
  }
}
