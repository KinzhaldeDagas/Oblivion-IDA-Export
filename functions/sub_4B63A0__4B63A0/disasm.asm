0x4B63A0: push    ebp
0x4B63A1: mov     ebp, esp
0x4B63A3: sub     esp, 10h
0x4B63A6: mov     eax, ds:0B30AACh
0x4B63AB: xor     eax, ebp
0x4B63AD: mov     [ebp+var_4], eax
0x4B63B0: push    ebx
0x4B63B1: mov     ebx, [ebp+a2]
0x4B63B4: push    esi
0x4B63B5: mov     esi, ecx
0x4B63B7: push    edi
0x4B63B8: mov     ecx, ebx
0x4B63BA: call    TESFile_GetRecordType
0x4B63BF: cmp     al, 17h
0x4B63C1: jz      short loc_4B63CA
0x4B63C3: xor     al, al
0x4B63C5: jmp     loc_4B6565
0x4B63CA: push    esi
0x4B63CB: mov     ecx, ebx
0x4B63CD: call    TESFile_InitializeFormFromRecord
0x4B63D2: xor     edi, edi
0x4B63D4: push    edi; a2
0x4B63D5: mov     ecx, esi; this
0x4B63D7: call    TESForm_SetIsLinked
0x4B63DC: mov     ecx, ebx
0x4B63DE: call    TESFile_GetChunkType
0x4B63E3: cmp     eax, edi
0x4B63E5: jz      loc_4B6563
0x4B63EB: jmp     short loc_4B63F0
0x4B63ED: align 10h
0x4B63F0: cmp     eax, 4C4C5546h
0x4B63F5: jg      loc_4B64BC
0x4B63FB: jz      loc_4B649B
0x4B6401: cmp     eax, 44494445h
0x4B6406: jg      short loc_4B6462
0x4B6408: jz      short loc_4B6434
0x4B640A: cmp     eax, 41544144h
0x4B640F: jz      short loc_4B6421
0x4B6411: cmp     eax, 42444F4Dh
0x4B6416: jz      loc_4B6534
0x4B641C: jmp     loc_4B6549
0x4B6421: push    1; a4
0x4B6423: lea     eax, [esi+78h]
0x4B6426: push    eax; Dst
0x4B6427: push    ebx; a2
0x4B6428: mov     ecx, esi; this
0x4B642A: call    TESForm_LoadGenericComponents
0x4B642F: jmp     loc_4B6549
0x4B6434: mov     eax, [ebx+254h]
0x4B643A: call    __alloca?
0x4B643F: mov     edi, esp
0x4B6441: push    200h; a4
0x4B6446: push    edi; Dst
0x4B6447: mov     ecx, ebx; a1
0x4B6449: call    TESFile_GetChunkData
0x4B644E: mov     edx, [esi]
0x4B6450: mov     eax, [edx+0D8h]
0x4B6456: push    edi
0x4B6457: mov     ecx, esi
0x4B6459: call    eax
0x4B645B: xor     edi, edi
0x4B645D: jmp     loc_4B6549
0x4B6462: cmp     eax, 49524353h
0x4B6467: jz      short loc_4B6479
0x4B6469: cmp     eax, 4C444F4Dh
0x4B646E: jz      loc_4B6534
0x4B6474: jmp     loc_4B6549
0x4B6479: lea     ecx, [ebp+var_8]
0x4B647C: push    ecx
0x4B647D: mov     ecx, ebx
0x4B647F: mov     [ebp+var_8], edi
0x4B6482: call    TESFile_GetChunkData4
0x4B6487: mov     edx, [ebp+var_8]
0x4B648A: push    esi
0x4B648B: lea     ecx, [esi+58h]
0x4B648E: mov     [esi+5Ch], edx
0x4B6491: call    TESScriptableForm_Link
0x4B6496: jmp     loc_4B6549
0x4B649B: cmp     esi, edi
0x4B649D: jz      short loc_4B64AE
0x4B649F: lea     eax, [esi+34h]
0x4B64A2: push    ebx
0x4B64A3: push    eax
0x4B64A4: call    TESFullname_Load
0x4B64A9: jmp     loc_4B6546
0x4B64AE: xor     eax, eax
0x4B64B0: push    ebx
0x4B64B1: push    eax
0x4B64B2: call    TESFullname_Load
0x4B64B7: jmp     loc_4B6546
0x4B64BC: cmp     eax, 4F544E43h
0x4B64C1: jg      short loc_4B652D
0x4B64C3: jz      short loc_4B64FD
0x4B64C5: sub     eax, 4D414E51h
0x4B64CA: jz      short loc_4B64E7
0x4B64CC: sub     eax, 2
0x4B64CF: jnz     short loc_4B6549
0x4B64D1: lea     eax, [ebp+var_8]
0x4B64D4: push    eax
0x4B64D5: mov     ecx, ebx
0x4B64D7: mov     [ebp+var_8], edi
0x4B64DA: call    TESFile_GetChunkData4
0x4B64DF: mov     ecx, [ebp+var_8]
0x4B64E2: mov     [esi+70h], ecx
0x4B64E5: jmp     short loc_4B6549
0x4B64E7: lea     edx, [ebp+var_8]
0x4B64EA: push    edx
0x4B64EB: mov     ecx, ebx
0x4B64ED: mov     [ebp+var_8], edi
0x4B64F0: call    TESFile_GetChunkData4
0x4B64F5: mov     eax, [ebp+var_8]
0x4B64F8: mov     [esi+74h], eax
0x4B64FB: jmp     short loc_4B6549
0x4B64FD: push    8; a4
0x4B64FF: lea     ecx, [ebp+Dst]
0x4B6502: xor     eax, eax
0x4B6504: push    ecx; Dst
0x4B6505: mov     ecx, ebx; a1
0x4B6507: mov     dword ptr [ebp+Dst], eax
0x4B650A: mov     [ebp+var_C], eax
0x4B650D: call    TESFile_GetChunkData
0x4B6512: lea     edi, [esi+24h]
0x4B6515: push    0
0x4B6517: mov     ecx, edi
0x4B6519: call    TESContainer_SetLinkFlag
0x4B651E: lea     edx, [ebp+Dst]
0x4B6521: push    edx
0x4B6522: mov     ecx, edi
0x4B6524: call    TESContainer_AddUnlinkedForm
0x4B6529: xor     edi, edi
0x4B652B: jmp     short loc_4B6549
0x4B652D: cmp     eax, 54444F4Dh
0x4B6532: jnz     short loc_4B6549
0x4B6534: cmp     esi, edi
0x4B6536: jz      short loc_4B653D
0x4B6538: lea     eax, [esi+40h]
0x4B653B: jmp     short loc_4B653F
0x4B653D: xor     eax, eax
0x4B653F: push    ebx
0x4B6540: push    eax
0x4B6541: call    TESModel_Load
0x4B6546: add     esp, 8
0x4B6549: mov     ecx, ebx
0x4B654B: call    TESFile_GetNextChunk
0x4B6550: test    al, al
0x4B6552: jz      short loc_4B6563
0x4B6554: mov     ecx, ebx
0x4B6556: call    TESFile_GetChunkType
0x4B655B: cmp     eax, edi
0x4B655D: jnz     loc_4B63F0
0x4B6563: mov     al, 1
0x4B6565: lea     esp, [ebp-1Ch]
0x4B6568: pop     edi
0x4B6569: pop     esi
0x4B656A: pop     ebx
0x4B656B: mov     ecx, [ebp+var_4]
0x4B656E: xor     ecx, ebp
0x4B6570: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4B6575: mov     esp, ebp
0x4B6577: pop     ebp
0x4B6578: retn    4
