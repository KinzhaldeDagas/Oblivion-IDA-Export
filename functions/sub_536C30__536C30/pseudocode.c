_DWORD *__thiscall sub_536C30(_DWORD *this, int a2, int a3, int a4, int a5)
{
  _DWORD *result; // eax
  _DWORD *v6; // edi
  int v7; // eax
  int v8; // ebx
  int v9; // ecx
  int v10; // eax
  int v11; // edx
  _DWORD *v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // esi
  int v16; // [esp+Ch] [ebp-14h]
  __int128 v17; // [esp+10h] [ebp-10h]

  result = sub_536BC0(this, a3, *(_DWORD *)(a2 + 0x28)); /*0x536c4a*/
  v6 = result; /*0x536c4f*/
  if ( result ) /*0x536c53*/
  {
    v7 = sub_536B30(result, a4, *(_DWORD *)(a2 + 0x20), a5); /*0x536c64*/
    v8 = v7; /*0x536c69*/
    if ( v7 ) /*0x536c6d*/
    {
      *(_OWORD *)(v7 + 0x10) = *(_OWORD *)a2; /*0x536c76*/
      v9 = v6[2]; /*0x536c7a*/
      if ( *(_BYTE *)(v9 + 0x18) == 1 && (v10 = v9 + *(_DWORD *)(v9 + 0x10)) != 0 ) /*0x536c8c*/
      {
        v11 = *(_DWORD *)(v10 + 0x50); /*0x536c8e*/
        v12 = *(_DWORD **)(v10 + 0xC); /*0x536c91*/
        v17 = *(_OWORD *)(v11 + 0xD0); /*0x536c9d*/
        if ( v12 ) /*0x536ca2*/
        {
          v13 = sub_494F10(v12); /*0x536ca6*/
          v16 = v13; /*0x536cad*/
          if ( v13 ) /*0x536cb1*/
          {
            v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 0x88))(v13); /*0x536cbd*/
            if ( !v14 || (v15 = *(_DWORD *)(a2 + 0x2C), v15 == 0xFFFFFFFF) ) /*0x536cc9*/
            {
              *(_DWORD *)(v8 + 0x30) = *(_DWORD *)(v16 + 0x10); /*0x536cfb*/
              *(__int128 *)(v8 + 0x20) = v17; /*0x536cfe*/
              return v6; /*0x536d02*/
            }
            else
            {
              *(_DWORD *)(v8 + 0x30) = (*(int (__thiscall **)(int, int))(*(_DWORD *)v14 + 0x9C))(v14, v15); /*0x536cdd*/
              *(__int128 *)(v8 + 0x20) = v17; /*0x536ce0*/
              return v6; /*0x536ce4*/
            }
          }
        }
      }
      else
      {
        v17 = 0; /*0x536d10*/
      }
      *(__int128 *)(v8 + 0x20) = v17; /*0x536d1a*/
    }
    return v6; /*0x536d1e*/
  }
  return result; /*0x536ce6*/
}
