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

  niNode = a1;
  if ( a1 || (niNode = arg0->member.niNode) != 0 )
  {
    a1a = (_DWORD *)NiObjectNET_LookupObjectByName(niNode, "BSFaceGenNiNodeBiped");
    v4 = NiObjectNET_LookupObjectByName(niNode, "BSFaceGenNiNodeSkinned");
    v13 = (TESObjectREFR *)v4;
    if ( a1a )
    {
      if ( v4 )
      {
        v5 = NiObjectNET_LookupObjectByName(niNode, "FaceGenHair");
        v6 = NiObjectNET_LookupObjectByName(niNode, off_B10CAC[0]);
        if ( !v6 )
          v6 = NiObjectNET_LookupObjectByName(niNode, off_B10CB0[0]);
        ContainerExtraDataForRef = (ExtraDataList *****)ContainerExtraData_GetContainerExtraDataForRef(arg0);
        EquippedInstance = ContainerExtraData_GetEquippedInstance(ContainerExtraDataForRef, 1, 0);
        v10 = (unsigned int)EquippedInstance;
        if ( EquippedInstance )
        {
          if ( v6 )
            *(_WORD *)(v6 + 0x18) |= 1u;
          if ( v5 )
            *(_WORD *)(v5 + 0x18) |= 1u;
          ContainerEntryExtraData_DestroyDataTable(EquippedInstance, v9);
          FormHeapFree(v10);
        }
        else
        {
          if ( v6 )
            *(_WORD *)(v6 + 0x18) &= ~1u;
          if ( v5 )
            *(_WORD *)(v5 + 0x18) &= ~1u;
        }
        v12 = ContainerExtraData_GetEquippedInstance(ContainerExtraDataForRef, 0, 0);
        if ( v12 )
        {
          *((_WORD *)a1a + 0xC) |= 1u;
          LOWORD(v13->member.childCell.GetChildCell) |= 1u;
          ContainerEntryExtraData_DestroyDataTable(v12, v11);
          FormHeapFree((unsigned int)v12);
        }
        else
        {
          *((_WORD *)a1a + 0xC) &= ~1u;
          LOWORD(v13->member.childCell.GetChildCell) &= ~1u;
        }
      }
    }
  }
}
