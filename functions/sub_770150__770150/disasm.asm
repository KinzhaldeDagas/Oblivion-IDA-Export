0x770150: mov     eax, [ecx+18h]
0x770153: mov     edx, [ecx+2Ch]
0x770156: push    ebx
0x770157: push    esi
0x770158: mov     si, [esp+8+arg_4]
0x77015D: mov     [edx+eax*8], si
0x770161: mov     eax, [esp+8+arg_0]
0x770165: mov     edx, [ecx+18h]
0x770168: mov     esi, [ecx+2Ch]
0x77016B: push    edi
0x77016C: mov     di, [eax+4]
0x770170: mov     [esi+edx*8+2], di
0x770175: mov     edx, [eax+0Ch]
0x770178: movzx   edx, byte ptr ds:0B29858h[edx*4]
0x770180: mov     esi, [ecx+18h]
0x770183: mov     edi, [ecx+2Ch]
0x770186: mov     [edi+esi*8+4], dl
0x77018A: mov     edx, [eax+10h]
0x77018D: movzx   edx, byte ptr ds:0B2983Ch[edx*4]
0x770195: mov     esi, [ecx+18h]
0x770198: mov     edi, [ecx+2Ch]
0x77019B: mov     [edi+esi*8+5], dl
0x77019F: mov     edx, [eax+14h]
0x7701A2: movzx   edx, byte ptr ds:0B298A0h[edx*4]
0x7701AA: mov     esi, [ecx+18h]
0x7701AD: mov     edi, [ecx+2Ch]
0x7701B0: mov     [edi+esi*8+6], dl
0x7701B4: mov     bl, [eax+18h]
0x7701B7: mov     edx, [ecx+18h]
0x7701BA: mov     esi, [ecx+2Ch]
0x7701BD: mov     [esi+edx*8+7], bl
0x7701C1: add     dword ptr [ecx+18h], 1
0x7701C5: cmp     dword ptr [eax+0Ch], 12h
0x7701C9: pop     edi
0x7701CA: pop     esi
0x7701CB: pop     ebx
0x7701CC: jl      short loc_7701D3
0x7701CE: xor     eax, eax
0x7701D0: retn    8
0x7701D3: mov     eax, [eax+0Ch]
0x7701D6: mov     eax, ds:0B42708h[eax*4]
0x7701DD: retn    8
