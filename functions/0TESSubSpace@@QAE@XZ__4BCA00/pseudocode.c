TESSubSpace *__thiscall TESSubSpace::TESSubSpace(TESSubSpace *this)
{
  long double v2; // st7
  float v4; // [esp+8h] [ebp-14h]

  TESBoundObject_constr((TESForm *)this);
  v2 = dbl_A45A50;
  *(_DWORD *)this = &TESSubSpace::`vftable';
  *((_BYTE *)this + 4) = 0x29;
  *((_WORD *)this + 0x12) = 0x190;
  *((_WORD *)this + 0x13) = 0x190;
  *((_WORD *)this + 0x14) = 0xC8;
  v4 = sqrt(v2);
  *((float *)this + 0xB) = v4;
  j_TESForm_InitializeComponents((TESForm *)this);
  return this;
}
