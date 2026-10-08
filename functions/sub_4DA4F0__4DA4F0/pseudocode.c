void __thiscall sub_4DA4F0(_DWORD *this)
{
  NiNode *v2; // edi
  BSExtraDataVtbl *LastFinishedSequence; // eax
  NiAVObject *ChildAtIndex; // eax
  NiControllerManager *v5; // eax
  NiControllerSequence *SequenceByName; // eax
  int v7; // eax
  int v8; // ebp
  int v9; // eax
  NiControllerManager *v10; // eax
  NiControllerManager *v11; // esi
  NiControllerSequence *v12; // edi
  NiControllerSequence *v13; // ebx
  float *v14; // edi
  int v15; // ebp
  NiRTTI *v16; // eax
  char v17; // al
  NiControllerManager *v18; // eax

  v2 = (NiNode *)*(this + 0xF); /*0x4da4f5*/
  if ( v2 ) /*0x4da4fa*/
  {
    LastFinishedSequence = ExtraDataList_GetLastFinishedSequence((ExtraDataList *)(this + 0x11)); /*0x4da503*/
    if ( LastFinishedSequence /*0x4da57b*/
      && !CRT_StricmpLocaleDispatch((const char *)LastFinishedSequence, AnimGroupInfo_Unequip.name)
      || v2->members.children.end
      && *v2->members.children.data
      && NiNode_GetChildAtIndex(v2, 0)->members.super.m_controller
      && (ChildAtIndex = NiNode_GetChildAtIndex(v2, 0),
          (v5 = (NiControllerManager *)NiRTTI_Cast(
                                         (BSStringT *)&stru_B3CAC0,
                                         (NiObject *)ChildAtIndex->members.super.m_controller)) != 0)
      && (SequenceByName = NiControllerManager_FindSequenceByName(v5, AnimGroupInfo_Unequip.name)) != 0
      && *((_DWORD *)SequenceByName + 0x11)
      || sub_480820(v2) )
    {
      v7 = (*(int (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)*(this + 7) + 0x114))(*(this + 7), this); /*0x4da593*/
      (*(void (__thiscall **)(_DWORD *, int))(*this + 0x150))(this, v7); /*0x4da5a0*/
      (*(void (__thiscall **)(_DWORD *))(*this + 0x148))(this); /*0x4da5ac*/
    }
  }
  v8 = *(this + 0xF); /*0x4da5ae*/
  if ( v8 )
  {
    if ( *(_WORD *)(v8 + 0xB6) ) /*0x4da5b9*/
    {
      v9 = **(_DWORD **)(v8 + 0xB0); /*0x4da5cd*/
      if ( v9 ) /*0x4da5d1*/
      {
        if ( *(_DWORD *)(v9 + 0xC) ) /*0x4da5d7*/
        {
          v10 = (NiControllerManager *)NiRTTI_Cast((BSStringT *)&stru_B3CAC0, *(NiObject **)(v9 + 0xC)); /*0x4da5ea*/
          v11 = v10; /*0x4da5ef*/
          if ( v10 ) /*0x4da5f6*/
          {
            v12 = NiControllerManager_FindSequenceByName(v10, *(const char **)animGroupInfos_ptr); /*0x4da60b*/
            v13 = NiControllerManager_FindSequenceByName(v11, off_B10328); /*0x4da622*/
            NiControllerManager_DeactivateAllSequences(v11, 0.0); /*0x4da624*/
            if ( v12 || v13 ) /*0x4da62f*/
            {
              *((_WORD *)v11 + 4) |= 8u; /*0x4da68b*/
              if ( v12 ) /*0x4da692*/
              {
                if ( !*((_DWORD *)v12 + 0x11) ) /*0x4da694*/
                  BSAnimGroupSequence_Activate(v12, 0, 0, 1.0, 0.0, 0); /*0x4da6b1*/
                *((float *)v12 + 0x12) = -flt_A7DEB4; /*0x4da6c1*/
                NiAVObject_UpdateNiAVObject((NiAVObject *)v8, *((float *)v12 + 0xB), 1); /*0x4da6cc*/
              }
              if ( v13 ) /*0x4da6d3*/
              {
                if ( !*((_DWORD *)v13 + 0x11) ) /*0x4da6d5*/
                  BSAnimGroupSequence_Activate(v13, 0, 0, 1.0, 0.0, 0); /*0x4da6f2*/
                *((float *)v13 + 0x12) = -flt_A7DEB4; /*0x4da702*/
                NiAVObject_UpdateNiAVObject((NiAVObject *)v8, *((float *)v13 + 0xB), 1); /*0x4da70d*/
              }
            }
            else
            {
              *((_WORD *)v11 + 4) |= 8u; /*0x4da631*/
              v14 = **((float ***)v11 + 0x10); /*0x4da639*/
              if ( v14 ) /*0x4da63d*/
              {
                BSAnimGroupSequence_Activate((BSAnimGroupSequence *)v14, 0, 0, 1.0, 0.0, 0); /*0x4da653*/
                v14[0x12] = -flt_A7DEB4; /*0x4da662*/
                NiAVObject_UpdateNiAVObject((NiAVObject *)v8, v14[0xB], 1); /*0x4da66e*/
              }
              NiControllerManager_DeactivateAllSequences(v11, 0.0); /*0x4da67b*/
              *((_WORD *)v11 + 4) &= ~8u; /*0x4da680*/
            }
          }
        }
      }
    }
    v15 = *(_DWORD *)(v8 + 0xC); /*0x4da713*/
    if ( v15 )
    {
      v16 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)v15 + 4))(v15); /*0x4da722*/
      if ( v16 ) /*0x4da726*/
      {
        while ( v16 != &stru_B3CAC0 ) /*0x4da72d*/
        {
          v16 = v16->parent; /*0x4da72f*/
          if ( !v16 ) /*0x4da734*/
            goto LABEL_34; /*0x4da734*/
        }
        v17 = 1; /*0x4da751*/
      }
      else
      {
LABEL_34:
        v17 = 0; /*0x4da736*/
      }
      v18 = v17 != 0 ? (NiControllerManager *)v15 : 0;
      if ( v18 ) /*0x4da73e*/
        NiControllerManager_DeactivateAllSequences(v18, 0.0); /*0x4da748*/
    }
  }
}
