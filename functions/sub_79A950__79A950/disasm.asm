0x79A950: push    ebx
0x79A951: mov     ebx, [esp+4+arg_4]
0x79A955: push    ebp
0x79A956: mov     ebp, [esp+8+arg_8]
0x79A95A: push    esi
0x79A95B: mov     esi, [esp+0Ch+arg_0]
0x79A95F: mov     ecx, ebx
0x79A961: sub     ecx, esi
0x79A963: mov     eax, 92492493h
0x79A968: imul    ecx
0x79A96A: add     edx, ecx
0x79A96C: sar     edx, 5
0x79A96F: mov     eax, edx
0x79A971: shr     eax, 1Fh
0x79A974: add     eax, edx
0x79A976: lea     ecx, ds:0[eax*8]
0x79A97D: sub     ecx, eax
0x79A97F: cmp     esi, ebx
0x79A981: lea     eax, [ebp+ecx*8+0]
0x79A985: mov     edx, esi
0x79A987: jz      short loc_79A9A4
0x79A989: sub     ebp, esi
0x79A98B: push    edi
0x79A98C: lea     esp, [esp+0]
0x79A990: lea     edi, [edx+ebp]
0x79A993: mov     esi, edx
0x79A995: add     edx, 38h ; '8'
0x79A998: cmp     edx, ebx
0x79A99A: mov     ecx, 0Eh
0x79A99F: rep movsd
0x79A9A1: jnz     short loc_79A990
0x79A9A3: pop     edi
0x79A9A4: pop     esi
0x79A9A5: pop     ebp
0x79A9A6: pop     ebx
0x79A9A7: retn
