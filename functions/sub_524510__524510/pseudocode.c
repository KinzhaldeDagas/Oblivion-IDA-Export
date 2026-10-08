void __stdcall sub_524510(TESObjectREFR *arg0, _DWORD *a1)
{
  _DWORD *niNode; // esi
  int v4; // eax
  int v5; // ebp
  int v6; // edi
  ExtraDataList *****ContainerExtraDataForRef; // ebx
  unsigned int *EquippedInstance; // eax
  int v9; // edx
  unsigned int v10; // esi
  int v11; // edx
  unsigned int *v12; // esi
  TESObjectREFR *v13; // [esp+10h] [ebp+4h]
  _DWORD *a1a; // [esp+14h] [ebp+8h]

  niNode = a1; /*0x524517*/
  if ( a1 || (niNode = arg0->member.niNode) != 0 ) /*0x524528*/
  {
    a1a = (_DWORD *)NiObjectNET_LookupObjectByName(niNode, "BSFaceGenNiNodeBiped"); /*0x524542*/
    v4 = NiObjectNET_LookupObjectByName(niNode, "BSFaceGenNiNodeSkinned"); /*0x524546*/
    v13 = (TESObjectREFR *)v4; /*0x524550*/
    if ( a1a ) /*0x524554*/
    {
      if ( v4 ) /*0x52455c*/
      {
        v5 = NiObjectNET_LookupObjectByName(niNode, "FaceGenHair"); /*0x52456e*/
        v6 = NiObjectNET_LookupObjectByName(niNode, off_B10CAC[0]); /*0x52457c*/
        if ( !v6 ) /*0x524583*/
          v6 = NiObjectNET_LookupObjectByName(niNode, off_B10CB0[0]); /*0x524595*/
        ContainerExtraDataForRef = (ExtraDataList *****)ContainerExtraData_GetContainerExtraDataForRef(arg0); /*0x5245b0*/
        EquippedInstance = ContainerExtraData_GetEquippedInstance(ContainerExtraDataForRef, 1, 0); /*0x5245b8*/
        v10 = (unsigned int)EquippedInstance; /*0x5245bd*/
        if ( EquippedInstance ) /*0x5245c1*/
        {
          if ( v6 ) /*0x5245c5*/
            *(_WORD *)(v6 + 0x18) |= 1u; /*0x5245c7*/
          if ( v5 ) /*0x5245ce*/
            *(_WORD *)(v5 + 0x18) |= 1u; /*0x5245d0*/
          ContainerEntryExtraData_DestroyDataTable(EquippedInstance, v9); /*0x5245d7*/
          FormHeapFree(v10); /*0x5245dd*/
        }
        else
        {
          if ( v6 ) /*0x5245e9*/
            *(_WORD *)(v6 + 0x18) &= ~1u; /*0x5245eb*/
          if ( v5 ) /*0x5245f3*/
            *(_WORD *)(v5 + 0x18) &= ~1u; /*0x5245f5*/
        }
        v12 = ContainerExtraData_GetEquippedInstance(ContainerExtraDataForRef, 0, 0); /*0x524606*/
        if ( v12 ) /*0x52460f*/
        {
          *((_WORD *)a1a + 0xC) |= 1u; /*0x524616*/
          LOWORD(v13->member.childCell.GetChildCell) |= 1u; /*0x52461e*/
          ContainerEntryExtraData_DestroyDataTable(v12, v11); /*0x524624*/
          FormHeapFree((unsigned int)v12); /*0x52462a*/
        }
        else
        {
          *((_WORD *)a1a + 0xC) &= ~1u; /*0x52463e*/
          LOWORD(v13->member.childCell.GetChildCell) &= ~1u; /*0x524646*/
        }
      }
    }
  }
}
