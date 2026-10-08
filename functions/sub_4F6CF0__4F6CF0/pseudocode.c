// GetInSameCell checks pointer identity of both resolved cell objects. This differs from GetInCell's case-insensitive editor-name prefix comparison; Fallout's analogous handler x4y6:0x823B61A0 also uses parent-cell pointer equality.
char __cdecl GetInSameCell_Eval(TESChildCELL *a1, unsigned __int8 *a2, int a3, double *a4)
{
  unsigned __int8 *v4; // esi
  UInt32 DwordAtOffset40; // edi
  UInt32 v6; // eax

  *a4 = 0.0; /*0x4f6cfc*/
  v4 = 0; /*0x4f6cfe*/
  if ( a2 ) /*0x4f6d02*/
  {
    if ( (unsigned int)a2[4] - 0x31 <= 2 ) /*0x4f6d0e*/
      v4 = a2; /*0x4f6d10*/
  }
  if ( a1 ) /*0x4f6d19*/
    DwordAtOffset40 = Shared_GetDwordAtOffset40(a1); /*0x4f6d20*/
  else
    DwordAtOffset40 = 0; /*0x4f6d24*/
  if ( v4 ) /*0x4f6d28*/
    v6 = Shared_GetDwordAtOffset40(v4); /*0x4f6d2c*/
  else
    v6 = 0; /*0x4f6d33*/
  if ( DwordAtOffset40 ) /*0x4f6d37*/
  {
    if ( v6 ) /*0x4f6d3b*/
    {
      if ( DwordAtOffset40 == v6 ) /*0x4f6d3f*/
        *a4 = 1.0; /*0x4f6d43*/
    }
  }
  if ( MEMORY[0xB361AC] ) /*0x4f6d45*/
    Interface_ConsolePrint("GetInSameCell >> %0.2f", *a4); /*0x4f6d5c*/
  return 1; /*0x4f6d64*/
}
