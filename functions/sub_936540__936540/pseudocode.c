signed int __usercall sub_936540@<eax>(int a1@<eax>, _DWORD *a2@<edi>)
{
  char v2; // si
  int v3; // eax
  int v4; // esi
  bool v5; // dl
  bool v6; // cl
  bool v7; // al
  char v8; // cl
  signed int result; // eax

  v2 = a1;
  v3 = a1 >> 4;
  v4 = v2 & 0xF;
  v5 = (v3 & 1) == 0;
  v6 = (v3 & 2) == 0;
  v7 = (v3 & 4) == 0;
  if ( v4 )
  {
    if ( v4 == 1 )
      v8 = v5 + 2 * v7 + 4;
    else
      v8 = v5 + 2 * v6 + 8;
  }
  else
  {
    v8 = v6 + 2 * v7;
  }
  result = 1 << (2 * v8);
  if ( ((2 * result) & *a2) == 0 )
    *a2 += result;
  return result;
}
