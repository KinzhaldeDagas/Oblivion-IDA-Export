bool __thiscall sub_71A650(float *this, int a2)
{
  return sub_708C30(this, (_DWORD *)a2)
      && *(float *)(a2 + 0xDC) == *(this + 0x37)
      && !sub_8AA390(this + 0x38, (float *)(a2 + 0xE0))
      && !sub_8AA390(this + 0x3B, (float *)(a2 + 0xEC))
      && !sub_8AA390(this + 0x3E, (float *)(a2 + 0xF8));
}
