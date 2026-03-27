0x8F5BC0: mov     eax, [esp+arg_0]
0x8F5BC4: push    esi
0x8F5BC5: push    edi
0x8F5BC6: mov     edi, [esp+8+arg_4]
0x8F5BCA: mov     esi, ecx
0x8F5BCC: push    17h
0x8F5BCE: mov     word ptr [esi+6], 1
0x8F5BD4: mov     dword ptr [esi], offset off_A9B38C
0x8F5BDA: mov     [esi+8], eax
0x8F5BDD: mov     ecx, ds:0BA7D98h
0x8F5BE3: mov     edx, [ecx]
0x8F5BE5: push    edi
0x8F5BE6: push    40h ; '@'
0x8F5BE8: call    dword ptr [edx+8]
0x8F5BEB: mov     [esi+0Ch], eax
0x8F5BEE: or      eax, 0FFFFFFFFh
0x8F5BF1: xor     ecx, ecx
0x8F5BF3: mov     [esi+10h], ecx
0x8F5BF6: mov     [esi+14h], ecx
0x8F5BF9: mov     [esi+18h], edi
0x8F5BFC: mov     [esi+1Ch], eax
0x8F5BFF: mov     [esi+20h], eax
0x8F5C02: mov     eax, [esi+8]
0x8F5C05: cmp     [eax+4], cx
0x8F5C09: jz      short loc_8F5C0F
0x8F5C0B: inc     word ptr [eax+6]
0x8F5C0F: pop     edi
0x8F5C10: mov     eax, esi
0x8F5C12: pop     esi
0x8F5C13: retn    8
