// Verified scene-node teardown: temporarily sets cellProcessLevel=1, detaches the cell NiNode from its parent, clears/releases its child array, releases the NiNode and cell extra-data component, then resets cellProcessLevel to 0.
void __thiscall TESObjectCELL_DestroySceneNode(TESObjectCELL *this)
{
  NiNode *niNode; // esi
  NiNode *m_parent; // ecx
  LONG (__stdcall *v4)(volatile LONG *); // ebx
  void (__thiscall ***v5)(_DWORD, int); // ebp
  NiNode *v6; // esi
  int v7; // [esp+8h] [ebp-4h] BYREF

  niNode = this->members.niNode; /*0x4ce325*/
  this->members.cellProcessLevel = 1; /*0x4ce32a*/
  if ( niNode ) /*0x4ce32e*/
  {
    m_parent = niNode->members.super.m_parent; /*0x4ce330*/
    v4 = InterlockedDecrement; /*0x4ce336*/
    if ( m_parent ) /*0x4ce33c*/
    {
      m_parent->vtbl->RemoveObject(m_parent, (NiAVObject **)&v7, (NiAVObject *)niNode); /*0x4ce34c*/
      if ( v7 ) /*0x4ce354*/
      {
        v5 = (void (__thiscall ***)(_DWORD, int))v7; /*0x4ce357*/
        if ( !v4((volatile LONG *)(v7 + 4)) ) /*0x4ce35d*/
          (**v5)(v5, 1); /*0x4ce370*/
      }
    }
    NiTObjectArray_ClearAndRelease(&niNode->members.children); /*0x4ce379*/
    v6 = this->members.niNode; /*0x4ce37e*/
    if ( v6 ) /*0x4ce383*/
    {
      if ( !v4((volatile LONG *)&v6->members) ) /*0x4ce389*/
        v6->vtbl->super.super.super.Destructor((NiRefObject *)v6, 1); /*0x4ce39b*/
      this->members.niNode = 0; /*0x4ce39d*/
    }
    sub_4240C0(&this->members.extraData, 0); /*0x4ce3a9*/
  }
  this->members.cellProcessLevel = 0; /*0x4ce3af*/
}
