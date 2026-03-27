0x588E60: push    ecx
0x588E61: push    ebp
0x588E62: mov     ebp, [esp+8+arg_0]
0x588E66: xor     eax, eax
0x588E68: cmp     ebp, eax
0x588E6A: jz      short loc_588EE6
0x588E6C: cmp     [ebp+14h], ax
0x588E70: jz      short loc_588EE6
0x588E72: mov     ecx, [ebp+10h]
0x588E75: push    ebx
0x588E76: mov     ebx, [ecx]
0x588E78: cmp     ebx, eax
0x588E7A: mov     [esp+0Ch+var_4], eax
0x588E7E: mov     [esp+0Ch+arg_0], eax
0x588E82: jnz     short loc_588E90
0x588E84: mov     edx, [ebp+1Ch]
0x588E87: mov     ecx, [edx+10h]
0x588E8A: mov     ebx, [ecx]
0x588E8C: cmp     ebx, eax
0x588E8E: jz      short loc_588EDE
0x588E90: push    esi
0x588E91: push    edi
0x588E92: mov     ecx, ebx
0x588E94: mov     edi, offset aTileptr; "Tileptr"
0x588E99: call    sub_452A60
0x588E9E: mov     esi, eax
0x588EA0: mov     ecx, 8
0x588EA5: xor     edx, edx
0x588EA7: repe cmpsb
0x588EA9: jz      short loc_588ED5
0x588EAB: mov     eax, [esp+14h+arg_0]
0x588EAF: movzx   ecx, word ptr [ebp+14h]
0x588EB3: add     eax, 1
0x588EB6: cmp     eax, ecx
0x588EB8: mov     [esp+14h+arg_0], eax
0x588EBC: jnb     short loc_588EDC
0x588EBE: movzx   edx, ax
0x588EC1: mov     eax, [ebp+10h]
0x588EC4: mov     ebx, [eax+edx*4]
0x588EC7: test    ebx, ebx
0x588EC9: jnz     short loc_588E92
0x588ECB: mov     eax, [esp+14h+var_4]
0x588ECF: pop     edi
0x588ED0: pop     esi
0x588ED1: pop     ebx
0x588ED2: pop     ebp
0x588ED3: pop     ecx
0x588ED4: retn
0x588ED5: mov     ecx, [ebx+0Ch]
0x588ED8: mov     [esp+14h+var_4], ecx
0x588EDC: pop     edi
0x588EDD: pop     esi
0x588EDE: mov     eax, [esp+0Ch+var_4]
0x588EE2: pop     ebx
0x588EE3: pop     ebp
0x588EE4: pop     ecx
0x588EE5: retn
0x588EE6: xor     eax, eax
0x588EE8: pop     ebp
0x588EE9: pop     ecx
0x588EEA: retn
