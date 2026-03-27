0x71E390: mov     eax, [esp+arg_4]
0x71E394: test    eax, eax
0x71E396: push    edi
0x71E397: mov     edi, [esp+4+arg_C]
0x71E39B: jbe     loc_71E423
0x71E3A1: push    ebx
0x71E3A2: push    ebp
0x71E3A3: push    esi
0x71E3A4: mov     esi, [esp+10h+arg_18]
0x71E3A8: mov     [esp+10h+arg_C], eax
0x71E3AC: mov     eax, [esp+10h+arg_14]
0x71E3B0: mov     ebp, [esp+10h+arg_0]
0x71E3B4: test    ebp, ebp
0x71E3B6: jbe     short loc_71E419
0x71E3B8: jmp     short loc_71E3C0
0x71E3BA: align 10h
0x71E3C0: mov     dl, [esi]
0x71E3C2: movzx   ecx, byte ptr [eax+14h]
0x71E3C6: mov     bl, [esi+1]
0x71E3C9: shr     dl, cl
0x71E3CB: movzx   ecx, byte ptr [eax+10h]
0x71E3CF: movzx   dx, dl
0x71E3D3: shl     dx, cl
0x71E3D6: movzx   ecx, byte ptr [eax+15h]
0x71E3DA: and     dx, [eax]
0x71E3DD: shr     bl, cl
0x71E3DF: movzx   ecx, byte ptr [eax+11h]
0x71E3E3: add     esi, 1
0x71E3E6: movzx   bx, bl
0x71E3EA: shl     bx, cl
0x71E3ED: movzx   ecx, byte ptr [eax+17h]
0x71E3F1: and     bx, [eax+4]
0x71E3F5: add     esi, 1
0x71E3F8: or      dx, bx
0x71E3FB: or      ebx, 0FFFFFFFFh
0x71E3FE: shr     ebx, cl
0x71E400: movzx   ecx, byte ptr [eax+13h]
0x71E404: shl     ebx, cl
0x71E406: add     edi, 2
0x71E409: and     bx, [eax+0Ch]
0x71E40D: or      dx, bx
0x71E410: sub     ebp, 1
0x71E413: mov     [edi-2], dx
0x71E417: jnz     short loc_71E3C0
0x71E419: sub     [esp+10h+arg_C], 1
0x71E41E: jnz     short loc_71E3B0
0x71E420: pop     esi
0x71E421: pop     ebp
0x71E422: pop     ebx
0x71E423: pop     edi
0x71E424: retn
