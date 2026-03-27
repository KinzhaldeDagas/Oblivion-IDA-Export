0x76E610: sub     esp, 0Ch
0x76E613: push    ebx
0x76E614: push    ebp
0x76E615: push    esi
0x76E616: push    edi
0x76E617: mov     edi, [esp+1Ch+arg_0]
0x76E61B: mov     ebx, [edi+10h]
0x76E61E: mov     eax, [edi+0Ch]
0x76E621: mov     esi, [edi+24h]
0x76E624: movzx   ecx, word ptr [edi+4]
0x76E628: xor     ebp, ebp
0x76E62A: cmp     ebx, ebp
0x76E62C: mov     [esp+1Ch+var_C], ebp
0x76E630: mov     [esp+1Ch+arg_0], eax
0x76E634: jnz     short loc_76E670
0x76E636: xor     ebx, ebx
0x76E638: cmp     [edi+8], bp
0x76E63C: jbe     loc_76E7E7
0x76E642: mov     eax, [edi+1Ch]
0x76E645: push    eax
0x76E646: push    0
0x76E648: push    esi
0x76E649: call    __memset
0x76E64E: mov     eax, [edi+1Ch]
0x76E651: add     esi, [edi+20h]
0x76E654: add     [esp+28h+var_C], eax
0x76E658: add     ebx, 1
0x76E65B: add     esp, 0Ch
0x76E65E: cmp     bx, [edi+8]
0x76E662: jb      short loc_76E645
0x76E664: mov     eax, [esp+1Ch+var_C]
0x76E668: pop     edi
0x76E669: pop     esi
0x76E66A: pop     ebp
0x76E66B: pop     ebx
0x76E66C: add     esp, 0Ch
0x76E66F: retn
0x76E670: cmp     eax, ebp
0x76E672: jz      short loc_76E6D0
0x76E674: cmp     [edi+8], bp
0x76E678: jbe     loc_76E7E7
0x76E67E: movzx   ecx, cx
0x76E681: mov     [esp+1Ch+var_8], ecx
0x76E685: jmp     short loc_76E694
0x76E687: jmp     short loc_76E690
0x76E689: align 10h
0x76E690: mov     eax, [esp+1Ch+arg_0]
0x76E694: mov     ecx, [edi+14h]
0x76E697: movzx   edx, bp
0x76E69A: movzx   eax, word ptr [eax+edx*2]
0x76E69E: imul    eax, [esp+1Ch+var_8]
0x76E6A3: push    ecx; Size
0x76E6A4: lea     eax, [ebx+eax*4]
0x76E6A7: push    eax; Src
0x76E6A8: push    esi; Dst
0x76E6A9: add     ebp, 1
0x76E6AC: call    _memcpy
0x76E6B1: mov     edx, [edi+1Ch]
0x76E6B4: add     esi, [edi+20h]
0x76E6B7: add     [esp+28h+var_C], edx
0x76E6BB: add     esp, 0Ch
0x76E6BE: cmp     bp, [edi+8]
0x76E6C2: jb      short loc_76E690
0x76E6C4: mov     eax, [esp+1Ch+var_C]
0x76E6C8: pop     edi
0x76E6C9: pop     esi
0x76E6CA: pop     ebp
0x76E6CB: pop     ebx
0x76E6CC: add     esp, 0Ch
0x76E6CF: retn
0x76E6D0: mov     eax, [edi+1Ch]
0x76E6D3: mov     edx, [edi+14h]
0x76E6D6: cmp     edx, 8
0x76E6D9: mov     ecx, [edi+20h]
0x76E6DC: mov     ebp, [edi+18h]
0x76E6DF: mov     [esp+1Ch+arg_0], eax
0x76E6E3: movzx   eax, word ptr [edi+8]
0x76E6E7: mov     [esp+1Ch+var_4], ecx
0x76E6EB: jz      loc_76E7C5
0x76E6F1: cmp     edx, 0Ch
0x76E6F4: jz      loc_76E78B
0x76E6FA: cmp     edx, 10h
0x76E6FD: jz      short loc_76E74B
0x76E6FF: test    eax, eax
0x76E701: mov     [esp+1Ch+var_8], 0
0x76E709: jbe     loc_76E7E7
0x76E70F: nop
0x76E710: mov     ecx, [edi+14h]
0x76E713: push    ecx; Size
0x76E714: push    ebx; Src
0x76E715: push    esi; Dst
0x76E716: call    _memcpy
0x76E71B: mov     eax, [esp+28h+var_8]
0x76E71F: movzx   ecx, word ptr [edi+8]
0x76E723: mov     edx, [esp+28h+arg_0]
0x76E727: add     esi, [esp+28h+var_4]
0x76E72B: add     [esp+28h+var_C], edx
0x76E72F: add     eax, 1
0x76E732: add     esp, 0Ch
0x76E735: add     ebx, ebp
0x76E737: cmp     eax, ecx
0x76E739: mov     [esp+1Ch+var_8], eax
0x76E73D: jb      short loc_76E710
0x76E73F: mov     eax, [esp+1Ch+var_C]
0x76E743: pop     edi
0x76E744: pop     esi
0x76E745: pop     ebp
0x76E746: pop     ebx
0x76E747: add     esp, 0Ch
0x76E74A: retn
0x76E74B: test    eax, eax
0x76E74D: jbe     loc_76E7E7
0x76E753: mov     edx, eax
0x76E755: imul    eax, [esp+1Ch+arg_0]
0x76E75A: mov     [esp+1Ch+var_C], eax
0x76E75E: mov     edi, edi
0x76E760: mov     eax, [ebx]
0x76E762: mov     [esi], eax
0x76E764: mov     eax, [ebx+4]
0x76E767: mov     [esi+4], eax
0x76E76A: mov     eax, [ebx+8]
0x76E76D: mov     [esi+8], eax
0x76E770: mov     eax, [ebx+0Ch]
0x76E773: mov     [esi+0Ch], eax
0x76E776: add     ebx, ebp
0x76E778: add     esi, ecx
0x76E77A: sub     edx, 1
0x76E77D: jnz     short loc_76E760
0x76E77F: mov     eax, [esp+1Ch+var_C]
0x76E783: pop     edi
0x76E784: pop     esi
0x76E785: pop     ebp
0x76E786: pop     ebx
0x76E787: add     esp, 0Ch
0x76E78A: retn
0x76E78B: test    eax, eax
0x76E78D: jbe     short loc_76E7E7
0x76E78F: mov     edx, eax
0x76E791: imul    eax, [esp+1Ch+arg_0]
0x76E796: mov     [esp+1Ch+var_C], eax
0x76E79A: lea     ebx, [ebx+0]
0x76E7A0: mov     eax, [ebx]
0x76E7A2: mov     [esi], eax
0x76E7A4: mov     eax, [ebx+4]
0x76E7A7: mov     [esi+4], eax
0x76E7AA: mov     eax, [ebx+8]
0x76E7AD: mov     [esi+8], eax
0x76E7B0: add     ebx, ebp
0x76E7B2: add     esi, ecx
0x76E7B4: sub     edx, 1
0x76E7B7: jnz     short loc_76E7A0
0x76E7B9: mov     eax, [esp+1Ch+var_C]
0x76E7BD: pop     edi
0x76E7BE: pop     esi
0x76E7BF: pop     ebp
0x76E7C0: pop     ebx
0x76E7C1: add     esp, 0Ch
0x76E7C4: retn
0x76E7C5: test    eax, eax
0x76E7C7: jbe     short loc_76E7E7
0x76E7C9: mov     edx, eax
0x76E7CB: imul    eax, [esp+1Ch+arg_0]
0x76E7D0: mov     [esp+1Ch+var_C], eax
0x76E7D4: mov     eax, [ebx]
0x76E7D6: mov     [esi], eax
0x76E7D8: mov     eax, [ebx+4]
0x76E7DB: mov     [esi+4], eax
0x76E7DE: add     ebx, ebp
0x76E7E0: add     esi, ecx
0x76E7E2: sub     edx, 1
0x76E7E5: jnz     short loc_76E7D4
0x76E7E7: mov     eax, [esp+1Ch+var_C]
0x76E7EB: pop     edi
0x76E7EC: pop     esi
0x76E7ED: pop     ebp
0x76E7EE: pop     ebx
0x76E7EF: add     esp, 0Ch
0x76E7F2: retn
