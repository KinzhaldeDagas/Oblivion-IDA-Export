0x789FE0: sub     esp, 0Ch
0x789FE3: push    esi
0x789FE4: mov     esi, ecx
0x789FE6: mov     eax, [esi+4]
0x789FE9: test    eax, eax
0x789FEB: jz      loc_78A363
0x789FF1: mov     edx, [eax+6Ch]
0x789FF4: test    edx, edx
0x789FF6: jnz     short loc_789FFC
0x789FF8: xor     ecx, ecx
0x789FFA: jmp     short loc_78A004
0x789FFC: mov     ecx, [eax+70h]
0x789FFF: sub     ecx, edx
0x78A001: sar     ecx, 2
0x78A004: mov     eax, 0AAAAAAABh
0x78A009: mul     ecx
0x78A00B: push    ebx
0x78A00C: push    edi
0x78A00D: mov     edi, [esp+18h+Src]
0x78A011: shr     edx, 1
0x78A013: mov     [edi+10h], dx
0x78A017: mov     ebx, [esi+4]
0x78A01A: mov     eax, [ebx+5Ch]
0x78A01D: test    eax, eax
0x78A01F: jz      short loc_78A02B
0x78A021: mov     ecx, [ebx+60h]
0x78A024: sub     ecx, eax
0x78A026: sar     ecx, 2
0x78A029: jnz     short loc_78A02F
0x78A02B: xor     ebx, ebx
0x78A02D: jmp     short loc_78A045
0x78A02F: test    eax, eax
0x78A031: jz      short loc_78A03D
0x78A033: mov     edx, [ebx+60h]
0x78A036: sub     edx, eax
0x78A038: sar     edx, 2
0x78A03B: jnz     short loc_78A042
0x78A03D: call    __invalid_parameter_noinfo
0x78A042: mov     ebx, [ebx+5Ch]
0x78A045: mov     [edi+14h], ebx
0x78A048: mov     ebx, [esi+4]
0x78A04B: mov     eax, [ebx+6Ch]
0x78A04E: test    eax, eax
0x78A050: jz      short loc_78A05C
0x78A052: mov     ecx, [ebx+70h]
0x78A055: sub     ecx, eax
0x78A057: sar     ecx, 2
0x78A05A: jnz     short loc_78A060
0x78A05C: xor     ebx, ebx
0x78A05E: jmp     short loc_78A076
0x78A060: test    eax, eax
0x78A062: jz      short loc_78A06E
0x78A064: mov     edx, [ebx+70h]
0x78A067: sub     edx, eax
0x78A069: sar     edx, 2
0x78A06C: jnz     short loc_78A073
0x78A06E: call    __invalid_parameter_noinfo
0x78A073: mov     ebx, [ebx+6Ch]
0x78A076: mov     [edi+24h], ebx
0x78A079: mov     ebx, [esi+4]
0x78A07C: mov     eax, [ebx+8Ch]
0x78A082: test    eax, eax
0x78A084: jz      short loc_78A093
0x78A086: mov     ecx, [ebx+90h]
0x78A08C: sub     ecx, eax
0x78A08E: sar     ecx, 2
0x78A091: jnz     short loc_78A097
0x78A093: xor     ebx, ebx
0x78A095: jmp     short loc_78A0B3
0x78A097: test    eax, eax
0x78A099: jz      short loc_78A0A8
0x78A09B: mov     edx, [ebx+90h]
0x78A0A1: sub     edx, eax
0x78A0A3: sar     edx, 2
0x78A0A6: jnz     short loc_78A0AD
0x78A0A8: call    __invalid_parameter_noinfo
0x78A0AD: mov     ebx, [ebx+8Ch]
0x78A0B3: mov     [edi+18h], ebx
0x78A0B6: mov     ebx, [esi+4]
0x78A0B9: mov     eax, [ebx+9Ch]
0x78A0BF: test    eax, eax
0x78A0C1: jz      short loc_78A0D0
0x78A0C3: mov     ecx, [ebx+0A0h]
0x78A0C9: sub     ecx, eax
0x78A0CB: sar     ecx, 2
0x78A0CE: jnz     short loc_78A0D4
0x78A0D0: xor     ebx, ebx
0x78A0D2: jmp     short loc_78A0F0
0x78A0D4: test    eax, eax
0x78A0D6: jz      short loc_78A0E5
0x78A0D8: mov     edx, [ebx+0A0h]
0x78A0DE: sub     edx, eax
0x78A0E0: sar     edx, 2
0x78A0E3: jnz     short loc_78A0EA
0x78A0E5: call    __invalid_parameter_noinfo
0x78A0EA: mov     ebx, [ebx+9Ch]
0x78A0F0: mov     [edi+1Ch], ebx
0x78A0F3: mov     ebx, [esi+4]
0x78A0F6: mov     eax, [ebx+0ACh]
0x78A0FC: test    eax, eax
0x78A0FE: jz      short loc_78A10D
0x78A100: mov     ecx, [ebx+0B0h]
0x78A106: sub     ecx, eax
0x78A108: sar     ecx, 2
0x78A10B: jnz     short loc_78A111
0x78A10D: xor     ebx, ebx
0x78A10F: jmp     short loc_78A12D
0x78A111: test    eax, eax
0x78A113: jz      short loc_78A122
0x78A115: mov     edx, [ebx+0B0h]
0x78A11B: sub     edx, eax
0x78A11D: sar     edx, 2
0x78A120: jnz     short loc_78A127
0x78A122: call    __invalid_parameter_noinfo
0x78A127: mov     ebx, [ebx+0ACh]
0x78A12D: mov     [edi+20h], ebx
0x78A130: mov     ebx, [esi+4]
0x78A133: mov     eax, [ebx+0BCh]
0x78A139: test    eax, eax
0x78A13B: jz      short loc_78A14A
0x78A13D: mov     ecx, [ebx+0C0h]
0x78A143: sub     ecx, eax
0x78A145: sar     ecx, 2
0x78A148: jnz     short loc_78A14E
0x78A14A: xor     ebx, ebx
0x78A14C: jmp     short loc_78A16A
0x78A14E: test    eax, eax
0x78A150: jz      short loc_78A15F
0x78A152: mov     edx, [ebx+0C0h]
0x78A158: sub     edx, eax
0x78A15A: sar     edx, 2
0x78A15D: jnz     short loc_78A164
0x78A15F: call    __invalid_parameter_noinfo
0x78A164: mov     ebx, [ebx+0BCh]
0x78A16A: mov     [edi+28h], ebx
0x78A16D: mov     ebx, [esi+4]
0x78A170: mov     eax, [ebx+0ECh]
0x78A176: test    eax, eax
0x78A178: jz      short loc_78A187
0x78A17A: mov     ecx, [ebx+0F0h]
0x78A180: sub     ecx, eax
0x78A182: sar     ecx, 2
0x78A185: jnz     short loc_78A18B
0x78A187: xor     ebx, ebx
0x78A189: jmp     short loc_78A1A7
0x78A18B: test    eax, eax
0x78A18D: jz      short loc_78A19C
0x78A18F: mov     edx, [ebx+0F0h]
0x78A195: sub     edx, eax
0x78A197: sar     edx, 2
0x78A19A: jnz     short loc_78A1A1
0x78A19C: call    __invalid_parameter_noinfo
0x78A1A1: mov     ebx, [ebx+0ECh]
0x78A1A7: mov     [edi+2Ch], ebx
0x78A1AA: mov     ebx, [esi+4]
0x78A1AD: mov     eax, [ebx+0FCh]
0x78A1B3: test    eax, eax
0x78A1B5: jz      short loc_78A1C4
0x78A1B7: mov     ecx, [ebx+100h]
0x78A1BD: sub     ecx, eax
0x78A1BF: sar     ecx, 2
0x78A1C2: jnz     short loc_78A1C8
0x78A1C4: xor     ebx, ebx
0x78A1C6: jmp     short loc_78A1E4
0x78A1C8: test    eax, eax
0x78A1CA: jz      short loc_78A1D9
0x78A1CC: mov     edx, [ebx+100h]
0x78A1D2: sub     edx, eax
0x78A1D4: sar     edx, 2
0x78A1D7: jnz     short loc_78A1DE
0x78A1D9: call    __invalid_parameter_noinfo
0x78A1DE: mov     ebx, [ebx+0FCh]
0x78A1E4: mov     [edi+30h], ebx
0x78A1E7: mov     ebx, [esi+4]
0x78A1EA: mov     eax, [ebx+10Ch]
0x78A1F0: test    eax, eax
0x78A1F2: jz      short loc_78A1FE
0x78A1F4: mov     ecx, [ebx+110h]
0x78A1FA: sub     ecx, eax
0x78A1FC: jnz     short loc_78A202
0x78A1FE: xor     ebx, ebx
0x78A200: jmp     short loc_78A21B
0x78A202: test    eax, eax
0x78A204: jz      short loc_78A210
0x78A206: mov     edx, [ebx+110h]
0x78A20C: sub     edx, eax
0x78A20E: jnz     short loc_78A215
0x78A210: call    __invalid_parameter_noinfo
0x78A215: mov     ebx, [ebx+10Ch]
0x78A21B: mov     ax, word ptr [esp+18h+MaxCount]
0x78A220: cmp     ax, 0FFFFh
0x78A224: mov     [edi+34h], ebx
0x78A227: jnz     short loc_78A23A
0x78A229: fld     dword ptr ds:0A30634h
0x78A22F: push    ecx
0x78A230: mov     ecx, esi
0x78A232: fstp    [esp+1Ch+var_1C]; float
0x78A235: call    sub_787C10
0x78A23A: movzx   ebx, ax
0x78A23D: movsx   eax, bx
0x78A240: mov     [edi], eax
0x78A242: mov     ecx, [esi+4]
0x78A245: push    ebx
0x78A246: call    sub_7886C0
0x78A24B: mov     [edi+4], ax
0x78A24F: mov     ecx, [esi+4]
0x78A252: push    ebx
0x78A253: call    sub_788720
0x78A258: mov     [edi+8], eax
0x78A25B: mov     ecx, [esi+4]
0x78A25E: push    ebx
0x78A25F: call    sub_7945B0
0x78A264: mov     [edi+0Ch], eax
0x78A267: cmp     byte ptr ds:0B4297Ch, 0
0x78A26E: jz      loc_78A34B
0x78A274: mov     eax, [esi]
0x78A276: fld     dword ptr ds:0A30634h
0x78A27C: mov     cx, [eax+0C0h]
0x78A283: fstp    [esp+18h+var_C]
0x78A287: add     cx, 1
0x78A28B: movzx   ebx, cx
0x78A28E: mov     ecx, [esi+34h]
0x78A291: test    ecx, ecx
0x78A293: mov     [esp+18h+Src], 0FFFFFFFFh
0x78A29B: jz      short loc_78A2A2
0x78A29D: fld     dword ptr [ecx+10h]
0x78A2A0: jmp     short loc_78A2A5
0x78A2A2: fld     dword ptr [eax+14h]
0x78A2A5: movzx   edx, byte ptr [esi+44h]
0x78A2A9: fstp    [esp+18h+MaxCount]
0x78A2AD: mov     [esp+18h+var_8], edx
0x78A2B1: lea     eax, [esp+18h+MaxCount]
0x78A2B5: push    eax; int
0x78A2B6: fild    [esp+1Ch+var_8]
0x78A2BA: lea     ecx, [esp+1Ch+Src]
0x78A2BE: push    ecx; int
0x78A2BF: lea     edx, [esp+20h+var_4]
0x78A2C3: fstp    [esp+20h+var_8]
0x78A2C7: push    edx; int
0x78A2C8: fld     [esp+24h+var_8]
0x78A2CC: lea     eax, [esp+24h+var_C]
0x78A2D0: push    eax; int
0x78A2D1: sub     esp, 10h
0x78A2D4: fstp    [esp+38h+var_2C]; float
0x78A2D8: fld     dword ptr [esi+20h]
0x78A2DB: fstp    [esp+38h+var_30]; float
0x78A2DF: fld     dword ptr [esi+28h]
0x78A2E2: fstp    [esp+38h+var_34]; float
0x78A2E6: fld     dword ptr [esi+1Ch]
0x78A2E9: fstp    [esp+38h+var_38]; float
0x78A2EC: push    ebx; int
0x78A2ED: fld     [esp+3Ch+MaxCount]
0x78A2F1: push    ecx
0x78A2F2: fstp    [esp+40h+var_40]; float
0x78A2F5: call    sub_787220
0x78A2FA: movsx   ecx, word ptr [esp+40h+Src]
0x78A2FF: movzx   eax, bx
0x78A302: lea     edx, [eax-2]
0x78A305: add     esp, 28h
0x78A308: cmp     ecx, edx
0x78A30A: jnz     short loc_78A31C
0x78A30C: fld     [esp+18h+var_C]
0x78A310: fstp    dword ptr [edi+38h]
0x78A313: pop     edi
0x78A314: pop     ebx
0x78A315: pop     esi
0x78A316: add     esp, 0Ch
0x78A319: retn    8
0x78A31C: add     eax, 0FFFFFFFFh
0x78A31F: cmp     ecx, eax
0x78A321: jnz     short loc_78A33B
0x78A323: fld     dword ptr ds:0A40098h
0x78A329: mov     dword ptr [edi], 0FFFFFFFFh
0x78A32F: fstp    dword ptr [edi+38h]
0x78A332: pop     edi
0x78A333: pop     ebx
0x78A334: pop     esi
0x78A335: add     esp, 0Ch
0x78A338: retn    8
0x78A33B: fld     [esp+18h+var_8]
0x78A33F: fstp    dword ptr [edi+38h]
0x78A342: pop     edi
0x78A343: pop     ebx
0x78A344: pop     esi
0x78A345: add     esp, 0Ch
0x78A348: retn    8
0x78A34B: movzx   eax, byte ptr [esi+44h]
0x78A34F: mov     [esp+18h+MaxCount], eax
0x78A353: fild    [esp+18h+MaxCount]
0x78A357: fstp    dword ptr [edi+38h]
0x78A35A: pop     edi
0x78A35B: pop     ebx
0x78A35C: pop     esi
0x78A35D: add     esp, 0Ch
0x78A360: retn    8
0x78A363: pop     esi
0x78A364: add     esp, 0Ch
0x78A367: mov     [esp+MaxCount], 46h ; 'F'; MaxCount
0x78A36F: mov     [esp+Src], offset aNoBranchGeomet; "no branch geometry exists, possible pri"...
0x78A377: mov     ecx, offset dword_B2B614
0x78A37C: jmp     sub_414500
