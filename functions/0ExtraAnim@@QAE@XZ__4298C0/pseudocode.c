ExtraAnim *__thiscall ExtraAnim::ExtraAnim(ExtraAnim *this, int a2)
{
  *((_BYTE *)this + 4) = 0x15; /*0x4298c6*/
  *((_DWORD *)this + 2) = 0; /*0x4298ca*/
  *(_DWORD *)this = &ExtraAnim::`vftable'; /*0x4298d1*/
  *((_DWORD *)this + 3) = a2; /*0x4298d7*/
  return this; /*0x4298da*/
}
