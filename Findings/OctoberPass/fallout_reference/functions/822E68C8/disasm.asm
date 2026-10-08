?UpdateSimpleDecals@BGSDecalManager@@QAAXXZ (.text @ 0x822e68c8):
822e68c8  mflr r12, lr
822e68cc  bl __savegprlr_19
822e68d0  stfd f29, var_88(r1)
822e68d4  stfd f30, var_80(r1)
822e68d8  stfd f31, var_78(r1)
822e68dc  stwu r1, sender_sp(r1)
822e68e0  lwz r11, 0x10(r3)
822e68e4  mr r21, r3
822e68e8  cmplwi cr6, r11, 0
822e68ec  ble cr6, loc_822E6B9C
822e68f0  lis r19, _ms_pkRenderer_NiRenderer__1PAV1_A@ha
822e68f4  lwz r11, _ms_pkRenderer_NiRenderer__1PAV1_A@l(r19)
822e68f8  addi r3, r11, 0x80
822e68fc  bl RtlEnterCriticalSection
822e6900  addi r20, r21, 8
822e6904  lwz r27, 8(r21)
822e6908  cmplwi cr6, r27, 0
822e690c  beq cr6, loc_822E6B90
822e6910  lis r11, __real_3e800000@ha
822e6914  lis r7, __real_3f800000@ha
822e6918  lis r6, __real_00000000@ha
822e691c  lis r8, aDecalPlacingSi@ha
822e6920  lis r9, aDecalDecalFail@ha
822e6924  lfs f29, __real_3e800000@l(r11)
822e6928  lis r10, aDecalDecalSucc@ha
822e692c  lis r11, _bDebugDecals_BGSDecalManager__2V__SettingT_VINISettingCollection____A@ha
822e6930  lfs f30, __real_3f800000@l(r7)
822e6934  lfs f31, __real_00000000@l(r6)
822e6938  li r23, 0
822e693c  li r22, 1
822e6940  lis r30, _iDecalDebugFlags_BGSDecalManager__2HA@ha
822e6944  lis r28, _iDecalCount_BGSDecalManager__2HA@ha
822e6948  addi r26, r8, 0x6978 # aDecalPlacingSi
822e694c  addi r25, r9, 0x694C # aDecalDecalFail
822e6950  addi r24, r10, 0x6920 # aDecalDecalSucc
822e6954  addi r29, r11, _bDebugDecals_BGSDecalManager__2V__SettingT_VINISettingCollection____A@l
822e6958  addi r11, r27, 8
822e695c  stw r27, 0x130+var_E0(r1)
822e6960  lwz r27, 0(r27)
822e6964  lwz r31, 0(r11)
822e6968  cmplwi cr6, r31, 0
822e696c  beq cr6, loc_822E6B88
822e6970  lbz r11, 0x1A(r31)
822e6974  cmplwi cr6, r11, 0
822e6978  beq cr6, loc_822E698C
822e697c  mr r4, r31
822e6980  mr r3, r21
822e6984  bl _IssueDecalOcclusionQuery_BGSDecalManager__QAAXPAVBSTempEffectSimpleDecal___Z
822e6988  stb r23, 0x1A(r31)
822e698c  lwz r11, 0x1C(r31)
822e6990  cmplwi cr6, r11, 0
822e6994  beq cr6, loc_822E69D4
822e6998  mr r3, r31
822e699c  bl _CheckOcclusionQueryResults_BSTempEffectSimpleDecal__QAA_NXZ
822e69a0  clrlwi r11, r3, 24
822e69a4  cmplwi cr6, r11, 0
822e69a8  beq cr6, loc_822E69E8
822e69ac  lwz r11, 0x24(r31)
822e69b0  cmplwi cr6, r11, 0
822e69b4  lbz r11, (_bDebugDecals_BGSDecalManager__2V__SettingT_VINISettingCollection____A.uValue - 0x82FED204)(r29)
822e69b8  ble cr6, loc_822E6AA0
822e69bc  cmplwi cr6, r11, 0
822e69c0  beq cr6, loc_822E69D4
822e69c4  lwz r11, 0x10C(r31)
822e69c8  mr r3, r24
822e69cc  lwz r4, 8(r11)
822e69d0  bl _GetCreatureLipSynchStartTime_BaseProcess__UAAIXZ
822e69d4  lwz r11, 0(r31)
822e69d8  mr r3, r31
822e69dc  lwz r10, 0x8C(r11)
822e69e0  mtctr ctr, r10
822e69e4  bctrl ctr
822e69e8  lbz r11, 0x19(r31)
822e69ec  cmplwi cr6, r11, 0
822e69f0  beq cr6, loc_822E6A08
822e69f4  lbz r11, 0x18(r31)
822e69f8  cmplwi cr6, r11, 0
822e69fc  bne cr6, loc_822E6A08
822e6a00  mr r3, r31
822e6a04  bl _FinalizeGeometry_BSTempEffectSimpleDecal__QAA_NXZ
822e6a08  lbz r11, 0x18(r31)
822e6a0c  cmplwi cr6, r11, 0
822e6a10  beq cr6, loc_822E6B88
822e6a14  lbz r11, 0x2D(r31)
822e6a18  cmplwi cr6, r11, 0
822e6a1c  beq cr6, loc_822E6AC0
822e6a20  lwz r10, _iDecalCount_BGSDecalManager__2HA@l(r28)
822e6a24  lbz r11, (_bDebugDecals_BGSDecalManager__2V__SettingT_VINISettingCollection____A.uValue - 0x82FED204)(r29)
822e6a28  addi r4, r10, 1
822e6a2c  cmplwi cr6, r11, 0
822e6a30  stw r4, _iDecalCount_BGSDecalManager__2HA@l(r28)
822e6a34  beq cr6, loc_822E6A48
822e6a38  lwz r11, 0x10C(r31)
822e6a3c  mr r3, r26
822e6a40  lwz r5, 8(r11)
822e6a44  bl _GetCreatureLipSynchStartTime_BaseProcess__UAAIXZ
822e6a48  lwz r11, _iDecalDebugFlags_BGSDecalManager__2HA@l(r30)
822e6a4c  clrlwi r10, r11, 31
822e6a50  cmpwi cr6, r10, 0
822e6a54  beq cr6, loc_822E6A7C
822e6a58  stfs f31, 0x130+var_D0(r1)
822e6a5c  li r5, 1
822e6a60  stfs f30, 0x130+var_CC(r1)
822e6a64  addi r4, r1, 0x130+var_D0
822e6a68  stfs f31, 0x130+var_C8(r1)
822e6a6c  mr r3, r31
822e6a70  stfs f30, 0x130+var_C4(r1)
822e6a74  bl _CreateDebugBox_BSTempEffectSimpleDecal__QAAXAAVNiColorA___N_Z
822e6a78  lwz r11, _iDecalDebugFlags_BGSDecalManager__2HA@l(r30)
822e6a7c  rlwinm r11, r11, 0,30,30
822e6a80  cmpwi cr6, r11, 0
822e6a84  beq cr6, loc_822E6B2C
822e6a88  stfs f31, 0x130+var_C0(r1)
822e6a8c  addi r4, r1, 0x130+var_C0
822e6a90  stfs f30, 0x130+var_BC(r1)
822e6a94  stfs f31, 0x130+var_B8(r1)
822e6a98  stfs f29, 0x130+var_B4(r1)
822e6a9c  b loc_822E6B20
822e6aa0  cmplwi cr6, r11, 0
822e6aa4  beq cr6, loc_822E6AB8
822e6aa8  lwz r11, 0x10C(r31)
822e6aac  mr r3, r25
822e6ab0  lwz r4, 8(r11)
822e6ab4  bl _GetCreatureLipSynchStartTime_BaseProcess__UAAIXZ
822e6ab8  stb r22, 0x18(r31)
822e6abc  b loc_822E69E8
822e6ac0  lwz r11, _iDecalDebugFlags_BGSDecalManager__2HA@l(r30)
822e6ac4  rlwinm r10, r11, 0,27,27
822e6ac8  cmpwi cr6, r10, 0
822e6acc  beq cr6, loc_822E6B2C
822e6ad0  clrlwi r10, r11, 31
822e6ad4  cmpwi cr6, r10, 0
822e6ad8  beq cr6, loc_822E6B00
822e6adc  stfs f30, 0x130+var_B0(r1)
822e6ae0  li r5, 1
822e6ae4  stfs f31, 0x130+var_AC(r1)
822e6ae8  addi r4, r1, 0x130+var_B0
822e6aec  stfs f31, 0x130+var_A8(r1)
822e6af0  mr r3, r31
822e6af4  stfs f30, 0x130+var_A4(r1)
822e6af8  bl _CreateDebugBox_BSTempEffectSimpleDecal__QAAXAAVNiColorA___N_Z
822e6afc  lwz r11, _iDecalDebugFlags_BGSDecalManager__2HA@l(r30)
822e6b00  rlwinm r11, r11, 0,30,30
822e6b04  cmpwi cr6, r11, 0
822e6b08  beq cr6, loc_822E6B2C
822e6b0c  stfs f30, 0x130+var_A0(r1)
822e6b10  addi r4, r1, 0x130+var_A0
822e6b14  stfs f31, 0x130+var_9C(r1)
822e6b18  stfs f31, 0x130+var_98(r1)
822e6b1c  stfs f29, 0x130+var_94(r1)
822e6b20  li r5, 0
822e6b24  mr r3, r31
822e6b28  bl _CreateDebugBox_BSTempEffectSimpleDecal__QAAXAAVNiColorA___N_Z
822e6b2c  addi r5, r1, 0x130+var_E0
822e6b30  mr r4, r20
822e6b34  addi r3, r1, 0x130+var_DC
822e6b38  bl _RemovePos___NiTPointerListBase_V__NiTPointerAllocator_I__V__NiPointer_VNiAVObject______QAA_AV__NiPointer_VNiAVObject____AAPAX_Z
822e6b3c  lwz r3, 0x130+var_DC(r1)
822e6b40  cmplwi cr6, r3, 0
822e6b44  beq cr6, loc_822E6B88
822e6b48  addi r11, r3, 4
822e6b4c  mfmsr r9
822e6b50  mtmsree r13, 1
822e6b54  lwarx r10, 0, r11
822e6b58  addi r10, r10, -1
822e6b5c  stwcx. r10, 0, r11
822e6b60  mtmsree r9, 1
822e6b64  bne cr0, loc_822E6B4C
822e6b68  mr r11, r10
822e6b6c  lwsync
822e6b70  cmplwi cr6, r10, 0
822e6b74  bne cr6, loc_822E6B88
822e6b78  lwz r11, 0(r3)
822e6b7c  lwz r10, 4(r11)
822e6b80  mtctr ctr, r10
822e6b84  bctrl ctr
822e6b88  cmplwi cr6, r27, 0
822e6b8c  bne cr6, loc_822E6958
822e6b90  lwz r11, _ms_pkRenderer_NiRenderer__1PAV1_A@l(r19)
822e6b94  addi r3, r11, 0x80
822e6b98  bl RtlLeaveCriticalSection
822e6b9c  addi r1, r1, 0x130
822e6ba0  lfd f29, var_88(r1)
822e6ba4  lfd f30, var_80(r1)
822e6ba8  lfd f31, var_78(r1)
822e6bac  b __restgprlr_19
