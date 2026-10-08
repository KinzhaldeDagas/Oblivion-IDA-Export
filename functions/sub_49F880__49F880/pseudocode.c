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

  v2 = *(_DWORD *)(*(this + 0x10) + 0x7C); /*0x49f88b*/
  result = *(this + 0x17); /*0x49f88e*/
  v4 = 0; /*0x49f891*/
  v13 = v2; /*0x49f895*/
  if ( result ) /*0x49f899*/
  {
    result = (*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)v2 + 0x4C))(v2, result); /*0x49f8a3*/
    *(this + 0x18) = result; /*0x49f8a5*/
  }
  for ( i = 0; i < *(this + 3); ++i ) /*0x49f8a8*/
  {
    v5 = *(this + 6); /*0x49f8b6*/
    v6 = *(_WORD *)(v5 + v4 + 4); /*0x49f8b9*/
    v7 = v4 + v5; /*0x49f8be*/
    if ( v6 == word_A79928 ) /*0x49f8c7*/
      v8 = 0; /*0x49f8d3*/
    else
      v8 = *(_DWORD *)(*(_DWORD *)v7 + 8) + v6; /*0x49f8ce*/
    if ( !(*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 0x4C))(v2, v8) ) /*0x49f8dd*/
    {
      v9 = *(this + 5); /*0x49f8e3*/
      v10 = *(_DWORD *)(v9 + v4 + 4); /*0x49f8e6*/
      v11 = (_DWORD *)(v9 + v4 + 4); /*0x49f8ec*/
      if ( v10 ) /*0x49f8f0*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x49f8f6*/
          (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x49f90c*/
        *v11 = 0; /*0x49f90e*/
      }
      v2 = v13; /*0x49f918*/
      *(_DWORD *)(*(this + 5) + v4 + 8) = 0; /*0x49f91c*/
      *(_BYTE *)(*(this + 5) + v4 + 0xC) = byte_A79EFC; /*0x49f92d*/
    }
    result = i + 1; /*0x49f935*/
    v4 += 0x10; /*0x49f938*/
  }
  return result; /*0x49f949*/
}
