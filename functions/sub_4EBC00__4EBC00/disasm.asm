0x4EBC00: sub     esp, 18h
0x4EBC03: push    esi
0x4EBC04: mov     esi, ecx
0x4EBC06: cmp     dword ptr [esi+0Ch], 0
0x4EBC0A: jz      short loc_4EBC13
0x4EBC0C: xor     eax, eax
0x4EBC0E: pop     esi
0x4EBC0F: add     esp, 18h
0x4EBC12: retn
0x4EBC13: cmp     byte ptr ds:0B43077h, 0
0x4EBC1A: push    ebp
0x4EBC1B: setnz   al
0x4EBC1E: push    edi
0x4EBC1F: mov     ds:0B3608Fh, al
0x4EBC24: call    sub_4EB1A0
0x4EBC29: mov     ecx, [esi+4]
0x4EBC2C: xor     ebp, ebp
0x4EBC2E: xor     eax, eax
0x4EBC30: test    ecx, ecx
0x4EBC32: jbe     short loc_4EBC52
0x4EBC34: mov     edi, [esi+8]
0x4EBC37: mov     edx, edi
0x4EBC39: lea     esp, [esp+0]
0x4EBC40: cmp     [edx], ebp
0x4EBC42: jnz     loc_4EBCEB
0x4EBC48: add     eax, 1
0x4EBC4B: add     edx, 4
0x4EBC4E: cmp     eax, ecx
0x4EBC50: jb      short loc_4EBC40
0x4EBC52: xor     eax, eax
0x4EBC54: test    eax, eax
0x4EBC56: mov     [esp+24h+var_14], eax
0x4EBC5A: jz      loc_4EBCE1
0x4EBC60: mov     edi, 5
0x4EBC65: lea     ecx, [esp+24h+var_18]
0x4EBC69: push    ecx
0x4EBC6A: lea     edx, [esp+28h+var_10]
0x4EBC6E: push    edx
0x4EBC6F: lea     eax, [esp+2Ch+var_14]
0x4EBC73: push    eax
0x4EBC74: mov     ecx, esi
0x4EBC76: mov     [esp+30h+var_18], 0
0x4EBC7E: call    sub_452600
0x4EBC83: mov     ecx, [esp+24h+var_18]
0x4EBC87: test    ecx, ecx
0x4EBC89: jz      short loc_4EBCDA
0x4EBC8B: mov     eax, [ecx]
0x4EBC8D: test    eax, eax
0x4EBC8F: jz      short loc_4EBCDA
0x4EBC91: cmp     dword ptr [eax+14h], 0
0x4EBC95: jz      short loc_4EBCDA
0x4EBC97: movsx   edx, word ptr [ecx+8]
0x4EBC9B: movsx   ecx, word ptr [ecx+0Ah]
0x4EBC9F: shl     edx, 11h
0x4EBCA2: mov     [esp+24h+var_18], edx
0x4EBCA6: shl     ecx, 11h
0x4EBCA9: fild    [esp+24h+var_18]
0x4EBCAD: mov     [esp+24h+var_18], ecx
0x4EBCB1: mov     [eax+8], edi
0x4EBCB4: add     ebp, 1
0x4EBCB7: fstp    [esp+24h+var_C]
0x4EBCBB: fild    [esp+24h+var_18]
0x4EBCBF: fstp    [esp+24h+var_8]
0x4EBCC3: fld     [esp+24h+var_C]
0x4EBCC7: fstp    dword ptr [eax+18h]
0x4EBCCA: fld     [esp+24h+var_8]
0x4EBCCE: fstp    dword ptr [eax+1Ch]
0x4EBCD1: fld     dword ptr ds:0A47B20h
0x4EBCD7: fstp    dword ptr [eax+44h]
0x4EBCDA: cmp     [esp+24h+var_14], 0
0x4EBCDF: jnz     short loc_4EBC65
0x4EBCE1: pop     edi
0x4EBCE2: movsx   eax, bp
0x4EBCE5: pop     ebp
0x4EBCE6: pop     esi
0x4EBCE7: add     esp, 18h
0x4EBCEA: retn
0x4EBCEB: mov     eax, [edi+eax*4]
0x4EBCEE: jmp     loc_4EBC54
