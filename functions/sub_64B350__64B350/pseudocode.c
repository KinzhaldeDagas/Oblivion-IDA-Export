NiNode *__thiscall sub_64B350(HighProcess *this, TESObjectREFR *a2)
{
  NiNode *result; // eax

  result = a2->vtbl->GetNiNode(a2);
  if ( result )
  {
    if ( !this->unk15C )
      this->unk15C = (NiExtraData *)TESObjectREF_GetFaceGenAnimData((Actor *)a2, 0);
    return (NiNode *)this->unk15C;
  }
  else
  {
    this->unk15C = 0;
  }
  return result;
}
