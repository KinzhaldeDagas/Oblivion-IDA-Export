?UpdateDecalEmitters@BGSDecalManager@@QAAXXZ (.text @ 0x822e8208):
822e8208  mflr r12, lr
822e820c  bl __savegprlr_28
822e8210  stwu r1, sender_sp(r1)
822e8214  lwz r30, 0x14(r3)
822e8218  addi r29, r3, 0x14
822e821c  cmplwi cr6, r30, 0
822e8220  beq cr6, loc_822E8280
822e8224  lis r11, _s_Instance_MemoryManager__1V1_A@ha
822e8228  addi r28, r11, 0x7A8 # _s_Instance_MemoryManager__1V1_A
822e822c  addi r11, r30, 8
822e8230  stw r30, 0x80+var_30(r1)
822e8234  lwz r30, 0(r30)
822e8238  lwz r31, 0(r11)
822e823c  cmplwi cr6, r31, 0
822e8240  beq cr6, loc_822E8278
822e8244  mr r3, r31
822e8248  bl _Update_BGSDecalEmitter__QAAXXZ
822e824c  lbz r11, 4(r31)
822e8250  cmplwi cr6, r11, 0
822e8254  beq cr6, loc_822E8278
822e8258  addi r4, r1, 0x80+var_30
822e825c  mr r3, r29
822e8260  bl _RemovePos___NiTPointerListBase_V__NiTPointerAllocator_I__PAVNiLight____QAAPAVNiLight__AAPAX_Z
822e8264  mr r3, r31
822e8268  bl __1BGSDecalEmitter__QAA_XZ
822e826c  mr r3, r28
822e8270  mr r4, r31
822e8274  bl _Deallocate_MemoryManager__QAAXPAX_Z
822e8278  cmplwi cr6, r30, 0
822e827c  bne cr6, loc_822E822C
822e8280  addi r1, r1, 0x80
822e8284  b __restgprlr_28
