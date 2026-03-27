unsigned int __usercall sub_49F750@<eax>(_DWORD *a1@<ecx>, int a2@<esi>)
{
  unsigned int result; // eax
  int v4; // ebp
  int v5; // ebx
  _WORD *v6; // esi
  int v7; // eax
  unsigned __int16 v8; // dx
  int v9; // edx
  unsigned __int16 v10; // ax
  int v11; // eax
  int v12; // ecx
  int v13; // esi
  unsigned int i; // [esp+14h] [ebp-8h]
  _DWORD *v16; // [esp+18h] [ebp-4h]

  result = a1[0x10];
  v4 = 0;
  if ( result )
  {
    v5 = *(_DWORD *)(result + 0x7C);
    result = a1[0x17];
    if ( result )
    {
      result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 0x4C))(v5, a1[0x17]);
      a1[0x18] = result;
    }
    for ( i = 0; i < a1[3]; ++i )
    {
      v6 = (_WORD *)(v4 + a1[6]);
      v7 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 0x58))(v5, a2);
      v8 = v6[2];
      if ( v8 == word_A79928 )
        v9 = 0;
      else
        v9 = *(_DWORD *)(*(_DWORD *)v6 + 8) + v8;
      a2 = v9;
      if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 0x58))(v7) )
      {
        v10 = v6[2];
        if ( v10 == word_A79928 )
          v11 = 0;
        else
          v11 = *(_DWORD *)(*(_DWORD *)v6 + 8) + v10;
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v5 + 0x50))(v5, v11, 0);
        v12 = a1[5];
        v13 = *(_DWORD *)(v12 + v4 + 4);
        v16 = (_DWORD *)(v12 + v4 + 4);
        if ( v13 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) )
            (**(void (__thiscall ***)(int, int))v13)(v13, 1);
          *v16 = 0;
        }
        *(_DWORD *)(a1[5] + v4 + 8) = 0;
        *(_BYTE *)(a1[5] + v4 + 0xC) = byte_A79EFC;
      }
      result = i + 1;
      v4 += 0x10;
    }
  }
  return result;
}
