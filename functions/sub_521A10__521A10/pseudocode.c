// CORRECTION: chooses inline FaceGen delta by GetAViBase(0x45), NOT sex. Vtable 0xA53DD4+0x128 -> TESNPC_GetAViBase 0x5232D0. Zero vampirism selects NPC+0x108, nonzero selects +0x168. Both are four 0x18-byte matrices. Earlier sex-specific naming was wrong; sex bit at NPC+0x28 is separate.
FaceGenHeadParameters *__thiscall TESNPC_GetSexFaceGenDeltaParameters(TESNPC *this)
{
  bool v2; // zf
  FaceGenHeadParameters *result; // eax

  v2 = ((int (__thiscall *)(TESNPC *, int))this->vtbl[1].super.super.super.Unk_0B)(this, 0x45) == 0; /*0x521a1f*/
  result = (FaceGenHeadParameters *)this->member.unk2; /*0x521a21*/
  if ( v2 ) /*0x521a27*/
    return (FaceGenHeadParameters *)this->member.unk1; /*0x521a29*/
  return result; /*0x521a2f*/
}
