// Removes every nonterminated active effect whose effectCode matches. If casterFilterOrNull is nonnull, only effects from that caster are removed; null matches all casters. Native ABI is thiscall with two stack args and void return; prior ESI/ST0/userpurge inputs were decompiler artifacts.
void __thiscall MagicTarget_RemoveActiveEffectsByCode(
        MagicTarget *this,
        unsigned int effectCode,
        MagicCaster *casterFilterOrNull)
{
  int v3; // esi
  double v4; // st7
  EffectNode *v6; // ebp
  EffectNode *v7; // edi
  EffectNode *next; // ecx
  ActiveEffect *data; // esi
  bool v10; // al
  int *v11; // eax
  int v12; // [esp-4h] [ebp-14h]

  v6 = this->vtbl->GetActiveEffectList(this); /*0x6a24bd*/
  v7 = v6; /*0x6a24c1*/
  if ( v6 ) /*0x6a24c3*/
  {
    v12 = v3; /*0x6a24c5*/
    do /*0x6a24c6*/
    {
      next = v7->next; /*0x6a24c6*/
      if ( !next && !v7->data ) /*0x6a24cf*/
        return; /*0x6a24cf*/
      data = v7->data; /*0x6a24d7*/
      if ( casterFilterOrNull ) /*0x6a24d9*/
        v10 = casterFilterOrNull == data->members.caster; /*0x6a24de*/
      else
        v10 = 1; /*0x6a24e3*/
      if ( data && !data->members.bTerminated ) /*0x6a24e9*/
      {
        if ( data->members.effectItem->effectCode == effectCode && v10 ) /*0x6a24fc*/
        {
          v4 = ActiveEffect_Base_Remove(data, (char)v6, v4, 1);// Verified immediate removal path for matching effect codes: mark/flush termination, unlink from EffectNode via BSSimpleList_Remove, call target PostRemoveEffect, then destroy the ActiveEffect. The caster filter is optional; null matches all casters. /*0x6a2502*/
          v11 = (int *)((int (__thiscall *)(MagicTarget *, ActiveEffect *))this->vtbl->GetActiveEffectList)(this, data); /*0x6a250f*/
          BSSimpleList_Remove(v11, v12); /*0x6a2513*/
          this->vtbl->PostRemoveEffect(this, data); /*0x6a2520*/
          ((void (__thiscall *)(ActiveEffect *, int))data->vtbl->scalarDeletingDestructor)(data, 1); /*0x6a252a*/
          if ( v7 != v6 ) /*0x6a252e*/
            v7 = v6->next; /*0x6a2530*/
          continue; /*0x6a2533*/
        }
        next = v7->next; /*0x6a2535*/
      }
      v6 = v7; /*0x6a2538*/
      v7 = next; /*0x6a253a*/
    }
    while ( v7 ); /*0x6a24c6*/
  }
}
