0x708EB0: sub     esp, 8
0x708EB3: push    esi
0x708EB4: mov     esi, [esp+0Ch+arg_0]
0x708EB8: push    edi
0x708EB9: push    esi
0x708EBA: mov     edi, ecx
0x708EBC: call    sub_707F00
0x708EC1: cmp     dword ptr [esi+0D8h], 0A010066h
0x708ECB: jb      short loc_708F00
0x708ECD: mov     eax, [esi+21Ch]
0x708ED3: push    1
0x708ED5: lea     ecx, [esp+14h+var_8]
0x708ED9: push    ecx
0x708EDA: push    1
0x708EDC: lea     edx, [esp+1Ch+arg_0]
0x708EE0: push    edx
0x708EE1: push    eax
0x708EE2: mov     eax, [eax+4]
0x708EE5: mov     [esp+24h+var_8], 1
0x708EED: call    eax
0x708EEF: add     esp, 14h
0x708EF2: cmp     byte ptr [esp+10h+arg_0], 0
0x708EF7: setnz   cl
0x708EFA: mov     [edi+0ACh], cl
0x708F00: cmp     dword ptr [esi+0D8h], 4010000h
0x708F0A: jnb     short loc_708F6E
0x708F0C: mov     eax, [esi+21Ch]
0x708F12: push    1
0x708F14: lea     edx, [esp+14h+var_8]
0x708F18: push    edx
0x708F19: mov     edx, [eax+4]
0x708F1C: push    4
0x708F1E: lea     ecx, [esp+1Ch+arg_0]
0x708F22: push    ecx
0x708F23: push    eax
0x708F24: mov     [esp+24h+var_8], 4
0x708F2C: call    edx
0x708F2E: xor     edi, edi
0x708F30: add     esp, 14h
0x708F33: cmp     [esp+10h+arg_0], edi
0x708F37: jle     short loc_708F6E
0x708F39: lea     esp, [esp+0]
0x708F40: mov     eax, [esi+21Ch]
0x708F46: push    1
0x708F48: lea     ecx, [esp+14h+var_8]
0x708F4C: push    ecx
0x708F4D: push    4
0x708F4F: lea     edx, [esp+1Ch+var_4]
0x708F53: push    edx
0x708F54: push    eax
0x708F55: mov     eax, [eax+4]
0x708F58: mov     [esp+24h+var_8], 4
0x708F60: call    eax
0x708F62: add     edi, 1
0x708F65: add     esp, 14h
0x708F68: cmp     edi, [esp+10h+arg_0]
0x708F6C: jl      short loc_708F40
0x708F6E: cmp     dword ptr [esi+0D8h], 0A00010Eh
0x708F78: jb      short loc_708F81
0x708F7A: mov     ecx, esi
0x708F7C: call    sub_712AE0
0x708F81: pop     edi
0x708F82: pop     esi
0x708F83: add     esp, 8
0x708F86: retn    4
