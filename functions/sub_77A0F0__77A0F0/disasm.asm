0x77A0F0: push    esi
0x77A0F1: mov     esi, ecx
0x77A0F3: mov     ecx, [esi+3Ch]
0x77A0F6: test    ecx, ecx
0x77A0F8: jz      short loc_77A105
0x77A0FA: mov     eax, [ecx]
0x77A0FC: mov     edx, [esi+34h]
0x77A0FF: mov     eax, [eax+0Ch]
0x77A102: push    edx
0x77A103: call    eax
0x77A105: add     dword ptr [esi+34h], 1
0x77A109: mov     eax, [esi+34h]
0x77A10C: cmp     eax, [esi+38h]
0x77A10F: jnz     short loc_77A115
0x77A111: xor     eax, eax
0x77A113: pop     esi
0x77A114: retn
0x77A115: mov     ecx, [esi+44h]
0x77A118: push    edi
0x77A119: lea     edi, [ecx+eax*4]
0x77A11C: mov     ecx, [esi+3Ch]; this
0x77A11F: cmp     ecx, [edi]
0x77A121: jz      short loc_77A13F
0x77A123: test    ecx, ecx
0x77A125: jz      short loc_77A132
0x77A127: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x77A12B: jnz     short loc_77A132
0x77A12D: call    sub_7604D0
0x77A132: mov     eax, [edi]
0x77A134: test    eax, eax
0x77A136: mov     [esi+3Ch], eax
0x77A139: jz      short loc_77A13F
0x77A13B: add     dword ptr [eax+60h], 1
0x77A13F: mov     eax, [esi+38h]
0x77A142: sub     eax, [esi+34h]
0x77A145: pop     edi
0x77A146: pop     esi
0x77A147: retn
