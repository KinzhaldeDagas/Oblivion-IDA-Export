// Verified ActiveEffect_Base_CopyTo copies fields through object +0x30 (boundObjectOrParentForm) and stops there; it does not copy hitEffectList at +0x34. ActiveEffect_Ctor zeroes +0x34. The registered-effect vtables' copy slots either call this routine directly or call derived copy helpers that chain to it; inspected helpers copy their own fields but do not write +0x34. Therefore standard ActiveEffect clones start with an independent empty hit-effect list.
int __thiscall ActiveEffect_Base_CopyTo(int this, int a2)
{
  *(float *)(a2 + 4) = *(float *)(this + 4); /*0x68d8a7*/
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(this + 8); /*0x68d8ad*/
  *(_DWORD *)(a2 + 0xC) = *(_DWORD *)(this + 0xC); /*0x68d8b3*/
  *(_BYTE *)(a2 + 0x10) = *(_BYTE *)(this + 0x10); /*0x68d8ba*/
  *(_BYTE *)(a2 + 0x11) = *(_BYTE *)(this + 0x11); /*0x68d8c1*/
  *(_BYTE *)(a2 + 0x12) = *(_BYTE *)(this + 0x12); /*0x68d8c8*/
  *(_BYTE *)(a2 + 0x13) = *(_BYTE *)(this + 0x13); /*0x68d8cf*/
  *(float *)(a2 + 0x18) = *(float *)(this + 0x18); /*0x68d8d5*/
  *(float *)(a2 + 0x1C) = *(float *)(this + 0x1C); /*0x68d8db*/
  *(_DWORD *)(a2 + 0x20) = *(_DWORD *)(this + 0x20); /*0x68d8e1*/
  *(_DWORD *)(a2 + 0x24) = *(_DWORD *)(this + 0x24); /*0x68d8e7*/
  *(_DWORD *)(a2 + 0x28) = *(_DWORD *)(this + 0x28); /*0x68d8ed*/
  *(_DWORD *)(a2 + 0x30) = *(_DWORD *)(this + 0x30); /*0x68d8f3*/
  *(_DWORD *)(a2 + 0x14) = *(_DWORD *)(this + 0x14); /*0x68d8f9*/
  return a2; /*0x68d8fc*/
}
