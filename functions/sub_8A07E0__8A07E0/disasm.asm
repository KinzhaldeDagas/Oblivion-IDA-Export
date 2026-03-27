0x8A07E0: push    esi
0x8A07E1: push    edi
0x8A07E2: xor     edi, edi
0x8A07E4: cmp     ecx, edi
0x8A07E6: jz      short loc_8A0816
0x8A07E8: mov     esi, [ecx+8]
0x8A07EB: cmp     esi, edi
0x8A07ED: jz      short loc_8A0816
0x8A07EF: mov     eax, [esi+0Ch]
0x8A07F2: mov     edi, [esp+8+arg_0]
0x8A07F6: push    eax
0x8A07F7: mov     ecx, edi
0x8A07F9: call    sub_8A0200
0x8A07FE: mov     ecx, [esi+10h]
0x8A0801: mov     [edi+0Ch], ecx
0x8A0804: mov     edx, [esi+14h]
0x8A0807: mov     [edi+10h], edx
0x8A080A: movzx   eax, byte ptr [esi+18h]
0x8A080E: mov     [edi+8], eax
0x8A0811: pop     edi
0x8A0812: pop     esi
0x8A0813: retn    4
0x8A0816: mov     esi, [esp+8+arg_0]
0x8A081A: mov     eax, [esi+4]
0x8A081D: cmp     eax, edi
0x8A081F: jz      short loc_8A0843
0x8A0821: mov     [eax+8], edi
0x8A0824: mov     ecx, [esi+4]
0x8A0827: cmp     [ecx+4], di
0x8A082B: jz      short loc_8A0843
0x8A082D: add     word ptr [ecx+6], 0FFFFh
0x8A0832: movzx   eax, word ptr [ecx+6]
0x8A0836: cmp     ax, di
0x8A0839: jnz     short loc_8A0843
0x8A083B: mov     edx, [ecx]
0x8A083D: mov     eax, [edx]
0x8A083F: push    1
0x8A0841: call    eax
0x8A0843: mov     [esi+4], edi
0x8A0846: mov     [esi+0Ch], edi
0x8A0849: mov     [esi+10h], edi
0x8A084C: pop     edi
0x8A084D: pop     esi
0x8A084E: retn    4
