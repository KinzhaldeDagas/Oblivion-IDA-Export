0x4471A0: mov     eax, [esp+arg_0]
0x4471A4: test    eax, eax
0x4471A6: jnz     short loc_4471AB
0x4471A8: retn    4
0x4471AB: lea     ecx, [esp+arg_0]
0x4471AF: push    ecx
0x4471B0: push    eax
0x4471B1: mov     ecx, offset TESForm_FormIDMap
0x4471B6: mov     [esp+8+arg_0], 0
0x4471BE: call    NiTMap_GetAt
0x4471C3: neg     al
0x4471C5: sbb     eax, eax
0x4471C7: and     eax, [esp+arg_0]
0x4471CB: retn    4
