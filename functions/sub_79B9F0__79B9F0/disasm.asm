0x79B9F0: push    0FFFFFFFFh
0x79B9F2: push    offset SEH_79C130
0x79B9F7: mov     eax, large fs:0
0x79B9FD: push    eax
0x79B9FE: push    ebx
0x79B9FF: push    ebp
0x79BA00: push    esi
0x79BA01: push    edi
0x79BA02: mov     eax, ds:0B30AACh
0x79BA07: xor     eax, esp
0x79BA09: push    eax
0x79BA0A: lea     eax, [esp+20h+var_C]
0x79BA0E: mov     large fs:0, eax
0x79BA14: mov     ecx, [esp+20h+arg_4]
0x79BA18: mov     ebp, [esp+20h+arg_0]
0x79BA1C: lea     eax, [ecx-1]
0x79BA1F: cdq
0x79BA20: sub     eax, edx
0x79BA22: mov     ebx, eax
0x79BA24: sar     ebx, 1
0x79BA26: cmp     [esp+20h+arg_8], ecx
0x79BA2A: mov     [esp+20h+var_4], 0
0x79BA32: jge     short loc_79BAA0
0x79BA34: lea     eax, [ebx+ebx*2]
0x79BA37: shl     eax, 4
0x79BA3A: fld     dword ptr [eax+ebp+24h]
0x79BA3E: lea     edi, [eax+ebp]
0x79BA41: fld     [esp+20h+arg_30]
0x79BA45: fcompp
0x79BA47: fnstsw  ax
0x79BA49: test    ah, 5
0x79BA4C: jp      short loc_79BAA0
0x79BA4E: lea     esi, [ecx+ecx*2]
0x79BA51: shl     esi, 4
0x79BA54: add     esi, ebp
0x79BA56: push    edi
0x79BA57: mov     ecx, esi
0x79BA59: call    sub_79B160
0x79BA5E: fld     dword ptr [edi+10h]
0x79BA61: fstp    dword ptr [esi+10h]
0x79BA64: fld     dword ptr [edi+14h]
0x79BA67: fstp    dword ptr [esi+14h]
0x79BA6A: mov     cl, [edi+18h]
0x79BA6D: mov     [esi+18h], cl
0x79BA70: fld     dword ptr [edi+1Ch]
0x79BA73: fstp    dword ptr [esi+1Ch]
0x79BA76: mov     ecx, ebx
0x79BA78: fld     dword ptr [edi+20h]
0x79BA7B: fstp    dword ptr [esi+20h]
0x79BA7E: fld     dword ptr [edi+24h]
0x79BA81: fstp    dword ptr [esi+24h]
0x79BA84: mov     edx, [edi+28h]
0x79BA87: mov     [esi+28h], edx
0x79BA8A: mov     eax, [edi+2Ch]
0x79BA8D: mov     [esi+2Ch], eax
0x79BA90: lea     eax, [ebx-1]
0x79BA93: cdq
0x79BA94: sub     eax, edx
0x79BA96: sar     eax, 1
0x79BA98: cmp     [esp+20h+arg_8], ecx
0x79BA9C: mov     ebx, eax
0x79BA9E: jl      short loc_79BA34
0x79BAA0: lea     esi, [ecx+ecx*2]
0x79BAA3: shl     esi, 4
0x79BAA6: lea     ecx, [esp+20h+arg_C]
0x79BAAA: add     esi, ebp
0x79BAAC: push    ecx
0x79BAAD: mov     ecx, esi
0x79BAAF: call    sub_79B160
0x79BAB4: fld     [esp+20h+arg_1C]
0x79BAB8: mov     eax, [esp+20h+arg_34]
0x79BABC: fstp    dword ptr [esi+10h]
0x79BABF: fld     [esp+20h+arg_20]
0x79BAC3: mov     dl, [esp+20h+arg_24]
0x79BAC7: mov     ecx, [esp+20h+arg_38]
0x79BACB: fstp    dword ptr [esi+14h]
0x79BACE: fld     [esp+20h+arg_28]
0x79BAD2: mov     [esi+28h], eax
0x79BAD5: mov     eax, [esp+20h+arg_10]
0x79BAD9: fstp    dword ptr [esi+1Ch]
0x79BADC: test    eax, eax
0x79BADE: fld     [esp+20h+arg_2C]
0x79BAE2: fstp    dword ptr [esi+20h]
0x79BAE5: mov     [esi+18h], dl
0x79BAE8: fld     [esp+20h+arg_30]
0x79BAEC: mov     [esi+2Ch], ecx
0x79BAEF: fstp    dword ptr [esi+24h]
0x79BAF2: jz      short loc_79BAFD
0x79BAF4: push    eax
0x79BAF5: call    FormHeapFree
0x79BAFA: add     esp, 4
0x79BAFD: mov     ecx, [esp+20h+var_C]
0x79BB01: mov     large fs:0, ecx
0x79BB08: pop     ecx
0x79BB09: pop     edi
0x79BB0A: pop     esi
0x79BB0B: pop     ebp
0x79BB0C: pop     ebx
0x79BB0D: add     esp, 0Ch
0x79BB10: retn
