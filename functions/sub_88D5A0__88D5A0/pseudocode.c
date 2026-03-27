char __thiscall sub_88D5A0(int this, int *a2)
{
  char result; // al
  char v4; // bl
  int v5; // eax

  result = 0;
  if ( !*(_BYTE *)(this + 0x68) )
  {
    v4 = sub_89F470((_DWORD *)this, a2);
    if ( v4 )
    {
      v5 = sub_8AEB80(0x1Eu, 0x82u, 0, 0x14u);
      sub_88BB60(a2, this, v5);
    }
    return v4;
  }
  return result;
}
