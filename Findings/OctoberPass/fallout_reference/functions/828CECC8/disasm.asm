?GetRenderPasses@GeometryDecalShaderProperty@@UAAPAVRenderPassArray@BSShaderProperty@@PAVNiGeometry@@HAAGIPAVBSShaderAccumulator@@_N@Z (.text @ 0x828cecc8):
828cecc8  mflr r12, lr
828ceccc  bl __savegprlr_26
828cecd0  stwu r1, sender_sp(r1)
828cecd4  mr r31, r3
828cecd8  mr r29, r4
828cecdc  mr r27, r5
828cece0  mr r26, r7
828cece4  cmplwi cr6, r7, 7
828cece8  bne cr6, loc_828CECF8
828cecec  li r3, 0
828cecf0  addi r1, r1, 0xC0
828cecf4  b __restgprlr_26
828cecf8  lis r10, _pShadowSceneNode_BSShaderManager__1PAPAVShadowSceneNode__A@ha
828cecfc  lwz r11, 0x20(r29)
828ced00  lfs f13, 0x34(r31)
828ced04  li r28, 1
828ced08  cmplwi cr6, r11, 0
828ced0c  lwz r10, _pShadowSceneNode_BSShaderManager__1PAPAVShadowSceneNode__A@l(r10)
828ced10  lwz r9, 0x214(r10)
828ced14  lwz r8, 0x218(r10)
828ced18  lwz r7, 0x21C(r10)
828ced1c  stw r9, 0xC0+var_60(r1)
828ced20  stw r8, 0xC0+var_5C(r1)
828ced24  stw r7, 0xC0+var_58(r1)
828ced28  bne cr6, loc_828CED34
828ced2c  lis r11, _NullBoundS_NiAVObject__1VNiBound__A@ha
828ced30  addi r11, r11, 0x5088 # _NullBoundS_NiAVObject__1VNiBound__A
828ced34  lwz r10, 0(r11)
828ced38  addi r9, r1, 0xC0+var_50
828ced3c  lwz r8, 4(r11)
828ced40  lfs f0, 0xC0+var_5C(r1)
828ced44  lwz r7, 8(r11)
828ced48  lfs f12, 0xC0+var_58(r1)
828ced4c  lwz r6, 0xC(r11)
828ced50  lfs f11, 0xC0+var_60(r1)
828ced54  lis r11, _fSkinnedDecalLODEnd_BSShaderManager__2MA@ha
828ced58  stw r10, 0(r9)
828ced5c  li r30, 0
828ced60  stw r8, 4(r9)
828ced64  stw r7, 8(r9)
828ced68  stw r6, 0xC(r9)
828ced6c  lfs f10, 0xC0+var_48(r1)
828ced70  lfs f9, 0xC0+var_50(r1)
828ced74  lfs f8, 0xC0+var_4C(r1)
828ced78  fsubs f7, f8, f0
828ced7c  fsubs f6, f10, f12
828ced80  lfs f5, 0xC0+var_44(r1)
828ced84  fmuls f4, f7, f7
828ced88  fsubs f3, f9, f11
828ced8c  fmadds f2, f6, f6, f4
828ced90  fmadds f1, f3, f3, f2
828ced94  fsqrts f0, f1
828ced98  fsubs f11, f0, f5
828ced9c  stfs f11, 0x34(r31)
828ceda0  lfs f0, _fSkinnedDecalLODEnd_BSShaderManager__2MA@l(r11)
828ceda4  fcmpu cr6, f11, f13
828ceda8  beq cr6, loc_828CEDD4
828cedac  fcmpu cr6, f11, f0
828cedb0  bge cr6, loc_828CEDBC
828cedb4  fcmpu cr6, f13, f0
828cedb8  bge cr6, loc_828CEDCC
828cedbc  fcmpu cr6, f11, f0
828cedc0  blt cr6, loc_828CEDD4
828cedc4  fcmpu cr6, f13, f0
828cedc8  bge cr6, loc_828CEDD4
828cedcc  stw r30, 0x38(r31)
828cedd0  lfs f0, _fSkinnedDecalLODEnd_BSShaderManager__2MA@l(r11)
828cedd4  addic. r11, r29, 0xC0
828cedd8  beq cr0, loc_828CEE58
828ceddc  lis r10, __real_3f800000@ha
828cede0  lwz r11, 8(r11)
828cede4  cmplwi cr6, r11, 0
828cede8  lfs f1, __real_3f800000@l(r10)
828cedec  beq cr6, loc_828CEE50
828cedf0  lis r10, _fDecalLODEnd_BSShaderManager__2MA@ha
828cedf4  lfs f1, 0x3C(r11)
828cedf8  lis r9, __real_00000000@ha
828cedfc  lfs f12, _fDecalLODEnd_BSShaderManager__2MA@l(r10)
828cee00  lfs f13, __real_00000000@l(r9)
828cee04  fcmpu cr6, f12, f13
828cee08  ble cr6, loc_828CEE1C
828cee0c  fcmpu cr6, f11, f0
828cee10  blt cr6, loc_828CEE1C
828cee14  mr r28, r30
828cee18  b loc_828CEE50
828cee1c  lis r11, _fSkinnedDecalLODStartFade_BSShaderManager__2MA@ha
828cee20  lfs f12, _fSkinnedDecalLODStartFade_BSShaderManager__2MA@l(r11)
828cee24  fcmpu cr6, f12, f13
828cee28  ble cr6, loc_828CEE50
828cee2c  fcmpu cr6, f0, f13
828cee30  ble cr6, loc_828CEE50
828cee34  fcmpu cr6, f11, f12
828cee38  blt cr6, loc_828CEE50
828cee3c  fcmpu cr6, f11, f0
828cee40  bge cr6, loc_828CEE50
828cee44  fsubs f13, f11, f0
828cee48  fsubs f12, f12, f0
828cee4c  fdivs f1, f13, f12
828cee50  mr r3, r31
828cee54  bl _SetAlpha_BSShaderProperty__QAAXM_Z
828cee58  lwz r11, 0x38(r31)
828cee5c  cmpw cr6, r11, r27
828cee60  beq cr6, loc_828CEED4
828cee64  li r4, 1
828cee68  mr r3, r31
828cee6c  bl _CheckCreateRenderPassArray_BSShaderProperty__QAAXH_Z
828cee70  lwz r10, 0x3C(r31)
828cee74  clrlwi r11, r28, 24
828cee78  cmplwi cr6, r11, 0
828cee7c  stw r30, 0x10(r10)
828cee80  beq cr6, loc_828CECEC
828cee84  lwz r11, 0xE0(r29)
828cee88  li r10, 0
828cee8c  lwz r3, 0x3C(r31)
828cee90  li r9, 0
828cee94  cmpwi cr6, r11, 0
828cee98  li r8, 0
828cee9c  li r7, 0
828ceea0  li r6, 1
828ceea4  mr r4, r29
828ceea8  beq cr6, loc_828CEEBC
828ceeac  li r5, 0x1FF
828ceeb0  stw r30, 0xC0+var_6C(r1)
828ceeb4  bl _Add_RenderPassArray_BSShaderProperty__QAAXPAVNiGeometry__G_NEPAVShadowSceneLight__222_Z
828ceeb8  b loc_828CEEC8
828ceebc  li r5, 0x1FE
828ceec0  stw r30, 0xC0+var_6C(r1)
828ceec4  bl _Add_RenderPassArray_BSShaderProperty__QAAXPAVNiGeometry__G_NEPAVShadowSceneLight__222_Z
828ceec8  slwi r11, r26, 8
828ceecc  or r10, r11, r27
828ceed0  stw r10, 0x38(r31)
828ceed4  lwz r3, 0x3C(r31)
828ceed8  addi r1, r1, 0xC0
828ceedc  b __restgprlr_26
