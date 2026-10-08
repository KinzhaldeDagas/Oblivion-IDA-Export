// Pass225/228: NiScreenTexture clone helper; allocates/constructs 0x20 object then delegates to copy helper 0x0073E150.
unsigned int *__thiscall sub_73E5B0(unsigned int *this, _DWORD **a2)
{
  NiScreenTexture *v3; // eax
  unsigned int *v4; // esi

  v3 = (NiScreenTexture *)FormHeapAlloc(0x20u); /*0x73e5d7*/
  v4 = 0; /*0x73e5e3*/
  if ( v3 ) /*0x73e5eb*/
    v4 = (unsigned int *)NiScreenTexture::NiScreenTexture(v3); /*0x73e5f4*/
  sub_73E150(this, v4, a2); /*0x73e606*/
  return v4; /*0x73e60d*/
}
