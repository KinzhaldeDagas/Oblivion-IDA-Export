0x450550: sub     esp, 38h
0x450553: push    esi
0x450554: mov     esi, ecx
0x450556: cmp     dword ptr [esi+240h], 0
0x45055D: jz      loc_450709
0x450563: mov     eax, [esi+23Ch]
0x450569: cmp     eax, ds:0B05E20h
0x45056F: jz      loc_450709
0x450575: test    dword ptr [esi+244h], 40000h
0x45057F: jz      loc_450709
0x450585: push    eax
0x450586: call    TESForm_GetFormTypeFromChunkType
0x45058B: add     esp, 4
0x45058E: test    al, al
0x450590: jz      loc_450709
0x450596: mov     eax, [esi+240h]
0x45059C: push    edi
0x45059D: add     eax, 1
0x4505A0: push    1
0x4505A2: push    eax
0x4505A3: mov     ecx, offset FormHeap
0x4505A8: call    j_MemoryHeap_Alloc
0x4505AD: mov     edi, eax
0x4505AF: test    edi, edi
0x4505B1: jz      loc_450708
0x4505B7: mov     ecx, [esi+10h]
0x4505BA: push    ebx
0x4505BB: mov     ebx, [esi+240h]
0x4505C1: push    ebp; ArgList
0x4505C2: mov     eax, ebx
0x4505C4: push    eax
0x4505C5: push    edi
0x4505C6: call    ReadFile??
0x4505CB: cmp     eax, ebx
0x4505CD: jz      short loc_4505EF
0x4505CF: push    offset aTesfileFailedT; "TESFile: Failed to read in buffer data "...
0x4505D4: call    PrintError
0x4505D9: add     esp, 4
0x4505DC: push    edi; void *
0x4505DD: mov     ecx, offset FormHeap
0x4505E2: call    MemoryHeap_Free_checked
0x4505E7: pop     ebp
0x4505E8: pop     ebx
0x4505E9: pop     edi
0x4505EA: pop     esi
0x4505EB: add     esp, 38h
0x4505EE: retn
0x4505EF: mov     ebp, [edi]
0x4505F1: push    ebp; int
0x4505F2: mov     byte ptr [ebx+edi], 0
0x4505F6: call    MemoryHeap_Alloc_ZlibCallback
0x4505FB: push    38h ; '8'; a3
0x4505FD: xor     ebx, ebx
0x4505FF: lea     ecx, [esp+50h+ArgList]
0x450603: push    offset a1_2_1; "1.2.1"
0x450608: push    ecx; a1
0x450609: mov     [esi+414h], eax
0x45060F: mov     [esi+418h], ebp
0x450615: mov     [esp+58h+var_18], offset sub_42BA60
0x45061D: mov     [esp+58h+var_14], offset sub_42BA80
0x450625: mov     [esp+58h+var_10], ebx
0x450629: mov     [esp+58h+var_34], ebx
0x45062D: mov     dword ptr [esp+58h+ArgList], ebx
0x450631: call    zlib_InflateInitEx
0x450636: add     esp, 10h
0x450639: test    eax, eax
0x45063B: jz      short loc_450663
0x45063D: lea     edx, [esp+48h+ArgList]
0x450641: push    edx; ArgList
0x450642: call    Zlib_inflateEnd
0x450647: push    offset aTesfileErrorIn; "TESFile: Error initializing ZLib inflat"...
0x45064C: call    PrintError
0x450651: add     esp, 8
0x450654: mov     ecx, esi
0x450656: call    TESFile_ClearDecompressedBuffer
0x45065B: pop     ebp
0x45065C: pop     ebx
0x45065D: pop     edi
0x45065E: pop     esi
0x45065F: add     esp, 38h
0x450662: retn
0x450663: mov     eax, [esi+240h]
0x450669: mov     edx, [esi+414h]
0x45066F: sub     eax, 4
0x450672: mov     [esp+48h+var_34], eax
0x450676: lea     eax, [esp+48h+ArgList]
0x45067A: lea     ecx, [edi+4]
0x45067D: push    ebx
0x45067E: push    eax
0x45067F: mov     dword ptr [esp+50h+ArgList], ecx
0x450683: mov     [esp+50h+var_28], ebp
0x450687: mov     [esp+50h+var_2C], edx
0x45068B: call    zlib_Inflate
0x450690: add     esp, 8
0x450693: cmp     eax, 0FFFFFFFEh
0x450696: jz      short loc_4506DD
0x450698: cmp     eax, 2
0x45069B: jz      short loc_4506DD
0x45069D: cmp     eax, 0FFFFFFFDh
0x4506A0: jz      short loc_4506DD
0x4506A2: cmp     eax, 0FFFFFFFCh
0x4506A5: jz      short loc_4506DD
0x4506A7: cmp     eax, 1
0x4506AA: jz      short loc_4506BD
0x4506AC: lea     ecx, [esp+48h+ArgList]
0x4506B0: push    ecx
0x4506B1: call    Zlib_inflateEnd
0x4506B6: push    offset aTesfileErrorZl; "TESFile: Error: ZLib stream did not ter"...
0x4506BB: jmp     short loc_4506EC
0x4506BD: lea     edx, [esp+48h+ArgList]
0x4506C1: push    edx
0x4506C2: call    Zlib_inflateEnd
0x4506C7: add     esp, 4
0x4506CA: push    edi; void *
0x4506CB: mov     ecx, offset FormHeap
0x4506D0: call    MemoryHeap_Free_checked
0x4506D5: pop     ebp
0x4506D6: pop     ebx
0x4506D7: pop     edi
0x4506D8: pop     esi
0x4506D9: add     esp, 38h
0x4506DC: retn
0x4506DD: lea     eax, [esp+48h+ArgList]
0x4506E1: push    eax; ArgList
0x4506E2: call    Zlib_inflateEnd
0x4506E7: push    offset aTesfileError_0; "TESFile: Error inflating ZLib stream."
0x4506EC: call    PrintError
0x4506F1: add     esp, 8
0x4506F4: mov     ecx, esi
0x4506F6: call    TESFile_ClearDecompressedBuffer
0x4506FB: push    edi; void *
0x4506FC: mov     ecx, offset FormHeap
0x450701: call    MemoryHeap_Free_checked
0x450706: pop     ebp
0x450707: pop     ebx
0x450708: pop     edi
0x450709: pop     esi
0x45070A: add     esp, 38h
0x45070D: retn
