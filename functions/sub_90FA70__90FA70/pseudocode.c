_DWORD *__thiscall sub_90FA70(_DWORD *this, _WORD *a2, int a3, int a4)
{
  sub_8E7B70(this, a2, a3, a4); /*0x90fa84*/
  *this = &off_A9CB30; /*0x90fa8b*/
  *(this + 0x14) = 0x3F800000; /*0x90fa91*/
  *(this + 0x15) = 0x447A0000; /*0x90fa98*/
  *(this + 0x16) = 0x3DCCCCCD; /*0x90fa9f*/
  *((_BYTE *)this + 0x5C) = 1; /*0x90faa6*/
  *((_BYTE *)this + 0x5D) = 1; /*0x90faa9*/
  return this; /*0x90faae*/
}
