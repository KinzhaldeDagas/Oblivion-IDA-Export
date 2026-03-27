0x96DAE0: push    50h ; 'P'; Size
0x96DAE2: call    FormHeapAlloc
0x96DAE7: add     esp, 4
0x96DAEA: test    eax, eax
0x96DAEC: jz      short loc_96DAF5
0x96DAEE: mov     ecx, eax; this
0x96DAF0: jmp     ??0NiCollisionData@@QAE@XZ; NiCollisionData::NiCollisionData(void)
0x96DAF5: xor     eax, eax
0x96DAF7: retn
