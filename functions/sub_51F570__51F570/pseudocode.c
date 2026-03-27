_WORD *__thiscall sub_51F570(_WORD *this)
{
  *(_DWORD *)this = 0;
  *(this + 2) = 0;
  *(this + 3) = 0;
  *((_DWORD *)this + 2) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  TESTexture_constr((TESTexture *)(this + 8));
  return this;
}
