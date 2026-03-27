unsigned int __thiscall sub_49F880(unsigned int *this)
{
  int v2; // edi
  unsigned int result; // eax
  int v4; // ebx
  int v5; // eax
  unsigned __int16 v6; // cx
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // edi
  _DWORD *v11; // ebp
  unsigned int i; // [esp+Ch] [ebp-8h]
  int v13; // [esp+10h] [ebp-4h]

  v2 = *(_DWORD *)(*(this + 0x10) + 0x7C);
  result = *(this + 0x17);
  v4 = 0;
  v13 = v2;
  if ( result )
  {
    result = (*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)v2 + 0x4C))(v2, result);
    *(this + 0x18) = result;
  }
  for ( i = 0; i < *(this + 3); ++i )
  {
    v5 = *(this + 6);
    v6 = *(_WORD *)(v5 + v4 + 4);
    v7 = v4 + v5;
    if ( v6 == word_A79928 )
      v8 = 0;
    else
      v8 = *(_DWORD *)(*(_DWORD *)v7 + 8) + v6;
    if ( !(*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 0x4C))(v2, v8) )
    {
      v9 = *(this + 5);
      v10 = *(_DWORD *)(v9 + v4 + 4);
      v11 = (_DWORD *)(v9 + v4 + 4);
      if ( v10 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) )
          (**(void (__thiscall ***)(int, int))v10)(v10, 1);
        *v11 = 0;
      }
      v2 = v13;
      *(_DWORD *)(*(this + 5) + v4 + 8) = 0;
      *(_BYTE *)(*(this + 5) + v4 + 0xC) = byte_A79EFC;
    }
    result = i + 1;
    v4 += 0x10;
  }
  return result;
}
