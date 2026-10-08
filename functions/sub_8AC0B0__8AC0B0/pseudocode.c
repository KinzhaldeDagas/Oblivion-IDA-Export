// TES4 authoritative: writes proxy velocity vector back into bhk collision object+0x10. Climbing/Slowfall velocity edits must happen before these calls or must write both proxy+0x2E0 and object+0x10 after the fact.
hkVector4 *__thiscall sub_8AC0B0(_OWORD *this, hkVector4 *a2)
{
  *(this + 1) = *a2; /*0x8ac0b7*/
  return a2; /*0x8ac0bb*/
}
