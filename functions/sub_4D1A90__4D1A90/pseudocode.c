// Verified per-cell tree-model 3D cleanup (not billboard construction): iterates TREE references, casts current NiNode to RTTI BSTreeNode, follows BSTreeNode.treeModel (+0xDC), and checks BSTreeModel.trunkLength (+0x50). Removes the reference 3D and clears the probable HasTemp3D flag when the node/model data is invalid or trunkLength lies in [lowerBound,upperBound). Length units are Unknown.
void __thiscall TESObjectCELL_RemoveTreeModel3DByTrunkLength(TESObjectCELL *this, float lowerBound, float upperBound)
{
  ObjectListEntry *p_objectList; // ebp
  TESObjectREFR *refr; // edi
  NiObject *v6; // eax
  NiObject *v7; // esi

  sub_496EA0((char *)&unk_B35C80, this); /*0x4d1a9a*/
  p_objectList = &this->members.objectList; /*0x4d1a9f*/
  if ( this != (TESObjectCELL *)0xFFFFFFB8 ) /*0x4d1aa4*/
  {
    do /*0x4d1b7f*/
    {
      refr = p_objectList->refr; /*0x4d1ab0*/
      if ( p_objectList->refr ) /*0x4d1ab0*/
      {
        if ( refr->vtbl->GetBaseForm(p_objectList->refr) ) /*0x4d1ac5*/
        {
          if ( refr->vtbl->GetBaseForm(refr)->member.type == kFormType_Tree ) /*0x4d1adf*/
          {
            v6 = (NiObject *)refr->vtbl->GetNiNode(refr); /*0x4d1aef*/
            if ( !v6 /*0x4d1b61*/
              || (v7 = NiRTTI_Cast((BSStringT *)&MEMORY[0xB3A02C], v6)) == 0
              || !v7->__vftable[2].GetType(v7)
              || !v7->__vftable[2].GetType(v7)[1].parent
              || lowerBound <= (double)*(float *)&v7->__vftable[2].GetType(v7)[0xA].name
              && upperBound > (double)*(float *)&v7->__vftable[2].GetType(v7)[0xA].name )// Verified data flow: BSTreeNode's virtual getter at vtable +0x9C returns its BSTreeModel; the value tested at returned model+0x50 is BSTreeModel.trunkLength, assigned by BSTreeModel_InitFromBase from CSpeedTreeRT_GetTrunkLength.
            {
              ((void (__thiscall *)(TESObjectREFR *, _DWORD))refr->vtbl->Set3D)(refr, 0);// Verified action for selected/invalid tree model: TESObjectREFR::Set3D(reference, nullptr) removes the current 3D; the following call clears the probable HasTemp3D flag. /*0x4d1b6f*/
              TESObjectREFR_SetTemp3DFlag(refr, 0);// Verified: after removing a BSTreeNode 3D selected by invalid-node checks or the trunkLength interval, clears the probable HasTemp3D flag. /*0x4d1b75*/
            }
          }
        }
      }
      p_objectList = p_objectList->next; /*0x4d1b7a*/
    }
    while ( p_objectList ); /*0x4d1b7f*/
  }
  sub_496F50(&unk_B35C80, this); /*0x4d1b8d*/
}
