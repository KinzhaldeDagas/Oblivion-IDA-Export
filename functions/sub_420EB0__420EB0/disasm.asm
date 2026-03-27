0x420EB0: push    4Eh ; 'N'; a2
0x420EB2: call    BaseExtraList_GetExtraData
0x420EB7: test    eax, eax
0x420EB9: jz      short locret_420EC2
0x420EBB: mov     ecx, eax
0x420EBD: jmp     loc_42AFC0
0x420EC2: retn    4
