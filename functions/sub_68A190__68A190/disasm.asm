0x68A190: mov     ecx, [ecx+4]
0x68A193: test    ecx, ecx
0x68A195: jz      short loc_68A19C
0x68A197: jmp     loc_68B180
0x68A19C: xor     eax, eax
0x68A19E: retn
0x68B180: cmp     byte ptr [ecx+4], 0
0x68B184: jnz     short loc_68B191
0x68B186: mov     ecx, [ecx]; this
0x68B188: test    ecx, ecx
0x68B18A: jz      short loc_68B191
0x68B18C: jmp     Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x68B191: xor     eax, eax
0x68B193: retn
