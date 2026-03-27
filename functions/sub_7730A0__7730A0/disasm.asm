0x7730A0: mov     eax, [esp+arg_0]
0x7730A4: movzx   eax, word ptr ds:0B427E0h[eax*2]
0x7730AC: cmp     ax, 8
0x7730B0: jnb     short loc_7730EF
0x7730B2: movzx   eax, ax
0x7730B5: cmp     byte ptr [eax+ecx+5Ch], 0
0x7730BA: jz      short loc_7730D2
0x7730BC: mov     ecx, [ecx+eax*4+3Ch]
0x7730C0: mov     edx, [esp+arg_4]
0x7730C4: mov     eax, [esp+arg_8]
0x7730C8: mov     [edx], ecx
0x7730CA: mov     byte ptr [eax], 0
0x7730CD: mov     al, 1
0x7730CF: retn    0Ch
0x7730D2: cmp     byte ptr [eax+ecx+2Ch], 0
0x7730D7: jz      short loc_7730EF
0x7730D9: mov     ecx, [ecx+eax*4+0Ch]
0x7730DD: mov     edx, [esp+arg_4]
0x7730E1: mov     eax, [esp+arg_8]
0x7730E5: mov     [edx], ecx
0x7730E7: mov     byte ptr [eax], 1
0x7730EA: mov     al, 1
0x7730EC: retn    0Ch
0x7730EF: xor     al, al
0x7730F1: retn    0Ch
