0x58B800: sub     esp, 804h
0x58B806: mov     eax, ds:0B30AACh
0x58B80B: xor     eax, esp
0x58B80D: mov     [esp+804h+var_4], eax
0x58B814: push    ebx
0x58B815: push    esi
0x58B816: mov     esi, [esp+80Ch+arg_0]
0x58B81D: push    edi
0x58B81E: mov     edi, [esp+810h+arg_4]
0x58B825: lea     eax, [esp+810h+var_804]
0x58B829: push    eax
0x58B82A: xor     ebx, ebx
0x58B82C: push    edi
0x58B82D: mov     [esp+818h+var_804], bl
0x58B831: call    sub_588FC0
0x58B836: add     esp, 8
0x58B839: cmp     eax, 1389h
0x58B83E: jg      short loc_58B888
0x58B840: jz      short loc_58B86D
0x58B842: cmp     eax, 6Bh ; 'k'
0x58B845: jnz     def_58B896; jumptable 0058B896 default case, case 5003
0x58B84B: mov     ecx, esi
0x58B84D: call    Tile_GetParentMenu
0x58B852: mov     eax, [eax+10h]
0x58B855: pop     edi
0x58B856: pop     esi
0x58B857: pop     ebx
0x58B858: mov     ecx, [esp+804h+var_4]
0x58B85F: xor     ecx, esp
0x58B861: call    @__security_check_cookie@4; __security_check_cookie(x)
0x58B866: add     esp, 804h
0x58B86C: retn
0x58B86D: mov     eax, [esi+10h]
0x58B870: pop     edi
0x58B871: pop     esi
0x58B872: pop     ebx
0x58B873: mov     ecx, [esp+804h+var_4]
0x58B87A: xor     ecx, esp
0x58B87C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x58B881: add     esp, 804h
0x58B887: retn
0x58B888: sub     eax, 138Ah; switch 6 cases
0x58B88D: cmp     eax, 5
0x58B890: ja      def_58B896; jumptable 0058B896 default case, case 5003
0x58B896: jmp     ds:jpt_58B896[eax*4]; switch jump
0x58B89D: pop     edi; jumptable 0058B896 case 5002
0x58B89E: mov     eax, esi
0x58B8A0: pop     esi
0x58B8A1: pop     ebx
0x58B8A2: mov     ecx, [esp+804h+var_4]
0x58B8A9: xor     ecx, esp
0x58B8AB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x58B8B0: add     esp, 804h
0x58B8B6: retn
0x58B8B7: cmp     [esp+810h+var_804], bl; jumptable 0058B896 case 5004
0x58B8BB: jnz     short loc_58B922
0x58B8BD: mov     eax, [esi+10h]
0x58B8C0: cmp     [eax+3Ch], ebx
0x58B8C3: jz      loc_58B98C
0x58B8C9: mov     edx, [eax+34h]
0x58B8CC: mov     eax, edx
0x58B8CE: cmp     eax, ebx
0x58B8D0: jz      loc_58B9B6
0x58B8D6: cmp     [eax+8], esi
0x58B8D9: lea     ecx, [eax+8]
0x58B8DC: mov     eax, [eax]
0x58B8DE: jz      short loc_58B8FF
0x58B8E0: cmp     eax, ebx
0x58B8E2: jnz     short loc_58B8D6
0x58B8E4: mov     eax, [edx+8]
0x58B8E7: pop     edi
0x58B8E8: pop     esi
0x58B8E9: pop     ebx
0x58B8EA: mov     ecx, [esp+804h+var_4]
0x58B8F1: xor     ecx, esp
0x58B8F3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x58B8F8: add     esp, 804h
0x58B8FE: retn
0x58B8FF: cmp     eax, ebx
0x58B901: jz      loc_58B9B6
0x58B907: mov     eax, [eax+8]
0x58B90A: pop     edi
0x58B90B: pop     esi
0x58B90C: pop     ebx
0x58B90D: mov     ecx, [esp+804h+var_4]
0x58B914: xor     ecx, esp
0x58B916: call    @__security_check_cookie@4; __security_check_cookie(x)
0x58B91B: add     esp, 804h
0x58B921: retn
0x58B922: mov     esi, [esi+10h]
0x58B925: cmp     [esi+3Ch], ebx
0x58B928: jz      short loc_58B98C
0x58B92A: mov     esi, [esi+34h]
0x58B92D: cmp     esi, ebx
0x58B92F: jz      short loc_58B972
0x58B931: mov     edi, [esi+8]
0x58B934: lea     eax, [esi+8]
0x58B937: mov     eax, [edi+8]
0x58B93A: cmp     eax, ebx
0x58B93C: mov     esi, [esi]
0x58B93E: jz      short loc_58B952
0x58B940: lea     ecx, [esp+810h+var_804]
0x58B944: push    ecx; unsigned __int8 *
0x58B945: push    eax; unsigned __int8 *
0x58B946: call    __mbsicmp
0x58B94B: add     esp, 8
0x58B94E: test    eax, eax
0x58B950: jz      short loc_58B970
0x58B952: cmp     esi, ebx
0x58B954: jnz     short loc_58B931
0x58B956: pop     edi
0x58B957: pop     esi
0x58B958: mov     eax, ebx
0x58B95A: pop     ebx
0x58B95B: mov     ecx, [esp+804h+var_4]
0x58B962: xor     ecx, esp
0x58B964: call    @__security_check_cookie@4; __security_check_cookie(x)
0x58B969: add     esp, 804h
0x58B96F: retn
0x58B970: mov     ebx, edi
0x58B972: pop     edi
0x58B973: pop     esi
0x58B974: mov     eax, ebx
0x58B976: pop     ebx
0x58B977: mov     ecx, [esp+804h+var_4]
0x58B97E: xor     ecx, esp
0x58B980: call    @__security_check_cookie@4; __security_check_cookie(x)
0x58B985: add     esp, 804h
0x58B98B: retn
0x58B98C: pop     edi
0x58B98D: pop     esi
0x58B98E: xor     eax, eax
0x58B990: pop     ebx
0x58B991: mov     ecx, [esp+804h+var_4]
0x58B998: xor     ecx, esp
0x58B99A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x58B99F: add     esp, 804h
0x58B9A5: retn
0x58B9A6: mov     al, [esp+810h+var_804]; jumptable 0058B896 case 5005
0x58B9AA: cmp     al, bl
0x58B9AC: jnz     short loc_58B9D1
0x58B9AE: cmp     [esi+3Ch], ebx
0x58B9B1: jz      short loc_58B9D1
0x58B9B3: mov     edx, [esi+34h]
0x58B9B6: mov     eax, [edx+8]
0x58B9B9: pop     edi
0x58B9BA: pop     esi
0x58B9BB: pop     ebx
0x58B9BC: mov     ecx, [esp+804h+var_4]
0x58B9C3: xor     ecx, esp
0x58B9C5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x58B9CA: add     esp, 804h
0x58B9D0: retn
0x58B9D1: cmp     esi, ebx
0x58B9D3: jz      short loc_58B98C
0x58B9D5: cmp     al, bl
0x58B9D7: jz      short loc_58B98C
0x58B9D9: cmp     [esi+3Ch], ebx
0x58B9DC: jz      short loc_58B98C
0x58B9DE: lea     eax, [esp+810h+var_804]
0x58B9E2: push    eax; unsigned __int8 *
0x58B9E3: mov     ecx, esi
0x58B9E5: call    sub_589930
0x58B9EA: pop     edi
0x58B9EB: pop     esi
0x58B9EC: pop     ebx
0x58B9ED: mov     ecx, [esp+804h+var_4]
0x58B9F4: xor     ecx, esp
0x58B9F6: call    @__security_check_cookie@4; __security_check_cookie(x)
0x58B9FB: add     esp, 804h
0x58BA01: retn
0x58BA02: push    1; jumptable 0058B896 case 5006
0x58BA04: push    ebx; canCreate
0x58BA05: call    InterfaceManager_GetSingleton
0x58BA0A: mov     eax, [eax+68h]
0x58BA0D: add     esp, 8
0x58BA10: pop     edi
0x58BA11: pop     esi
0x58BA12: pop     ebx
0x58BA13: mov     ecx, [esp+804h+var_4]
0x58BA1A: xor     ecx, esp
0x58BA1C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x58BA21: add     esp, 804h
0x58BA27: retn
0x58BA28: push    1; jumptable 0058B896 case 5007
0x58BA2A: push    ebx; canCreate
0x58BA2B: call    InterfaceManager_GetSingleton
0x58BA30: mov     eax, [eax+6Ch]
0x58BA33: add     esp, 8
0x58BA36: pop     edi
0x58BA37: pop     esi
0x58BA38: pop     ebx
0x58BA39: mov     ecx, [esp+804h+var_4]
0x58BA40: xor     ecx, esp
0x58BA42: call    @__security_check_cookie@4; __security_check_cookie(x)
0x58BA47: add     esp, 804h
0x58BA4D: retn
0x58BA4E: cmp     esi, ebx; jumptable 0058B896 default case, case 5003
0x58BA50: jz      short loc_58BA86
0x58BA52: mov     eax, [esi+10h]
0x58BA55: cmp     eax, ebx
0x58BA57: jz      short loc_58BA64
0x58BA59: cmp     [eax+10h], ebx
0x58BA5C: jz      short loc_58BA64
0x58BA5E: mov     esi, eax
0x58BA60: cmp     esi, ebx
0x58BA62: jnz     short loc_58BA52
0x58BA64: push    edi; unsigned __int8 *
0x58BA65: push    esi; int
0x58BA66: call    sub_589B10
0x58BA6B: add     esp, 8
0x58BA6E: pop     edi
0x58BA6F: pop     esi
0x58BA70: pop     ebx
0x58BA71: mov     ecx, [esp+804h+var_4]
0x58BA78: xor     ecx, esp
0x58BA7A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x58BA7F: add     esp, 804h
0x58BA85: retn
0x58BA86: push    1; arg1
0x58BA88: push    ebx; canCreate
0x58BA89: call    InterfaceManager_GetSingleton
0x58BA8E: mov     eax, [eax+68h]
0x58BA91: push    edi; unsigned __int8 *
0x58BA92: push    eax; int
0x58BA93: call    sub_589B10
0x58BA98: mov     ecx, [esp+820h+var_4]
0x58BA9F: add     esp, 10h
0x58BAA2: pop     edi
0x58BAA3: pop     esi
0x58BAA4: pop     ebx
0x58BAA5: xor     ecx, esp
0x58BAA7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x58BAAC: add     esp, 804h
0x58BAB2: retn
