0x453970: push    edi
0x453971: mov     edi, ecx
0x453973: mov     eax, [edi+18h]
0x453976: shr     eax, 0Bh
0x453979: test    al, 1
0x45397B: jz      short loc_4539D8
0x45397D: push    esi
0x45397E: mov     esi, [esp+8+arg_4]
0x453982: test    esi, esi
0x453984: jz      short loc_4539D7
0x453986: mov     ecx, esi; this
0x453988: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x45398D: test    eax, eax
0x45398F: jz      short loc_4539D7
0x453991: mov     ecx, esi; this
0x453993: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x453998: cmp     eax, [esp+8+arg_0]
0x45399C: jz      short loc_4539D7
0x45399E: mov     edx, [esi+0Ch]
0x4539A1: lea     ecx, [esp+8+arg_4]
0x4539A5: push    ecx
0x4539A6: mov     ecx, [edi]
0x4539A8: push    edx
0x4539A9: mov     [esp+10h+arg_4], 0
0x4539B1: call    NiTMap_GetAt
0x4539B6: mov     eax, [esp+8+arg_4]
0x4539BA: test    eax, eax
0x4539BC: jz      short loc_4539C2
0x4539BE: mov     eax, [eax]
0x4539C0: jmp     short loc_4539C4
0x4539C2: xor     eax, eax
0x4539C4: test    al, 0Ch
0x4539C6: jz      short loc_4539D7
0x4539C8: push    esi; reference
0x4539C9: mov     ecx, esi; this
0x4539CB: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x4539D0: mov     ecx, eax; this
0x4539D2: call    TESObjectCELL_RemoveReference; Verified: removes a reference from the cell object list under the cell lock. For persistent cells, clears the reference's ExtraDataList cell pointer and removes it from the owning WorldSpace persistent-reference index (+0x64); for normal cells, clears its parent cell and updates changed state. No write to the separate SubSpace index (+0x60) is present.
0x4539D7: pop     esi
0x4539D8: lea     eax, [edi+20h]
0x4539DB: test    eax, eax
0x4539DD: pop     edi
0x4539DE: jz      short loc_4539EF
0x4539E0: mov     ecx, [esp+arg_8]
0x4539E4: cmp     [eax], ecx
0x4539E6: jz      short loc_4539EF
0x4539E8: mov     eax, [eax+4]
0x4539EB: test    eax, eax
0x4539ED: jnz     short loc_4539E4
0x4539EF: xor     ecx, ecx
0x4539F1: test    eax, eax
0x4539F3: setnz   cl
0x4539F6: mov     al, cl
0x4539F8: retn    0Ch
