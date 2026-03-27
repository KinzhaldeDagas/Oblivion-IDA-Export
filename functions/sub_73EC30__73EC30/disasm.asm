0x73EC30: push    ebx
0x73EC31: mov     ebx, [esp+4+arg_0]
0x73EC35: push    ebp
0x73EC36: push    esi
0x73EC37: push    edi
0x73EC38: push    ebx
0x73EC39: mov     esi, ecx
0x73EC3B: call    j_nullsub_3
0x73EC40: push    ebx
0x73EC41: lea     ecx, [esi+8]
0x73EC44: call    sub_716EE0
0x73EC49: push    ebx
0x73EC4A: lea     ecx, [esi+18h]
0x73EC4D: call    sub_716EE0
0x73EC52: mov     eax, [ebx+220h]
0x73EC58: mov     edx, [eax+8]
0x73EC5B: push    1
0x73EC5D: lea     ecx, [esp+14h+arg_0]
0x73EC61: push    ecx
0x73EC62: push    4
0x73EC64: lea     ebp, [esi+28h]
0x73EC67: push    ebp
0x73EC68: push    eax
0x73EC69: mov     [esp+24h+arg_0], 4
0x73EC71: call    edx
0x73EC73: xor     edi, edi
0x73EC75: add     esp, 14h
0x73EC78: cmp     [ebp+0], edi
0x73EC7B: jbe     short loc_73ECAF
0x73EC7D: lea     ecx, [ecx+0]
0x73EC80: mov     edx, [esi+2Ch]
0x73EC83: mov     eax, [ebx+220h]
0x73EC89: push    1
0x73EC8B: lea     ecx, [esp+14h+arg_0]
0x73EC8F: push    ecx
0x73EC90: lea     ecx, [edx+edi*4]
0x73EC93: mov     edx, [eax+8]
0x73EC96: push    4
0x73EC98: push    ecx
0x73EC99: push    eax
0x73EC9A: mov     [esp+24h+arg_0], 4
0x73ECA2: call    edx
0x73ECA4: add     edi, 1
0x73ECA7: add     esp, 14h
0x73ECAA: cmp     edi, [ebp+0]
0x73ECAD: jb      short loc_73EC80
0x73ECAF: pop     edi
0x73ECB0: pop     esi
0x73ECB1: pop     ebp
0x73ECB2: pop     ebx
0x73ECB3: retn    4
