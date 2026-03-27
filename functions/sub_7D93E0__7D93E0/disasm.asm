0x7D93E0: push    esi
0x7D93E1: mov     esi, [esp+4+arg_0]
0x7D93E5: mov     eax, [esi]
0x7D93E7: mov     edx, [eax+10h]
0x7D93EA: mov     ecx, esi
0x7D93EC: call    edx
0x7D93EE: test    eax, eax
0x7D93F0: mov     ecx, esi
0x7D93F2: jz      short loc_7D9452
0x7D93F4: push    4
0x7D93F6: call    NiNode_GetNiPropertyByID
0x7D93FB: mov     esi, eax
0x7D93FD: test    esi, esi
0x7D93FF: jz      loc_7D94A4
0x7D9405: mov     eax, [esi]
0x7D9407: mov     edx, [eax+54h]
0x7D940A: mov     ecx, esi
0x7D940C: call    edx
0x7D940E: cmp     eax, 5
0x7D9411: jl      loc_7D94A4
0x7D9417: mov     eax, [esi]
0x7D9419: mov     edx, [eax+54h]
0x7D941C: mov     ecx, esi
0x7D941E: call    edx
0x7D9420: cmp     eax, 0Ah
0x7D9423: jg      loc_7D94A4
0x7D9429: cmp     byte ptr [esp+4+arg_8], 0
0x7D942E: jz      short loc_7D9440
0x7D9430: mov     eax, [esp+4+arg_4]
0x7D9434: or      [esi+1Ch], eax
0x7D9437: mov     dword ptr [esi+24h], 0
0x7D943E: pop     esi
0x7D943F: retn
0x7D9440: mov     ecx, [esp+4+arg_4]
0x7D9444: not     ecx
0x7D9446: and     [esi+1Ch], ecx
0x7D9449: mov     dword ptr [esi+24h], 0
0x7D9450: pop     esi
0x7D9451: retn
0x7D9452: mov     edx, [esi]
0x7D9454: mov     eax, [edx+8]
0x7D9457: push    edi
0x7D9458: call    eax
0x7D945A: mov     edi, eax
0x7D945C: test    edi, edi
0x7D945E: jz      short loc_7D94A3
0x7D9460: push    ebx
0x7D9461: movzx   ebx, word ptr [edi+0B6h]
0x7D9468: xor     esi, esi
0x7D946A: test    ebx, ebx
0x7D946C: jbe     short loc_7D94A2
0x7D946E: push    ebp
0x7D946F: mov     ebp, [esp+10h+arg_4]
0x7D9473: movzx   ecx, word ptr [edi+0B6h]
0x7D947A: cmp     ecx, esi
0x7D947C: jbe     short loc_7D949A
0x7D947E: mov     edx, [edi+0B0h]
0x7D9484: mov     eax, [edx+esi*4]
0x7D9487: test    eax, eax
0x7D9489: jz      short loc_7D949A
0x7D948B: mov     ecx, [esp+10h+arg_8]
0x7D948F: push    ecx
0x7D9490: push    ebp
0x7D9491: push    eax
0x7D9492: call    sub_7D93E0
0x7D9497: add     esp, 0Ch
0x7D949A: add     esi, 1
0x7D949D: cmp     esi, ebx
0x7D949F: jb      short loc_7D9473
0x7D94A1: pop     ebp
0x7D94A2: pop     ebx
0x7D94A3: pop     edi
0x7D94A4: pop     esi
0x7D94A5: retn
