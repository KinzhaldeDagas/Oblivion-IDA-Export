// Verified this helper takes EffectNode* and explicit TESObjectREFR* linkContext, while preserving incoming EBX and forwarding it as the second stack argument to each hit-effect vtable +0x80 callback. That callback's third argument is directly typed TESChildCELL* and updates parentCell. The hidden EBX value is the owner reference in the modified-extra load path; Player_LinkModifiedForm reaches this helper with EBX as a saved-reference-list cursor, so a universal owner-reference interpretation remains Candidate.
int __usercall ActiveEffect_Base_LinkAEList@<eax>(
        EffectNode *activeEffectList,
        TESObjectREFR *linkContext,
        TESChildCELL *targetReference@<ebx>)
{
  EffectNode *i; // esi
  int result; // eax

  for ( i = activeEffectList; i; i = i->next ) /*0x68e037*/
  {
    if ( !i->next && !i->data ) /*0x68e046*/
      break; /*0x68e049*/
    result = i->data->vtbl->link(i->data, linkContext); /*0x68e053*/
  }
  return result; /*0x68e05d*/
}
