void __thiscall sub_538AE0(int *this, int *a2)
{
  int v3; // ecx
  int v4; // edi
  int v5; // eax

  v3 = *this;
  if ( v3 )
  {
    (*(void (__thiscall **)(int, int *))(*(_DWORD *)v3 + 0x5C))(v3, a2);
    if ( a2 )
    {
      v4 = *this;
      v5 = sub_8AEB80(0x58u, 0xADu, 0x56u, 0x19u);
      sub_88BB60(a2, v4, v5);
    }
  }
}
