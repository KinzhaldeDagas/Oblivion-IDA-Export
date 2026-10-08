// OBLIVION AUTHORITY (2026-08-30): Converts rgb[0..2] with truncation after multiplication by 255.0 and packs the result as 0xFFBBGGRR (RGBA byte order in little-endian memory). This routine performs no local channel clamp.
unsigned int __stdcall OB_CIndexedGeometry_ColorFloatsToUInt_010201A0(const float *rgb)
{
  return ((((0xFF00 - (unsigned int)(__int64)(rgb[2] * dbl_A8C6D8)) << 8) - (unsigned int)(__int64)(rgb[1] * dbl_A8C6D8)) << 8) /*0x794548*/
       - (__int64)(dbl_A8C6D8 * *rgb);
}
