// OBLIVION AUTHORITY (2026-08-30): Swaps two vector<unsigned short> owners via a temporary deep copy and copy assignments; exception cleanup frees the temporary buffer.
void __thiscall OB_stVectorUShort_Swap_010201A0(OB_stVectorUShort_010201A0 *this, OB_stVectorUShort_010201A0 *other)
{
  OB_stVectorUShort_010201A0 source; // [esp+Ch] [ebp-1Ch] BYREF
  int v4; // [esp+24h] [ebp-4h]

  OB_stVectorUShort_CopyCtor_010201A0(&source, this); /*0x79565c*/
  v4 = 0; /*0x795668*/
  OB_stVectorUShort_CopyAssign_010201A0(this, other); /*0x795670*/
  OB_stVectorUShort_CopyAssign_010201A0(other, &source); /*0x79567c*/
  if ( source.begin ) /*0x795687*/
    FormHeapFree((unsigned int)source.begin); /*0x79568a*/
}
