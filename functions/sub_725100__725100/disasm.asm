0x725100: push    ecx
0x725101: push    ebx
0x725102: mov     ebx, [esp+8+arg_0]
0x725106: push    ebp
0x725107: push    esi
0x725108: push    ebx
0x725109: mov     esi, ecx
0x72510B: call    sub_6EBA80
0x725110: push    ebx
0x725111: lea     ecx, [esi+8]
0x725114: call    sub_709430
0x725119: mov     eax, [ebx+21Ch]
0x72511F: push    1
0x725121: lea     ecx, [esp+14h+var_4]
0x725125: push    ecx
0x725126: push    4
0x725128: lea     edx, [esp+1Ch+arg_0]
0x72512C: push    edx
0x72512D: push    eax
0x72512E: mov     eax, [eax+4]
0x725131: mov     [esp+24h+var_4], 4
0x725139: call    eax
0x72513B: mov     ecx, [esp+24h+arg_0]
0x72513F: add     esp, 14h
0x725142: push    ecx
0x725143: mov     ecx, esi
0x725145: call    sub_724AB0
0x72514A: xor     ebp, ebp
0x72514C: cmp     [esp+10h+arg_0], ebp
0x725150: jbe     short loc_7251AD
0x725152: push    edi
0x725153: xor     edi, edi
0x725155: mov     ecx, [esi+24h]
0x725158: mov     eax, [ebx+21Ch]
0x72515E: push    1
0x725160: lea     edx, [esp+18h+var_4]
0x725164: push    edx
0x725165: mov     edx, [eax+4]
0x725168: push    4
0x72516A: add     ecx, edi
0x72516C: push    ecx
0x72516D: push    eax
0x72516E: mov     [esp+28h+var_4], 4
0x725176: call    edx
0x725178: mov     edx, [esi+24h]
0x72517B: mov     eax, [ebx+21Ch]
0x725181: push    1
0x725183: lea     ecx, [esp+2Ch+var_4]
0x725187: push    ecx
0x725188: lea     ecx, [edi+edx+4]
0x72518C: mov     edx, [eax+4]
0x72518F: push    4
0x725191: push    ecx
0x725192: push    eax
0x725193: mov     [esp+3Ch+var_4], 4
0x72519B: call    edx
0x72519D: add     ebp, 1
0x7251A0: add     esp, 28h
0x7251A3: add     edi, 10h
0x7251A6: cmp     ebp, [esp+14h+arg_0]
0x7251AA: jb      short loc_725155
0x7251AC: pop     edi
0x7251AD: pop     esi
0x7251AE: pop     ebp
0x7251AF: pop     ebx
0x7251B0: pop     ecx
0x7251B1: retn    4
