int __thiscall sub_626C10(_DWORD *this, TESObjectREFR *a2)
{
  float *v3; // eax
  float *v4; // eax
  int result; // eax
  float v6[3]; // [esp+8h] [ebp-Ch] BYREF

  v3 = a2->vtbl->GetPos(a2); /*0x626c25*/
  v4 = sub_5E03E0(a2, v6, v3); /*0x626c2f*/
  *(this + 0x10) = *(_DWORD *)v4; /*0x626c36*/
  *(this + 0x11) = *((_DWORD *)v4 + 1); /*0x626c3c*/
  result = *((_DWORD *)v4 + 2); /*0x626c3f*/
  *(this + 0x12) = result; /*0x626c43*/
  return result; /*0x626c42*/
}
