char __thiscall sub_88D5A0(int this, int *a2)
{
  char result; // al
  char v4; // bl
  int v5; // eax

  result = 0; /*0x88d5a3*/
  if ( !*(_BYTE *)(this + 0x68) ) /*0x88d5a5*/
  {
    v4 = sub_89F470((int *)this, a2); /*0x88d5b6*/
    if ( v4 ) /*0x88d5ba*/
    {
      v5 = sub_8AEB80(0x1Eu, 0x82u, 0, 0x14u); /*0x88d5c7*/
      sub_88BB60(a2, this, v5); /*0x88d5d3*/
    }
    return v4; /*0x88d5d9*/
  }
  return result; /*0x88d5dc*/
}
