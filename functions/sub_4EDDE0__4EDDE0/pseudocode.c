void __thiscall sub_4EDDE0(unsigned int *this)
{
  FormHeapFree(*(this + 9)); /*0x4edde8*/
  *(this + 9) = 0; /*0x4eddef*/
  *((_WORD *)this + 0x15) = 0; /*0x4eddf2*/
  *((_WORD *)this + 0x14) = 0; /*0x4eddf6*/
  *((_BYTE *)this + 0x2C) = 0x4B; /*0x4eddfa*/
  *((_BYTE *)this + 0x2D) = 0; /*0x4eddfe*/
  *(this + 0xE) = 0; /*0x4ede01*/
  FormHeapFree(*(this + 0xC)); /*0x4ede08*/
  *(this + 0xC) = 0; /*0x4ede13*/
  *((_WORD *)this + 0x1B) = 0; /*0x4ede16*/
  *((_WORD *)this + 0x1A) = 0; /*0x4ede1a*/
  sub_4ED580((float *)this + 0xF); /*0x4ede1e*/
  j_TESForm_InitializeComponents((TESForm *)this); /*0x4ede25*/
  *(this + 0x28) = 0; /*0x4ede2a*/
  *(this + 0x29) = 0; /*0x4ede30*/
  *(this + 0x2A) = 0; /*0x4ede36*/
}
