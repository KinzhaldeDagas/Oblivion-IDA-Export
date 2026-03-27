NiNode **__thiscall sub_521A10(TESNPC *this)
{
  bool v2; // zf
  NiNode **result; // eax

  v2 = ((int (__thiscall *)(TESNPC *, int))this->vtbl[1].super.super.super.Unk_0B)(this, 0x45) == 0;
  result = (NiNode **)this->member.unk2;
  if ( v2 )
    return (NiNode **)this->member.unk1;
  return result;
}
