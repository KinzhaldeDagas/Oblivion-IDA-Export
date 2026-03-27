0x75A3C0: push    esi
0x75A3C1: push    edi
0x75A3C2: mov     edi, [esp+8+arg_0]
0x75A3C6: push    edi
0x75A3C7: mov     esi, ecx
0x75A3C9: call    sub_752CD0
0x75A3CE: test    al, al
0x75A3D0: jnz     short loc_75A3D7
0x75A3D2: pop     edi
0x75A3D3: pop     esi
0x75A3D4: retn    4
0x75A3D7: mov     ecx, [esi+18h]
0x75A3DA: mov     eax, [edi+18h]
0x75A3DD: mov     edx, [ecx]
0x75A3DF: push    eax
0x75A3E0: mov     eax, [edx+2Ch]
0x75A3E3: call    eax
0x75A3E5: test    al, al
0x75A3E7: pop     edi
0x75A3E8: setnz   al
0x75A3EB: pop     esi
0x75A3EC: retn    4
