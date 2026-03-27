0x4DE660: push    ecx
0x4DE661: push    esi
0x4DE662: mov     esi, ecx
0x4DE664: mov     eax, [esi]
0x4DE666: mov     edx, [eax+170h]
0x4DE66C: push    edi
0x4DE66D: xor     edi, edi
0x4DE66F: call    edx
0x4DE671: test    eax, eax
0x4DE673: jz      loc_4DE75D
0x4DE679: mov     eax, [esi]
0x4DE67B: mov     edx, [eax+170h]
0x4DE681: mov     ecx, esi
0x4DE683: call    edx
0x4DE685: cmp     byte ptr [eax+4], 18h
0x4DE689: jnz     loc_4DE75D
0x4DE68F: push    ebx
0x4DE690: push    4
0x4DE692: lea     ecx, [esi+44h]
0x4DE695: call    sub_41F830
0x4DE69A: neg     al
0x4DE69C: mov     ecx, esi
0x4DE69E: sbb     eax, eax
0x4DE6A0: and     eax, 0FFFFFFFEh
0x4DE6A3: add     eax, 3
0x4DE6A6: mov     ebx, eax
0x4DE6A8: mov     eax, [esi]
0x4DE6AA: mov     edx, [eax+154h]
0x4DE6B0: call    edx
0x4DE6B2: test    eax, eax
0x4DE6B4: jz      short loc_4DE6D5
0x4DE6B6: mov     eax, [esi]
0x4DE6B8: mov     edx, [eax+154h]
0x4DE6BE: mov     ecx, esi
0x4DE6C0: call    edx
0x4DE6C2: cmp     [eax+0B6h], di
0x4DE6C9: jbe     short loc_4DE6D5
0x4DE6CB: mov     eax, [eax+0B0h]
0x4DE6D1: mov     eax, [eax]
0x4DE6D3: jmp     short loc_4DE6D7
0x4DE6D5: xor     eax, eax
0x4DE6D7: test    eax, eax
0x4DE6D9: jz      short loc_4DE6E0
0x4DE6DB: mov     eax, [eax+0Ch]
0x4DE6DE: jmp     short loc_4DE6E2
0x4DE6E0: xor     eax, eax
0x4DE6E2: push    eax
0x4DE6E3: push    offset stru_B3CAC0
0x4DE6E8: call    NiRTTI_Cast
0x4DE6ED: add     esp, 8
0x4DE6F0: test    eax, eax
0x4DE6F2: jz      short loc_4DE756
0x4DE6F4: lea     ecx, [esp+10h+var_4]
0x4DE6F8: push    ecx
0x4DE6F9: lea     esi, [eax+58h]
0x4DE6FC: push    offset aOpen; "Open"
0x4DE701: mov     ecx, esi
0x4DE703: call    NiTMap_GetAt
0x4DE708: neg     al
0x4DE70A: lea     edx, [esp+10h+var_4]
0x4DE70E: push    edx
0x4DE70F: push    offset aClose; "Close"
0x4DE714: mov     ecx, esi
0x4DE716: sbb     eax, eax
0x4DE718: and     eax, [esp+18h+var_4]
0x4DE71C: mov     edi, eax
0x4DE71E: call    NiTMap_GetAt
0x4DE723: neg     al
0x4DE725: sbb     eax, eax
0x4DE727: and     eax, [esp+10h+var_4]
0x4DE72B: test    edi, edi
0x4DE72D: jz      short loc_4DE756
0x4DE72F: test    eax, eax
0x4DE731: jz      short loc_4DE756
0x4DE733: mov     ecx, 1
0x4DE738: cmp     [edi+44h], ecx
0x4DE73B: jnz     short loc_4DE747
0x4DE73D: pop     ebx
0x4DE73E: pop     edi
0x4DE73F: mov     eax, 2
0x4DE744: pop     esi
0x4DE745: pop     ecx
0x4DE746: retn
0x4DE747: cmp     [eax+44h], ecx
0x4DE74A: jnz     short loc_4DE756
0x4DE74C: pop     ebx
0x4DE74D: pop     edi
0x4DE74E: mov     eax, 4
0x4DE753: pop     esi
0x4DE754: pop     ecx
0x4DE755: retn
0x4DE756: mov     eax, ebx
0x4DE758: pop     ebx
0x4DE759: pop     edi
0x4DE75A: pop     esi
0x4DE75B: pop     ecx
0x4DE75C: retn
0x4DE75D: mov     eax, edi
0x4DE75F: pop     edi
0x4DE760: pop     esi
0x4DE761: pop     ecx
0x4DE762: retn
