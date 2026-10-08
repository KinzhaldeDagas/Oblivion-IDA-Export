NiNode *__thiscall sub_64B350(HighProcess *this, TESObjectREFR *a2)
{
  NiNode *result; // eax

  result = a2->vtbl->GetNiNode(a2); /*0x64b362*/
  if ( result ) /*0x64b366*/
  {
    if ( !this->unk15C ) /*0x64b373*/
      this->unk15C = (NiExtraData *)TESObjectREF_GetFaceGenAnimData((Actor *)a2, 0); /*0x64b385*/
    return (NiNode *)this->unk15C; /*0x64b38b*/
  }
  else
  {
    this->unk15C = 0; /*0x64b369*/
  }
  return result; /*0x64b368*/
}
