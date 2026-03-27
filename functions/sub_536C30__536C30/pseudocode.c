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

  result = sub_536BC0(this, a3, *(_DWORD *)(a2 + 0x28));
  v6 = result;
  if ( result )
  {
    v7 = sub_536B30(result, a4, *(_DWORD *)(a2 + 0x20), a5);
    v8 = v7;
    if ( v7 )
    {
      *(_OWORD *)(v7 + 0x10) = *(_OWORD *)a2;
      v9 = v6[2];
      if ( *(_BYTE *)(v9 + 0x18) == 1 && (v10 = v9 + *(_DWORD *)(v9 + 0x10)) != 0 )
      {
        v11 = *(_DWORD *)(v10 + 0x50);
        v12 = *(_DWORD **)(v10 + 0xC);
        v17 = *(_OWORD *)(v11 + 0xD0);
        if ( v12 )
        {
          v13 = sub_494F10(v12);
          v16 = v13;
          if ( v13 )
          {
            v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 0x88))(v13);
            if ( !v14 || (v15 = *(_DWORD *)(a2 + 0x2C), v15 == 0xFFFFFFFF) )
            {
              *(_DWORD *)(v8 + 0x30) = *(_DWORD *)(v16 + 0x10);
              *(__int128 *)(v8 + 0x20) = v17;
              return v6;
            }
            else
            {
              *(_DWORD *)(v8 + 0x30) = (*(int (__thiscall **)(int, int))(*(_DWORD *)v14 + 0x9C))(v14, v15);
              *(__int128 *)(v8 + 0x20) = v17;
              return v6;
            }
          }
        }
      }
      else
      {
        v17 = 0;
      }
      *(__int128 *)(v8 + 0x20) = v17;
    }
    return v6;
  }
  return result;
}
