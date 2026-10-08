// Verified post-link entry iterates the target ActiveEffect EffectNode list and dispatches each ActiveEffect virtual +0x1C with the target/reference linkContext. TESObjectREFR_PostLinkModifiedExtraList calls this for a linked NonActorMagicTarget list (null context); actor/player post-link paths pass their reference context.
int __cdecl ActiveEffect_Base_PostLinkAEList(EffectNode *activeEffectList, TESObjectREFR *linkContext)
{
  EffectNode *i; // esi
  int result; // eax
  TESObjectREFRVtbl *vtbl; // ecx

  for ( i = activeEffectList; i; i = i->next ) /*0x68e06c*/
  {
    if ( !i->next && !i->data ) /*0x68e076*/
      break; /*0x68e079*/
    result = i->data->vtbl->postLink(i->data, linkContext); /*0x68e083*/
  }
  if ( linkContext ) /*0x68e08e*/
  {
    vtbl = linkContext[1].vtbl; /*0x68e090*/
    if ( vtbl ) /*0x68e095*/
      return (*((int (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *, int, int, int))vtbl->super.super.InitializeComponent /*0x68e0a6*/
              + 0x10B))(
               vtbl,
               linkContext,
               1,
               1,
               1);
  }
  return result; /*0x68e0a8*/
}
