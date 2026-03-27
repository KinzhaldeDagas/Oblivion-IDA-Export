bool __thiscall sub_7830C0(_DWORD *this, _DWORD *a2, int a3, signed int a4)
{
  int v4; // ebx
  signed int v6; // esi
  int v7; // eax
  int v8; // ebp
  int v9; // eax
  int v11; // edx
  int v12; // [esp-10h] [ebp-20h]
  int v13; // [esp-Ch] [ebp-1Ch]
  char v14; // [esp+18h] [ebp+8h]

  v4 = a3;
  if ( !a3 )
    v4 = a2[0xC];
  v6 = a4;
  if ( !a4 )
  {
    v6 = a2[8];
    if ( !v6 )
      v6 = 1;
  }
  v7 = a2[5];
  v14 = v7;
  if ( !byte_B4295B )
  {
    sub_783C70();
    LOBYTE(v7) = v14;
  }
  v8 = *(this + 9);
  v9 = *(_DWORD *)(4 * (unsigned __int8)v7 + 0xB428D8);
  v13 = a2[7];
  if ( v9 == 1 )
    return (*(int (__stdcall **)(_DWORD, int, int, signed int))(**(_DWORD **)(v8 + 0xFF8) + 0x188))(
             *(_DWORD *)(v8 + 0xFF8),
             v13,
             v4,
             v6) >= 0;
  v11 = **(_DWORD **)(v8 + 0xFF8);
  v12 = *(_DWORD *)(v8 + 0xFF8);
  if ( v9 == 3 )
    return (*(int (__stdcall **)(int, int, int, signed int))(v11 + 0x180))(v12, v13, v4, v6) >= 0;
  else
    return (*(int (__stdcall **)(int, int, int, signed int))(v11 + 0x178))(v12, v13, v4, v6) >= 0;
}
