0x89D960: push    ebx
0x89D961: push    ebp
0x89D962: push    esi
0x89D963: mov     esi, ecx
0x89D965: test    esi, esi
0x89D967: jz      short loc_89D96E
0x89D969: mov     ebp, [esi+8]
0x89D96C: jmp     short loc_89D970
0x89D96E: xor     ebp, ebp
0x89D970: xor     bl, bl
0x89D972: test    ebp, ebp
0x89D974: jz      short loc_89D9B3
0x89D976: mov     eax, [esi]
0x89D978: push    edi
0x89D979: mov     edi, [esp+10h+arg_0]
0x89D97D: test    edi, edi
0x89D97F: jz      short loc_89D9A5
0x89D981: mov     edx, [eax+58h]
0x89D984: call    edx
0x89D986: cmp     eax, [edi+8]
0x89D989: jz      short loc_89D9AA
0x89D98B: mov     eax, [esi]
0x89D98D: mov     edx, [eax+60h]
0x89D990: mov     ecx, esi
0x89D992: call    edx
0x89D994: push    ebp
0x89D995: mov     ecx, edi
0x89D997: call    sub_88C3D0
0x89D99C: pop     edi
0x89D99D: pop     esi
0x89D99E: pop     ebp
0x89D99F: mov     al, 1
0x89D9A1: pop     ebx
0x89D9A2: retn    4
0x89D9A5: mov     edx, [eax+60h]
0x89D9A8: call    edx
0x89D9AA: pop     edi
0x89D9AB: pop     esi
0x89D9AC: pop     ebp
0x89D9AD: mov     al, bl
0x89D9AF: pop     ebx
0x89D9B0: retn    4
0x89D9B3: pop     esi
0x89D9B4: pop     ebp
0x89D9B5: mov     al, bl
0x89D9B7: pop     ebx
0x89D9B8: retn    4
