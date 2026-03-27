bool __usercall sub_5A5540@<al>(_DWORD *a1@<ecx>, double a2@<st1>, double a3@<st0>)
{
  bool v5; // zf
  double Float; // st5
  bool result; // al

  if ( (int)++a1[0x16] > 0x3C )
  {
    v5 = a1[0x15] == 0;
    a1[0x16] = 0;
    if ( !v5 )
    {
      Float = Tile_GetFloat((_DWORD *)a1[1], 0xFB2);
      if ( a3 == fConstant_2 )
        return sub_5A4980(Float, a2, a3, (TESObjectREFR *)a1[0x15], 1, 1);
      else
        return sub_5A4980(Float, a2, a3, (TESObjectREFR *)a1[0x15], 0, 1);
    }
  }
  return result;
}
