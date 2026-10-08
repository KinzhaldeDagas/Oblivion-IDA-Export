// MoonSugarEffect decode: NiGeometryBufferData VBChip getter. Returns VBChip[stream] only when stream < StreamCount; no allocation or refresh. This is the safe read-side primitive for already-packed mask submission.
NiVBChip *__thiscall sub_761AC0(NiGeometryBufferData *this, UInt32 a2)
{
  if ( a2 >= this->StreamCount ) /*0x761ac7*/
    return 0; /*0x761ad2*/
  else
    return this->VBChip[a2]; /*0x761acc*/
}
