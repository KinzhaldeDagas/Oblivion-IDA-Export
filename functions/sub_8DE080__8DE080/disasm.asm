0x8DE080: push    esi
0x8DE081: push    edi
0x8DE082: mov     edi, ecx
0x8DE084: mov     eax, [edi+64h]
0x8DE087: mov     ecx, [edi+60h]
0x8DE08A: lea     esi, [edi+5Ch]
0x8DE08D: and     eax, 3FFFFFFFh
0x8DE092: cmp     ecx, eax
0x8DE094: jnz     short loc_8DE0A1
0x8DE096: push    4
0x8DE098: push    esi
0x8DE099: call    sub_8A6EE0
0x8DE09E: add     esp, 8
0x8DE0A1: mov     ecx, [esi+4]
0x8DE0A4: mov     edx, [esi]
0x8DE0A6: mov     eax, [esp+8+arg_0]
0x8DE0AA: mov     [edx+ecx*4], eax
0x8DE0AD: inc     dword ptr [esi+4]
0x8DE0B0: mov     [eax+0Ch], edi
0x8DE0B3: pop     edi
0x8DE0B4: pop     esi
0x8DE0B5: retn    4
