0x4844A0: push    0FFFFFFFFh
0x4844A2: push    offset SEH_6CED50
0x4844A7: mov     eax, large fs:0
0x4844AD: push    eax
0x4844AE: sub     esp, 8
0x4844B1: push    ebx
0x4844B2: push    ebp
0x4844B3: push    esi
0x4844B4: push    edi
0x4844B5: mov     eax, ds:0B30AACh
0x4844BA: xor     eax, esp
0x4844BC: push    eax
0x4844BD: lea     eax, [esp+28h+var_C]
0x4844C1: mov     large fs:0, eax
0x4844C7: mov     esi, ecx
0x4844C9: mov     [esp+28h+var_14], esi
0x4844CD: mov     edi, [esp+28h+arg_0]
0x4844D1: mov     eax, [edi+8]
0x4844D4: push    8; Size
0x4844D6: mov     [esi+8], eax
0x4844D9: call    FormHeapAlloc
0x4844DE: xor     ebp, ebp
0x4844E0: add     esp, 4
0x4844E3: cmp     eax, ebp
0x4844E5: jz      short loc_4844EE
0x4844E7: mov     [eax], ebp
0x4844E9: mov     [eax+4], ebp
0x4844EC: jmp     short loc_4844F0
0x4844EE: xor     eax, eax
0x4844F0: mov     [esi], eax
0x4844F2: mov     ebx, [edi]
0x4844F4: cmp     ebx, ebp
0x4844F6: jz      loc_484578
0x4844FC: cmp     [ebx], ebp
0x4844FE: jz      short loc_484578
0x484500: push    14h; Size
0x484502: call    FormHeapAlloc
0x484507: add     esp, 4
0x48450A: mov     [esp+28h+var_10], eax
0x48450E: cmp     eax, ebp
0x484510: mov     [esp+28h+var_4], ebp
0x484514: jz      short loc_484521
0x484516: mov     ecx, eax
0x484518: call    ExtraDataList_constr
0x48451D: mov     edi, eax
0x48451F: jmp     short loc_484523
0x484521: xor     edi, edi
0x484523: mov     ecx, [ebx]
0x484525: push    ecx
0x484526: mov     ecx, edi
0x484528: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x484530: call    ExtraDataList_DuplicateListForContainer
0x484535: cmp     edi, ebp
0x484537: jz      short loc_484571
0x484539: mov     esi, [esi]
0x48453B: cmp     [esi+4], ebp
0x48453E: jz      short loc_484548
0x484540: mov     esi, [esi+4]
0x484543: cmp     [esi+4], ebp
0x484546: jnz     short loc_484540
0x484548: cmp     [esi], ebp
0x48454A: jz      short loc_48456B
0x48454C: push    8; Size
0x48454E: call    FormHeapAlloc
0x484553: add     esp, 4
0x484556: cmp     eax, ebp
0x484558: jz      short loc_484564
0x48455A: mov     [eax], edi
0x48455C: mov     [eax+4], ebp
0x48455F: mov     [esi+4], eax
0x484562: jmp     short loc_48456D
0x484564: xor     eax, eax
0x484566: mov     [esi+4], eax
0x484569: jmp     short loc_48456D
0x48456B: mov     [esi], edi
0x48456D: mov     esi, [esp+28h+var_14]
0x484571: mov     ebx, [ebx+4]
0x484574: cmp     ebx, ebp
0x484576: jnz     short loc_4844FC
0x484578: mov     edx, [esp+28h+arg_0]
0x48457C: mov     eax, [edx+4]
0x48457F: mov     [esi+4], eax
0x484582: mov     eax, esi
0x484584: mov     ecx, [esp+28h+var_C]
0x484588: mov     large fs:0, ecx
0x48458F: pop     ecx
0x484590: pop     edi
0x484591: pop     esi
0x484592: pop     ebp
0x484593: pop     ebx
0x484594: add     esp, 14h
0x484597: retn    4
