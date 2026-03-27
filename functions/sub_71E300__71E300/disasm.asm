0x71E300: mov     eax, [esp+arg_4]
0x71E304: test    eax, eax
0x71E306: push    esi
0x71E307: mov     esi, [esp+4+arg_C]
0x71E30B: jbe     short loc_71E381
0x71E30D: mov     edx, [esp+4+arg_18]
0x71E311: push    ebx
0x71E312: push    ebp
0x71E313: push    edi
0x71E314: mov     edi, [esp+10h+arg_0]
0x71E318: mov     [esp+10h+arg_C], eax
0x71E31C: mov     eax, [esp+10h+arg_14]
0x71E320: test    edi, edi
0x71E322: jbe     short loc_71E377
0x71E324: mov     cl, [edx]
0x71E326: mov     bl, [edx+1]
0x71E329: movzx   ebp, cl
0x71E32C: movzx   ecx, byte ptr [eax+14h]
0x71E330: shr     ebp, cl
0x71E332: movzx   ecx, byte ptr [eax+10h]
0x71E336: shl     ebp, cl
0x71E338: movzx   ecx, byte ptr [eax+15h]
0x71E33C: and     ebp, [eax]
0x71E33E: add     edx, 1
0x71E341: movzx   ebx, bl
0x71E344: shr     ebx, cl
0x71E346: movzx   ecx, byte ptr [eax+11h]
0x71E34A: shl     ebx, cl
0x71E34C: movzx   ecx, byte ptr [eax+17h]
0x71E350: and     ebx, [eax+4]
0x71E353: add     edx, 1
0x71E356: or      ebp, ebx
0x71E358: or      ebx, 0FFFFFFFFh
0x71E35B: shr     ebx, cl
0x71E35D: movzx   ecx, byte ptr [eax+13h]
0x71E361: shl     ebx, cl
0x71E363: add     esi, 4
0x71E366: and     ebx, [eax+0Ch]
0x71E369: or      ebp, ebx
0x71E36B: sub     edi, 1
0x71E36E: mov     [esi-4], ebp
0x71E371: jnz     short loc_71E324
0x71E373: mov     edi, [esp+10h+arg_0]
0x71E377: sub     [esp+10h+arg_C], 1
0x71E37C: jnz     short loc_71E320
0x71E37E: pop     edi
0x71E37F: pop     ebp
0x71E380: pop     ebx
0x71E381: pop     esi
0x71E382: retn
