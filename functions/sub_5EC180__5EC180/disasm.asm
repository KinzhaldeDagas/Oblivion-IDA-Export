0x5EC180: push    esi
0x5EC181: push    edi
0x5EC182: mov     edi, ecx
0x5EC184: mov     eax, [edi]
0x5EC186: mov     edx, [eax+164h]
0x5EC18C: call    edx
0x5EC18E: mov     esi, eax
0x5EC190: test    esi, esi
0x5EC192: jz      short loc_5EC1BF
0x5EC194: push    0
0x5EC196: mov     ecx, esi
0x5EC198: call    sub_4706E0
0x5EC19D: test    eax, eax
0x5EC19F: jz      short loc_5EC1BF
0x5EC1A1: push    0
0x5EC1A3: mov     ecx, esi
0x5EC1A5: call    sub_4706E0
0x5EC1AA: mov     ecx, [eax+68h]
0x5EC1AD: call    TESAnimGroup_GetAnimationGroup
0x5EC1B2: add     eax, 0FFFFFFD8h
0x5EC1B5: cmp     eax, 2
0x5EC1B8: ja      short loc_5EC1BF
0x5EC1BA: pop     edi
0x5EC1BB: mov     al, 1
0x5EC1BD: pop     esi
0x5EC1BE: retn
0x5EC1BF: mov     ecx, edi; this
0x5EC1C1: call    MobileObject_GetCharProxy
0x5EC1C6: test    eax, eax
0x5EC1C8: jz      short loc_5EC1E1
0x5EC1CA: mov     ecx, edi; this
0x5EC1CC: call    MobileObject_GetCharProxy
0x5EC1D1: lea     ecx, [eax+1E0h]
0x5EC1D7: call    sub_88D370
0x5EC1DC: cmp     eax, 2
0x5EC1DF: jz      short loc_5EC1BA
0x5EC1E1: pop     edi
0x5EC1E2: xor     al, al
0x5EC1E4: pop     esi
0x5EC1E5: retn
