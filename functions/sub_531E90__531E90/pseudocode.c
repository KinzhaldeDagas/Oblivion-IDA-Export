void __thiscall sub_531E90(int *this, int *a2)
{
  int v3; // ecx
  int v4; // ebx
  int v5; // eax
  int v6; // ecx
  int v7; // esi
  int v8; // eax

  v3 = *this;
  if ( v3 )
  {
    (*(void (__thiscall **)(int, int *))(*(_DWORD *)v3 + 0x5C))(v3, a2);
    if ( a2 )
    {
      v4 = *this;
      v5 = sub_8AEB80(0xFFu, 0x2Eu, 0x2Eu, 0x19u);
      sub_88BB60(a2, v4, v5);
    }
  }
  v6 = *(this + 1);
  if ( v6 )
  {
    (*(void (__thiscall **)(int, int *))(*(_DWORD *)v6 + 0x5C))(v6, a2);
    if ( a2 )
    {
      v7 = *(this + 1);
      v8 = sub_8AEB80(0xFFu, 0x2Eu, 0x2Eu, 0x19u);
      sub_88BB60(a2, v7, v8);
    }
  }
}
