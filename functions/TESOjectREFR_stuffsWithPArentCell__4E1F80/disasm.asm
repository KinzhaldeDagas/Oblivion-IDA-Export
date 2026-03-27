0x4E1F80: push    esi
0x4E1F81: push    edi
0x4E1F82: mov     edi, ecx
0x4E1F84: mov     esi, [edi+40h]
0x4E1F87: test    esi, esi
0x4E1F89: jz      short loc_4E1FC9
0x4E1F8B: mov     ecx, esi; this
0x4E1F8D: call    TESObjectCELL_IsInterior
0x4E1F92: test    al, al
0x4E1F94: jz      short loc_4E1FA0
0x4E1F96: lea     ecx, [esi+28h]
0x4E1F99: call    sub_424180
0x4E1F9E: jmp     short loc_4E1FA5
0x4E1FA0: mov     eax, ds:0B35C24h
0x4E1FA5: test    eax, eax
0x4E1FA7: jz      short loc_4E1FC9
0x4E1FA9: mov     esi, [eax+24h]
0x4E1FAC: test    esi, esi
0x4E1FAE: jz      short loc_4E1FC9
0x4E1FB0: mov     ecx, [esi+18h]
0x4E1FB3: push    edi
0x4E1FB4: call    sub_5369B0
0x4E1FB9: push    eax
0x4E1FBA: mov     ecx, esi
0x4E1FBC: call    sub_536D30
0x4E1FC1: push    edi
0x4E1FC2: mov     ecx, esi
0x4E1FC4: call    sub_5374F0
0x4E1FC9: pop     edi
0x4E1FCA: pop     esi
0x4E1FCB: retn
