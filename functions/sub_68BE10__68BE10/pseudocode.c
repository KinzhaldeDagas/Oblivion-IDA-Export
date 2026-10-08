char __thiscall sub_68BE10(NiSurfaceData **this, float *a2, int a3)
{
  NiSurfaceData *SurfaceData; // esi
  NiDX92DBufferData *i; // edi
  float *Head; // eax
  char result; // al

  SurfaceData = *this; /*0x68be14*/
  for ( i = 0; SurfaceData; SurfaceData = NiDX92DBufferData::GetSurfaceData((NiDX92DBufferData *)SurfaceData) ) /*0x68be14*/
  {
    Head = (float *)EmbeddedList_GetHead((char *)SurfaceData); /*0x68be2a*/
    if ( sub_47D810(a2, Head, 1.0) ) /*0x68be35*/
      break; /*0x68be35*/
    if ( !--a3 ) /*0x68be44*/
    {
      SurfaceData = 0; /*0x68be57*/
      break; /*0x68be57*/
    }
    i = (NiDX92DBufferData *)SurfaceData; /*0x68be48*/
  }
  result = 0; /*0x68be5a*/
  if ( SurfaceData ) /*0x68be5e*/
  {
    if ( i ) /*0x68be62*/
      sub_68BDA0(this, *this, i); /*0x68be6a*/
    return 1; /*0x68be6f*/
  }
  return result; /*0x68be71*/
}
