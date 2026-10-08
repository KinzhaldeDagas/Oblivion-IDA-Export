char *__thiscall sub_42A510(char *this)
{
  *(this + 4) = 0x3E; /*0x42a514*/
  *((_DWORD *)this + 2) = 0; /*0x42a518*/
  *(_DWORD *)this = &ExtraOblivionEntry::`vftable'; /*0x42a51b*/
  *((NiPoint3 *)this + 1) = g_zeroNiPoint3; /*0x42a527*/
  *((_DWORD *)this + 6) = 0; /*0x42a53c*/
  return this; /*0x42a53f*/
}
