0x6638A0: push    esi
0x6638A1: mov     esi, ecx
0x6638A3: push    edi
0x6638A4: lea     ecx, [esi+44h]
0x6638A7: call    sub_41E650
0x6638AC: mov     edi, eax
0x6638AE: test    edi, edi
0x6638B0: jz      short loc_66390E
0x6638B2: mov     eax, [edi]
0x6638B4: cmp     eax, [esi+798h]
0x6638BA: push    ebp
0x6638BB: lea     ebp, [esi+798h]
0x6638C1: jnz     short loc_6638E7
0x6638C3: mov     ecx, [esi+5D0h]
0x6638C9: test    byte ptr [ecx+18h], 1
0x6638CD: jz      short loc_6638E7
0x6638CF: lea     edx, [esi+79Ch]
0x6638D5: push    edx
0x6638D6: mov     ecx, edi
0x6638D8: call    sub_55E2A0
0x6638DD: pop     ebp
0x6638DE: pop     edi
0x6638DF: mov     ecx, esi
0x6638E1: pop     esi
0x6638E2: jmp     sub_5E3FC0
0x6638E7: cmp     eax, [esi+79Ch]
0x6638ED: jnz     short loc_663904
0x6638EF: mov     ecx, esi; this
0x6638F1: call    TESObjectREFR__GetNiNode
0x6638F6: test    byte ptr [eax+18h], 1
0x6638FA: jz      short loc_663904
0x6638FC: push    ebp
0x6638FD: mov     ecx, edi
0x6638FF: call    sub_55E2A0
0x663904: pop     ebp
0x663905: pop     edi
0x663906: mov     ecx, esi
0x663908: pop     esi
0x663909: jmp     sub_5E3FC0
0x66390E: pop     edi
0x66390F: pop     esi
0x663910: retn
