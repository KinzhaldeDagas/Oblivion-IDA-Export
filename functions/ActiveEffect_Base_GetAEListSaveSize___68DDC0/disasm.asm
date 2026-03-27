0x68DDC0: push    ecx
0x68DDC1: mov     ecx, ds:0B33B00h
0x68DDC7: push    ebx
0x68DDC8: push    ebp
0x68DDC9: push    esi
0x68DDCA: push    edi
0x68DDCB: xor     esi, esi
0x68DDCD: call    sub_45A170
0x68DDD2: test    al, al
0x68DDD4: jz      short loc_68DDDB
0x68DDD6: mov     esi, 6
0x68DDDB: add     esi, 2
0x68DDDE: mov     [esp+14h+var_4], esi
0x68DDE2: mov     esi, [esp+14h+arg_0]
0x68DDE6: test    esi, esi
0x68DDE8: mov     bp, word ptr [esp+14h+var_4]
0x68DDED: jz      short ActiveEffect_Base_GetAEListSaveSize?___Done_
0x68DDEF: mov     ebx, [esp+14h+arg_4]
0x68DDF3: cmp     dword ptr [esi+4], 0
0x68DDF7: jnz     short loc_68DDFE
0x68DDF9: cmp     dword ptr [esi], 0
0x68DDFC: jz      short ActiveEffect_Base_GetAEListSaveSize?___Done_
0x68DDFE: mov     eax, ds:0B33B00h
0x68DE03: mov     ecx, [esi]
0x68DE05: xor     edi, edi
0x68DE07: cmp     byte ptr [eax+7Ch], 2Ah ; '*'
0x68DE0B: jb      short loc_68DE12
0x68DE0D: mov     edi, 2
0x68DE12: mov     edx, [ecx]
0x68DE14: mov     eax, [edx+0Ch]
0x68DE17: push    ebx
0x68DE18: call    eax
0x68DE1A: mov     esi, [esi+4]
0x68DE1D: add     ax, di
0x68DE20: add     ax, 5
0x68DE24: add     bp, ax
0x68DE27: test    esi, esi
0x68DE29: jnz     short loc_68DDF3
