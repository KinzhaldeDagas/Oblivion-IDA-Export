0x83E9B0: push    0FFFFFFFFh
0x83E9B2: push    offset SEH_882120
0x83E9B7: mov     eax, large fs:0
0x83E9BD: push    eax
0x83E9BE: push    ebx
0x83E9BF: push    ebp
0x83E9C0: push    esi
0x83E9C1: push    edi
0x83E9C2: mov     eax, ds:0B30AACh
0x83E9C7: xor     eax, esp
0x83E9C9: push    eax
0x83E9CA: lea     eax, [esp+20h+var_C]
0x83E9CE: mov     large fs:0, eax
0x83E9D4: mov     edi, ecx
0x83E9D6: mov     ebp, [esp+20h+arg_8]
0x83E9DA: mov     esi, [ebp+0Ch]
0x83E9DD: mov     ebx, ds:0B45858h
0x83E9E3: push    esi
0x83E9E4: call    sub_848E50
0x83E9E9: mov     ebp, [ebp+10h]
0x83E9EC: mov     ecx, [esp+20h+arg_0]
0x83E9F0: mov     eax, [edi]
0x83E9F2: mov     edx, [eax+0BCh]
0x83E9F8: push    ebp
0x83E9F9: push    esi
0x83E9FA: push    ecx
0x83E9FB: mov     ecx, edi
0x83E9FD: call    edx
0x83E9FF: mov     esi, [esp+20h+arg_C]
0x83EA03: mov     eax, [esi+0A8h]
0x83EA09: mov     ds:0B46628h, eax
0x83EA0E: mov     ecx, [esi+0ACh]
0x83EA14: mov     ds:0B4662Ch, ecx
0x83EA1A: mov     edx, [esi+0B0h]
0x83EA20: mov     ds:0B46630h, edx
0x83EA26: mov     eax, [esi+0B4h]
0x83EA2C: mov     ds:0B46634h, eax
0x83EA31: mov     ecx, [ebx+24h]
0x83EA34: mov     ebp, [ecx]
0x83EA36: mov     edx, [esi]
0x83EA38: mov     eax, [edx+88h]
0x83EA3E: push    0
0x83EA40: mov     ecx, esi
0x83EA42: mov     [esp+24h+arg_8], ebp
0x83EA46: call    eax
0x83EA48: mov     ebp, [ebp+4]
0x83EA4B: cmp     ebp, eax
0x83EA4D: mov     [esp+20h+arg_0], eax
0x83EA51: jz      short loc_83EA8D
0x83EA53: test    ebp, ebp
0x83EA55: jz      short loc_83EA78
0x83EA57: lea     ecx, [ebp+4]
0x83EA5A: push    ecx; lpAddend
0x83EA5B: call    dword ptr ds:0A2807Ch
0x83EA61: test    eax, eax
0x83EA63: jnz     short loc_83EA74
0x83EA65: test    ebp, ebp
0x83EA67: jz      short loc_83EA74
0x83EA69: mov     edx, [ebp+0]
0x83EA6C: mov     eax, [edx]
0x83EA6E: push    1
0x83EA70: mov     ecx, ebp
0x83EA72: call    eax
0x83EA74: mov     eax, [esp+20h+arg_0]
0x83EA78: test    eax, eax
0x83EA7A: mov     ecx, [esp+20h+arg_8]
0x83EA7E: mov     [ecx+4], eax
0x83EA81: jz      short loc_83EA8D
0x83EA83: add     eax, 4
0x83EA86: push    eax; lpAddend
0x83EA87: call    dword ptr ds:0A28078h
0x83EA8D: mov     edx, [esp+20h+arg_8]
0x83EA91: push    esi
0x83EA92: push    edx
0x83EA93: mov     ecx, edi
0x83EA95: call    sub_848FA0
0x83EA9A: mov     eax, [ebx+24h]
0x83EA9D: mov     ebp, [eax+4]
0x83EAA0: push    0
0x83EAA2: push    esi
0x83EAA3: mov     ecx, edi
0x83EAA5: mov     [esp+28h+arg_8], ebp
0x83EAA9: call    sub_848FD0
0x83EAAE: mov     ebp, [ebp+4]
0x83EAB1: cmp     ebp, eax
0x83EAB3: mov     [esp+20h+arg_0], eax
0x83EAB7: jz      short loc_83EAF3
0x83EAB9: test    ebp, ebp
0x83EABB: jz      short loc_83EADE
0x83EABD: lea     ecx, [ebp+4]
0x83EAC0: push    ecx; lpAddend
0x83EAC1: call    dword ptr ds:0A2807Ch
0x83EAC7: test    eax, eax
0x83EAC9: jnz     short loc_83EADA
0x83EACB: test    ebp, ebp
0x83EACD: jz      short loc_83EADA
0x83EACF: mov     edx, [ebp+0]
0x83EAD2: mov     eax, [edx]
0x83EAD4: push    1
0x83EAD6: mov     ecx, ebp
0x83EAD8: call    eax
0x83EADA: mov     eax, [esp+20h+arg_0]
0x83EADE: test    eax, eax
0x83EAE0: mov     ecx, [esp+20h+arg_8]
0x83EAE4: mov     [ecx+4], eax
0x83EAE7: jz      short loc_83EAF3
0x83EAE9: add     eax, 4
0x83EAEC: push    eax; lpAddend
0x83EAED: call    dword ptr ds:0A28078h
0x83EAF3: mov     edx, [esp+20h+arg_8]
0x83EAF7: push    esi
0x83EAF8: push    edx
0x83EAF9: mov     ecx, edi
0x83EAFB: call    sub_848FA0
0x83EB00: mov     eax, [ebx+24h]
0x83EB03: mov     ebp, [eax+10h]
0x83EB06: mov     edx, [esi]
0x83EB08: mov     eax, [edx+88h]
0x83EB0E: push    1
0x83EB10: mov     ecx, esi
0x83EB12: mov     [esp+24h+arg_8], ebp
0x83EB16: call    eax
0x83EB18: mov     ebp, [ebp+4]
0x83EB1B: cmp     ebp, eax
0x83EB1D: mov     [esp+20h+arg_0], eax
0x83EB21: jz      short loc_83EB5D
0x83EB23: test    ebp, ebp
0x83EB25: jz      short loc_83EB48
0x83EB27: lea     ecx, [ebp+4]
0x83EB2A: push    ecx; lpAddend
0x83EB2B: call    dword ptr ds:0A2807Ch
0x83EB31: test    eax, eax
0x83EB33: jnz     short loc_83EB44
0x83EB35: test    ebp, ebp
0x83EB37: jz      short loc_83EB44
0x83EB39: mov     edx, [ebp+0]
0x83EB3C: mov     eax, [edx]
0x83EB3E: push    1
0x83EB40: mov     ecx, ebp
0x83EB42: call    eax
0x83EB44: mov     eax, [esp+20h+arg_0]
0x83EB48: test    eax, eax
0x83EB4A: mov     ecx, [esp+20h+arg_8]
0x83EB4E: mov     [ecx+4], eax
0x83EB51: jz      short loc_83EB5D
0x83EB53: add     eax, 4
0x83EB56: push    eax; lpAddend
0x83EB57: call    dword ptr ds:0A28078h
0x83EB5D: mov     edx, [esp+20h+arg_8]
0x83EB61: push    esi
0x83EB62: push    edx
0x83EB63: mov     ecx, edi
0x83EB65: call    sub_848FA0
0x83EB6A: mov     esi, 1
0x83EB6F: add     [ebx+60h], esi
0x83EB72: mov     [esp+20h+arg_8], ebx
0x83EB76: mov     ecx, [edi+38h]
0x83EB79: lea     eax, [esp+20h+arg_8]
0x83EB7D: push    eax
0x83EB7E: push    ecx
0x83EB7F: lea     ecx, [edi+40h]
0x83EB82: mov     [esp+28h+var_4], 0
0x83EB8A: call    sub_76CE40
0x83EB8F: or      eax, 0FFFFFFFFh
0x83EB92: add     [ebx+60h], eax
0x83EB95: mov     [esp+20h+var_4], eax
0x83EB99: jnz     short loc_83EBA2
0x83EB9B: mov     ecx, ebx
0x83EB9D: call    sub_7604D0
0x83EBA2: add     [edi+38h], esi
0x83EBA5: mov     ecx, [esp+20h+var_C]
0x83EBA9: mov     large fs:0, ecx
0x83EBB0: pop     ecx
0x83EBB1: pop     edi
0x83EBB2: pop     esi
0x83EBB3: pop     ebp
0x83EBB4: pop     ebx
0x83EBB5: add     esp, 0Ch
0x83EBB8: retn    10h
