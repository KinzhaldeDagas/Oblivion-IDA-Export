double __cdecl sub_547F80(int a1, int a2, int a3, float a4, int a5)
{
  int v5; // eax
  float v6; // ecx
  double result; // st7
  float v8; // [esp+10h] [ebp+10h]
  float v9; // [esp+10h] [ebp+10h]
  float v10; // [esp+10h] [ebp+10h]

  v5 = Double_To_SInt32((double)(a2 + a1) * MEMORY[0xB37A58][0x64]); /*0x547f98*/
  v6 = MEMORY[0xB37A58][0x62]; /*0x547fa2*/
  if ( LOBYTE(a4) ) /*0x547fa8*/
    ++LODWORD(v6); /*0x547faa*/
  if ( a5 ) /*0x547fb4*/
  {
    if ( a5 == 1 ) /*0x547fb9*/
      --LODWORD(v6); /*0x547fbb*/
  }
  else
  {
    ++LODWORD(v6); /*0x547fc0*/
  }
  v8 = 1.0; /*0x547fcc*/
  if ( a3 < SLODWORD(MEMORY[0xB37A58][0x60]) ) /*0x547fdc*/
  {
    v9 = (double)a3 / (double)SLODWORD(MEMORY[0xB37A58][0x60]); /*0x547fe8*/
    v10 = v9 * (1.0 - MEMORY[0xB37A58][0x5E]); /*0x548000*/
    v8 = MEMORY[0xB37A58][0x5E] + v10; /*0x548008*/
  }
  result = (double)(a3 * LODWORD(v6) + v5) * v8; /*0x548010*/
  Double_To_SInt32(result); /*0x548014*/
  return result;
}
