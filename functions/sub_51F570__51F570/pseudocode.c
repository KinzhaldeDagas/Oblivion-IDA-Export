_WORD *__thiscall sub_51F570(_WORD *this)
{
  *(_DWORD *)this = 0; /*0x51f59a*/
  *(this + 2) = 0; /*0x51f59c*/
  *(this + 3) = 0; /*0x51f5a0*/
  *((_DWORD *)this + 2) = 0; /*0x51f5a8*/
  *(this + 6) = 0; /*0x51f5ab*/
  *(this + 7) = 0; /*0x51f5af*/
  TESTexture_constr((TESTexture *)(this + 8)); /*0x51f5bb*/
  return this; /*0x51f5c2*/
}
