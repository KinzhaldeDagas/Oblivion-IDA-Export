void __thiscall sub_4EDDE0(unsigned int *this)
{
  FormHeapFree(*(this + 9));
  *(this + 9) = 0;
  *((_WORD *)this + 0x15) = 0;
  *((_WORD *)this + 0x14) = 0;
  *((_BYTE *)this + 0x2C) = 0x4B;
  *((_BYTE *)this + 0x2D) = 0;
  *(this + 0xE) = 0;
  FormHeapFree(*(this + 0xC));
  *(this + 0xC) = 0;
  *((_WORD *)this + 0x1B) = 0;
  *((_WORD *)this + 0x1A) = 0;
  sub_4ED580((float *)this + 0xF);
  j_TESForm_InitializeComponents((TESForm *)this);
  *(this + 0x28) = 0;
  *(this + 0x29) = 0;
  *(this + 0x2A) = 0;
}
