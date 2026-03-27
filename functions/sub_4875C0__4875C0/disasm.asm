0x4875C0: push    ebx
0x4875C1: push    ebp
0x4875C2: mov     ebx, ecx
0x4875C4: mov     ecx, [ebx+4]; this
0x4875C7: push    esi
0x4875C8: xor     ebp, ebp
0x4875CA: test    ecx, ecx
0x4875CC: push    edi
0x4875CD: jz      short loc_4875D6
0x4875CF: call    TESObjectREFR_GetContainer
0x4875D4: jmp     short loc_4875D8
0x4875D6: xor     eax, eax
0x4875D8: lea     esi, [eax+8]
0x4875DB: test    esi, esi
0x4875DD: jz      short loc_487639
0x4875DF: nop
0x4875E0: cmp     dword ptr [esi+4], 0
0x4875E4: jnz     short loc_4875EB
0x4875E6: cmp     dword ptr [esi], 0
0x4875E9: jz      short loc_487639
0x4875EB: mov     eax, [esi]
0x4875ED: mov     edi, [eax+4]
0x4875F0: test    edi, edi
0x4875F2: jz      short loc_487632
0x4875F4: push    edi
0x4875F5: call    sub_469980
0x4875FA: add     esp, 4
0x4875FD: test    al, al
0x4875FF: jz      short loc_487632
0x487601: mov     eax, [ebx]
0x487603: test    eax, eax
0x487605: mov     dl, 1
0x487607: jz      short loc_48762A
0x487609: lea     esp, [esp+0]
0x487610: test    dl, dl
0x487612: jz      short loc_48767F
0x487614: mov     ecx, [eax]
0x487616: test    ecx, ecx
0x487618: jz      short loc_487623
0x48761A: cmp     [ecx+8], edi
0x48761D: jnz     short loc_487623
0x48761F: xor     dl, dl
0x487621: jmp     short loc_487626
0x487623: mov     eax, [eax+4]
0x487626: test    eax, eax
0x487628: jnz     short loc_487610
0x48762A: mov     eax, [esi]
0x48762C: add     ebp, [eax]
0x48762E: jns     short loc_487632
0x487630: neg     ebp
0x487632: mov     esi, [esi+4]
0x487635: test    esi, esi
0x487637: jnz     short loc_4875E0
0x487639: mov     esi, [ebx]
0x48763B: test    esi, esi
0x48763D: jz      short loc_4876B6
0x48763F: nop
0x487640: cmp     dword ptr [esi+4], 0
0x487644: jnz     short loc_48764B
0x487646: cmp     dword ptr [esi], 0
0x487649: jz      short loc_4876B6
0x48764B: mov     ecx, [esi]
0x48764D: mov     edi, [ecx+8]
0x487650: test    edi, edi
0x487652: jz      short loc_4876AF
0x487654: push    edi
0x487655: call    sub_469980
0x48765A: add     esp, 4
0x48765D: test    al, al
0x48765F: jz      short loc_4876AF
0x487661: mov     ecx, [ebx+4]; this
0x487664: test    ecx, ecx
0x487666: jz      short loc_4876AA
0x487668: call    TESObjectREFR_GetContainer
0x48766D: test    eax, eax
0x48766F: jz      short loc_4876AA
0x487671: mov     ecx, [ebx+4]; this
0x487674: test    ecx, ecx
0x487676: jz      short loc_487694
0x487678: call    TESObjectREFR_GetContainer
0x48767D: jmp     short loc_487696
0x48767F: test    eax, eax
0x487681: jz      short loc_48762A
0x487683: mov     eax, [eax]
0x487685: test    eax, eax
0x487687: jz      short loc_48762A
0x487689: mov     ecx, [esi]
0x48768B: mov     edx, [eax+4]
0x48768E: add     edx, [ecx]
0x487690: add     ebp, edx
0x487692: jmp     short loc_487632
0x487694: xor     eax, eax
0x487696: push    edi; a2
0x487697: mov     ecx, eax; this
0x487699: call    TESContainer_HasForm
0x48769E: test    al, al
0x4876A0: jnz     short loc_4876AF
0x4876A2: mov     edx, [esi]
0x4876A4: cmp     dword ptr [edx+4], 0
0x4876A8: jle     short loc_4876AF
0x4876AA: mov     eax, [esi]
0x4876AC: add     ebp, [eax+4]
0x4876AF: mov     esi, [esi+4]
0x4876B2: test    esi, esi
0x4876B4: jnz     short loc_487640
0x4876B6: pop     edi
0x4876B7: pop     esi
0x4876B8: mov     eax, ebp
0x4876BA: pop     ebp
0x4876BB: pop     ebx
0x4876BC: retn
