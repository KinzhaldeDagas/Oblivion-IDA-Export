?GetDecalRefs@ExtraDataList@@QAAPAV?$BSSimpleList@PAUREF_DECAL_DATA@@@@XZ (.text @ 0x822748b0):
822748b0  mflr r12, lr
822748b4  stw r12, var_8(r1)
822748b8  stwu r1, sender_sp(r1)
822748bc  li r4, 0x57
822748c0  bl _GetExtraData_BaseExtraList__QAAPAVBSExtraData__E_Z
822748c4  cmplwi cr6, r3, 0
822748c8  addi r3, r3, 0xC
822748cc  bne cr6, loc_822748D4
822748d0  li r3, 0
822748d4  addi r1, r1, 0x60
822748d8  lwz r12, var_8(r1)
822748dc  mtlr lr, r12
822748e0  blr lr
