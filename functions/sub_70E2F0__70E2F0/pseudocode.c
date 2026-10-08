// Returns the complete 2D mip count floor(log2(max(width,height)))+1 for nonzero dimensions.
unsigned int __cdecl OB_NiPixelData_CalcFullMipLevelCount_010201A0(unsigned int width, unsigned int height)
{
  unsigned int v2; // ecx
  unsigned int i; // edx
  unsigned int v4; // eax
  unsigned int j; // ecx
  unsigned int result; // eax

  if ( !width || !height ) /*0x70e2fe*/
    return 0; /*0x70e330*/
  v2 = width >> 1; /*0x70e300*/
  for ( i = 1; v2; v2 >>= 1 ) /*0x70e300*/
    ++i; /*0x70e310*/
  v4 = height >> 1; /*0x70e317*/
  for ( j = 1; v4; v4 >>= 1 ) /*0x70e317*/
    ++j; /*0x70e320*/
  result = i; /*0x70e329*/
  if ( j >= i ) /*0x70e32b*/
    return j; /*0x70e32d*/
  return result; /*0x70e32f*/
}
