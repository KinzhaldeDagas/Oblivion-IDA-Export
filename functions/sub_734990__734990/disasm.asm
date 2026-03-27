0x734990: push    ebp
0x734991: push    esi
0x734992: mov     esi, ecx
0x734994: xor     ebp, ebp
0x734996: cmp     [esi+10Eh], bp
0x73499D: jbe     short loc_734A03
0x73499F: mov     eax, [esp+8+arg_4]
0x7349A3: push    edi
0x7349A4: mov     edi, [esp+0Ch+arg_0]
0x7349A8: jmp     short loc_7349B0
0x7349AA: align 10h
0x7349B0: movzx   ecx, byte ptr [edi+1]
0x7349B4: movzx   edx, word ptr [esi+104h]
0x7349BB: shl     ecx, 8
0x7349BE: sub     ecx, edx
0x7349C0: movzx   edx, byte ptr [edi]
0x7349C3: add     ecx, edx
0x7349C5: mov     edx, [esi+16Ch]
0x7349CB: lea     edx, [edx+ecx*4]
0x7349CE: movzx   ecx, byte ptr [edx]
0x7349D1: mov     [eax], cl
0x7349D3: movzx   ecx, byte ptr [edx+1]
0x7349D7: mov     [eax+1], cl
0x7349DA: movzx   ecx, byte ptr [edx+2]
0x7349DE: add     eax, 1
0x7349E1: add     eax, 1
0x7349E4: mov     [eax], cl
0x7349E6: mov     dl, [edx+3]
0x7349E9: add     eax, 1
0x7349EC: mov     [eax], dl
0x7349EE: movzx   ecx, word ptr [esi+10Eh]
0x7349F5: add     ebp, 1
0x7349F8: add     eax, 1
0x7349FB: add     edi, 2
0x7349FE: cmp     ebp, ecx
0x734A00: jb      short loc_7349B0
0x734A02: pop     edi
0x734A03: pop     esi
0x734A04: pop     ebp
0x734A05: retn    8
