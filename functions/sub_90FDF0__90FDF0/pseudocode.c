_DWORD *__thiscall sub_90FDF0(_DWORD *this, _WORD *a2, int a3, int a4)
{
  sub_8E7B70(this, a2, a3, a4); /*0x90fe0a*/
  *this = &off_A9CB64; /*0x90fe0f*/
  *(this + 0xC) = 0x3DCCCCCD; /*0x90fe15*/
  *(this + 0xD) = 0x3C23D70A; /*0x90fe1c*/
  *((_OWORD *)this + 2) = 0; /*0x90fe26*/
  *(this + 0xB) = 0x3F800000; /*0x90fe2a*/
  return this; /*0x90fe33*/
}
