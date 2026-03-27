0x90DC60: sub     esp, 0F0h
0x90DC66: push    ebx
0x90DC67: push    ebp
0x90DC68: push    esi
0x90DC69: mov     esi, [esp+0FCh+arg_0]
0x90DC70: mov     ebp, [esi+4]
0x90DC73: mov     ebx, ecx
0x90DC75: mov     ecx, [esi+1Ch]
0x90DC78: mov     eax, [ecx]
0x90DC7A: push    edi
0x90DC7B: mov     [esp+100h+var_E0], ebx
0x90DC7F: mov     [esp+100h+var_EC], ebp
0x90DC83: call    dword ptr [eax+1Ch]
0x90DC86: add     ebx, 38h ; '8'
0x90DC89: mov     ecx, ebx
0x90DC8B: mov     [ebp+14h], eax
0x90DC8E: call    sub_942960
0x90DC93: mov     edi, eax
0x90DC95: push    edi
0x90DC96: lea     ecx, [esp+104h+var_F0+3]
0x90DC9A: push    ecx
0x90DC9B: mov     ecx, ebx
0x90DC9D: call    sub_8B0D80
0x90DCA2: mov     al, byte ptr [esp+100h+var_F0+3]
0x90DCA6: test    al, al
0x90DCA8: jz      short loc_90DD0E
0x90DCAA: lea     ebx, [ebx+0]
0x90DCB0: mov     ecx, [esi+1Ch]
0x90DCB3: mov     edx, [ecx]
0x90DCB5: call    dword ptr [edx+1Ch]
0x90DCB8: sub     eax, [ebp+14h]
0x90DCBB: push    eax
0x90DCBC: push    edi
0x90DCBD: mov     ecx, ebx
0x90DCBF: call    sub_942980
0x90DCC4: push    edi
0x90DCC5: mov     ecx, ebx
0x90DCC7: call    sub_8B0D30
0x90DCCC: mov     ecx, [esi+1Ch]
0x90DCCF: mov     ebp, [ecx]
0x90DCD1: push    eax
0x90DCD2: mov     [esp+104h+var_DC], eax
0x90DCD6: call    sub_8B1860
0x90DCDB: mov     edx, [esp+104h+var_DC]
0x90DCDF: mov     ecx, [esi+1Ch]
0x90DCE2: add     esp, 4
0x90DCE5: inc     eax
0x90DCE6: push    eax
0x90DCE7: push    edx
0x90DCE8: call    dword ptr [ebp+0Ch]
0x90DCEB: push    edi
0x90DCEC: mov     ecx, ebx
0x90DCEE: call    sub_9429A0
0x90DCF3: mov     edi, eax
0x90DCF5: push    edi
0x90DCF6: lea     eax, [esp+104h+var_F0+3]
0x90DCFA: push    eax
0x90DCFB: mov     ecx, ebx
0x90DCFD: call    sub_8B0D80
0x90DD02: mov     al, byte ptr [esp+100h+var_F0+3]
0x90DD06: test    al, al
0x90DD08: mov     ebp, [esp+100h+var_EC]
0x90DD0C: jnz     short loc_90DCB0
0x90DD0E: mov     edi, [esi+1Ch]
0x90DD11: mov     edx, [edi]
0x90DD13: mov     ecx, edi
0x90DD15: call    dword ptr [edx+1Ch]
0x90DD18: lea     ecx, [esp+100h+var_C0]
0x90DD1C: mov     [esp+100h+var_CC], ecx
0x90DD20: mov     [esp+100h+var_C4], 80000020h
0x90DD28: xor     ecx, ecx
0x90DD2A: lea     ebx, [ebx+0]
0x90DD30: mov     edx, [esp+100h+var_CC]
0x90DD34: mov     byte ptr [ecx+edx], 0FFh
0x90DD38: inc     ecx
0x90DD39: cmp     ecx, 10h
0x90DD3C: jl      short loc_90DD30
0x90DD3E: and     eax, 0Fh
0x90DD41: mov     [esp+100h+var_C8], 10h
0x90DD49: jz      short loc_90DD5F
0x90DD4B: mov     edx, [edi]
0x90DD4D: mov     ecx, 10h
0x90DD52: sub     ecx, eax
0x90DD54: mov     eax, [esp+100h+var_CC]
0x90DD58: push    ecx
0x90DD59: push    eax
0x90DD5A: mov     ecx, edi
0x90DD5C: call    dword ptr [edx+0Ch]
0x90DD5F: mov     eax, [esp+100h+var_C4]
0x90DD63: test    eax, eax
0x90DD65: js      short loc_90DD8E
0x90DD67: mov     ecx, [esp+100h+var_CC]
0x90DD6B: mov     edx, large fs:2Ch
0x90DD72: push    14h
0x90DD74: and     eax, 3FFFFFFFh
0x90DD79: push    eax
0x90DD7A: mov     eax, ds:0BA9DE4h
0x90DD7F: push    ecx
0x90DD80: mov     ecx, [edx+eax*4]
0x90DD83: mov     ecx, [ecx+19Ch]
0x90DD89: call    sub_8A75D0
0x90DD8E: mov     ecx, [esi+1Ch]
0x90DD91: mov     edx, [ecx]
0x90DD93: call    dword ptr [edx+1Ch]
0x90DD96: sub     eax, [ebp+14h]
0x90DD99: mov     [ebp+18h], eax
0x90DD9C: mov     [ebp+1Ch], eax
0x90DD9F: mov     [ebp+20h], eax
0x90DDA2: mov     [ebp+24h], eax
0x90DDA5: mov     [ebp+28h], eax
0x90DDA8: mov     eax, [esi]
0x90DDAA: mov     dl, [eax+8]
0x90DDAD: mov     ecx, [esi+1Ch]
0x90DDB0: mov     edi, [esi+4]
0x90DDB3: test    dl, dl
0x90DDB5: mov     edx, [ecx]
0x90DDB7: setnz   bl
0x90DDBA: add     edi, 30h ; '0'
0x90DDBD: call    dword ptr [edx+1Ch]
0x90DDC0: test    bl, bl
0x90DDC2: mov     [edi+14h], eax
0x90DDC5: jz      short loc_90DDD3
0x90DDC7: mov     eax, [esp+100h+var_E0]
0x90DDCB: mov     eax, [eax+50h]
0x90DDCE: shl     eax, 3
0x90DDD1: jmp     short loc_90DDD5
0x90DDD3: xor     eax, eax
0x90DDD5: mov     ecx, [esi+1Ch]
0x90DDD8: mov     edx, [ecx]
0x90DDDA: push    1
0x90DDDC: push    eax
0x90DDDD: call    dword ptr [edx+18h]
0x90DDE0: mov     ebp, [esi+1Ch]
0x90DDE3: mov     eax, [ebp+0]
0x90DDE6: mov     ecx, ebp
0x90DDE8: call    dword ptr [eax+1Ch]
0x90DDEB: lea     ecx, [esp+100h+var_C0]
0x90DDEF: mov     [esp+100h+var_CC], ecx
0x90DDF3: mov     [esp+100h+var_C4], 80000020h
0x90DDFB: xor     ecx, ecx
0x90DDFD: lea     ecx, [ecx+0]
0x90DE00: mov     edx, [esp+100h+var_CC]
0x90DE04: mov     byte ptr [ecx+edx], 0FFh
0x90DE08: inc     ecx
0x90DE09: cmp     ecx, 10h
0x90DE0C: jl      short loc_90DE00
0x90DE0E: and     eax, 0Fh
0x90DE11: mov     [esp+100h+var_C8], 10h
0x90DE19: jz      short loc_90DE30
0x90DE1B: mov     edx, [ebp+0]
0x90DE1E: mov     ecx, 10h
0x90DE23: sub     ecx, eax
0x90DE25: mov     eax, [esp+100h+var_CC]
0x90DE29: push    ecx
0x90DE2A: push    eax
0x90DE2B: mov     ecx, ebp
0x90DE2D: call    dword ptr [edx+0Ch]
0x90DE30: mov     eax, [esp+100h+var_C4]
0x90DE34: test    eax, eax
0x90DE36: js      short loc_90DE5F
0x90DE38: mov     ecx, [esp+100h+var_CC]
0x90DE3C: mov     edx, large fs:2Ch
0x90DE43: push    14h
0x90DE45: and     eax, 3FFFFFFFh
0x90DE4A: push    eax
0x90DE4B: mov     eax, ds:0BA9DE4h
0x90DE50: push    ecx
0x90DE51: mov     ecx, [edx+eax*4]
0x90DE54: mov     ecx, [ecx+19Ch]
0x90DE5A: call    sub_8A75D0
0x90DE5F: mov     ecx, [esi+1Ch]
0x90DE62: mov     edx, [ecx]
0x90DE64: call    dword ptr [edx+1Ch]
0x90DE67: sub     eax, [edi+14h]
0x90DE6A: mov     [edi+18h], eax
0x90DE6D: mov     [edi+1Ch], eax
0x90DE70: mov     [edi+20h], eax
0x90DE73: mov     [edi+24h], eax
0x90DE76: mov     [edi+28h], eax
0x90DE79: mov     ecx, [esi+1Ch]
0x90DE7C: mov     edi, [esi+4]
0x90DE7F: mov     eax, [ecx]
0x90DE81: add     edi, 60h ; '`'
0x90DE84: call    dword ptr [eax+1Ch]
0x90DE87: test    bl, bl
0x90DE89: mov     [edi+14h], eax
0x90DE8C: jz      short loc_90DE9D
0x90DE8E: mov     ecx, [esp+100h+var_E0]
0x90DE92: mov     eax, [ecx+4Ch]
0x90DE95: lea     eax, [eax+eax*2]
0x90DE98: shl     eax, 2
0x90DE9B: jmp     short loc_90DE9F
0x90DE9D: xor     eax, eax
0x90DE9F: mov     ecx, [esi+1Ch]
0x90DEA2: mov     edx, [ecx]
0x90DEA4: push    1
0x90DEA6: push    eax
0x90DEA7: call    dword ptr [edx+18h]
0x90DEAA: mov     ebx, [esi+1Ch]
0x90DEAD: mov     eax, [ebx]
0x90DEAF: mov     ecx, ebx
0x90DEB1: call    dword ptr [eax+1Ch]
0x90DEB4: lea     ecx, [esp+100h+var_C0]
0x90DEB8: mov     [esp+100h+var_CC], ecx
0x90DEBC: mov     [esp+100h+var_C4], 80000020h
0x90DEC4: xor     ecx, ecx
0x90DEC6: mov     edx, [esp+100h+var_CC]
0x90DECA: mov     byte ptr [ecx+edx], 0FFh
0x90DECE: inc     ecx
0x90DECF: cmp     ecx, 10h
0x90DED2: jl      short loc_90DEC6
0x90DED4: and     eax, 0Fh
0x90DED7: mov     [esp+100h+var_C8], 10h
0x90DEDF: jz      short loc_90DEF5
0x90DEE1: mov     edx, [ebx]
0x90DEE3: mov     ecx, 10h
0x90DEE8: sub     ecx, eax
0x90DEEA: mov     eax, [esp+100h+var_CC]
0x90DEEE: push    ecx
0x90DEEF: push    eax
0x90DEF0: mov     ecx, ebx
0x90DEF2: call    dword ptr [edx+0Ch]
0x90DEF5: mov     eax, [esp+100h+var_C4]
0x90DEF9: test    eax, eax
0x90DEFB: js      short loc_90DF24
0x90DEFD: mov     ecx, [esp+100h+var_CC]
0x90DF01: mov     edx, ds:0BA9DE4h
0x90DF07: push    14h
0x90DF09: and     eax, 3FFFFFFFh
0x90DF0E: push    eax
0x90DF0F: mov     eax, large fs:2Ch
0x90DF15: push    ecx
0x90DF16: mov     ecx, [eax+edx*4]
0x90DF19: mov     ecx, [ecx+19Ch]
0x90DF1F: call    sub_8A75D0
0x90DF24: mov     ecx, [esi+1Ch]
0x90DF27: mov     edx, [ecx]
0x90DF29: call    dword ptr [edx+1Ch]
0x90DF2C: sub     eax, [edi+14h]
0x90DF2F: mov     [edi+18h], eax
0x90DF32: mov     [edi+1Ch], eax
0x90DF35: mov     [edi+20h], eax
0x90DF38: mov     [edi+24h], eax
0x90DF3B: mov     [edi+28h], eax
0x90DF3E: mov     eax, [esp+100h+var_E0]
0x90DF42: mov     edi, [eax+0Ch]
0x90DF45: mov     eax, [esi+18h]
0x90DF48: lea     ebx, [esi+10h]
0x90DF4B: and     eax, 3FFFFFFFh
0x90DF50: cmp     eax, edi
0x90DF52: jge     short loc_90DF68
0x90DF54: add     eax, eax
0x90DF56: cmp     edi, eax
0x90DF58: jl      short loc_90DF5C
0x90DF5A: mov     eax, edi
0x90DF5C: push    8
0x90DF5E: push    eax
0x90DF5F: push    ebx
0x90DF60: call    sub_8A6E40
0x90DF65: add     esp, 0Ch
0x90DF68: mov     [ebx+4], edi
0x90DF6B: mov     edx, [esi+8]
0x90DF6E: mov     ebp, [esi+34h]
0x90DF71: cmp     edx, ebp
0x90DF73: lea     edi, [esi+30h]
0x90DF76: mov     [esp+100h+var_E8], edx
0x90DF7A: mov     [esp+100h+var_D0], ebp
0x90DF7E: jge     short loc_90DFCF
0x90DF80: lea     ebx, [edx+edx*2]
0x90DF83: shl     ebx, 2
0x90DF86: sub     ebp, edx
0x90DF88: mov     ecx, [edi]
0x90DF8A: mov     eax, [ecx+ebx+8]
0x90DF8E: add     ecx, ebx
0x90DF90: test    eax, eax
0x90DF92: js      short loc_90DFC4
0x90DF94: and     eax, 3FFFFFFFh
0x90DF99: lea     edx, [eax+eax*2]
0x90DF9C: mov     eax, [ecx]
0x90DF9E: mov     ecx, large fs:2Ch
0x90DFA5: push    14h
0x90DFA7: shl     edx, 2
0x90DFAA: push    edx
0x90DFAB: mov     edx, ds:0BA9DE4h
0x90DFB1: push    eax
0x90DFB2: mov     eax, [ecx+edx*4]
0x90DFB5: mov     ecx, [eax+19Ch]
0x90DFBB: call    sub_8A75D0
0x90DFC0: mov     edx, [esp+100h+var_E8]
0x90DFC4: add     ebx, 0Ch
0x90DFC7: dec     ebp
0x90DFC8: jnz     short loc_90DF88
0x90DFCA: jmp     loc_90E177
0x90DFCF: mov     eax, [edi+8]
0x90DFD2: mov     [esp+100h+var_D8], eax
0x90DFD6: and     eax, 3FFFFFFFh
0x90DFDB: cmp     edx, eax
0x90DFDD: jle     loc_90E14C
0x90DFE3: add     eax, eax
0x90DFE5: cmp     edx, eax
0x90DFE7: jge     short loc_90DFEB
0x90DFE9: mov     edx, eax
0x90DFEB: test    edx, edx
0x90DFED: mov     ecx, [edi]
0x90DFEF: mov     [esp+100h+var_A0], ecx
0x90DFF3: mov     dword ptr [edi], 0
0x90DFF9: mov     dword ptr [edi+4], 0
0x90E000: mov     dword ptr [edi+8], 80000000h
0x90E007: jle     short loc_90E01F
0x90E009: xor     eax, eax
0x90E00B: test    edx, edx
0x90E00D: setl    al
0x90E010: push    0Ch
0x90E012: dec     eax
0x90E013: and     eax, edx
0x90E015: push    eax
0x90E016: push    edi
0x90E017: call    sub_8A6E40
0x90E01C: add     esp, 0Ch
0x90E01F: test    ebp, ebp
0x90E021: mov     edi, [edi]
0x90E023: jle     loc_90E0C0
0x90E029: mov     ebx, edi
0x90E02B: mov     edi, [esp+100h+var_A0]
0x90E02F: add     edi, 4
0x90E032: mov     [esp+100h+var_E4], ebp
0x90E036: test    ebx, ebx
0x90E038: jz      short loc_90E0AB
0x90E03A: mov     eax, [edi]
0x90E03C: mov     ecx, ds:0BA9DE4h
0x90E042: mov     edx, large fs:2Ch
0x90E049: mov     edx, [edx+ecx*4]
0x90E04C: mov     ecx, [edx+19Ch]
0x90E052: lea     eax, [eax+eax*2]
0x90E055: push    14h
0x90E057: shl     eax, 2
0x90E05A: push    eax
0x90E05B: call    sub_8A7560
0x90E060: mov     [ebx], eax
0x90E062: mov     ecx, [edi]
0x90E064: mov     [ebx+4], ecx
0x90E067: mov     edx, [edi]
0x90E069: mov     [ebx+8], edx
0x90E06C: mov     ecx, [edi]
0x90E06E: test    ecx, ecx
0x90E070: mov     edx, [edi-4]
0x90E073: jle     short loc_90E0AB
0x90E075: sub     edx, eax
0x90E077: mov     [esp+100h+var_DC], edx
0x90E07B: mov     [esp+100h+var_EC], ecx
0x90E07F: jmp     short loc_90E085
0x90E081: mov     edx, [esp+100h+var_DC]
0x90E085: add     edx, eax
0x90E087: mov     ebp, [edx]
0x90E089: mov     ecx, eax
0x90E08B: mov     [ecx], ebp
0x90E08D: mov     ebp, [edx+4]
0x90E090: mov     [ecx+4], ebp
0x90E093: mov     edx, [edx+8]
0x90E096: mov     [ecx+8], edx
0x90E099: mov     ecx, [esp+100h+var_EC]
0x90E09D: add     eax, 0Ch
0x90E0A0: dec     ecx
0x90E0A1: mov     [esp+100h+var_EC], ecx
0x90E0A5: jnz     short loc_90E081
0x90E0A7: mov     ebp, [esp+100h+var_D0]
0x90E0AB: mov     eax, [esp+100h+var_E4]
0x90E0AF: add     ebx, 0Ch
0x90E0B2: add     edi, 0Ch
0x90E0B5: dec     eax
0x90E0B6: mov     [esp+100h+var_E4], eax
0x90E0BA: jnz     loc_90E036
0x90E0C0: test    ebp, ebp
0x90E0C2: mov     [esi+34h], ebp
0x90E0C5: jle     short loc_90E113
0x90E0C7: mov     edi, [esp+100h+var_A0]
0x90E0CB: mov     ebx, ds:0BA9DE4h
0x90E0D1: add     edi, 8
0x90E0D4: mov     [esp+100h+var_EC], ebp
0x90E0D8: mov     eax, [edi]
0x90E0DA: test    eax, eax
0x90E0DC: js      short loc_90E105
0x90E0DE: mov     ecx, [edi-8]
0x90E0E1: mov     edx, large fs:2Ch
0x90E0E8: and     eax, 3FFFFFFFh
0x90E0ED: lea     eax, [eax+eax*2]
0x90E0F0: push    14h
0x90E0F2: shl     eax, 2
0x90E0F5: push    eax
0x90E0F6: mov     eax, [edx+ebx*4]
0x90E0F9: push    ecx
0x90E0FA: mov     ecx, [eax+19Ch]
0x90E100: call    sub_8A75D0
0x90E105: mov     eax, [esp+100h+var_EC]
0x90E109: add     edi, 0Ch
0x90E10C: dec     eax
0x90E10D: mov     [esp+100h+var_EC], eax
0x90E111: jnz     short loc_90E0D8
0x90E113: mov     eax, [esp+100h+var_D8]
0x90E117: test    eax, eax
0x90E119: js      short loc_90E148
0x90E11B: mov     edx, [esp+100h+var_A0]
0x90E11F: and     eax, 3FFFFFFFh
0x90E124: lea     ecx, [eax+eax*2]
0x90E127: mov     eax, large fs:2Ch
0x90E12D: shl     ecx, 2
0x90E130: push    14h
0x90E132: push    ecx
0x90E133: mov     ecx, ds:0BA9DE4h
0x90E139: push    edx
0x90E13A: mov     edx, [eax+ecx*4]
0x90E13D: mov     ecx, [edx+19Ch]
0x90E143: call    sub_8A75D0
0x90E148: mov     edx, [esp+100h+var_E8]
0x90E14C: cmp     ebp, edx
0x90E14E: mov     eax, [esi+30h]
0x90E151: jge     short loc_90E177
0x90E153: lea     ecx, [ebp+ebp*2+0]
0x90E157: lea     eax, [eax+ecx*4]
0x90E15A: mov     ecx, edx
0x90E15C: sub     ecx, ebp
0x90E15E: xor     edi, edi
0x90E160: mov     ebx, 80000000h
0x90E165: cmp     eax, edi
0x90E167: jz      short loc_90E171
0x90E169: mov     [eax], edi
0x90E16B: mov     [eax+4], edi
0x90E16E: mov     [eax+8], ebx
0x90E171: add     eax, 0Ch
0x90E174: dec     ecx
0x90E175: jnz     short loc_90E165
0x90E177: mov     [esi+34h], edx
0x90E17A: mov     eax, [esi+8]
0x90E17D: mov     ebp, [esi+40h]
0x90E180: cmp     eax, ebp
0x90E182: lea     edi, [esi+3Ch]
0x90E185: mov     [esp+100h+var_E8], eax
0x90E189: mov     [esp+100h+var_DC], ebp
0x90E18D: jge     short loc_90E1D6
0x90E18F: lea     ebx, [eax+eax*2]
0x90E192: shl     ebx, 2
0x90E195: sub     ebp, eax
0x90E197: mov     ecx, [edi]
0x90E199: mov     eax, [ecx+ebx+8]
0x90E19D: add     ecx, ebx
0x90E19F: test    eax, eax
0x90E1A1: js      short loc_90E1CB
0x90E1A3: mov     edx, [ecx]
0x90E1A5: mov     ecx, ds:0BA9DE4h
0x90E1AB: and     eax, 3FFFFFFFh
0x90E1B0: push    14h
0x90E1B2: shl     eax, 3
0x90E1B5: push    eax
0x90E1B6: mov     eax, large fs:2Ch
0x90E1BC: push    edx
0x90E1BD: mov     edx, [eax+ecx*4]
0x90E1C0: mov     ecx, [edx+19Ch]
0x90E1C6: call    sub_8A75D0
0x90E1CB: add     ebx, 0Ch
0x90E1CE: dec     ebp
0x90E1CF: jnz     short loc_90E197
0x90E1D1: jmp     loc_90E358
0x90E1D6: mov     ecx, [edi+8]
0x90E1D9: mov     [esp+100h+var_E4], ecx
0x90E1DD: and     ecx, 3FFFFFFFh
0x90E1E3: cmp     eax, ecx
0x90E1E5: jle     loc_90E32B
0x90E1EB: lea     eax, [ecx+ecx]
0x90E1EE: mov     ecx, [esp+100h+var_E8]
0x90E1F2: cmp     ecx, eax
0x90E1F4: jl      short loc_90E1F8
0x90E1F6: mov     eax, ecx
0x90E1F8: test    eax, eax
0x90E1FA: mov     ecx, [edi]
0x90E1FC: mov     [esp+100h+var_A0], ecx
0x90E200: mov     dword ptr [edi], 0
0x90E206: mov     dword ptr [edi+4], 0
0x90E20D: mov     dword ptr [edi+8], 80000000h
0x90E214: jle     short loc_90E22C
0x90E216: xor     edx, edx
0x90E218: test    eax, eax
0x90E21A: setl    dl
0x90E21D: push    0Ch
0x90E21F: dec     edx
0x90E220: and     eax, edx
0x90E222: push    eax
0x90E223: push    edi
0x90E224: call    sub_8A6E40
0x90E229: add     esp, 0Ch
0x90E22C: test    ebp, ebp
0x90E22E: mov     edi, [edi]
0x90E230: jle     loc_90E2AC
0x90E236: mov     ebx, edi
0x90E238: mov     edi, [esp+100h+var_A0]
0x90E23C: add     edi, 4
0x90E23F: mov     [esp+100h+var_EC], ebp
0x90E243: test    ebx, ebx
0x90E245: jz      short loc_90E29B
0x90E247: mov     edx, ds:0BA9DE4h
0x90E24D: mov     eax, [edi]
0x90E24F: mov     ecx, large fs:2Ch
0x90E256: mov     ecx, [ecx+edx*4]
0x90E259: mov     ecx, [ecx+19Ch]
0x90E25F: push    14h
0x90E261: lea     edx, ds:0[eax*8]
0x90E268: push    edx
0x90E269: call    sub_8A7560
0x90E26E: mov     [ebx], eax
0x90E270: mov     ecx, [edi]
0x90E272: mov     [ebx+4], ecx
0x90E275: mov     edx, [edi]
0x90E277: mov     [ebx+8], edx
0x90E27A: mov     edx, [edi]
0x90E27C: test    edx, edx
0x90E27E: mov     ecx, [edi-4]
0x90E281: jle     short loc_90E29B
0x90E283: sub     ecx, eax
0x90E285: mov     ebp, [ecx+eax]
0x90E288: mov     [eax], ebp
0x90E28A: mov     ebp, [ecx+eax+4]
0x90E28E: mov     [eax+4], ebp
0x90E291: add     eax, 8
0x90E294: dec     edx
0x90E295: jnz     short loc_90E285
0x90E297: mov     ebp, [esp+100h+var_DC]
0x90E29B: mov     eax, [esp+100h+var_EC]
0x90E29F: add     ebx, 0Ch
0x90E2A2: add     edi, 0Ch
0x90E2A5: dec     eax
0x90E2A6: mov     [esp+100h+var_EC], eax
0x90E2AA: jnz     short loc_90E243
0x90E2AC: test    ebp, ebp
0x90E2AE: mov     [esi+40h], ebp
0x90E2B1: jle     short loc_90E2F6
0x90E2B3: mov     edi, [esp+100h+var_A0]
0x90E2B7: add     edi, 8
0x90E2BA: mov     ebx, ebp
0x90E2BC: lea     esp, [esp+0]
0x90E2C0: mov     eax, [edi]
0x90E2C2: test    eax, eax
0x90E2C4: js      short loc_90E2F0
0x90E2C6: mov     ecx, large fs:2Ch
0x90E2CD: mov     edx, ds:0BA9DE4h
0x90E2D3: and     eax, 3FFFFFFFh
0x90E2D8: shl     eax, 3
0x90E2DB: push    14h
0x90E2DD: push    eax
0x90E2DE: mov     eax, [edi-8]
0x90E2E1: push    eax
0x90E2E2: mov     eax, [ecx+edx*4]
0x90E2E5: mov     ecx, [eax+19Ch]
0x90E2EB: call    sub_8A75D0
0x90E2F0: add     edi, 0Ch
0x90E2F3: dec     ebx
0x90E2F4: jnz     short loc_90E2C0
0x90E2F6: mov     eax, [esp+100h+var_E4]
0x90E2FA: test    eax, eax
0x90E2FC: js      short loc_90E32B
0x90E2FE: mov     edx, [esp+100h+var_A0]
0x90E302: and     eax, 3FFFFFFFh
0x90E307: lea     ecx, [eax+eax*2]
0x90E30A: mov     eax, large fs:2Ch
0x90E310: shl     ecx, 2
0x90E313: push    14h
0x90E315: push    ecx
0x90E316: mov     ecx, ds:0BA9DE4h
0x90E31C: push    edx
0x90E31D: mov     edx, [eax+ecx*4]
0x90E320: mov     ecx, [edx+19Ch]
0x90E326: call    sub_8A75D0
0x90E32B: mov     ecx, [esp+100h+var_E8]
0x90E32F: cmp     ebp, ecx
0x90E331: mov     eax, [esi+3Ch]
0x90E334: jge     short loc_90E358
0x90E336: lea     edx, [ebp+ebp*2+0]
0x90E33A: lea     eax, [eax+edx*4]
0x90E33D: sub     ecx, ebp
0x90E33F: xor     edx, edx
0x90E341: mov     edi, 80000000h
0x90E346: cmp     eax, edx
0x90E348: jz      short loc_90E352
0x90E34A: mov     [eax], edx
0x90E34C: mov     [eax+4], edx
0x90E34F: mov     [eax+8], edi
0x90E352: add     eax, 0Ch
0x90E355: dec     ecx
0x90E356: jnz     short loc_90E346
0x90E358: mov     eax, [esp+100h+var_E8]
0x90E35C: mov     [esi+40h], eax
0x90E35F: mov     ecx, ds:0B30594h
0x90E365: push    ecx
0x90E366: mov     ecx, [esp+104h+var_E0]
0x90E36A: call    sub_940EF0
0x90E36F: mov     ecx, [esi+8]
0x90E372: mov     [esp+100h+var_D0], eax
0x90E376: mov     eax, 3
0x90E37B: cmp     ecx, eax
0x90E37D: mov     [esp+100h+var_D4], eax
0x90E381: jle     loc_90E84E
0x90E387: mov     [esp+100h+var_E8], 24h ; '$'
0x90E38F: mov     [esp+100h+var_EC], 90h
0x90E397: mov     edi, [esi+4]
0x90E39A: mov     edx, [esp+100h+var_EC]
0x90E39E: mov     ecx, [esi+1Ch]
0x90E3A1: add     edi, edx
0x90E3A3: mov     edx, [ecx]
0x90E3A5: xor     ebx, ebx
0x90E3A7: mov     ebp, 80000000h
0x90E3AC: call    dword ptr [edx+1Ch]
0x90E3AF: mov     [edi+14h], eax
0x90E3B2: mov     eax, [esi]
0x90E3B4: mov     [esp+100h+var_90], ebx
0x90E3B8: mov     [esp+100h+var_8C], ebx
0x90E3BC: mov     [esp+100h+var_88], ebp
0x90E3C0: mov     [esp+100h+var_84], ebx
0x90E3C4: mov     [esp+100h+var_80], ebx
0x90E3CB: mov     [esp+100h+var_7C], ebp
0x90E3D2: mov     [esp+100h+var_78], ebx
0x90E3D9: mov     [esp+100h+var_74], ebx
0x90E3E0: mov     [esp+100h+var_70], ebp
0x90E3E7: mov     [esp+100h+var_6C], ebx
0x90E3EE: mov     [esp+100h+var_68], ebx
0x90E3F5: mov     [esp+100h+var_64], ebp
0x90E3FC: mov     [esp+100h+var_60], ebx
0x90E403: mov     cl, [eax+8]
0x90E406: test    cl, cl
0x90E408: jnz     short loc_90E45F
0x90E40A: mov     ecx, [esp+100h+var_D0]
0x90E40E: cmp     [esp+100h+var_D4], ecx
0x90E412: jnz     short loc_90E45F
0x90E414: mov     edx, [esp+100h+var_E0]
0x90E418: mov     ecx, [edx+0Ch]
0x90E41B: xor     eax, eax
0x90E41D: cmp     ecx, ebx
0x90E41F: jle     loc_90E52A
0x90E425: mov     ebx, [esp+100h+var_D0]
0x90E429: xor     ecx, ecx
0x90E42B: jmp     short loc_90E430
0x90E42D: align 10h
0x90E430: mov     ebp, [edx+8]
0x90E433: cmp     [ecx+ebp+10h], ebx
0x90E437: jnz     short loc_90E44F
0x90E439: mov     ebp, [esi+10h]
0x90E43C: mov     dword ptr [ebp+eax*8+0], 0FFFFFFFFh
0x90E444: mov     ebp, [esi+10h]
0x90E447: mov     dword ptr [ebp+eax*8+4], 0FFFFFFFFh
0x90E44F: mov     ebp, [edx+0Ch]
0x90E452: inc     eax
0x90E453: add     ecx, 18h
0x90E456: cmp     eax, ebp
0x90E458: jl      short loc_90E430
0x90E45A: jmp     loc_90E52A
0x90E45F: mov     eax, [esp+100h+var_E0]
0x90E463: cmp     [eax+0Ch], ebx
0x90E466: mov     [esp+100h+var_D8], ebx
0x90E46A: jle     loc_90E52A
0x90E470: mov     [esp+100h+var_E4], 0
0x90E478: jmp     short loc_90E480
0x90E47A: align 10h
0x90E480: mov     ecx, [esp+100h+var_E0]
0x90E484: mov     ebp, [ecx+8]
0x90E487: mov     ecx, [esp+100h+var_E4]
0x90E48B: mov     edx, [esp+100h+var_D4]
0x90E48F: mov     eax, [ebp+ecx+10h]
0x90E493: add     ebp, ecx
0x90E495: cmp     eax, edx
0x90E497: jnz     short loc_90E507
0x90E499: mov     eax, [ebp+0]
0x90E49C: mov     ecx, [ebp+4]
0x90E49F: mov     edx, [esi+10h]
0x90E4A2: mov     [esp+100h+var_5C], eax
0x90E4A9: mov     eax, [esp+100h+var_D8]
0x90E4AD: mov     [esp+100h+var_DC], ecx
0x90E4B1: mov     ecx, [esp+100h+var_D4]
0x90E4B5: shl     eax, 3
0x90E4B8: mov     [eax+edx], ecx
0x90E4BB: mov     ecx, [esi+1Ch]
0x90E4BE: mov     ebx, [esi+10h]
0x90E4C1: mov     edx, [ecx]
0x90E4C3: add     ebx, eax
0x90E4C5: call    dword ptr [edx+1Ch]
0x90E4C8: sub     eax, [edi+14h]
0x90E4CB: mov     [ebx+4], eax
0x90E4CE: mov     eax, [esp+100h+var_DC]
0x90E4D2: test    eax, eax
0x90E4D4: jz      short loc_90E4F7
0x90E4D6: mov     eax, [esi+20h]
0x90E4D9: lea     edx, [esp+100h+var_90]
0x90E4DD: push    edx
0x90E4DE: mov     edx, [esp+104h+var_DC]
0x90E4E2: push    edx
0x90E4E3: mov     edx, [esp+108h+var_5C]
0x90E4EA: push    edx
0x90E4EB: mov     edx, [esi+1Ch]
0x90E4EE: lea     ecx, [esi+20h]
0x90E4F1: push    edx
0x90E4F2: call    dword ptr [eax+8]
0x90E4F5: jmp     short loc_90E507
0x90E4F7: mov     edx, [ebp+14h]
0x90E4FA: mov     ecx, [esi+1Ch]
0x90E4FD: mov     eax, [ecx]
0x90E4FF: push    edx
0x90E500: mov     edx, [ebp+0]
0x90E503: push    edx
0x90E504: call    dword ptr [eax+0Ch]
0x90E507: mov     eax, [esp+100h+var_D8]
0x90E50B: mov     ebx, [esp+100h+var_E4]
0x90E50F: mov     ecx, [esp+100h+var_E0]
0x90E513: mov     edx, [ecx+0Ch]
0x90E516: inc     eax
0x90E517: add     ebx, 18h
0x90E51A: cmp     eax, edx
0x90E51C: mov     [esp+100h+var_D8], eax
0x90E520: mov     [esp+100h+var_E4], ebx
0x90E524: jl      loc_90E480
0x90E52A: mov     ecx, [esp+100h+var_8C]
0x90E52E: xor     eax, eax
0x90E530: test    ecx, ecx
0x90E532: jle     short loc_90E55D
0x90E534: mov     ecx, [esp+100h+var_90]
0x90E538: mov     ebp, [ecx+eax*8]
0x90E53B: mov     edx, [edi+14h]
0x90E53E: sub     ebp, edx
0x90E540: mov     [ecx+eax*8], ebp
0x90E543: mov     ecx, [esp+100h+var_90]
0x90E547: mov     ebx, [ecx+eax*8+4]
0x90E54B: mov     edx, [edi+14h]
0x90E54E: sub     ebx, edx
0x90E550: mov     [ecx+eax*8+4], ebx
0x90E554: mov     ecx, [esp+100h+var_8C]
0x90E558: inc     eax
0x90E559: cmp     eax, ecx
0x90E55B: jl      short loc_90E534
0x90E55D: mov     ecx, [esi+1Ch]
0x90E560: mov     eax, [ecx]
0x90E562: call    dword ptr [eax+1Ch]
0x90E565: sub     eax, [edi+14h]
0x90E568: xor     ecx, ecx
0x90E56A: mov     [edi+18h], eax
0x90E56D: mov     cl, [esi+48h]
0x90E570: mov     edx, [esi+1Ch]
0x90E573: push    ecx
0x90E574: push    edx
0x90E575: lea     ecx, [esp+108h+var_A0]
0x90E579: call    sub_9183A0
0x90E57E: mov     eax, [esp+100h+var_8C]
0x90E582: mov     edx, [esp+100h+var_90]
0x90E586: lea     ecx, [eax+eax]
0x90E589: push    ecx
0x90E58A: push    4
0x90E58C: push    edx
0x90E58D: lea     ecx, [esp+10Ch+var_A0]
0x90E591: call    sub_9181D0
0x90E596: lea     ecx, [esp+100h+var_A0]
0x90E59A: call    sub_918180
0x90E59F: mov     ebx, [esi+1Ch]
0x90E5A2: mov     eax, [ebx]
0x90E5A4: mov     ecx, ebx
0x90E5A6: call    dword ptr [eax+1Ch]
0x90E5A9: lea     ecx, [esp+100h+var_C0]
0x90E5AD: mov     [esp+100h+var_CC], ecx
0x90E5B1: mov     [esp+100h+var_C4], 80000020h
0x90E5B9: xor     ecx, ecx
0x90E5BB: jmp     short loc_90E5C0
0x90E5BD: align 10h
0x90E5C0: mov     edx, [esp+100h+var_CC]
0x90E5C4: mov     byte ptr [ecx+edx], 0FFh
0x90E5C8: inc     ecx
0x90E5C9: cmp     ecx, 10h
0x90E5CC: jl      short loc_90E5C0
0x90E5CE: and     eax, 0Fh
0x90E5D1: mov     [esp+100h+var_C8], 10h
0x90E5D9: jz      short loc_90E5EF
0x90E5DB: mov     edx, [ebx]
0x90E5DD: mov     ecx, 10h
0x90E5E2: sub     ecx, eax
0x90E5E4: mov     eax, [esp+100h+var_CC]
0x90E5E8: push    ecx
0x90E5E9: push    eax
0x90E5EA: mov     ecx, ebx
0x90E5EC: call    dword ptr [edx+0Ch]
0x90E5EF: mov     eax, [esp+100h+var_C4]
0x90E5F3: test    eax, eax
0x90E5F5: js      short loc_90E61E
0x90E5F7: mov     ecx, [esp+100h+var_CC]
0x90E5FB: mov     edx, large fs:2Ch
0x90E602: push    14h
0x90E604: and     eax, 3FFFFFFFh
0x90E609: push    eax
0x90E60A: mov     eax, ds:0BA9DE4h
0x90E60F: push    ecx
0x90E610: mov     ecx, [edx+eax*4]
0x90E613: mov     ecx, [ecx+19Ch]
0x90E619: call    sub_8A75D0
0x90E61E: mov     ecx, [esi+1Ch]
0x90E621: mov     edx, [ecx]
0x90E623: call    dword ptr [edx+1Ch]
0x90E626: sub     eax, [edi+14h]
0x90E629: mov     [edi+1Ch], eax
0x90E62C: mov     eax, [esp+100h+var_80]
0x90E633: mov     ecx, [esi+1Ch]
0x90E636: mov     edx, [ecx]
0x90E638: lea     eax, [eax+eax*2]
0x90E63B: push    1
0x90E63D: shl     eax, 2
0x90E640: push    eax
0x90E641: call    dword ptr [edx+18h]
0x90E644: mov     eax, [esi+30h]
0x90E647: mov     edx, [esp+100h+var_84]
0x90E64B: add     eax, [esp+100h+var_E8]
0x90E64F: mov     ecx, [eax]
0x90E651: mov     [eax], edx
0x90E653: mov     edx, [esp+100h+var_80]
0x90E65A: mov     [esp+100h+var_84], ecx
0x90E65E: mov     ecx, [eax+4]
0x90E661: mov     [eax+4], edx
0x90E664: mov     edx, [esp+100h+var_7C]
0x90E66B: mov     [esp+100h+var_80], ecx
0x90E672: mov     ecx, [eax+8]
0x90E675: mov     [eax+8], edx
0x90E678: mov     ebx, [esi+1Ch]
0x90E67B: mov     [esp+100h+var_7C], ecx
0x90E682: mov     eax, [ebx]
0x90E684: mov     ecx, ebx
0x90E686: call    dword ptr [eax+1Ch]
0x90E689: lea     ecx, [esp+100h+var_4C]
0x90E690: mov     [esp+100h+var_58], ecx
0x90E697: mov     [esp+100h+var_50], 80000020h
0x90E6A2: xor     ecx, ecx
0x90E6A4: mov     edx, [esp+100h+var_58]
0x90E6AB: mov     byte ptr [ecx+edx], 0FFh
0x90E6AF: inc     ecx
0x90E6B0: cmp     ecx, 10h
0x90E6B3: jl      short loc_90E6A4
0x90E6B5: and     eax, 0Fh
0x90E6B8: mov     [esp+100h+var_54], 10h
0x90E6C3: jz      short loc_90E6DC
0x90E6C5: mov     edx, [ebx]
0x90E6C7: mov     ecx, 10h
0x90E6CC: sub     ecx, eax
0x90E6CE: mov     eax, [esp+100h+var_58]
0x90E6D5: push    ecx
0x90E6D6: push    eax
0x90E6D7: mov     ecx, ebx
0x90E6D9: call    dword ptr [edx+0Ch]
0x90E6DC: mov     eax, [esp+100h+var_50]
0x90E6E3: test    eax, eax
0x90E6E5: js      short loc_90E711
0x90E6E7: mov     ecx, [esp+100h+var_58]
0x90E6EE: mov     edx, large fs:2Ch
0x90E6F5: push    14h
0x90E6F7: and     eax, 3FFFFFFFh
0x90E6FC: push    eax
0x90E6FD: mov     eax, ds:0BA9DE4h
0x90E702: push    ecx
0x90E703: mov     ecx, [edx+eax*4]
0x90E706: mov     ecx, [ecx+19Ch]
0x90E70C: call    sub_8A75D0
0x90E711: mov     ecx, [esi+1Ch]
0x90E714: mov     edx, [ecx]
0x90E716: call    dword ptr [edx+1Ch]
0x90E719: sub     eax, [edi+14h]
0x90E71C: mov     [edi+20h], eax
0x90E71F: mov     eax, [esp+100h+var_74]
0x90E726: mov     ecx, [esi+1Ch]
0x90E729: mov     edx, [ecx]
0x90E72B: lea     eax, [eax+eax*2]
0x90E72E: push    1
0x90E730: shl     eax, 2
0x90E733: push    eax
0x90E734: call    dword ptr [edx+18h]
0x90E737: mov     eax, [esi+3Ch]
0x90E73A: mov     edx, [esp+100h+var_78]
0x90E741: add     eax, [esp+100h+var_E8]
0x90E745: mov     ecx, [eax]
0x90E747: mov     [eax], edx
0x90E749: mov     edx, [esp+100h+var_74]
0x90E750: mov     [esp+100h+var_78], ecx
0x90E757: mov     ecx, [eax+4]
0x90E75A: mov     [eax+4], edx
0x90E75D: mov     edx, [esp+100h+var_70]
0x90E764: mov     [esp+100h+var_74], ecx
0x90E76B: mov     ecx, [eax+8]
0x90E76E: mov     [eax+8], edx
0x90E771: mov     ebx, [esi+1Ch]
0x90E774: mov     [esp+100h+var_70], ecx
0x90E77B: mov     eax, [ebx]
0x90E77D: mov     ecx, ebx
0x90E77F: call    dword ptr [eax+1Ch]
0x90E782: lea     ecx, [esp+100h+var_20]
0x90E789: mov     [esp+100h+var_2C], ecx
0x90E790: mov     [esp+100h+var_24], 80000020h
0x90E79B: xor     ecx, ecx
0x90E79D: lea     ecx, [ecx+0]
0x90E7A0: mov     edx, [esp+100h+var_2C]
0x90E7A7: mov     byte ptr [ecx+edx], 0FFh
0x90E7AB: inc     ecx
0x90E7AC: cmp     ecx, 10h
0x90E7AF: jl      short loc_90E7A0
0x90E7B1: and     eax, 0Fh
0x90E7B4: mov     [esp+100h+var_28], 10h
0x90E7BF: jz      short loc_90E7D8
0x90E7C1: mov     edx, [ebx]
0x90E7C3: mov     ecx, 10h
0x90E7C8: sub     ecx, eax
0x90E7CA: mov     eax, [esp+100h+var_2C]
0x90E7D1: push    ecx
0x90E7D2: push    eax
0x90E7D3: mov     ecx, ebx
0x90E7D5: call    dword ptr [edx+0Ch]
0x90E7D8: mov     eax, [esp+100h+var_24]
0x90E7DF: test    eax, eax
0x90E7E1: js      short loc_90E80D
0x90E7E3: mov     ecx, [esp+100h+var_2C]
0x90E7EA: mov     edx, large fs:2Ch
0x90E7F1: push    14h
0x90E7F3: and     eax, 3FFFFFFFh
0x90E7F8: push    eax
0x90E7F9: mov     eax, ds:0BA9DE4h
0x90E7FE: push    ecx
0x90E7FF: mov     ecx, [edx+eax*4]
0x90E802: mov     ecx, [ecx+19Ch]
0x90E808: call    sub_8A75D0
0x90E80D: mov     ecx, [esi+1Ch]
0x90E810: mov     edx, [ecx]
0x90E812: call    dword ptr [edx+1Ch]
0x90E815: sub     eax, [edi+14h]
0x90E818: lea     ecx, [esp+100h+var_90]
0x90E81C: mov     [edi+28h], eax
0x90E81F: call    sub_941400
0x90E824: mov     eax, [esp+100h+var_D4]
0x90E828: mov     edi, [esp+100h+var_EC]
0x90E82C: mov     edx, [esp+100h+var_E8]
0x90E830: mov     ecx, [esi+8]
0x90E833: inc     eax
0x90E834: add     edi, 30h ; '0'
0x90E837: add     edx, 0Ch
0x90E83A: cmp     eax, ecx
0x90E83C: mov     [esp+100h+var_D4], eax
0x90E840: mov     [esp+100h+var_EC], edi
0x90E844: mov     [esp+100h+var_E8], edx
0x90E848: jl      loc_90E397
0x90E84E: pop     edi
0x90E84F: pop     esi
0x90E850: pop     ebp
0x90E851: pop     ebx
0x90E852: add     esp, 0F0h
0x90E858: retn    4
