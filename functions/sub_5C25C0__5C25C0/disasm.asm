0x5C25C0: push    ecx
0x5C25C1: push    edi
0x5C25C2: mov     edi, [esp+8+arg_0]
0x5C25C6: mov     [esp+8+var_4], ecx
0x5C25CA: mov     [esp+8+arg_0], edi
0x5C25CE: call    sub_5C1100
0x5C25D3: test    eax, eax
0x5C25D5: jl      loc_5C26C9
0x5C25DB: call    sub_5C1100
0x5C25E0: cmp     eax, 7
0x5C25E3: jg      loc_5C26C9
0x5C25E9: test    edi, edi
0x5C25EB: push    ebx
0x5C25EC: push    esi
0x5C25ED: mov     ebx, 1
0x5C25F2: jz      loc_5C26AB
0x5C25F8: call    sub_5C1100
0x5C25FD: shl     eax, 4
0x5C2600: cmp     ds:dword_B3B44C[eax], 0
0x5C2607: jz      short loc_5C2655
0x5C2609: push    ebp
0x5C260A: call    sub_5C1100
0x5C260F: shl     eax, 4
0x5C2612: mov     eax, ds:dword_B3B444[eax]
0x5C2618: mov     ebp, [eax+8]
0x5C261B: test    ebp, ebp
0x5C261D: jz      short loc_5C2654
0x5C261F: cmp     byte ptr [ebp+4], 10h
0x5C2623: jz      short loc_5C2654
0x5C2625: mov     ecx, ds:0B333C4h; this
0x5C262B: call    TESObjectREFR_GetContainer
0x5C2630: mov     ecx, ds:0B333C4h
0x5C2636: push    eax
0x5C2637: push    ecx; a1
0x5C2638: call    ContainerExtraData_GetContainerExtraDataForRef
0x5C263D: mov     esi, eax
0x5C263F: add     esp, 8
0x5C2642: test    esi, esi
0x5C2644: jz      short loc_5C2654
0x5C2646: call    sub_5C1100
0x5C264B: push    eax
0x5C264C: push    ebp
0x5C264D: mov     ecx, esi
0x5C264F: call    sub_4895B0
0x5C2654: pop     ebp
0x5C2655: call    sub_5C1100
0x5C265A: shl     eax, 4
0x5C265D: cmp     ds:dword_B3B44C[eax], ebx
0x5C2663: jge     short loc_5C2676
0x5C2665: mov     ecx, [esp+10h+var_4]
0x5C2669: push    edi
0x5C266A: call    sub_5C1DD0
0x5C266F: lea     edx, [esp+10h+arg_0]
0x5C2673: push    edx
0x5C2674: jmp     short loc_5C2690
0x5C2676: call    sub_5C1100
0x5C267B: mov     ecx, eax
0x5C267D: shl     ecx, 4
0x5C2680: add     ecx, offset quickKeyList_ptr
0x5C2686: call    NiTPointerList__FreeAllNodes
0x5C268B: lea     eax, [esp+10h+arg_0]
0x5C268F: push    eax
0x5C2690: call    sub_5C1100
0x5C2695: mov     ecx, eax
0x5C2697: shl     ecx, 4
0x5C269A: add     ecx, offset quickKeyList_ptr
0x5C26A0: call    sub_5B1E20
0x5C26A5: mov     ds:0B3B43Ch, bl
0x5C26AB: call    sub_5C1100
0x5C26B0: mov     ecx, ds:0B333C4h
0x5C26B6: push    0
0x5C26B8: push    ebx
0x5C26B9: push    edi
0x5C26BA: mov     esi, eax
0x5C26BC: call    sub_5E99C0
0x5C26C1: mov     ds:byte_B3B418[esi], bl
0x5C26C7: pop     esi
0x5C26C8: pop     ebx
0x5C26C9: pop     edi
0x5C26CA: pop     ecx
0x5C26CB: retn    4
