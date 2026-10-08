TESObjectREFR *__thiscall sub_68A180(const TravelPathNode **this)
{
  const TravelPathNode *v1; // ecx

  v1 = *(this + 1); /*0x68a180*/
  if ( v1 ) /*0x68a185*/
    return TravelPathNode_GetReference(v1); /*0x68a187*/
  else
    return 0; /*0x68a18c*/
}
