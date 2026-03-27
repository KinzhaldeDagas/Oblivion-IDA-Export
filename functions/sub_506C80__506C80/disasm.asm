0x506C80: mov     ecx, ds:0B333C4h; this
0x506C86: call    sub_4D8B90
0x506C8B: test    al, al
0x506C8D: mov     ecx, ds:0B333C4h; this
0x506C93: jz      short loc_506CA4
0x506C95: call    TESObjectREFR_GetParentCell
0x506C9A: mov     ecx, eax
0x506C9C: call    sub_4CBBF0
0x506CA1: mov     al, 1
0x506CA3: retn
0x506CA4: call    TESObjectREFR_GetWorldSpace
0x506CA9: mov     ecx, eax
0x506CAB: call    sub_4EF2A0
0x506CB0: mov     al, 1
0x506CB2: retn
