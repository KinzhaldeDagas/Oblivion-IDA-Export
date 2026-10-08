char __thiscall sub_764A20(void *this, int a2)
{
  unsigned int v4; // edi
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // esi
  int v9; // edi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  char v13; // bl
  int v14; // eax
  int v15; // esi
  int v16; // eax
  char v17; // al
  int v18; // eax
  unsigned int v20; // [esp+14h] [ebp-24h]
  _DWORD v21[8]; // [esp+18h] [ebp-20h] BYREF
  unsigned int v22; // [esp+3Ch] [ebp+4h]

  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x64))(a2); /*0x764a3a*/
  v20 = v4; /*0x764a46*/
  if ( v4 > (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x9C))(this) ) /*0x764a4e*/
    return 0; /*0x764a58*/
  v6 = 0; /*0x764a5c*/
  v22 = 0; /*0x764a60*/
  if ( v4 ) /*0x764a64*/
  {
    do /*0x764a7c*/
    {
      v7 = (*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)a2 + 0x80))(a2, v6); /*0x764a7c*/
      v8 = v7; /*0x764a7e*/
      if ( !v7 || !*(_DWORD *)(v7 + 0xC) ) /*0x764a88*/
        return 0; /*0x764a8c*/
      v9 = 0; /*0x764a92*/
      if ( v6 ) /*0x764a96*/
      {
        do /*0x764aac*/
        {
          v10 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a2 + 0x80))(a2, v9); /*0x764aac*/
          if ( (*(int (__stdcall **)(_DWORD, _DWORD *))(**(_DWORD **)(v10 + 0xC) + 0x30))(*(_DWORD *)(v10 + 0xC), v21) < 0 ) /*0x764ac0*/
            return 0; /*0x764af1*/
          if ( v21[4] ) /*0x764acb*/
            return 0; /*0x764af1*/
          v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 4))(v8); /*0x764ad8*/
          if ( v11 != v21[6] ) /*0x764ade*/
            return 0; /*0x764af1*/
          v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 8))(v8); /*0x764aeb*/
          if ( v12 != v21[7] ) /*0x764af1*/
            return 0; /*0x764af1*/
          if ( !(*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 0xA0))(this) ) /*0x764b03*/
          {
            if ( v21[0] < 0x76u ) /*0x764b10*/
              v13 = byte_B42070[v21[0]]; /*0x764b16*/
            else
              v13 = 0; /*0x764b12*/
            if ( v13 != *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v8 + 0xC))(v8) + 1) ) /*0x764b28*/
              return 0; /*0x764b28*/
            v6 = v22; /*0x764b2a*/
          }
        }
        while ( ++v9 < v6 ); /*0x764aac*/
      }
      v22 = ++v6; /*0x764b40*/
    }
    while ( v6 < v20 ); /*0x764a7c*/
  }
  v14 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x84))(a2); /*0x764b4a*/
  v15 = v14; /*0x764b57*/
  if ( v14 )
  {
    v16 = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 0x10))(v14); /*0x764b64*/
    if ( v16 ) /*0x764b68*/
    {
      while ( (BSStringT *)v16 != &stru_B4263C ) /*0x764b75*/
      {
        v16 = *(_DWORD *)(v16 + 4); /*0x764b77*/
        if ( !v16 ) /*0x764b7c*/
          goto LABEL_23; /*0x764b7c*/
      }
      v17 = 1; /*0x764b9a*/
    }
    else
    {
LABEL_23:
      v17 = 0; /*0x764b7e*/
    }
    v18 = v17 != 0 ? v15 : 0;
    if ( v18 ) /*0x764b86*/
    {
      if ( !*(_DWORD *)(v18 + 0xC) ) /*0x764b88*/
        return 0; /*0x764b97*/
    }
  }
  return 1; /*0x764a50*/
}
