0x71C490: mov     eax, [esp+arg_18]
0x71C494: mov     [esp+arg_18], eax
0x71C498: mov     eax, [esp+arg_4]
0x71C49C: test    eax, eax
0x71C49E: push    ebp
0x71C49F: mov     ebp, [esp+4+arg_C]
0x71C4A3: jbe     loc_71C5A2
0x71C4A9: mov     ecx, [esp+4+arg_0]
0x71C4AD: push    ebx
0x71C4AE: push    esi
0x71C4AF: mov     esi, [esp+0Ch+arg_14]
0x71C4B3: mov     [esp+0Ch+arg_4], eax
0x71C4B7: mov     eax, [esp+0Ch+arg_1C]
0x71C4BB: push    edi
0x71C4BC: mov     edx, 1
0x71C4C1: test    ecx, ecx
0x71C4C3: jbe     loc_71C595
0x71C4C9: mov     [esp+10h+arg_C], ecx
0x71C4CD: lea     ecx, [ecx+0]
0x71C4D0: mov     ecx, [esp+10h+arg_18]
0x71C4D4: movzx   edi, word ptr [ecx]
0x71C4D7: movzx   ecx, byte ptr [eax+13h]
0x71C4DB: mov     edx, [eax+0Ch]
0x71C4DE: and     edx, edi
0x71C4E0: shr     edx, cl
0x71C4E2: movzx   ecx, byte ptr [eax+17h]
0x71C4E6: shl     dl, cl
0x71C4E8: movzx   ecx, byte ptr [esi+17h]
0x71C4EC: shr     dl, cl
0x71C4EE: movzx   ecx, byte ptr [esi+13h]
0x71C4F2: movzx   dx, dl
0x71C4F6: shl     dx, cl
0x71C4F9: movzx   ecx, byte ptr [eax+12h]
0x71C4FD: and     dx, [esi+0Ch]
0x71C501: mov     ebx, edi
0x71C503: and     ebx, [eax+8]
0x71C506: add     [esp+10h+arg_18], 2
0x71C50B: shr     ebx, cl
0x71C50D: movzx   ecx, byte ptr [eax+16h]
0x71C511: shl     bl, cl
0x71C513: movzx   ecx, byte ptr [esi+16h]
0x71C517: shr     bl, cl
0x71C519: movzx   ecx, byte ptr [esi+12h]
0x71C51D: movzx   bx, bl
0x71C521: shl     bx, cl
0x71C524: movzx   ecx, byte ptr [eax+10h]
0x71C528: and     bx, [esi+8]
0x71C52C: add     ebp, 2
0x71C52F: or      dx, bx
0x71C532: mov     ebx, edi
0x71C534: and     ebx, [eax]
0x71C536: shr     ebx, cl
0x71C538: movzx   ecx, byte ptr [eax+14h]
0x71C53C: shl     bl, cl
0x71C53E: movzx   ecx, byte ptr [esi+14h]
0x71C542: shr     bl, cl
0x71C544: movzx   ecx, byte ptr [esi+10h]
0x71C548: movzx   bx, bl
0x71C54C: shl     bx, cl
0x71C54F: movzx   ecx, byte ptr [eax+11h]
0x71C553: and     bx, [esi]
0x71C556: or      dx, bx
0x71C559: mov     ebx, [eax+4]
0x71C55C: and     ebx, edi
0x71C55E: shr     ebx, cl
0x71C560: movzx   ecx, byte ptr [eax+15h]
0x71C564: shl     bl, cl
0x71C566: movzx   ecx, byte ptr [esi+15h]
0x71C56A: shr     bl, cl
0x71C56C: movzx   ecx, byte ptr [esi+11h]
0x71C570: movzx   di, bl
0x71C574: shl     di, cl
0x71C577: and     di, [esi+4]
0x71C57B: or      dx, di
0x71C57E: mov     [ebp-2], dx
0x71C582: mov     edx, 1
0x71C587: sub     [esp+10h+arg_C], edx
0x71C58B: jnz     loc_71C4D0
0x71C591: mov     ecx, [esp+10h+arg_0]
0x71C595: sub     [esp+10h+arg_4], edx
0x71C599: jnz     loc_71C4C1
0x71C59F: pop     edi
0x71C5A0: pop     esi
0x71C5A1: pop     ebx
0x71C5A2: pop     ebp
0x71C5A3: retn
