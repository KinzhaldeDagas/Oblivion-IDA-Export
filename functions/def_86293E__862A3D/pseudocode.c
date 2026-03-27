// positive sp value has been detected, the output may be wrong!
double __userpurge def_86293E@<st0>(int a1@<ebx>, _DWORD *a2)
{
  int v3; // [esp-C4h] [ebp-C4h]
  int v4; // [esp-C4h] [ebp-C4h]

  if ( dword_B42E8C )
    dword_B42E8C("Invalid sub texture in decal", 0);
  v4 = v3 + 1;
  if ( v4 < Value )
    a1 = sub_7EE1F0(a2);
  if ( a1 )
    JUMPOUT(0x862805);
  return (double)v4;
}
