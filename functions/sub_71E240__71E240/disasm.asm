0x71E240: push    ecx
0x71E241: mov     eax, [esp+4+arg_4]
0x71E245: test    eax, eax
0x71E247: push    edi
0x71E248: mov     edi, [esp+8+arg_C]
0x71E24C: jbe     loc_71E2F3
0x71E252: mov     ecx, [esp+8+arg_0]
0x71E256: push    ebx
0x71E257: push    ebp
0x71E258: push    esi
0x71E259: mov     esi, [esp+14h+arg_18]
0x71E25D: mov     [esp+14h+var_4], eax
0x71E261: mov     eax, [esp+14h+arg_14]
0x71E265: mov     ebp, 1
0x71E26A: lea     ebx, [ebx+0]
0x71E270: test    ecx, ecx
0x71E272: jbe     short loc_71E2EA
0x71E274: mov     [esp+14h+arg_4], ecx
0x71E278: mov     dl, [esi]
0x71E27A: movzx   ecx, byte ptr [esi+ebp]
0x71E27E: add     esi, ebp
0x71E280: mov     bl, [esi+ebp]
0x71E283: add     esi, ebp
0x71E285: mov     byte ptr [esp+14h+arg_C], cl
0x71E289: movzx   ecx, byte ptr [eax+17h]
0x71E28D: shr     bl, cl
0x71E28F: movzx   ecx, byte ptr [eax+13h]
0x71E293: movzx   bp, bl
0x71E297: mov     bl, byte ptr [esp+14h+arg_C]
0x71E29B: shl     bp, cl
0x71E29E: movzx   ecx, byte ptr [eax+15h]
0x71E2A2: and     bp, [eax+0Ch]
0x71E2A6: shr     bl, cl
0x71E2A8: movzx   ecx, byte ptr [eax+11h]
0x71E2AC: movzx   bx, bl
0x71E2B0: shl     bx, cl
0x71E2B3: movzx   ecx, byte ptr [eax+14h]
0x71E2B7: and     bx, [eax+4]
0x71E2BB: shr     dl, cl
0x71E2BD: movzx   ecx, byte ptr [eax+10h]
0x71E2C1: movzx   dx, dl
0x71E2C5: shl     dx, cl
0x71E2C8: or      bp, bx
0x71E2CB: add     esi, 2
0x71E2CE: add     edi, 2
0x71E2D1: and     dx, [eax]
0x71E2D4: or      bp, dx
0x71E2D7: mov     [edi-2], bp
0x71E2DB: mov     ebp, 1
0x71E2E0: sub     [esp+14h+arg_4], ebp
0x71E2E4: jnz     short loc_71E278
0x71E2E6: mov     ecx, [esp+14h+arg_0]
0x71E2EA: sub     [esp+14h+var_4], ebp
0x71E2EE: jnz     short loc_71E270
0x71E2F0: pop     esi
0x71E2F1: pop     ebp
0x71E2F2: pop     ebx
0x71E2F3: pop     edi
0x71E2F4: pop     ecx
0x71E2F5: retn
