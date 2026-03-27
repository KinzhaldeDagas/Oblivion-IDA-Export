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

  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x64))(a2);
  v20 = v4;
  if ( v4 > (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x9C))(this) )
    return 0;
  v6 = 0;
  v22 = 0;
  if ( v4 )
  {
    do
    {
      v7 = (*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)a2 + 0x80))(a2, v6);
      v8 = v7;
      if ( !v7 || !*(_DWORD *)(v7 + 0xC) )
        return 0;
      v9 = 0;
      if ( v6 )
      {
        do
        {
          v10 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a2 + 0x80))(a2, v9);
          if ( (*(int (__stdcall **)(_DWORD, _DWORD *))(**(_DWORD **)(v10 + 0xC) + 0x30))(*(_DWORD *)(v10 + 0xC), v21) < 0 )
            return 0;
          if ( v21[4] )
            return 0;
          v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 4))(v8);
          if ( v11 != v21[6] )
            return 0;
          v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 8))(v8);
          if ( v12 != v21[7] )
            return 0;
          if ( !(*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 0xA0))(this) )
          {
            if ( v21[0] < 0x76u )
              v13 = byte_B42070[v21[0]];
            else
              v13 = 0;
            if ( v13 != *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v8 + 0xC))(v8) + 1) )
              return 0;
            v6 = v22;
          }
        }
        while ( ++v9 < v6 );
      }
      v22 = ++v6;
    }
    while ( v6 < v20 );
  }
  v14 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x84))(a2);
  v15 = v14;
  if ( v14 )
  {
    v16 = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 0x10))(v14);
    if ( v16 )
    {
      while ( (_UNKNOWN *)v16 != &unk_B4263C )
      {
        v16 = *(_DWORD *)(v16 + 4);
        if ( !v16 )
          goto LABEL_23;
      }
      v17 = 1;
    }
    else
    {
LABEL_23:
      v17 = 0;
    }
    v18 = v17 != 0 ? v15 : 0;
    if ( v18 )
    {
      if ( !*(_DWORD *)(v18 + 0xC) )
        return 0;
    }
  }
  return 1;
}
