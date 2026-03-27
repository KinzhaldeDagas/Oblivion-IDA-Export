0x56A7B0: push    0FFFFFFFFh
0x56A7B2: push    offset SEH_787830
0x56A7B7: mov     eax, large fs:0
0x56A7BD: push    eax
0x56A7BE: push    ebx
0x56A7BF: push    esi
0x56A7C0: push    edi
0x56A7C1: mov     eax, ds:0B30AACh
0x56A7C6: xor     eax, esp
0x56A7C8: push    eax
0x56A7C9: lea     eax, [esp+1Ch+var_C]
0x56A7CD: mov     large fs:0, eax
0x56A7D3: mov     ebx, ecx
0x56A7D5: mov     edi, [esp+1Ch+arg_0]
0x56A7D9: xor     esi, esi
0x56A7DB: cmp     edi, esi
0x56A7DD: jz      short loc_56A832
0x56A7DF: mov     ecx, edi
0x56A7E1: call    TESFile_GetChunkType
0x56A7E6: cmp     eax, 54445443h
0x56A7EB: jz      short loc_56A7FB
0x56A7ED: mov     ecx, edi
0x56A7EF: call    TESFile_GetChunkType
0x56A7F4: cmp     eax, 41445443h
0x56A7F9: jnz     short loc_56A832
0x56A7FB: push    18h; Size
0x56A7FD: call    FormHeapAlloc
0x56A802: add     esp, 4
0x56A805: mov     [esp+1Ch+arg_0], eax
0x56A809: cmp     eax, esi
0x56A80B: mov     [esp+1Ch+var_4], esi
0x56A80F: jz      short loc_56A81A
0x56A811: mov     ecx, eax
0x56A813: call    Condition_constr?
0x56A818: mov     esi, eax
0x56A81A: push    edi
0x56A81B: mov     ecx, esi
0x56A81D: mov     [esp+20h+var_4], 0FFFFFFFFh
0x56A825: call    Condition_Load
0x56A82A: push    esi
0x56A82B: mov     ecx, ebx
0x56A82D: call    BSSimpleList_PushBack
0x56A832: mov     ecx, [esp+1Ch+var_C]
0x56A836: mov     large fs:0, ecx
0x56A83D: pop     ecx
0x56A83E: pop     edi
0x56A83F: pop     esi
0x56A840: pop     ebx
0x56A841: add     esp, 0Ch
0x56A844: retn    4
