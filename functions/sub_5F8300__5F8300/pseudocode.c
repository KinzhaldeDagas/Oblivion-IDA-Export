// Recomputes Quiver Arrow:0/ArrowN visibility from the current equipped-AMMO inventory count. animData selects the perspective/cache and quiverNode may supply an already resolved node.
void __thiscall Actor_RefreshQuiverArrowVisibility(Actor *this, ActorAnimData *animData, NiNode *quiverNode)
{
  EntryData *v4; // eax
  TESForm *type; // edi
  ExtraContainerChanges_Data *ContainerExtraDataForRef; // eax
  NiNode *v7; // edi
  int v8; // eax
  int i; // esi
  char *m_data; // ebp
  int v11; // eax
  signed int ItemCount; // [esp+18h] [ebp-18h]
  BSStringT v13; // [esp+1Ch] [ebp-14h] BYREF
  unsigned int v14; // [esp+2Ch] [ebp-4h]

  if ( this->members.super.process ) /*0x5f832b*/
  {
    v4 = this->members.super.process->GetEquippedAmmoData(this->members.super.process, 1); /*0x5f8341*/
    if ( v4 ) /*0x5f8345*/
    {
      type = v4->type; /*0x5f834b*/
      ItemCount = 0; /*0x5f8350*/
      if ( TESObjectREFR_GetContainer((TESObjectREFR *)this) ) /*0x5f8354*/
      {
        ContainerExtraDataForRef = ContainerExtraData_GetContainerExtraDataForRef((TESObjectREFR *)this); /*0x5f835f*/
        if ( ContainerExtraDataForRef ) /*0x5f8369*/
          ItemCount = ContainerExtraData_GetItemCount(ContainerExtraDataForRef, type); /*0x5f8373*/
      }
      if ( this->members.super.process->Unk_49(this->members.super.process, (UInt32)animData) ) /*0x5f8387*/
      {
        v7 = quiverNode; /*0x5f8391*/
        if ( !quiverNode ) /*0x5f8397*/
          v7 = (NiNode *)this->members.super.process->Unk_49(this->members.super.process, (UInt32)animData); /*0x5f83a9*/
        v8 = (int)v7->vtbl->super.GetObjectByName((NiAVObject *)v7, "Arrow:0"); /*0x5f83b7*/
        if ( v8 ) /*0x5f83bb*/
          *(_WORD *)(v8 + 0x18) &= ~1u;         // Always clear hidden bit 0 on Quiver/Arrow:0 before rebuilding the visible-count mask. /*0x5f83bd*/
        for ( i = 1; i < MEMORY[0xB35588]; ++i ) /*0x5f83c3*/
        {
          v13.m_data = 0; /*0x5f83d0*/
          v13.m_dataLen = 0; /*0x5f83d4*/
          v13.m_bufLen = 0; /*0x5f83d9*/
          v14 = 0; /*0x5f83e9*/
          BSStringT_Static_Format(&v13, "Arrow%d", i); /*0x5f83ed*/
          m_data = v13.m_data; /*0x5f83f4*/
          v11 = (int)v7->vtbl->super.GetObjectByName((NiAVObject *)v7, v13.m_data); /*0x5f8401*/
          if ( v11 ) /*0x5f8405*/
          {                                     // For ArrowN indices 1..iMaxArrowsInQuiver-1: visible when N < current AMMO count, hidden otherwise.
            if ( i < ItemCount ) /*0x5f840b*/
              *(_WORD *)(v11 + 0x18) &= ~1u; /*0x5f8414*/
            else
              *(_WORD *)(v11 + 0x18) |= 1u; /*0x5f840d*/
          }
          v14 = 0xFFFFFFFF; /*0x5f841b*/
          FormHeapFree((unsigned int)m_data); /*0x5f8423*/
          v13.m_data = 0; /*0x5f842b*/
          v13.m_bufLen = 0; /*0x5f842f*/
          v13.m_dataLen = 0; /*0x5f8434*/
        }
      }
    }
  }
}
