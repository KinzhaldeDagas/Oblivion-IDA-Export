//
//
// [2026-10-02 Fallout comparative pass]
// Verified leaf-map update edge: call 0x56059D obtains base-tree (InstanceOf if present) GetLeafBillboardTable and float count; 0x5605AB copies into shared model+0x20 STLSPData. SetLeafMaps count zero preserves old values rather than clearing the table.
//
// [2026-10-03 frond completion] Authoritative void thiscall(model,node). Plugin runtime wrapper corrected from fabricated int return to void and retains exactly one original call. Fade extension executes after original under existing renderer/cache/lifecycle scope; verifies tracked shape remains a direct child of the supplied live node before mutation.
void __thiscall BSTreeModel_Update(BSTreeModel_OblivionLayout_058 *this, BSTreeNode_OblivionLayout_0F0 *treeNode)
{
  BSTreeModel_OblivionLayout_058 *v2; // ebx
  int v3; // edi
  float v4; // ecx
  float x; // eax
  double v6; // st7
  OB_CSpeedTreeRT_010201A0 *speedTree; // ecx
  double LodLevel; // st7
  signed __int16 NumBranchLODLevels; // bp
  unsigned __int16 DiscreteBranchLodLevel; // bx
  const OB_CSpeedTreeRT_010201A0 *v11; // ecx
  int v12; // edi
  int v13; // ebp
  const OB_CSpeedTreeRT_010201A0 *v14; // ecx
  const float *LeafBillboardTable; // eax
  float y; // [esp+4h] [ebp-178h]
  float z; // [esp+8h] [ebp-174h]
  char v18; // [esp+28h] [ebp-154h]
  char v19; // [esp+28h] [ebp-154h]
  char v20; // [esp+28h] [ebp-154h]
  signed __int16 NumLeafLodLevels; // [esp+2Ch] [ebp-150h]
  unsigned int entryCount; // [esp+30h] [ebp-14Ch] BYREF
  float v24; // [esp+34h] [ebp-148h]
  float v25; // [esp+38h] [ebp-144h]
  float v26; // [esp+3Ch] [ebp-140h]
  float v27; // [esp+40h] [ebp-13Ch]
  OB_SpeedTreeGeometryOutput_010201A0 geometry; // [esp+44h] [ebp-138h] BYREF
  unsigned int v29; // [esp+178h] [ebp-4h]

  v2 = this; /*0x56024d*/
  OB_SpeedTreeGeometryOutput_init_010201A0(&geometry); /*0x560257*/
  v3 = 0; /*0x560263*/
  v29 = 0; /*0x560267*/
  entryCount = 0; /*0x56026e*/
  if ( treeNode ) /*0x560272*/
  {
    if ( ((int (__thiscall *)(BSTreeNode_OblivionLayout_0F0 *))treeNode->base.vtbl[1].super.super.super.Destructor)(treeNode) ) /*0x560282*/
    {
      if ( v2->speedTree ) /*0x56028c*/
      {
        if ( bEnableTrees_SpeedTree.value ) /*0x560295*/
        {
          if ( BSTreeManager_GetInstance(1)->treesVisible ) /*0x5602ac*/
          {
            v4 = treeNode->base.members.super.m_worldTransform.pos.y; /*0x5602bc*/
            x = treeNode->base.members.super.m_worldTransform.pos.x; /*0x5602c2*/
            v27 = treeNode->base.members.super.m_worldTransform.pos.z; /*0x5602cb*/
            v26 = v4; /*0x5602d7*/
            v6 = v4; /*0x5602db*/
            speedTree = v2->speedTree; /*0x5602df*/
            y = v6; /*0x5602e2*/
            v25 = x; /*0x5602e6*/
            CSpeedTreeRT__SetTreePosition(speedTree, x, y, v27); /*0x5602f1*/
            if ( BSTreeManager_GetInstance(1)->forceFullLOD )// Verified force-full-LOD consumer: reads BSTreeManager.forceFullLOD at +0x23. True selects CSpeedTreeRT_SetLodLevel(1.0); false calls ComputeLodLevel/GetLodLevel. /*0x560300*/
            {
              CSpeedTreeRT__SetLodLevel(v2->speedTree, 1.0); /*0x56030f*/
              LodLevel = 1.0; /*0x560314*/
            }
            else
            {
              CSpeedTreeRT__ComputeLodLevel(v2->speedTree); /*0x56031b*/
              LodLevel = CSpeedTreeRT__GetLodLevel(v2->speedTree); /*0x560323*/
            }
            v24 = LodLevel; /*0x560328*/
            CSpeedTreeRT__GetBSGeometryLODData(v2->speedTree, &geometry, v24);// 2026-05-26 SpeedTreeOBSE update: supplemental LOD hook calls stock 0x787DC0 first. It logs retained 75000 values, candidate75002 transition-radius resolver output, and retained 75005 transition-factor resolver output. Optional INI gates may rewrite only SGeometry+0x38 from 75002, 75005, or combined candidate output; no stock fields, leaf output, billboard output, frond output, or renderer resources are changed. /*0x56033c*/
            v18 = 0; /*0x560349*/
            if ( geometry.primaryBillboard.active ) /*0x56034e*/
            {
              v18 = 1; /*0x560373*/
              treeNode->base.vtbl[1].super.super.Unk_0F( /*0x56038a*/
                (NiObject *)treeNode,
                (unsigned __int8)(int)geometry.primaryBillboard.alphaTestValue);
            }
            treeNode->base.vtbl[1].super.super.DumpAttributes((NiObject *)treeNode, (void *)v18); /*0x56039b*/
            if ( v24 > 0.0 ) /*0x5603a8*/
            {
              v19 = 0; /*0x5603bf*/
              NumBranchLODLevels = BSTreeModel_GetNumBranchLODLevels(v2); /*0x5603c9*/
              if ( NumBranchLODLevels > 0 ) /*0x5603cf*/
              {
                z = CSpeedTreeRT__GetLodLevel(v2->speedTree); /*0x5603dd*/
                DiscreteBranchLodLevel = CSpeedTreeRT__GetDiscreteBranchLodLevel(v2->speedTree, z); /*0x5603e8*/
                do /*0x560444*/
                {
                  if ( DiscreteBranchLodLevel == (_WORD)v3 ) /*0x5603f5*/
                  {
                    v19 = 1; /*0x560415*/
                    ((void (__stdcall *)(int, _DWORD))treeNode->base.vtbl[1].super.super.DumpChildAttributes)( /*0x56042c*/
                      v3,
                      (unsigned __int8)(int)geometry.branches.alphaTestValue);
                  }
                  else
                  {
                    ((void (__stdcall *)(int, int))treeNode->base.vtbl[1].super.super.DumpChildAttributes)(v3, 0xFF); /*0x56043c*/
                  }
                  ++v3; /*0x56043e*/
                }
                while ( (__int16)v3 < NumBranchLODLevels ); /*0x560444*/
                v2 = this; /*0x560446*/
              }
              treeNode->base.vtbl[1].super.super.Save((NiObject *)treeNode, (NiStream *)v19); /*0x560459*/
              if ( sub_506FD0() ) /*0x56045b*/
              {
                v11 = v2->speedTree; /*0x56046b*/
                v20 = 0; /*0x560470*/
                if ( v11 ) /*0x560475*/
                {
                  NumLeafLodLevels = CSpeedTreeRT__GetNumLeafLodLevels(v11); /*0x560486*/
                  if ( NumLeafLodLevels > 0 ) /*0x56048a*/
                  {
                    if ( geometry.primaryLeaves.active || geometry.secondaryLeaves.active ) /*0x5604a2*/
                    {
                      v12 = 0; /*0x5604a8*/
                      v13 = 0; /*0x5604b3*/
                      do /*0x56056c*/
                      {
                        if ( geometry.primaryLeaves.active && geometry.primaryLeaves.discreteLodLevel == v13 ) /*0x5604c6*/
                        {
                          v20 = 1; /*0x5604e9*/
                          ((void (__thiscall *)(BSTreeNode_OblivionLayout_0F0 *, int, _DWORD))treeNode->base.vtbl[1].super.super.Unk_0E)( /*0x560500*/
                            treeNode,
                            v12,
                            (unsigned __int8)(int)geometry.primaryLeaves.lodFadeOrRockScalar);
                        }
                        else if ( geometry.secondaryLeaves.active && geometry.secondaryLeaves.discreteLodLevel == v13 ) /*0x560513*/
                        {
                          v20 = 1; /*0x560536*/
                          ((void (__thiscall *)(BSTreeNode_OblivionLayout_0F0 *, int, _DWORD))treeNode->base.vtbl[1].super.super.Unk_0E)( /*0x56054d*/
                            treeNode,
                            v12,
                            (unsigned __int8)(int)geometry.secondaryLeaves.lodFadeOrRockScalar);
                        }
                        else
                        {
                          ((void (__thiscall *)(BSTreeNode_OblivionLayout_0F0 *, int, int))treeNode->base.vtbl[1].super.super.Unk_0E)( /*0x56055f*/
                            treeNode,
                            v12,
                            0xFF);
                        }
                        ++v12; /*0x560561*/
                        ++v13; /*0x560564*/
                      }
                      while ( (__int16)v12 < NumLeafLodLevels ); /*0x56056c*/
                    }
                    if ( v2->leafShaderStreamData ) /*0x560572*/
                    {
                      if ( CSpeedTreeRT__InstanceOf(v2->speedTree) ) /*0x56057b*/
                        v14 = CSpeedTreeRT__InstanceOf(v2->speedTree); /*0x560591*/
                      else
                        v14 = v2->speedTree; /*0x56059a*/
                      LeafBillboardTable = CSpeedTreeRT__GetLeafBillboardTable(v14, &entryCount); /*0x56059d*/
                      OB_STLSPData_CopyLeafConstants_010201A0(v2->leafShaderStreamData, LeafBillboardTable, entryCount); /*0x5605ab*/
                    }
                  }
                }
                treeNode->base.vtbl[1].super.super.Compare((NiObject *)treeNode, (NiObject *)v20); /*0x5605bf*/
              }
              else
              {
                treeNode->base.vtbl[1].super.super.Compare((NiObject *)treeNode, 0); /*0x560466*/
              }
            }
            else
            {
              treeNode->base.vtbl[1].super.super.Save((NiObject *)treeNode, 0); /*0x5603b5*/
              treeNode->base.vtbl[1].super.super.Compare((NiObject *)treeNode, 0); /*0x5603b8*/
            }
          }
        }
      }
    }
  }
  v29 = 0xFFFFFFFF; /*0x5605c5*/
  OB_SpeedTreeGeometryOutput_Dtor_010201A0(&geometry); /*0x5605d0*/
}
