0x5664D0: push    esi
0x5664D1: mov     esi, ecx
0x5664D3: call    TESForm_InitializeFormRecord
0x5664D8: push    8; Size
0x5664DA: lea     eax, [esi+1Ch]
0x5664DD: push    eax; Src
0x5664DE: push    54444B50h; int
0x5664E3: call    TESForm_PutFormRecordChunkData
0x5664E8: mov     ecx, [esi+24h]
0x5664EB: add     esp, 0Ch
0x5664EE: test    ecx, ecx
0x5664F0: jz      short loc_5664F7
0x5664F2: call    sub_569AD0
0x5664F7: lea     ecx, [esi+2Ch]; Src
0x5664FA: test    ecx, ecx
0x5664FC: jz      short loc_566503
0x5664FE: call    sub_569DB0
0x566503: mov     ecx, [esi+28h]
0x566506: test    ecx, ecx
0x566508: jz      short loc_56650F
0x56650A: call    sub_56A0F0
0x56650F: lea     ecx, [esi+34h]
0x566512: test    ecx, ecx
0x566514: jz      short loc_56651B
0x566516: call    sub_56A450
0x56651B: mov     ecx, esi
0x56651D: pop     esi
0x56651E: jmp     TESForm_FinalizeFormRecord
