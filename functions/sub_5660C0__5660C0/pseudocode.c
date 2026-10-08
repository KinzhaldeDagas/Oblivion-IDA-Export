// 3DTheft decode: package helper toggles packageFlags bit 0x4000; AddScriptPackage sets it before Actor_AddPackage_.
void __thiscall sub_5660C0(_DWORD *this, char a2)
{
  if ( a2 ) /*0x5660c5*/
    *(this + 7) |= 0x4000u; /*0x5660c7*/
  else
    *(this + 7) &= ~0x4000u; /*0x5660d1*/
}
