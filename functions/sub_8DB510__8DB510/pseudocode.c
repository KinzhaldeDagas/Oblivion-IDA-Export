int __thiscall sub_8DB510(_DWORD *this, int a2, int a3, int a4)
{
  int v4; // esi
  int v6; // edi
  int result; // eax
  int v8; // ebx
  unsigned __int16 v9; // cx

  v4 = a2 + *(_DWORD *)(a2 + 0x10);
  v6 = a3 + *(_DWORD *)(a3 + 0x10);
  result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x18, 0x1F);
  *(_WORD *)(result + 4) = 0x18;
  v8 = *(this + 2);
  *(_WORD *)(result + 6) = 1;
  *(_DWORD *)result = &off_A9A3D0;
  v9 = *(_WORD *)(v6 + 0x8E);
  if ( *(_WORD *)(v4 + 0x8E) < v9 )
    v9 = *(_WORD *)(v4 + 0x8E);
  *(_DWORD *)(result + 0x10) = v6;
  *(_DWORD *)(result + 0xC) = v4;
  *(_DWORD *)(result + 8) = v8;
  *(_WORD *)(result + 0x14) = v9;
  return result;
}
