bool __thiscall sub_71A650(float *this, int a2)
{
  return sub_708C30(this, (_DWORD *)a2) /*0x71a6b9*/
      && *(float *)(a2 + 0xDC) == *(this + 0x37)
      && !NiPoint3__NotEqual((const NiPoint3 *)(this + 0x38), (const NiPoint3 *)(a2 + 0xE0))
      && !NiPoint3__NotEqual((const NiPoint3 *)(this + 0x3B), (const NiPoint3 *)(a2 + 0xEC))
      && !NiPoint3__NotEqual((const NiPoint3 *)(this + 0x3E), (const NiPoint3 *)(a2 + 0xF8));
}
