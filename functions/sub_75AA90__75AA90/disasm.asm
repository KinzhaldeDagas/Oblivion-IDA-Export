0x75AA90: sub     esp, 14h
0x75AA93: mov     eax, [esp+14h+arg_4]
0x75AA97: push    ebx
0x75AA98: movzx   ebx, word ptr [eax+48h]
0x75AA9C: push    esi
0x75AA9D: push    edi
0x75AA9E: mov     edi, [eax+68h]
0x75AAA1: mov     esi, ecx
0x75AAA3: cmp     word ptr [esi+18h], 0FFFFh
0x75AAA8: mov     [esp+20h+var_14], edi
0x75AAAC: jnz     short loc_75AACD
0x75AAAE: movzx   ecx, word ptr [eax+8]
0x75AAB2: mov     eax, 66666667h
0x75AAB7: imul    ecx
0x75AAB9: sar     edx, 3
0x75AABC: mov     eax, edx
0x75AABE: shr     eax, 1Fh
0x75AAC1: lea     ecx, [edx+eax+1]
0x75AAC5: push    ecx
0x75AAC6: mov     ecx, esi
0x75AAC8: call    sub_75A870
0x75AACD: movsx   ecx, word ptr [esi+18h]
0x75AAD1: push    ebp
0x75AAD2: movzx   ebp, bx
0x75AAD5: mov     eax, 66666667h
0x75AADA: imul    ebp
0x75AADC: sar     edx, 3
0x75AADF: mov     eax, edx
0x75AAE1: shr     eax, 1Fh
0x75AAE4: lea     eax, [edx+eax+1]
0x75AAE8: cmp     ecx, eax
0x75AAEA: mov     ebx, ecx
0x75AAEC: jl      short loc_75AAF0
0x75AAEE: mov     ebx, eax
0x75AAF0: cmp     ebx, 1
0x75AAF3: jg      short loc_75AAFA
0x75AAF5: mov     ebx, 1
0x75AAFA: cmp     word ptr [edi+0B6h], 0
0x75AB02: ja      short loc_75AB08
0x75AB04: xor     eax, eax
0x75AB06: jmp     short loc_75AB10
0x75AB08: mov     ecx, [edi+0B0h]
0x75AB0E: mov     eax, [ecx]
0x75AB10: mov     edx, [eax+20h]
0x75AB13: movzx   edi, word ptr [esi+1Ah]
0x75AB17: cmp     edi, ebp
0x75AB19: mov     [esp+24h+var_10], edx
0x75AB1D: mov     ecx, [eax+24h]
0x75AB20: mov     [esp+24h+var_C], ecx
0x75AB24: mov     edx, [eax+28h]
0x75AB27: mov     [esp+24h+var_8], edx
0x75AB2B: mov     eax, [eax+2Ch]
0x75AB2E: mov     [esp+24h+var_4], eax
0x75AB32: jge     short loc_75AB6F
0x75AB34: jmp     short loc_75AB40
0x75AB36: align 10h
0x75AB40: mov     eax, [esp+24h+var_14]
0x75AB44: movzx   ecx, word ptr [eax+0B6h]
0x75AB4B: cmp     ecx, edi
0x75AB4D: ja      short loc_75AB53
0x75AB4F: xor     eax, eax
0x75AB51: jmp     short loc_75AB5C
0x75AB53: mov     edx, [eax+0B0h]
0x75AB59: mov     eax, [edx+edi*4]
0x75AB5C: add     eax, 20h ; ' '
0x75AB5F: push    eax
0x75AB60: lea     ecx, [esp+28h+var_10]
0x75AB64: call    sub_72A6B0
0x75AB69: add     edi, ebx
0x75AB6B: cmp     edi, ebp
0x75AB6D: jl      short loc_75AB40
0x75AB6F: movzx   eax, word ptr [esi+1Ah]
0x75AB73: mov     ecx, [esp+24h+var_10]
0x75AB77: shl     eax, 4
0x75AB7A: add     eax, [esi+1Ch]
0x75AB7D: mov     [eax], ecx
0x75AB7F: mov     edx, [esp+24h+var_C]
0x75AB83: mov     [eax+4], edx
0x75AB86: mov     ecx, [esp+24h+var_8]
0x75AB8A: mov     [eax+8], ecx
0x75AB8D: fld     [esp+24h+var_4]
0x75AB91: movzx   edx, word ptr [esi+1Ah]
0x75AB95: mov     eax, [esi+1Ch]
0x75AB98: shl     edx, 4
0x75AB9B: fstp    dword ptr [edx+eax+0Ch]
0x75AB9F: movsx   ecx, word ptr [esi+18h]
0x75ABA3: cmp     ebx, ecx
0x75ABA5: fldz
0x75ABA7: mov     edx, ebx
0x75ABA9: jge     short loc_75ABE4
0x75ABAB: mov     ecx, ebx
0x75ABAD: shl     ecx, 4
0x75ABB0: mov     eax, [esi+1Ch]
0x75ABB3: mov     edi, ds:0B3F9A8h
0x75ABB9: add     eax, ecx
0x75ABBB: mov     [eax], edi
0x75ABBD: mov     edi, ds:0B3F9ACh
0x75ABC3: mov     [eax+4], edi
0x75ABC6: mov     edi, ds:0B3F9B0h
0x75ABCC: mov     [eax+8], edi
0x75ABCF: mov     eax, [esi+1Ch]
0x75ABD2: fst     dword ptr [ecx+eax+0Ch]
0x75ABD6: movsx   eax, word ptr [esi+18h]
0x75ABDA: add     edx, 1
0x75ABDD: add     ecx, 10h
0x75ABE0: cmp     edx, eax
0x75ABE2: jl      short loc_75ABB0
0x75ABE4: cmp     ebx, 1
0x75ABE7: jle     short loc_75AC17
0x75ABE9: mov     edi, 10h
0x75ABEE: lea     ebp, [ebx-1]
0x75ABF1: mov     ecx, [esi+1Ch]
0x75ABF4: fcom    dword ptr [ecx+edi+0Ch]
0x75ABF8: add     ecx, edi
0x75ABFA: fnstsw  ax
0x75ABFC: test    ah, 44h
0x75ABFF: jnp     short loc_75AC0F
0x75AC01: push    ecx
0x75AC02: fstp    st
0x75AC04: lea     ecx, [esp+28h+var_10]
0x75AC08: call    sub_72A6B0
0x75AC0D: fldz
0x75AC0F: add     edi, 10h
0x75AC12: sub     ebp, 1
0x75AC15: jnz     short loc_75ABF1
0x75AC17: fcomp   [esp+24h+var_4]
0x75AC1B: pop     ebp
0x75AC1C: fnstsw  ax
0x75AC1E: test    ah, 44h
0x75AC21: jp      short loc_75AC35
0x75AC23: mov     eax, [esp+20h+arg_4]
0x75AC27: mov     edx, [eax+4Ch]
0x75AC2A: fld     dword ptr [edx]
0x75AC2C: mov     eax, [eax+44h]
0x75AC2F: fmul    dword ptr [eax]
0x75AC31: fstp    [esp+20h+var_4]
0x75AC35: mov     ecx, [esp+20h+var_10]
0x75AC39: mov     eax, [esp+20h+var_14]
0x75AC3D: mov     [eax+20h], ecx
0x75AC40: mov     edx, [esp+20h+var_C]
0x75AC44: mov     [eax+24h], edx
0x75AC47: mov     ecx, [esp+20h+var_8]
0x75AC4B: mov     [eax+28h], ecx
0x75AC4E: mov     edx, [esp+20h+var_4]
0x75AC52: mov     [eax+2Ch], edx
0x75AC55: add     word ptr [esi+1Ah], 1
0x75AC5A: movzx   eax, word ptr [esi+1Ah]
0x75AC5E: movzx   eax, ax
0x75AC61: cmp     eax, ebx
0x75AC63: jl      short loc_75AC6B
0x75AC65: mov     word ptr [esi+1Ah], 0
0x75AC6B: pop     edi
0x75AC6C: pop     esi
0x75AC6D: pop     ebx
0x75AC6E: add     esp, 14h
0x75AC71: retn    8
