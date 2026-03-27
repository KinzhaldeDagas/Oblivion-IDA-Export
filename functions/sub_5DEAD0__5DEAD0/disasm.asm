0x5DEAD0: push    0FFFFFFFFh
0x5DEAD2: push    offset SEH_5DC520
0x5DEAD7: mov     eax, large fs:0
0x5DEADD: push    eax
0x5DEADE: sub     esp, 8
0x5DEAE1: push    esi
0x5DEAE2: push    edi
0x5DEAE3: mov     eax, ds:0B30AACh
0x5DEAE8: xor     eax, esp
0x5DEAEA: push    eax
0x5DEAEB: lea     eax, [esp+20h+var_C]
0x5DEAEF: mov     large fs:0, eax
0x5DEAF5: mov     edi, ecx
0x5DEAF7: xor     eax, eax
0x5DEAF9: mov     [esp+20h+var_14], eax
0x5DEAFD: mov     [esp+20h+var_10], ax
0x5DEB02: mov     [esp+20h+var_E], ax
0x5DEB07: mov     esi, [edi+110h]
0x5DEB0D: mov     ecx, [esi+8]
0x5DEB10: add     esi, 8
0x5DEB13: mov     [esp+20h+var_4], eax
0x5DEB17: mov     eax, [esi+4]
0x5DEB1A: push    eax
0x5DEB1B: push    ecx; ArgList
0x5DEB1C: lea     edx, [esp+28h+var_14]
0x5DEB20: push    offset aDXD; "%d x %d"
0x5DEB25: push    edx; int
0x5DEB26: call    BSStringT_Static_Format
0x5DEB2B: mov     ecx, [esi+4]
0x5DEB2E: mov     eax, [esi]
0x5DEB30: add     ecx, ecx
0x5DEB32: lea     eax, [eax+eax*2]
0x5DEB35: add     ecx, ecx
0x5DEB37: add     esp, 10h
0x5DEB3A: cmp     eax, ecx
0x5DEB3C: jbe     short loc_5DEB4C
0x5DEB3E: push    offset asc_A6DD24; " (*)"
0x5DEB43: lea     ecx, [esp+24h+var_14]
0x5DEB47: call    BSStringT_Append
0x5DEB4C: mov     esi, [esp+20h+var_14]
0x5DEB50: mov     ecx, [edi+4]
0x5DEB53: push    esi
0x5DEB54: push    0FB2h
0x5DEB59: call    Tile_SetString
0x5DEB5E: push    esi
0x5DEB5F: call    FormHeapFree
0x5DEB64: add     esp, 4
0x5DEB67: mov     ecx, [esp+20h+var_C]
0x5DEB6B: mov     large fs:0, ecx
0x5DEB72: pop     ecx
0x5DEB73: pop     edi
0x5DEB74: pop     esi
0x5DEB75: add     esp, 14h
0x5DEB78: retn
