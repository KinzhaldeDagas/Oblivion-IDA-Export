hkScaledMoppBvTreeShape *__thiscall sub_9146B0(hkScaledMoppBvTreeShape *this, char a2)
{
  hkScaledMoppBvTreeShape::~hkScaledMoppBvTreeShape(this); /*0x9146b3*/
  if ( (a2 & 1) != 0 ) /*0x9146bd*/
    (*(void (__stdcall **)(hkScaledMoppBvTreeShape *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x9146cf*/
      this,
      *((unsigned __int16 *)this + 2),
      0x24);
  return this; /*0x9146d4*/
}
