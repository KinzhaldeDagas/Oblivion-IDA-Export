?UpdateDecals@BGSDecalManager@@QAAXXZ (.text @ 0x822e8288):
822e8288  mflr r12, lr
822e828c  stw r12, var_8(r1)
822e8290  std r31, var_10(r1)
822e8294  stwu r1, sender_sp(r1)
822e8298  lis r9, _iDecalsThisFrame_BGSDecalManager__2HA@ha
822e829c  lis r8, _iSkinnedDecalsThisFrame_BGSDecalManager__2HA@ha
822e82a0  li r11, 0
822e82a4  li r10, 0
822e82a8  mr r31, r3
822e82ac  stw r11, _iDecalsThisFrame_BGSDecalManager__2HA@l(r9)
822e82b0  stw r10, _iSkinnedDecalsThisFrame_BGSDecalManager__2HA@l(r8)
822e82b4  bl _UpdateSimpleDecals_BGSDecalManager__QAAXXZ
822e82b8  mr r3, r31
822e82bc  bl _UpdateDecalEmitters_BGSDecalManager__QAAXXZ
822e82c0  addi r1, r1, 0x60
822e82c4  lwz r12, var_8(r1)
822e82c8  mtlr lr, r12
822e82cc  ld r31, var_10(r1)
822e82d0  blr lr
