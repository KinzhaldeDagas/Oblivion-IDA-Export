0x53DA20: push    0FFFFFFFFh
0x53DA22: push    offset SEH_53DA20
0x53DA27: mov     eax, large fs:0
0x53DA2D: push    eax
0x53DA2E: sub     esp, 2A0h
0x53DA34: push    ebx
0x53DA35: push    ebp
0x53DA36: push    esi
0x53DA37: push    edi
0x53DA38: mov     eax, ds:0B30AACh
0x53DA3D: xor     eax, esp
0x53DA3F: push    eax
0x53DA40: lea     eax, [esp+2C0h+var_C]
0x53DA47: mov     large fs:0, eax
0x53DA4D: mov     ebx, [esp+2C0h+arg_0]
0x53DA54: fldz
0x53DA56: mov     esi, [ebx+0Ch]
0x53DA59: fstp    [esp+2C0h+var_268]
0x53DA5D: xor     ebp, ebp
0x53DA5F: cmp     esi, ebp
0x53DA61: mov     [esp+2C0h+var_270], ebp
0x53DA65: mov     [esp+2C0h+var_274], ebp
0x53DA69: mov     [esp+2C0h+var_1CC], ebp
0x53DA70: jz      loc_53F1C7
0x53DA76: mov     eax, [esi]
0x53DA78: mov     edx, [eax+4]
0x53DA7B: mov     ecx, esi
0x53DA7D: call    edx
0x53DA7F: cmp     eax, ebp
0x53DA81: jz      short loc_53DA91
0x53DA83: cmp     eax, offset dword_B40BCC
0x53DA88: jz      short loc_53DA9D
0x53DA8A: mov     eax, [eax+4]
0x53DA8D: cmp     eax, ebp
0x53DA8F: jnz     short loc_53DA83
0x53DA91: mov     esi, [esi+34h]
0x53DA94: cmp     esi, ebp
0x53DA96: jnz     short loc_53DA76
0x53DA98: jmp     loc_53F1C7
0x53DA9D: mov     eax, [esi+44h]
0x53DAA0: push    eax
0x53DAA1: push    offset dword_B40B50
0x53DAA6: call    NiRTTI_Cast
0x53DAAB: mov     edi, eax
0x53DAAD: add     esp, 8
0x53DAB0: mov     ecx, esi
0x53DAB2: mov     dword ptr [esp+2C0h+var_20C], edi
0x53DAB9: call    sub_53D850
0x53DABE: fldz
0x53DAC0: mov     edx, [eax]
0x53DAC2: mov     edx, [edx+5Ch]
0x53DAC5: lea     ecx, [esp+2C0h+var_268]
0x53DAC9: push    ecx
0x53DACA: push    0
0x53DACC: push    ecx
0x53DACD: mov     ecx, eax
0x53DACF: fstp    [esp+2CCh+var_2CC]
0x53DAD2: call    edx
0x53DAD4: fld     dword ptr [edi+48h]
0x53DAD7: fstp    dword ptr [esp+2C0h+var_2A0]
0x53DADB: mov     edx, [ebx]
0x53DADD: fld     dword ptr [esp+2C0h+var_2A0]
0x53DAE1: fmul    [esp+2C0h+var_268]
0x53DAE5: fnstcw  word ptr [esp+2C0h+var_278]
0x53DAE9: movzx   eax, word ptr [esp+2C0h+var_278]
0x53DAEE: fstp    [esp+2C0h+var_268]
0x53DAF2: or      eax, 0C00h
0x53DAF7: fld     [esp+2C0h+var_268]
0x53DAFB: mov     dword ptr [esp+2C0h+var_2A0], eax
0x53DAFF: fldcw   word ptr [esp+2C0h+var_2A0]
0x53DB03: fistp   dword ptr [esp+2C0h+var_2A0]
0x53DB07: mov     ax, word ptr [esp+2C0h+var_2A0]
0x53DB0C: movzx   ecx, ax
0x53DB0F: mov     eax, [edx+4]
0x53DB12: fldcw   word ptr [esp+2C0h+var_278]
0x53DB16: mov     [esp+2C0h+var_278], ecx
0x53DB1A: mov     ecx, ebx
0x53DB1C: fldz
0x53DB1E: fstp    [esp+2C0h+var_1D4]
0x53DB25: call    eax
0x53DB27: test    eax, eax
0x53DB29: jz      short loc_53DB3E
0x53DB2B: jmp     short loc_53DB30
0x53DB2D: align 10h
0x53DB30: cmp     eax, offset dword_B40B1C
0x53DB35: jz      short loc_53DBA4
0x53DB37: mov     eax, [eax+4]
0x53DB3A: test    eax, eax
0x53DB3C: jnz     short loc_53DB30
0x53DB3E: xor     edi, edi
0x53DB40: cmp     edi, [ebx+0D0h]
0x53DB46: jnb     short loc_53DB6C
0x53DB48: mov     eax, [ebx+0C8h]
0x53DB4E: xor     ecx, ecx
0x53DB50: test    eax, eax
0x53DB52: jz      short loc_53DB6C
0x53DB54: lea     edx, [eax+8]
0x53DB57: mov     eax, [eax]
0x53DB59: mov     edx, [edx]
0x53DB5B: mov     esi, ecx
0x53DB5D: add     ecx, 1
0x53DB60: cmp     esi, edi
0x53DB62: jz      loc_53DF15
0x53DB68: test    eax, eax
0x53DB6A: jnz     short loc_53DB54
0x53DB6C: xor     esi, esi
0x53DB6E: add     edi, 1
0x53DB71: test    esi, esi
0x53DB73: jz      loc_53DF26
0x53DB79: mov     eax, [esi]
0x53DB7B: mov     edx, [eax+4]
0x53DB7E: mov     ecx, esi
0x53DB80: call    edx
0x53DB82: test    eax, eax
0x53DB84: jz      short loc_53DB40
0x53DB86: jmp     short loc_53DB90
0x53DB88: align 10h
0x53DB90: cmp     eax, offset dword_B40AA4
0x53DB95: jz      loc_53DF1C
0x53DB9B: mov     eax, [eax+4]
0x53DB9E: test    eax, eax
0x53DBA0: jnz     short loc_53DB90
0x53DBA2: jmp     short loc_53DB40
0x53DBA4: xor     edi, edi
0x53DBA6: cmp     edi, [ebx+0D0h]
0x53DBAC: jnb     short loc_53DBD4
0x53DBAE: mov     eax, [ebx+0C8h]
0x53DBB4: xor     ecx, ecx
0x53DBB6: test    eax, eax
0x53DBB8: jz      short loc_53DBD4
0x53DBBA: lea     ebx, [ebx+0]
0x53DBC0: lea     edx, [eax+8]
0x53DBC3: mov     eax, [eax]
0x53DBC5: mov     edx, [edx]
0x53DBC7: mov     esi, ecx
0x53DBC9: add     ecx, 1
0x53DBCC: cmp     esi, edi
0x53DBCE: jz      short loc_53DC00
0x53DBD0: test    eax, eax
0x53DBD2: jnz     short loc_53DBC0
0x53DBD4: xor     esi, esi
0x53DBD6: add     edi, 1
0x53DBD9: test    esi, esi
0x53DBDB: jz      short loc_53DC3C
0x53DBDD: cmp     [esp+2C0h+var_270], ebp
0x53DBE1: jnz     short loc_53DC08
0x53DBE3: mov     edx, [esi]
0x53DBE5: mov     eax, [edx+4]
0x53DBE8: mov     ecx, esi
0x53DBEA: call    eax
0x53DBEC: test    eax, eax
0x53DBEE: jz      short loc_53DC08
0x53DBF0: cmp     eax, offset dword_B40A28
0x53DBF5: jz      short loc_53DC04
0x53DBF7: mov     eax, [eax+4]
0x53DBFA: test    eax, eax
0x53DBFC: jnz     short loc_53DBF0
0x53DBFE: jmp     short loc_53DC08
0x53DC00: mov     esi, edx
0x53DC02: jmp     short loc_53DBD6
0x53DC04: mov     [esp+2C0h+var_270], esi
0x53DC08: cmp     [esp+2C0h+var_274], ebp
0x53DC0C: jnz     short loc_53DBA6
0x53DC0E: mov     edx, [esi]
0x53DC10: mov     eax, [edx+4]
0x53DC13: mov     ecx, esi
0x53DC15: call    eax
0x53DC17: test    eax, eax
0x53DC19: jz      short loc_53DBA6
0x53DC1B: jmp     short loc_53DC20
0x53DC1D: align 10h
0x53DC20: cmp     eax, offset dword_B40AA4
0x53DC25: jz      short loc_53DC33
0x53DC27: mov     eax, [eax+4]
0x53DC2A: test    eax, eax
0x53DC2C: jnz     short loc_53DC20
0x53DC2E: jmp     loc_53DBA6
0x53DC33: mov     [esp+2C0h+var_274], esi
0x53DC37: jmp     loc_53DBA6
0x53DC3C: cmp     [esp+2C0h+var_270], ebp
0x53DC40: jz      short loc_53DC87
0x53DC42: mov     eax, [esp+2C0h+var_270]
0x53DC46: cmp     [eax+22h], bp
0x53DC4A: jbe     short loc_53DC53
0x53DC4C: mov     ecx, [eax+1Ch]
0x53DC4F: mov     eax, [ecx]
0x53DC51: jmp     short loc_53DC55
0x53DC53: xor     eax, eax
0x53DC55: push    eax
0x53DC56: push    offset dword_B3FAB0
0x53DC5B: call    NiRTTI_Cast
0x53DC60: add     esp, 8
0x53DC63: test    eax, eax
0x53DC65: jz      short loc_53DC87
0x53DC67: push    0
0x53DC69: mov     ecx, eax
0x53DC6B: call    sub_405790
0x53DC70: push    eax
0x53DC71: push    offset dword_B3FD5C
0x53DC76: call    NiRTTI_Cast
0x53DC7B: add     esp, 8
0x53DC7E: mov     ebp, eax
0x53DC80: mov     [esp+2C0h+var_1CC], eax
0x53DC87: mov     eax, [esp+2C0h+var_274]
0x53DC8B: test    eax, eax
0x53DC8D: jz      short loc_53DC99
0x53DC8F: fld     dword ptr [eax+18h]
0x53DC92: fstp    [esp+2C0h+var_1D4]
0x53DC99: push    ebp
0x53DC9A: push    offset dword_B3FD04
0x53DC9F: call    NiRTTI_Cast
0x53DCA4: add     esp, 8
0x53DCA7: test    eax, eax
0x53DCA9: jnz     loc_53F1C7
0x53DCAF: mov     eax, [ebp+0B4h]
0x53DCB5: push    eax
0x53DCB6: push    offset dword_B3FD2C
0x53DCBB: call    NiRTTI_Cast
0x53DCC0: mov     edx, [eax+1Ch]
0x53DCC3: movzx   ecx, word ptr [eax+8]
0x53DCC7: mov     ebx, [eax+44h]
0x53DCCA: mov     [esp+2C8h+var_298], edx
0x53DCCE: mov     edx, [eax+28h]
0x53DCD1: mov     eax, [eax+48h]
0x53DCD4: mov     [esp+2C8h+var_2AC], eax
0x53DCD8: mov     dword ptr [esp+2C8h+var_2A0], edx
0x53DCDC: mov     eax, 0FFFFh
0x53DCE1: movzx   edi, cx
0x53DCE4: cdq
0x53DCE5: idiv    edi
0x53DCE7: add     esp, 8
0x53DCEA: mov     [esp+2C0h+var_254], ecx
0x53DCEE: cmp     word ptr [esp+2C0h+var_278], ax
0x53DCF3: jb      short loc_53DCFC
0x53DCF5: movzx   ecx, ax
0x53DCF8: mov     [esp+2C0h+var_278], ecx
0x53DCFC: movzx   ebp, word ptr [esp+2C0h+var_278]
0x53DD01: mov     esi, ebp
0x53DD03: imul    esi, edi
0x53DD06: xor     ecx, ecx
0x53DD08: mov     eax, esi
0x53DD0A: mov     edx, 0Ch
0x53DD0F: mul     edx
0x53DD11: seto    cl
0x53DD14: mov     [esp+2C0h+var_270], ebp
0x53DD18: neg     ecx
0x53DD1A: or      ecx, eax
0x53DD1C: push    ecx; Size
0x53DD1D: call    FormHeapAlloc
0x53DD22: mov     [esp+2C4h+var_250], eax
0x53DD26: xor     ecx, ecx
0x53DD28: mov     eax, esi
0x53DD2A: mov     edx, 8
0x53DD2F: mul     edx
0x53DD31: seto    cl
0x53DD34: neg     ecx
0x53DD36: or      ecx, eax
0x53DD38: push    ecx; Size
0x53DD39: call    FormHeapAlloc
0x53DD3E: mov     dword ptr [esp+2C8h+var_214+4], eax
0x53DD45: movzx   esi, bx
0x53DD48: mov     eax, ebp
0x53DD4A: imul    eax, esi
0x53DD4D: xor     ecx, ecx
0x53DD4F: mov     edx, 2
0x53DD54: mul     edx
0x53DD56: seto    cl
0x53DD59: mov     [esp+2C8h+var_26C], esi
0x53DD5D: neg     ecx
0x53DD5F: or      ecx, eax
0x53DD61: push    ecx; Size
0x53DD62: call    FormHeapAlloc
0x53DD67: xor     ecx, ecx
0x53DD69: add     esp, 0Ch
0x53DD6C: test    ebp, ebp
0x53DD6E: mov     ebx, eax
0x53DD70: mov     [esp+2C0h+var_264], ebx
0x53DD74: mov     [esp+2C0h+var_24C], ecx
0x53DD78: jle     loc_53DE58
0x53DD7E: mov     ebp, dword ptr [esp+2C0h+var_214+4]
0x53DD85: lea     eax, [edi+edi*2]
0x53DD88: add     eax, eax
0x53DD8A: xor     edx, edx
0x53DD8C: add     eax, eax
0x53DD8E: mov     [esp+2C0h+var_1D0], eax
0x53DD95: mov     eax, [esp+2C0h+var_250]
0x53DD99: mov     [esp+2C0h+var_274], ebp
0x53DD9D: mov     ebp, [esp+2C0h+var_270]
0x53DDA1: mov     [esp+2C0h+var_248], edx
0x53DDA5: mov     dword ptr [esp+2C0h+var_214], eax
0x53DDAC: mov     dword ptr [esp+2C0h+var_21C+4], ebp
0x53DDB3: test    edi, edi
0x53DDB5: jle     short loc_53DE00
0x53DDB7: mov     esi, dword ptr [esp+2C0h+var_2A0]
0x53DDBB: mov     ecx, [esp+2C0h+var_298]
0x53DDBF: mov     edx, [esp+2C0h+var_274]
0x53DDC3: mov     ebp, edi
0x53DDC5: mov     ebx, [ecx]
0x53DDC7: mov     [eax], ebx
0x53DDC9: mov     ebx, [ecx+4]
0x53DDCC: mov     [eax+4], ebx
0x53DDCF: mov     ebx, [ecx+8]
0x53DDD2: mov     [eax+8], ebx
0x53DDD5: mov     ebx, [esi]
0x53DDD7: mov     [edx], ebx
0x53DDD9: mov     ebx, [esi+4]
0x53DDDC: mov     [edx+4], ebx
0x53DDDF: add     eax, 0Ch
0x53DDE2: add     ecx, 0Ch
0x53DDE5: add     edx, 8
0x53DDE8: add     esi, 8
0x53DDEB: sub     ebp, 1
0x53DDEE: jnz     short loc_53DDC5
0x53DDF0: mov     edx, [esp+2C0h+var_248]
0x53DDF4: mov     esi, [esp+2C0h+var_26C]
0x53DDF8: mov     ecx, [esp+2C0h+var_24C]
0x53DDFC: mov     ebx, [esp+2C0h+var_264]
0x53DE00: xor     eax, eax
0x53DE02: test    esi, esi
0x53DE04: jle     short loc_53DE24
0x53DE06: mov     ebp, [esp+2C0h+var_2AC]
0x53DE0A: mov     bp, [ebp+eax*2+0]
0x53DE0F: add     bp, dx
0x53DE12: mov     [ebx+ecx*2], bp
0x53DE16: add     eax, 1
0x53DE19: add     ecx, 1
0x53DE1C: cmp     eax, esi
0x53DE1E: jl      short loc_53DE06
0x53DE20: mov     [esp+2C0h+var_24C], ecx
0x53DE24: lea     eax, ds:0[edi*8]
0x53DE2B: add     [esp+2C0h+var_274], eax
0x53DE2F: mov     eax, dword ptr [esp+2C0h+var_214]
0x53DE36: add     eax, [esp+2C0h+var_1D0]
0x53DE3D: add     edx, edi
0x53DE3F: sub     dword ptr [esp+2C0h+var_21C+4], 1
0x53DE47: mov     [esp+2C0h+var_248], edx
0x53DE4B: mov     dword ptr [esp+2C0h+var_214], eax
0x53DE52: jnz     loc_53DDB3
0x53DE58: push    0C0h ; 'À'; Size
0x53DE5D: call    FormHeapAlloc
0x53DE62: mov     edi, eax
0x53DE64: add     esp, 4
0x53DE67: mov     [esp+2C0h+var_2A8], edi
0x53DE6B: xor     ebp, ebp
0x53DE6D: cmp     edi, ebp
0x53DE6F: mov     [esp+2C0h+var_4], ebp
0x53DE76: jz      loc_53DF08
0x53DE7C: push    5Ch ; '\'; Size
0x53DE7E: call    FormHeapAlloc
0x53DE83: mov     ecx, eax
0x53DE85: add     esp, 4
0x53DE88: mov     [esp+2C0h+var_29C], ecx
0x53DE8C: cmp     ecx, ebp
0x53DE8E: mov     byte ptr [esp+2C0h+var_4], 1
0x53DE96: jz      short loc_53DEEC
0x53DE98: mov     eax, 55555556h
0x53DE9D: imul    esi
0x53DE9F: mov     eax, edx
0x53DEA1: shr     eax, 1Fh
0x53DEA4: add     edx, eax
0x53DEA6: mov     eax, [esp+2C0h+var_278]
0x53DEAA: push    ebp
0x53DEAB: imul    edx, eax
0x53DEAE: imul    eax, [esp+2C4h+var_254]
0x53DEB3: push    ebp
0x53DEB4: push    ebx
0x53DEB5: push    edx
0x53DEB6: mov     edx, dword ptr [esp+2D0h+var_214+4]
0x53DEBD: push    ebp
0x53DEBE: push    1
0x53DEC0: push    edx
0x53DEC1: mov     edx, [esp+2DCh+var_250]
0x53DEC8: push    ebp
0x53DEC9: push    ebp
0x53DECA: push    edx
0x53DECB: push    eax
0x53DECC: call    sub_72AB00
0x53DED1: push    eax; a2
0x53DED2: mov     ecx, edi; this
0x53DED4: mov     byte ptr [esp+2C4h+var_4], 0
0x53DEDC: call    NiTriShape_NiTriShape
0x53DEE1: mov     edi, eax
0x53DEE3: mov     [esp+2C0h+var_24C], edi
0x53DEE7: jmp     loc_53E272
0x53DEEC: xor     eax, eax
0x53DEEE: push    eax; a2
0x53DEEF: mov     ecx, edi; this
0x53DEF1: mov     byte ptr [esp+2C4h+var_4], al
0x53DEF8: call    NiTriShape_NiTriShape
0x53DEFD: mov     edi, eax
0x53DEFF: mov     [esp+2C0h+var_24C], edi
0x53DF03: jmp     loc_53E272
0x53DF08: xor     eax, eax
0x53DF0A: mov     edi, eax
0x53DF0C: mov     [esp+2C0h+var_24C], edi
0x53DF10: jmp     loc_53E272
0x53DF15: mov     esi, edx
0x53DF17: jmp     loc_53DB6E
0x53DF1C: fld     dword ptr [esi+18h]
0x53DF1F: fstp    [esp+2C0h+var_1D4]
0x53DF26: mov     eax, 3FFFh
0x53DF2B: cmp     word ptr [esp+2C0h+var_278], ax
0x53DF30: mov     [esp+2C0h+var_1CC], ebx
0x53DF37: mov     [esp+2C0h+var_254], 4
0x53DF3F: jb      short loc_53DF45
0x53DF41: mov     [esp+2C0h+var_278], eax
0x53DF45: movzx   esi, word ptr [esp+2C0h+var_278]
0x53DF4A: xor     ecx, ecx
0x53DF4C: lea     ebp, ds:0[esi*4]
0x53DF53: mov     eax, ebp
0x53DF55: mov     edx, 0Ch
0x53DF5A: mul     edx
0x53DF5C: seto    cl
0x53DF5F: mov     [esp+2C0h+var_270], esi
0x53DF63: lea     edi, [esi+esi]
0x53DF66: neg     ecx
0x53DF68: or      ecx, eax
0x53DF6A: push    ecx; Size
0x53DF6B: call    FormHeapAlloc
0x53DF70: mov     ebx, eax
0x53DF72: xor     ecx, ecx
0x53DF74: mov     eax, ebp
0x53DF76: mov     edx, 8
0x53DF7B: mul     edx
0x53DF7D: seto    cl
0x53DF80: mov     [esp+2C4h+var_250], ebx
0x53DF84: neg     ecx
0x53DF86: or      ecx, eax
0x53DF88: push    ecx; Size
0x53DF89: call    FormHeapAlloc
0x53DF8E: mov     ebp, eax
0x53DF90: xor     ecx, ecx
0x53DF92: lea     eax, [edi+edi*2]
0x53DF95: mov     edx, 2
0x53DF9A: mul     edx
0x53DF9C: seto    cl
0x53DF9F: mov     [esp+2C8h+var_264], ebp
0x53DFA3: neg     ecx
0x53DFA5: or      ecx, eax
0x53DFA7: push    ecx; Size
0x53DFA8: call    FormHeapAlloc
0x53DFAD: add     esp, 0Ch
0x53DFB0: test    esi, esi
0x53DFB2: mov     edi, eax
0x53DFB4: mov     [esp+2C0h+var_26C], edi
0x53DFB8: jbe     loc_53E1E0
0x53DFBE: fldz
0x53DFC0: lea     ecx, [ebp+10h]
0x53DFC3: mov     ebp, [esp+2C0h+var_270]
0x53DFC7: fst     [esp+2C0h+var_220]
0x53DFCE: fld1
0x53DFD0: xor     esi, esi
0x53DFD2: fst     dword ptr [esp+2C0h+var_21C]
0x53DFD9: lea     edx, [edi+4]
0x53DFDC: fst     dword ptr [esp+2C0h+var_20C+4]
0x53DFE3: lea     eax, [ebx+18h]
0x53DFE6: fst     [esp+2C0h+var_204]
0x53DFED: fstp    [esp+2C0h+var_200]
0x53DFF4: fst     [esp+2C0h+var_1FC]
0x53DFFB: fst     [esp+2C0h+var_2A8]
0x53DFFF: fstp    [esp+2C0h+var_2A4]
0x53E003: fld     qword ptr ds:0A3D360h
0x53E009: fldz
0x53E00B: mov     edi, dword ptr [esp+2C0h+var_20C]
0x53E012: fld     dword ptr [edi+40h]
0x53E015: fstp    [esp+2C0h+var_2AC]
0x53E019: fld     [esp+2C0h+var_2AC]
0x53E01D: fld     st
0x53E01F: fmul    st, st(3)
0x53E021: fstp    [esp+2C0h+var_2AC]
0x53E025: fld     [esp+2C0h+var_2AC]
0x53E029: fst     dword ptr [esp+2C0h+var_2A0]
0x53E02D: fld     st(1)
0x53E02F: fmul    st, st(3)
0x53E031: fstp    [esp+2C0h+var_2AC]
0x53E035: fld     [esp+2C0h+var_2AC]
0x53E039: fst     [esp+2C0h+var_2AC]
0x53E03D: fxch    st(1)
0x53E03F: fst     [esp+2C0h+var_298]
0x53E043: fld     dword ptr [esp+2C0h+var_2A0]
0x53E047: fstp    [esp+2C0h+var_284]
0x53E04B: mov     edi, [esp+2C0h+var_284]
0x53E04F: fld     [esp+2C0h+var_2AC]
0x53E053: mov     [eax-18h], edi
0x53E056: fstp    [esp+2C0h+var_280]
0x53E05A: mov     edi, [esp+2C0h+var_280]
0x53E05E: fld     [esp+2C0h+var_298]
0x53E062: mov     [eax-14h], edi
0x53E065: fstp    [esp+2C0h+var_27C]
0x53E069: mov     edi, [esp+2C0h+var_27C]
0x53E06D: fxch    st(2)
0x53E06F: mov     [eax-10h], edi
0x53E072: fstp    [esp+2C0h+var_2AC]
0x53E076: fld     [esp+2C0h+var_2AC]
0x53E07A: fst     [esp+2C0h+var_2AC]
0x53E07E: fxch    st(1)
0x53E080: fst     dword ptr [esp+2C0h+var_2A0]
0x53E084: fxch    st(2)
0x53E086: fst     [esp+2C0h+var_298]
0x53E08A: fld     [esp+2C0h+var_2AC]
0x53E08E: fstp    [esp+2C0h+var_1EC]
0x53E095: mov     edi, [esp+2C0h+var_1EC]
0x53E09C: fld     dword ptr [esp+2C0h+var_2A0]
0x53E0A0: mov     [eax-0Ch], edi
0x53E0A3: fstp    [esp+2C0h+var_1E8]
0x53E0AA: mov     edi, [esp+2C0h+var_1E8]
0x53E0B1: fld     [esp+2C0h+var_298]
0x53E0B5: mov     [eax-8], edi
0x53E0B8: fstp    [esp+2C0h+var_1E4]
0x53E0BF: mov     edi, [esp+2C0h+var_1E4]
0x53E0C6: fxch    st(1)
0x53E0C8: mov     [eax-4], edi
0x53E0CB: fst     [esp+2C0h+var_2AC]
0x53E0CF: fst     [esp+2C0h+var_298]
0x53E0D3: fxch    st(2)
0x53E0D5: fst     dword ptr [esp+2C0h+var_2A0]
0x53E0D9: fld     [esp+2C0h+var_2AC]
0x53E0DD: fstp    [esp+2C0h+var_1E0]
0x53E0E4: mov     edi, [esp+2C0h+var_1E0]
0x53E0EB: fld     dword ptr [esp+2C0h+var_2A0]
0x53E0EF: mov     [eax], edi
0x53E0F1: fstp    [esp+2C0h+var_1DC]
0x53E0F8: mov     edi, [esp+2C0h+var_1DC]
0x53E0FF: fld     [esp+2C0h+var_298]
0x53E103: mov     [eax+4], edi
0x53E106: fstp    [esp+2C0h+var_1D8]
0x53E10D: mov     edi, [esp+2C0h+var_1D8]
0x53E114: fxch    st(1)
0x53E116: mov     [eax+8], edi
0x53E119: fstp    [esp+2C0h+var_2AC]
0x53E11D: fstp    dword ptr [esp+2C0h+var_2A0]
0x53E121: fstp    [esp+2C0h+var_298]
0x53E125: fld     [esp+2C0h+var_2AC]
0x53E129: fstp    [esp+2C0h+var_290]
0x53E12D: mov     edi, [esp+2C0h+var_290]
0x53E131: fld     dword ptr [esp+2C0h+var_2A0]
0x53E135: mov     [eax+0Ch], edi
0x53E138: fstp    [esp+2C0h+var_28C]
0x53E13C: mov     edi, [esp+2C0h+var_28C]
0x53E140: fld     [esp+2C0h+var_298]
0x53E144: mov     [eax+10h], edi
0x53E147: fstp    [esp+2C0h+var_288]
0x53E14B: mov     edi, [esp+2C0h+var_288]
0x53E14F: mov     [eax+14h], edi
0x53E152: mov     edi, [esp+2C0h+var_220]
0x53E159: mov     [ecx-10h], edi
0x53E15C: mov     edi, dword ptr [esp+2C0h+var_21C]
0x53E163: mov     [ecx-0Ch], edi
0x53E166: mov     edi, dword ptr [esp+2C0h+var_20C+4]
0x53E16D: mov     [ecx-8], edi
0x53E170: mov     edi, [esp+2C0h+var_204]
0x53E177: mov     [ecx-4], edi
0x53E17A: mov     edi, [esp+2C0h+var_200]
0x53E181: mov     [ecx], edi
0x53E183: mov     edi, [esp+2C0h+var_1FC]
0x53E18A: mov     [ecx+4], edi
0x53E18D: mov     edi, [esp+2C0h+var_2A8]
0x53E191: mov     [ecx+8], edi
0x53E194: mov     edi, [esp+2C0h+var_2A4]
0x53E198: mov     [ecx+0Ch], edi
0x53E19B: lea     edi, [esi+1]
0x53E19E: mov     [edx-2], di
0x53E1A2: lea     edi, [esi+2]
0x53E1A5: lea     ebx, [esi+3]
0x53E1A8: mov     [edx-4], si
0x53E1AC: mov     [edx+4], si
0x53E1B0: mov     [edx], di
0x53E1B3: mov     [edx+2], bx
0x53E1B7: mov     [edx+6], di
0x53E1BB: add     esi, 4
0x53E1BE: add     eax, 30h ; '0'
0x53E1C1: add     ecx, 20h ; ' '
0x53E1C4: add     edx, 0Ch
0x53E1C7: sub     ebp, 1
0x53E1CA: jnz     loc_53E00B
0x53E1D0: mov     edi, [esp+2C0h+var_26C]
0x53E1D4: fstp    st(1)
0x53E1D6: mov     ebp, [esp+2C0h+var_264]
0x53E1DA: fstp    st
0x53E1DC: mov     ebx, [esp+2C0h+var_250]
0x53E1E0: push    0C0h ; 'À'; Size
0x53E1E5: call    FormHeapAlloc
0x53E1EA: mov     esi, eax
0x53E1EC: add     esp, 4
0x53E1EF: mov     [esp+2C0h+var_2A8], esi
0x53E1F3: test    esi, esi
0x53E1F5: mov     [esp+2C0h+var_4], 2
0x53E200: jz      short loc_53E268
0x53E202: push    5Ch ; '\'; Size
0x53E204: call    FormHeapAlloc
0x53E209: add     esp, 4
0x53E20C: mov     [esp+2C0h+var_29C], eax
0x53E210: test    eax, eax
0x53E212: mov     byte ptr [esp+2C0h+var_4], 3
0x53E21A: jz      short loc_53E254
0x53E21C: push    0
0x53E21E: push    0
0x53E220: push    edi
0x53E221: mov     edi, [esp+2CCh+var_270]
0x53E225: lea     edx, [edi+edi]
0x53E228: push    edx
0x53E229: push    0
0x53E22B: push    1
0x53E22D: push    ebp
0x53E22E: push    0
0x53E230: push    0
0x53E232: push    ebx
0x53E233: lea     edx, ds:0[edi*4]
0x53E23A: push    edx
0x53E23B: mov     ecx, eax
0x53E23D: call    sub_72AB00
0x53E242: push    eax; a2
0x53E243: mov     ecx, esi; this
0x53E245: mov     byte ptr [esp+2C4h+var_4], 2
0x53E24D: call    NiTriShape_NiTriShape
0x53E252: jmp     short loc_53E26A
0x53E254: xor     eax, eax
0x53E256: push    eax; a2
0x53E257: mov     ecx, esi; this
0x53E259: mov     byte ptr [esp+2C4h+var_4], 2
0x53E261: call    NiTriShape_NiTriShape
0x53E266: jmp     short loc_53E26A
0x53E268: xor     eax, eax
0x53E26A: mov     [esp+2C0h+var_24C], eax
0x53E26E: mov     edi, eax
0x53E270: xor     ebp, ebp
0x53E272: cmp     edi, ebp
0x53E274: mov     [esp+2C0h+var_4], 0FFFFFFFFh
0x53E27F: jz      loc_53F1C7
0x53E285: mov     esi, dword ptr [esp+2C0h+var_20C]
0x53E28C: fld     dword ptr [esi+18h]
0x53E28F: fstp    [esp+2C0h+var_298]
0x53E293: fld     dword ptr [esi+1Ch]
0x53E296: fstp    dword ptr [esp+2C0h+var_2A0]
0x53E29A: call    _rand
0x53E29F: mov     [esp+2C0h+var_2AC], eax
0x53E2A3: fild    [esp+2C0h+var_2AC]
0x53E2A7: fdiv    qword ptr ds:0A3D5A8h
0x53E2AD: fstp    [esp+2C0h+var_2AC]
0x53E2B1: fld     [esp+2C0h+var_2AC]
0x53E2B5: fsub    qword ptr ds:0A2FAA0h
0x53E2BB: fmul    dword ptr [esp+2C0h+var_2A0]
0x53E2BF: fadd    [esp+2C0h+var_298]
0x53E2C3: fstp    [esp+2C0h+var_264]
0x53E2C7: fld     dword ptr [esi+20h]
0x53E2CA: fstp    [esp+2C0h+var_298]
0x53E2CE: fld     dword ptr [esi+24h]
0x53E2D1: fstp    dword ptr [esp+2C0h+var_2A0]
0x53E2D5: call    _rand
0x53E2DA: mov     [esp+2C0h+var_2AC], eax
0x53E2DE: fild    [esp+2C0h+var_2AC]
0x53E2E2: fadd    st, st
0x53E2E4: fdiv    qword ptr ds:0A3D5A8h
0x53E2EA: fsub    qword ptr ds:0A2F928h
0x53E2F0: fstp    [esp+2C0h+var_2AC]
0x53E2F4: fld     [esp+2C0h+var_2AC]
0x53E2F8: fmul    dword ptr [esp+2C0h+var_2A0]
0x53E2FC: fadd    [esp+2C0h+var_298]
0x53E300: fstp    [esp+2C0h+var_26C]
0x53E304: fld     dword ptr [esi+28h]
0x53E307: fstp    [esp+2C0h+var_298]
0x53E30B: fld     dword ptr [esi+2Ch]
0x53E30E: fstp    dword ptr [esp+2C0h+var_2A0]
0x53E312: call    _rand
0x53E317: mov     [esp+2C0h+var_2AC], eax
0x53E31B: fild    [esp+2C0h+var_2AC]
0x53E31F: fadd    st, st
0x53E321: fdiv    qword ptr ds:0A3D5A8h
0x53E327: fsub    qword ptr ds:0A2F928h
0x53E32D: fstp    [esp+2C0h+var_2AC]
0x53E331: fld     [esp+2C0h+var_2AC]
0x53E335: fmul    dword ptr [esp+2C0h+var_2A0]
0x53E339: fadd    [esp+2C0h+var_298]
0x53E33D: fstp    dword ptr [esp+2C0h+var_2A0]
0x53E341: fld     [esp+2C0h+var_26C]
0x53E345: fst     qword ptr [esp+2C0h+var_220]
0x53E34C: call    __CIsin
0x53E351: fstp    [esp+2C0h+var_2AC]
0x53E355: fld     [esp+2C0h+var_2AC]
0x53E359: fstp    [esp+2C0h+var_298]
0x53E35D: fld     qword ptr [esp+2C0h+var_220]
0x53E364: call    __CIcos
0x53E369: fstp    [esp+2C0h+var_2AC]
0x53E36D: fld     [esp+2C0h+var_2AC]
0x53E371: fstp    [esp+2C0h+var_26C]
0x53E375: fld     dword ptr [esp+2C0h+var_2A0]
0x53E379: fst     qword ptr [esp+2C0h+var_220]
0x53E380: call    __CIsin
0x53E385: fstp    [esp+2C0h+var_2AC]
0x53E389: fld     [esp+2C0h+var_2AC]
0x53E38D: fstp    dword ptr [esp+2C0h+var_2A0]
0x53E391: fld     [esp+2C0h+var_298]
0x53E395: fstp    [esp+2C0h+var_20C+4]
0x53E39C: fld     qword ptr [esp+2C0h+var_220]
0x53E3A3: call    __CIcos
0x53E3A8: fstp    [esp+2C0h+var_2AC]
0x53E3AC: fld     [esp+2C0h+var_2AC]
0x53E3B0: fld     [esp+2C0h+var_20C+4]
0x53E3B7: fmul    st(1), st
0x53E3B9: fxch    st(1)
0x53E3BB: fstp    [esp+2C0h+var_244]
0x53E3BF: fmul    dword ptr [esp+2C0h+var_2A0]
0x53E3C3: fstp    [esp+2C0h+var_240]
0x53E3CA: fld     [esp+2C0h+var_264]
0x53E3CE: fld     [esp+2C0h+var_244]
0x53E3D2: fmul    st, st(1)
0x53E3D4: fstp    [esp+2C0h+var_2AC]
0x53E3D8: fld     [esp+2C0h+var_240]
0x53E3DF: fmul    st, st(1)
0x53E3E1: fstp    dword ptr [esp+2C0h+var_2A0]
0x53E3E5: fmul    [esp+2C0h+var_26C]
0x53E3E9: mov     eax, [esi]
0x53E3EB: mov     edx, [eax+4]
0x53E3EE: mov     ecx, esi
0x53E3F0: fstp    [esp+2C0h+var_298]
0x53E3F4: mov     [esp+2C0h+var_274], ebp
0x53E3F8: fld     [esp+2C0h+var_2AC]
0x53E3FC: mov     [esp+2C0h+var_248], ebp
0x53E400: fstp    [esp+2C0h+var_1F8]
0x53E407: mov     dword ptr [esp+2C0h+var_214+4], ebp
0x53E40E: fld     dword ptr [esp+2C0h+var_2A0]
0x53E412: mov     [esp+2C0h+var_26C], ebp
0x53E416: fstp    [esp+2C0h+var_1F4]
0x53E41D: fld     [esp+2C0h+var_298]
0x53E421: fstp    [esp+2C0h+var_1F0]
0x53E428: fld     dword ptr [esi+48h]
0x53E42B: fstp    [esp+2C0h+var_278]
0x53E42F: call    edx
0x53E431: cmp     eax, ebp
0x53E433: jz      short loc_53E447
0x53E435: cmp     eax, offset dword_B409EC
0x53E43A: jz      loc_53E4C3
0x53E440: mov     eax, [eax+4]
0x53E443: cmp     eax, ebp
0x53E445: jnz     short loc_53E435
0x53E447: mov     eax, [esi]
0x53E449: mov     edx, [eax+4]
0x53E44C: mov     ecx, esi
0x53E44E: call    edx
0x53E450: cmp     eax, ebp
0x53E452: jz      short loc_53E466
0x53E454: cmp     eax, offset dword_B40968
0x53E459: jz      loc_53E61C
0x53E45F: mov     eax, [eax+4]
0x53E462: cmp     eax, ebp
0x53E464: jnz     short loc_53E454
0x53E466: mov     eax, [esi]
0x53E468: mov     edx, [eax+4]
0x53E46B: mov     ecx, esi
0x53E46D: call    edx
0x53E46F: cmp     eax, ebp
0x53E471: jz      short loc_53E485
0x53E473: cmp     eax, offset dword_B40944
0x53E478: jz      loc_53E632
0x53E47E: mov     eax, [eax+4]
0x53E481: cmp     eax, ebp
0x53E483: jnz     short loc_53E473
0x53E485: push    esi
0x53E486: push    offset dword_B408C8
0x53E48B: call    NiRTTI__IsObjectOfRTTIType
0x53E490: add     esp, 8
0x53E493: test    al, al
0x53E495: jz      loc_53F1BD
0x53E49B: push    esi
0x53E49C: push    offset dword_B408C8
0x53E4A1: call    NiRTTI_Cast
0x53E4A6: mov     ebx, eax
0x53E4A8: add     esp, 8
0x53E4AB: cmp     [ebx+5Ch], bp
0x53E4AF: mov     [esp+2C0h+var_26C], ebx
0x53E4B3: jbe     loc_53E79D
0x53E4B9: mov     eax, [ebx+54h]
0x53E4BC: mov     eax, [eax]
0x53E4BE: jmp     loc_53E79F
0x53E4C3: push    esi
0x53E4C4: push    offset dword_B409EC
0x53E4C9: call    NiRTTI_Cast
0x53E4CE: mov     ebx, eax
0x53E4D0: mov     eax, [ebx+50h]
0x53E4D3: lea     esi, [eax+64h]
0x53E4D6: mov     ecx, 0Dh
0x53E4DB: lea     edi, [esp+2C8h+var_E8]
0x53E4E2: rep movsd
0x53E4E4: mov     eax, [ebx+10h]
0x53E4E7: lea     esi, [eax+64h]
0x53E4EA: add     esp, 8
0x53E4ED: mov     ecx, 0Dh
0x53E4F2: lea     edi, [esp+2C0h+var_11C]
0x53E4F9: lea     eax, [esp+2C0h+var_150]
0x53E500: rep movsd
0x53E502: push    eax
0x53E503: lea     ecx, [esp+2C4h+var_11C]
0x53E50A: mov     [esp+2C4h+var_274], ebx
0x53E50E: call    sub_718A80
0x53E513: lea     ecx, [esp+2C0h+var_E8]
0x53E51A: push    ecx
0x53E51B: lea     edx, [esp+2C4h+var_B4]
0x53E522: push    edx
0x53E523: lea     ecx, [esp+2C8h+var_150]
0x53E52A: call    sub_53D7A0
0x53E52F: mov     esi, eax
0x53E531: mov     ecx, 0Dh
0x53E536: lea     edi, [esp+2C0h+var_194]
0x53E53D: rep movsd
0x53E53F: lea     eax, [esp+2C0h+var_1F8]
0x53E546: push    eax
0x53E547: lea     ecx, [esp+2C4h+var_244]
0x53E54E: push    ecx
0x53E54F: lea     ecx, [esp+2C8h+var_194]
0x53E556: call    sub_7101F0
0x53E55B: mov     edx, [eax]
0x53E55D: fld     [esp+2C0h+var_278]
0x53E561: mov     [esp+2C0h+var_260], edx
0x53E565: mov     ecx, [eax+4]
0x53E568: fst     qword ptr [esp+2C0h+var_2A8]
0x53E56C: fld     [esp+2C0h+var_168]
0x53E573: mov     [esp+2C0h+var_25C], ecx
0x53E577: mov     edx, [eax+8]
0x53E57A: mov     [esp+2C0h+var_258], edx
0x53E57E: fld     [esp+2C0h+var_258]
0x53E582: fmulp   st(2), st
0x53E584: fadd    st(1), st
0x53E586: fcom    st(1)
0x53E588: fnstsw  ax
0x53E58A: test    ah, 5
0x53E58D: jp      short loc_53E593
0x53E58F: fld     st
0x53E591: jmp     short loc_53E595
0x53E593: fld     st(1)
0x53E595: fld     dword ptr [ebx+58h]
0x53E598: fstp    dword ptr [esp+2C0h+var_2A0]
0x53E59C: fld     dword ptr [ebx+54h]
0x53E59F: fstp    [esp+2C0h+var_2AC]
0x53E5A3: fld     [esp+2C0h+var_2AC]
0x53E5A7: fld     qword ptr ds:0A2FAA0h
0x53E5AD: fmul    st(1), st
0x53E5AF: fxch    st(1)
0x53E5B1: fchs
0x53E5B3: fstp    [esp+2C0h+var_290]
0x53E5B7: mov     eax, [esp+2C0h+var_290]
0x53E5BB: fld     dword ptr [esp+2C0h+var_2A0]
0x53E5BF: mov     [esp+2C0h+var_238], eax
0x53E5C6: fmul    st, st(1)
0x53E5C8: fchs
0x53E5CA: fstp    [esp+2C0h+var_28C]
0x53E5CE: mov     ecx, [esp+2C0h+var_28C]
0x53E5D2: fxch    st(1)
0x53E5D4: mov     dword ptr [esp+2C0h+var_234], ecx
0x53E5DB: fstp    [esp+2C0h+var_288]
0x53E5DF: mov     edx, [esp+2C0h+var_288]
0x53E5E3: fxch    st(1)
0x53E5E5: mov     dword ptr [esp+2C0h+var_234+4], edx
0x53E5EC: fcom    st(2)
0x53E5EE: fnstsw  ax
0x53E5F0: test    ah, 41h
0x53E5F3: jnz     short loc_53E5F9
0x53E5F5: fstp    st(2)
0x53E5F7: jmp     short loc_53E5FB
0x53E5F9: fstp    st
0x53E5FB: fld     dword ptr [ebx+58h]
0x53E5FE: fstp    dword ptr [esp+2C0h+var_2A0]
0x53E602: fld     dword ptr [ebx+54h]
0x53E605: fstp    [esp+2C0h+var_2AC]
0x53E609: fld     [esp+2C0h+var_2AC]
0x53E60D: fmul    st, st(1)
0x53E60F: fstp    [esp+2C0h+var_290]
0x53E613: fmul    dword ptr [esp+2C0h+var_2A0]
0x53E617: jmp     loc_53E76F
0x53E61C: push    esi
0x53E61D: push    offset dword_B40968
0x53E622: call    NiRTTI_Cast
0x53E627: mov     ebx, eax
0x53E629: mov     dword ptr [esp+2C8h+var_214+4], ebx
0x53E630: jmp     short loc_53E646
0x53E632: push    esi
0x53E633: push    offset dword_B40944
0x53E638: call    NiRTTI_Cast
0x53E63D: mov     ebx, eax
0x53E63F: mov     [esp+2C8h+var_248], ebx
0x53E646: mov     eax, [ebx+50h]
0x53E649: lea     esi, [eax+64h]
0x53E64C: mov     ecx, 0Dh
0x53E651: lea     edi, [esp+2C8h+var_E8]
0x53E658: rep movsd
0x53E65A: mov     eax, [ebx+10h]
0x53E65D: lea     esi, [eax+64h]
0x53E660: add     esp, 8
0x53E663: mov     ecx, 0Dh
0x53E668: lea     edi, [esp+2C0h+var_150]
0x53E66F: lea     eax, [esp+2C0h+var_11C]
0x53E676: rep movsd
0x53E678: push    eax
0x53E679: lea     ecx, [esp+2C4h+var_150]
0x53E680: call    sub_718A80
0x53E685: lea     ecx, [esp+2C0h+var_E8]
0x53E68C: push    ecx
0x53E68D: lea     edx, [esp+2C4h+var_B4]
0x53E694: push    edx
0x53E695: lea     ecx, [esp+2C8h+var_11C]
0x53E69C: call    sub_53D7A0
0x53E6A1: mov     esi, eax
0x53E6A3: mov     ecx, 0Dh
0x53E6A8: lea     edi, [esp+2C0h+var_194]
0x53E6AF: rep movsd
0x53E6B1: lea     eax, [esp+2C0h+var_1F8]
0x53E6B8: push    eax
0x53E6B9: lea     ecx, [esp+2C4h+var_244]
0x53E6C0: push    ecx
0x53E6C1: lea     ecx, [esp+2C8h+var_194]
0x53E6C8: call    sub_7101F0
0x53E6CD: mov     edx, [eax]
0x53E6CF: fld     [esp+2C0h+var_278]
0x53E6D3: mov     [esp+2C0h+var_260], edx
0x53E6D7: mov     ecx, [eax+4]
0x53E6DA: fst     qword ptr [esp+2C0h+var_2A8]
0x53E6DE: fld     [esp+2C0h+var_168]
0x53E6E5: mov     [esp+2C0h+var_25C], ecx
0x53E6E9: mov     edx, [eax+8]
0x53E6EC: mov     [esp+2C0h+var_258], edx
0x53E6F0: fld     [esp+2C0h+var_258]
0x53E6F4: fmulp   st(2), st
0x53E6F6: fadd    st(1), st
0x53E6F8: fcom    st(1)
0x53E6FA: fnstsw  ax
0x53E6FC: test    ah, 5
0x53E6FF: jp      short loc_53E705
0x53E701: fld     st
0x53E703: jmp     short loc_53E707
0x53E705: fld     st(1)
0x53E707: fld     dword ptr [ebx+54h]
0x53E70A: fstp    dword ptr [esp+2C0h+var_2A0]
0x53E70E: fld     dword ptr [ebx+54h]
0x53E711: fstp    [esp+2C0h+var_2AC]
0x53E715: fld     [esp+2C0h+var_2AC]
0x53E719: fchs
0x53E71B: fstp    [esp+2C0h+var_290]
0x53E71F: mov     eax, [esp+2C0h+var_290]
0x53E723: fld     dword ptr [esp+2C0h+var_2A0]
0x53E727: mov     [esp+2C0h+var_238], eax
0x53E72E: fchs
0x53E730: fstp    [esp+2C0h+var_28C]
0x53E734: mov     ecx, [esp+2C0h+var_28C]
0x53E738: mov     dword ptr [esp+2C0h+var_234], ecx
0x53E73F: fstp    [esp+2C0h+var_288]
0x53E743: mov     edx, [esp+2C0h+var_288]
0x53E747: mov     dword ptr [esp+2C0h+var_234+4], edx
0x53E74E: fcom    st(1)
0x53E750: fnstsw  ax
0x53E752: test    ah, 41h
0x53E755: jnz     short loc_53E75B
0x53E757: fstp    st(1)
0x53E759: jmp     short loc_53E75D
0x53E75B: fstp    st
0x53E75D: fld     dword ptr [ebx+54h]
0x53E760: fstp    [esp+2C0h+var_2AC]
0x53E764: fld     dword ptr [ebx+54h]
0x53E767: fstp    [esp+2C0h+var_290]
0x53E76B: fld     [esp+2C0h+var_2AC]
0x53E76F: mov     eax, [esp+2C0h+var_290]
0x53E773: fstp    [esp+2C0h+var_28C]
0x53E777: mov     ecx, [esp+2C0h+var_28C]
0x53E77B: fstp    [esp+2C0h+var_288]
0x53E77F: mov     edx, [esp+2C0h+var_288]
0x53E783: mov     dword ptr [esp+2C0h+var_22C], eax
0x53E78A: mov     dword ptr [esp+2C0h+var_22C+4], ecx
0x53E791: mov     [esp+2C0h+var_224], edx
0x53E798: jmp     loc_53E929
0x53E79D: xor     eax, eax
0x53E79F: lea     esi, [eax+64h]
0x53E7A2: mov     ecx, 0Dh
0x53E7A7: lea     edi, [esp+2C0h+var_74]
0x53E7AE: rep movsd
0x53E7B0: mov     esi, [esp+2C0h+arg_0]
0x53E7B7: add     esi, 64h ; 'd'
0x53E7BA: mov     ecx, 0Dh
0x53E7BF: lea     edi, [esp+2C0h+var_40]
0x53E7C6: rep movsd
0x53E7C8: lea     ecx, [esp+2C0h+var_B4]
0x53E7CF: push    ecx
0x53E7D0: lea     ecx, [esp+2C4h+var_40]
0x53E7D7: call    sub_718A80
0x53E7DC: lea     edx, [esp+2C0h+var_74]
0x53E7E3: push    edx
0x53E7E4: lea     eax, [esp+2C4h+var_150]
0x53E7EB: push    eax
0x53E7EC: lea     ecx, [esp+2C8h+var_B4]
0x53E7F3: call    sub_53D7A0
0x53E7F8: mov     esi, eax
0x53E7FA: mov     ecx, 0Dh
0x53E7FF: lea     edi, [esp+2C0h+var_194]
0x53E806: rep movsd
0x53E808: lea     ecx, [esp+2C0h+var_1F8]
0x53E80F: push    ecx
0x53E810: lea     edx, [esp+2C4h+var_244]
0x53E817: push    edx
0x53E818: lea     ecx, [esp+2C8h+var_194]
0x53E81F: call    sub_7101F0
0x53E824: mov     ecx, [eax]
0x53E826: mov     [esp+2C0h+var_260], ecx
0x53E82A: mov     edx, [eax+4]
0x53E82D: mov     [esp+2C0h+var_25C], edx
0x53E831: mov     eax, [eax+8]
0x53E834: mov     [esp+2C0h+var_258], eax
0x53E838: cmp     [ebx+5Ch], bp
0x53E83C: jbe     short loc_53E845
0x53E83E: mov     ecx, [ebx+54h]
0x53E841: mov     eax, [ecx]
0x53E843: jmp     short loc_53E847
0x53E845: xor     eax, eax
0x53E847: fld     [esp+2C0h+var_278]
0x53E84B: mov     eax, [eax+0B4h]
0x53E851: mov     edx, [eax+0Ch]
0x53E854: fst     qword ptr [esp+2C0h+var_2A8]
0x53E858: fld     [esp+2C0h+var_168]
0x53E85F: mov     ecx, [eax+10h]
0x53E862: fld     [esp+2C0h+var_258]
0x53E866: mov     [esp+2C0h+var_1B0], edx
0x53E86D: mov     edx, [eax+14h]
0x53E870: fmulp   st(2), st
0x53E872: mov     eax, [eax+18h]
0x53E875: mov     [esp+2C0h+var_1A4], eax
0x53E87C: fadd    st(1), st
0x53E87E: mov     [esp+2C0h+var_1AC], ecx
0x53E885: mov     [esp+2C0h+var_1A8], edx
0x53E88C: fcom    st(1)
0x53E88E: fnstsw  ax
0x53E890: test    ah, 5
0x53E893: jp      short loc_53E899
0x53E895: fld     st
0x53E897: jmp     short loc_53E89B
0x53E899: fld     st(1)
0x53E89B: fld     [esp+2C0h+var_1B0]
0x53E8A2: fld     [esp+2C0h+var_1A4]
0x53E8A9: fld     st(1)
0x53E8AB: fsub    st, st(1)
0x53E8AD: fstp    [esp+2C0h+var_290]
0x53E8B1: mov     ecx, [esp+2C0h+var_290]
0x53E8B5: fld     [esp+2C0h+var_1AC]
0x53E8BC: mov     [esp+2C0h+var_238], ecx
0x53E8C3: fld     st
0x53E8C5: fsub    st, st(2)
0x53E8C7: fstp    [esp+2C0h+var_28C]
0x53E8CB: mov     edx, [esp+2C0h+var_28C]
0x53E8CF: fxch    st(3)
0x53E8D1: mov     dword ptr [esp+2C0h+var_234], edx
0x53E8D8: fstp    [esp+2C0h+var_288]
0x53E8DC: mov     eax, [esp+2C0h+var_288]
0x53E8E0: fxch    st(3)
0x53E8E2: mov     dword ptr [esp+2C0h+var_234+4], eax
0x53E8E9: fcom    st(4)
0x53E8EB: fnstsw  ax
0x53E8ED: test    ah, 41h
0x53E8F0: jnz     short loc_53E8F6
0x53E8F2: fstp    st(4)
0x53E8F4: jmp     short loc_53E8F8
0x53E8F6: fstp    st
0x53E8F8: fadd    st, st(2)
0x53E8FA: fstp    [esp+2C0h+var_290]
0x53E8FE: mov     ecx, [esp+2C0h+var_290]
0x53E902: mov     dword ptr [esp+2C0h+var_22C], ecx
0x53E909: faddp   st(1), st
0x53E90B: fstp    [esp+2C0h+var_28C]
0x53E90F: mov     edx, [esp+2C0h+var_28C]
0x53E913: mov     dword ptr [esp+2C0h+var_22C+4], edx
0x53E91A: fstp    [esp+2C0h+var_288]
0x53E91E: mov     eax, [esp+2C0h+var_288]
0x53E922: mov     [esp+2C0h+var_224], eax
0x53E929: movzx   eax, word ptr [esp+2C0h+var_254]
0x53E92E: mov     esi, [esp+2C0h+var_270]
0x53E932: mov     ebp, esi
0x53E934: imul    ebp, eax
0x53E937: mov     [esp+2C0h+var_254], eax
0x53E93B: xor     ecx, ecx
0x53E93D: mov     eax, ebp
0x53E93F: mov     edx, 0Ch
0x53E944: mul     edx
0x53E946: seto    cl
0x53E949: neg     ecx
0x53E94B: or      ecx, eax
0x53E94D: push    ecx; Size
0x53E94E: call    FormHeapAlloc
0x53E953: fld     [esp+2C4h+var_260]
0x53E957: fld     qword ptr [esp+2C4h+var_2A8]
0x53E95B: add     esp, 4
0x53E95E: test    esi, esi
0x53E960: fmul    st(1), st
0x53E962: fxch    st(1)
0x53E964: mov     dword ptr [esp+2C0h+var_2A0], eax
0x53E968: fstp    [esp+2C0h+var_2AC]
0x53E96C: fld     [esp+2C0h+var_25C]
0x53E970: fmul    st, st(1)
0x53E972: fstp    [esp+2C0h+var_298]
0x53E976: fmul    [esp+2C0h+var_258]
0x53E97A: fstp    [esp+2C0h+var_264]
0x53E97E: jle     loc_53EFB5
0x53E984: mov     eax, [esp+2C0h+var_254]
0x53E988: fld     [esp+2C0h+var_2AC]
0x53E98C: mov     ebx, dword ptr [esp+2C0h+var_2A0]
0x53E990: fstp    qword ptr [esp+2C0h+var_200]
0x53E997: fld     [esp+2C0h+var_298]
0x53E99B: mov     edi, [esp+2C0h+var_274]
0x53E99F: lea     eax, [eax+eax*2]
0x53E9A2: fstp    [esp+2C0h+var_20C+4]
0x53E9A9: fld     [esp+2C0h+var_264]
0x53E9AD: add     eax, eax
0x53E9AF: add     eax, eax
0x53E9B1: fstp    qword ptr [esp+2C0h+var_220]
0x53E9B8: mov     [esp+2C0h+var_1D0], eax
0x53E9BF: mov     eax, esi
0x53E9C1: mov     esi, [esp+2C0h+var_248]
0x53E9C5: mov     [esp+2C0h+var_298], eax
0x53E9C9: lea     esp, [esp+0]
0x53E9D0: test    edi, edi
0x53E9D2: jz      loc_53EBA4
0x53E9D8: fld     dword ptr [edi+58h]
0x53E9DB: fstp    [esp+2C0h+var_2A8]
0x53E9DF: call    _rand
0x53E9E4: mov     [esp+2C0h+var_2AC], eax
0x53E9E8: fild    [esp+2C0h+var_2AC]
0x53E9EC: fdiv    qword ptr ds:0A3D5A8h
0x53E9F2: fstp    [esp+2C0h+var_29C]
0x53E9F6: fld     dword ptr [edi+54h]
0x53E9F9: fstp    [esp+2C0h+var_294]
0x53E9FD: call    _rand
0x53EA02: mov     [esp+2C0h+var_2AC], eax
0x53EA06: fild    [esp+2C0h+var_2AC]
0x53EA0A: fdiv    qword ptr ds:0A3D5A8h
0x53EA10: fstp    [esp+2C0h+var_2AC]
0x53EA14: fld     [esp+2C0h+var_2AC]
0x53EA18: fld     qword ptr ds:0A2FAA0h
0x53EA1E: fsub    st(1), st
0x53EA20: fld     [esp+2C0h+var_294]
0x53EA24: fmulp   st(2), st
0x53EA26: fxch    st(1)
0x53EA28: fstp    [esp+2C0h+var_290]
0x53EA2C: mov     ecx, [esp+2C0h+var_290]
0x53EA30: mov     [esp+2C0h+var_284], ecx
0x53EA34: fsubr   [esp+2C0h+var_29C]
0x53EA38: lea     ecx, [esp+2C0h+var_284]
0x53EA3C: push    ecx
0x53EA3D: lea     ecx, [esp+2C4h+var_194]
0x53EA44: fmul    [esp+2C4h+var_2A8]
0x53EA48: fstp    [esp+2C4h+var_28C]
0x53EA4C: mov     edx, [esp+2C4h+var_28C]
0x53EA50: fldz
0x53EA52: mov     [esp+2C4h+var_280], edx
0x53EA56: fstp    [esp+2C4h+var_288]
0x53EA5A: lea     edx, [esp+2C4h+var_80]
0x53EA61: mov     eax, [esp+2C4h+var_288]
0x53EA65: fld     [esp+2C4h+var_164]
0x53EA6C: push    edx
0x53EA6D: fstp    [esp+2C8h+var_2A8]
0x53EA71: mov     [esp+2C8h+var_27C], eax
0x53EA75: call    sub_7101F0
0x53EA7A: fld     [esp+2C0h+var_2A8]
0x53EA7E: fld     dword ptr [eax]
0x53EA80: fmul    st, st(1)
0x53EA82: fstp    [esp+2C0h+var_2A8]
0x53EA86: fld     dword ptr [eax+4]
0x53EA89: fmul    st, st(1)
0x53EA8B: fstp    [esp+2C0h+var_29C]
0x53EA8F: fmul    dword ptr [eax+8]
0x53EA92: fstp    [esp+2C0h+var_294]
0x53EA96: fld     [esp+2C0h+var_2A8]
0x53EA9A: fadd    [esp+2C0h+var_170]
0x53EAA1: fstp    [esp+2C0h+var_2A8]
0x53EAA5: fld     [esp+2C0h+var_29C]
0x53EAA9: fadd    [esp+2C0h+var_16C]
0x53EAB0: fstp    [esp+2C0h+var_29C]
0x53EAB4: fld     [esp+2C0h+var_294]
0x53EAB8: fadd    [esp+2C0h+var_168]
0x53EABF: fstp    [esp+2C0h+var_294]
0x53EAC3: fld     [esp+2C0h+var_2A8]
0x53EAC7: fstp    [esp+2C0h+var_1E0]
0x53EACE: mov     eax, [esp+2C0h+var_1E0]
0x53EAD5: fld     [esp+2C0h+var_29C]
0x53EAD9: mov     [esp+2C0h+var_284], eax
0x53EADD: fstp    [esp+2C0h+var_1DC]
0x53EAE4: mov     ecx, [esp+2C0h+var_1DC]
0x53EAEB: fld     [esp+2C0h+var_294]
0x53EAEF: mov     [esp+2C0h+var_280], ecx
0x53EAF3: fstp    [esp+2C0h+var_1D8]
0x53EAFA: mov     edx, [esp+2C0h+var_1D8]
0x53EB01: mov     [esp+2C0h+var_27C], edx
0x53EB05: call    _rand
0x53EB0A: mov     [esp+2C0h+var_2A8], eax
0x53EB0E: fild    [esp+2C0h+var_2A8]
0x53EB12: fdiv    qword ptr ds:0A3D5A8h
0x53EB18: fstp    [esp+2C0h+var_2A8]
0x53EB1C: fld     [esp+2C0h+var_2A8]
0x53EB20: fld     qword ptr [esp+2C0h+var_200]
0x53EB27: fmul    st, st(1)
0x53EB29: fstp    [esp+2C0h+var_2A8]
0x53EB2D: fld     [esp+2C0h+var_20C+4]
0x53EB34: fmul    st, st(1)
0x53EB36: fstp    [esp+2C0h+var_29C]
0x53EB3A: fmul    qword ptr [esp+2C0h+var_220]
0x53EB41: fstp    [esp+2C0h+var_294]
0x53EB45: fld     [esp+2C0h+var_2A8]
0x53EB49: fadd    [esp+2C0h+var_284]
0x53EB4D: fstp    [esp+2C0h+var_2A8]
0x53EB51: fld     [esp+2C0h+var_29C]
0x53EB55: fadd    [esp+2C0h+var_280]
0x53EB59: fstp    [esp+2C0h+var_29C]
0x53EB5D: fld     [esp+2C0h+var_294]
0x53EB61: fadd    [esp+2C0h+var_27C]
0x53EB65: fstp    [esp+2C0h+var_294]
0x53EB69: fld     [esp+2C0h+var_2A8]
0x53EB6D: fstp    [esp+2C0h+var_1EC]
0x53EB74: mov     eax, [esp+2C0h+var_1EC]
0x53EB7B: fld     [esp+2C0h+var_29C]
0x53EB7F: fstp    [esp+2C0h+var_1E8]
0x53EB86: mov     ecx, [esp+2C0h+var_1E8]
0x53EB8D: fld     [esp+2C0h+var_294]
0x53EB91: fstp    [esp+2C0h+var_1E4]
0x53EB98: mov     edx, [esp+2C0h+var_1E4]
0x53EB9F: jmp     loc_53EF68
0x53EBA4: test    esi, esi
0x53EBA6: jz      loc_53ED21
0x53EBAC: fld     dword ptr [esi+54h]
0x53EBAF: fstp    [esp+2C0h+var_29C]
0x53EBB3: call    _rand
0x53EBB8: mov     [esp+2C0h+var_2A8], eax
0x53EBBC: fild    [esp+2C0h+var_2A8]
0x53EBC0: fdiv    qword ptr ds:0A3D5A8h
0x53EBC6: fstp    [esp+2C0h+var_2A8]
0x53EBCA: fld     [esp+2C0h+var_2A8]
0x53EBCE: fmul    [esp+2C0h+var_29C]
0x53EBD2: fstp    [esp+2C0h+var_29C]
0x53EBD6: call    _rand
0x53EBDB: mov     [esp+2C0h+var_2A8], eax
0x53EBDF: fild    [esp+2C0h+var_2A8]
0x53EBE3: fdiv    qword ptr ds:0A3D5A8h
0x53EBE9: fstp    [esp+2C0h+var_2A8]
0x53EBED: fld     [esp+2C0h+var_2A8]
0x53EBF1: fmul    dword ptr ds:0B3F9A0h
0x53EBF7: fstp    [esp+2C0h+var_2A8]
0x53EBFB: fld     [esp+2C0h+var_2A8]
0x53EBFF: fsincos
0x53EC01: fstp    dword ptr [esp+2C0h+var_20C]
0x53EC08: fstp    [esp+2C0h+var_250]
0x53EC0C: fld     [esp+2C0h+var_29C]
0x53EC10: fld     dword ptr [esp+2C0h+var_20C]
0x53EC17: fmul    st, st(1)
0x53EC19: fstp    [esp+2C0h+var_284]
0x53EC1D: fmul    [esp+2C0h+var_250]
0x53EC21: fstp    [esp+2C0h+var_280]
0x53EC25: call    _rand
0x53EC2A: mov     [esp+2C0h+var_2A8], eax
0x53EC2E: fild    [esp+2C0h+var_2A8]
0x53EC32: lea     eax, [esp+2C0h+var_284]
0x53EC36: push    eax
0x53EC37: fdiv    qword ptr ds:0A3D5A8h
0x53EC3D: lea     ecx, [esp+2C4h+var_160]
0x53EC44: push    ecx
0x53EC45: lea     ecx, [esp+2C8h+var_194]
0x53EC4C: fstp    [esp+2C8h+var_2A8]
0x53EC50: fld     dword ptr [esi+58h]
0x53EC53: fstp    [esp+2C8h+var_29C]
0x53EC57: fld     [esp+2C8h+var_2A8]
0x53EC5B: fsub    qword ptr ds:0A2FAA0h
0x53EC61: fmul    [esp+2C8h+var_29C]
0x53EC65: fstp    [esp+2C8h+var_27C]
0x53EC69: call    sub_53D4B0
0x53EC6E: mov     edx, [eax]
0x53EC70: mov     [esp+2C0h+var_284], edx
0x53EC74: mov     ecx, [eax+4]
0x53EC77: mov     [esp+2C0h+var_280], ecx
0x53EC7B: mov     edx, [eax+8]
0x53EC7E: mov     [esp+2C0h+var_27C], edx
0x53EC82: call    _rand
0x53EC87: mov     [esp+2C0h+var_2A8], eax
0x53EC8B: fild    [esp+2C0h+var_2A8]
0x53EC8F: fdiv    qword ptr ds:0A3D5A8h
0x53EC95: fstp    [esp+2C0h+var_2A8]
0x53EC99: fld     [esp+2C0h+var_2A8]
0x53EC9D: fld     qword ptr [esp+2C0h+var_200]
0x53ECA4: fmul    st, st(1)
0x53ECA6: fstp    [esp+2C0h+var_2A8]
0x53ECAA: fld     [esp+2C0h+var_20C+4]
0x53ECB1: fmul    st, st(1)
0x53ECB3: fstp    [esp+2C0h+var_29C]
0x53ECB7: fmul    qword ptr [esp+2C0h+var_220]
0x53ECBE: fstp    [esp+2C0h+var_294]
0x53ECC2: fld     [esp+2C0h+var_2A8]
0x53ECC6: fadd    [esp+2C0h+var_284]
0x53ECCA: fstp    [esp+2C0h+var_2A8]
0x53ECCE: fld     [esp+2C0h+var_29C]
0x53ECD2: fadd    [esp+2C0h+var_280]
0x53ECD6: fstp    [esp+2C0h+var_29C]
0x53ECDA: fld     [esp+2C0h+var_294]
0x53ECDE: fadd    [esp+2C0h+var_27C]
0x53ECE2: fstp    [esp+2C0h+var_294]
0x53ECE6: fld     [esp+2C0h+var_2A8]
0x53ECEA: fstp    [esp+2C0h+var_1A0]
0x53ECF1: mov     eax, [esp+2C0h+var_1A0]
0x53ECF8: fld     [esp+2C0h+var_29C]
0x53ECFC: fstp    [esp+2C0h+var_19C]
0x53ED03: mov     ecx, [esp+2C0h+var_19C]
0x53ED0A: fld     [esp+2C0h+var_294]
0x53ED0E: fstp    [esp+2C0h+var_198]
0x53ED15: mov     edx, [esp+2C0h+var_198]
0x53ED1C: jmp     loc_53EF68
0x53ED21: mov     eax, dword ptr [esp+2C0h+var_214+4]
0x53ED28: test    eax, eax
0x53ED2A: jz      loc_53EEBC
0x53ED30: fld     dword ptr [eax+54h]
0x53ED33: fstp    [esp+2C0h+var_29C]
0x53ED37: call    _rand
0x53ED3C: mov     [esp+2C0h+var_2A8], eax
0x53ED40: fild    [esp+2C0h+var_2A8]
0x53ED44: fdiv    qword ptr ds:0A3D5A8h
0x53ED4A: fstp    [esp+2C0h+var_2A8]
0x53ED4E: fld     [esp+2C0h+var_2A8]
0x53ED52: fmul    [esp+2C0h+var_29C]
0x53ED56: fstp    [esp+2C0h+var_294]
0x53ED5A: call    _rand
0x53ED5F: mov     [esp+2C0h+var_2A8], eax
0x53ED63: fild    [esp+2C0h+var_2A8]
0x53ED67: fdiv    qword ptr ds:0A3D5A8h
0x53ED6D: fstp    [esp+2C0h+var_2A8]
0x53ED71: fld     [esp+2C0h+var_2A8]
0x53ED75: fmul    dword ptr ds:0B3F9A0h
0x53ED7B: fstp    [esp+2C0h+var_29C]
0x53ED7F: call    _rand
0x53ED84: mov     [esp+2C0h+var_2A8], eax
0x53ED88: fild    [esp+2C0h+var_2A8]
0x53ED8C: fdiv    qword ptr ds:0A3D5A8h
0x53ED92: fstp    [esp+2C0h+var_2A8]
0x53ED96: fld     [esp+2C0h+var_2A8]
0x53ED9A: fmul    dword ptr ds:0B3F9A0h
0x53EDA0: fstp    [esp+2C0h+var_2A8]
0x53EDA4: fld     [esp+2C0h+var_29C]
0x53EDA8: fsincos
0x53EDAA: fstp    dword ptr [esp+2C0h+var_214]
0x53EDB1: fstp    [esp+2C0h+var_278]
0x53EDB5: fld     [esp+2C0h+var_2A8]
0x53EDB9: fsincos
0x53EDBB: fstp    [esp+2C0h+var_264]
0x53EDBF: fstp    dword ptr [esp+2C0h+var_21C+4]
0x53EDC6: fld     [esp+2C0h+var_294]
0x53EDCA: fld     dword ptr [esp+2C0h+var_21C+4]
0x53EDD1: lea     eax, [esp+2C0h+var_284]
0x53EDD5: fmul    st, st(1)
0x53EDD7: push    eax
0x53EDD8: fld     dword ptr [esp+2C4h+var_214]
0x53EDDF: lea     ecx, [esp+2C4h+var_1B0]
0x53EDE6: push    ecx
0x53EDE7: fmul    st, st(1)
0x53EDE9: lea     ecx, [esp+2C8h+var_194]
0x53EDF0: fstp    [esp+2C8h+var_284]
0x53EDF4: fmul    [esp+2C8h+var_278]
0x53EDF8: fstp    [esp+2C8h+var_280]
0x53EDFC: fmul    [esp+2C8h+var_264]
0x53EE00: fstp    [esp+2C8h+var_27C]
0x53EE04: call    sub_53D4B0
0x53EE09: mov     edx, [eax]
0x53EE0B: mov     [esp+2C0h+var_284], edx
0x53EE0F: mov     ecx, [eax+4]
0x53EE12: mov     [esp+2C0h+var_280], ecx
0x53EE16: mov     edx, [eax+8]
0x53EE19: mov     [esp+2C0h+var_27C], edx
0x53EE1D: call    _rand
0x53EE22: mov     [esp+2C0h+var_2A8], eax
0x53EE26: fild    [esp+2C0h+var_2A8]
0x53EE2A: fdiv    qword ptr ds:0A3D5A8h
0x53EE30: fstp    [esp+2C0h+var_2A8]
0x53EE34: fld     [esp+2C0h+var_2A8]
0x53EE38: fld     qword ptr [esp+2C0h+var_200]
0x53EE3F: fmul    st, st(1)
0x53EE41: fstp    [esp+2C0h+var_2A8]
0x53EE45: fld     [esp+2C0h+var_20C+4]
0x53EE4C: fmul    st, st(1)
0x53EE4E: fstp    [esp+2C0h+var_29C]
0x53EE52: fmul    qword ptr [esp+2C0h+var_220]
0x53EE59: fstp    [esp+2C0h+var_294]
0x53EE5D: fld     [esp+2C0h+var_2A8]
0x53EE61: fadd    [esp+2C0h+var_284]
0x53EE65: fstp    [esp+2C0h+var_2A8]
0x53EE69: fld     [esp+2C0h+var_29C]
0x53EE6D: fadd    [esp+2C0h+var_280]
0x53EE71: fstp    [esp+2C0h+var_29C]
0x53EE75: fld     [esp+2C0h+var_294]
0x53EE79: fadd    [esp+2C0h+var_27C]
0x53EE7D: fstp    [esp+2C0h+var_294]
0x53EE81: fld     [esp+2C0h+var_2A8]
0x53EE85: fstp    [esp+2C0h+var_1BC]
0x53EE8C: mov     eax, [esp+2C0h+var_1BC]
0x53EE93: fld     [esp+2C0h+var_29C]
0x53EE97: fstp    [esp+2C0h+var_1B8]
0x53EE9E: mov     ecx, [esp+2C0h+var_1B8]
0x53EEA5: fld     [esp+2C0h+var_294]
0x53EEA9: fstp    [esp+2C0h+var_1B4]
0x53EEB0: mov     edx, [esp+2C0h+var_1B4]
0x53EEB7: jmp     loc_53EF68
0x53EEBC: mov     ecx, [esp+2C0h+var_26C]
0x53EEC0: mov     eax, [ecx]
0x53EEC2: mov     eax, [eax+60h]
0x53EEC5: lea     edx, [esp+2C0h+var_1C8]
0x53EECC: push    edx
0x53EECD: lea     edx, [esp+2C4h+var_284]
0x53EED1: push    edx
0x53EED2: call    eax
0x53EED4: call    _rand
0x53EED9: mov     [esp+2C0h+var_2A8], eax
0x53EEDD: fild    [esp+2C0h+var_2A8]
0x53EEE1: fdiv    qword ptr ds:0A3D5A8h
0x53EEE7: fstp    [esp+2C0h+var_2A8]
0x53EEEB: fld     [esp+2C0h+var_2A8]
0x53EEEF: fld     qword ptr [esp+2C0h+var_200]
0x53EEF6: fmul    st, st(1)
0x53EEF8: fstp    [esp+2C0h+var_2A8]
0x53EEFC: fld     [esp+2C0h+var_20C+4]
0x53EF03: fmul    st, st(1)
0x53EF05: fstp    [esp+2C0h+var_29C]
0x53EF09: fmul    qword ptr [esp+2C0h+var_220]
0x53EF10: fstp    [esp+2C0h+var_294]
0x53EF14: fld     [esp+2C0h+var_2A8]
0x53EF18: fadd    [esp+2C0h+var_284]
0x53EF1C: fstp    [esp+2C0h+var_2A8]
0x53EF20: fld     [esp+2C0h+var_29C]
0x53EF24: fadd    [esp+2C0h+var_280]
0x53EF28: fstp    [esp+2C0h+var_29C]
0x53EF2C: fld     [esp+2C0h+var_294]
0x53EF30: fadd    [esp+2C0h+var_27C]
0x53EF34: fstp    [esp+2C0h+var_294]
0x53EF38: fld     [esp+2C0h+var_2A8]
0x53EF3C: fstp    [esp+2C0h+var_244]
0x53EF40: mov     eax, [esp+2C0h+var_244]
0x53EF44: fld     [esp+2C0h+var_29C]
0x53EF48: fstp    [esp+2C0h+var_240]
0x53EF4F: mov     ecx, [esp+2C0h+var_240]
0x53EF56: fld     [esp+2C0h+var_294]
0x53EF5A: fstp    [esp+2C0h+var_23C]
0x53EF61: mov     edx, [esp+2C0h+var_23C]
0x53EF68: cmp     [esp+2C0h+var_254], 0
0x53EF6D: mov     [esp+2C0h+var_27C], edx
0x53EF71: mov     [esp+2C0h+var_280], ecx
0x53EF75: mov     [esp+2C0h+var_284], eax
0x53EF79: jle     short loc_53EF9F
0x53EF7B: mov     [ebx], eax
0x53EF7D: mov     eax, [esp+2C0h+var_254]
0x53EF81: mov     [ebx+4], ecx
0x53EF84: lea     ecx, [eax+eax*2]
0x53EF87: lea     ecx, ds:0FFFFFFF4h[ecx*4]
0x53EF8E: shr     ecx, 2
0x53EF91: mov     esi, ebx
0x53EF93: lea     edi, [ebx+0Ch]
0x53EF96: mov     [ebx+8], edx
0x53EF99: rep movsd
0x53EF9B: mov     esi, [esp+2C0h+var_248]
0x53EF9F: add     ebx, [esp+2C0h+var_1D0]
0x53EFA6: sub     [esp+2C0h+var_298], 1
0x53EFAB: mov     edi, [esp+2C0h+var_274]
0x53EFAF: jnz     loc_53E9D0
0x53EFB5: push    2Ch ; ','; Size
0x53EFB7: call    FormHeapAlloc
0x53EFBC: add     esp, 4
0x53EFBF: mov     [esp+2C0h+var_2A8], eax
0x53EFC3: test    eax, eax
0x53EFC5: mov     [esp+2C0h+var_4], 4
0x53EFD0: jz      short loc_53EFE2
0x53EFD2: push    1
0x53EFD4: push    1
0x53EFD6: push    ebp
0x53EFD7: mov     ecx, eax
0x53EFD9: call    sub_53D930
0x53EFDE: mov     esi, eax
0x53EFE0: jmp     short loc_53EFE4
0x53EFE2: xor     esi, esi
0x53EFE4: or      ebx, 0FFFFFFFFh
0x53EFE7: push    1
0x53EFE9: mov     ecx, esi
0x53EFEB: mov     [esp+2C4h+var_4], ebx
0x53EFF2: call    sub_7263B0
0x53EFF7: mov     edi, dword ptr [esp+2C0h+var_2A0]
0x53EFFB: lea     ecx, [ebp+ebp*2+0]
0x53EFFF: add     ecx, ecx
0x53F001: push    1; char
0x53F003: add     ecx, ecx
0x53F005: push    ecx; Src
0x53F006: push    edi; char
0x53F007: push    0; int
0x53F009: mov     ecx, esi
0x53F00B: call    sub_7260B0
0x53F010: push    edi
0x53F011: call    FormHeapFree
0x53F016: add     esp, 4
0x53F019: push    0Ch
0x53F01B: push    0Ch
0x53F01D: push    ebp
0x53F01E: push    3
0x53F020: push    0
0x53F022: push    0
0x53F024: push    0
0x53F026: mov     ecx, esi
0x53F028: call    sub_7262A0
0x53F02D: mov     edi, [esp+2C0h+var_24C]
0x53F031: mov     ecx, [edi+0B4h]
0x53F037: push    esi
0x53F038: call    sub_6C61E0
0x53F03D: fld     dword ptr [esp+2C0h+var_22C]
0x53F044: mov     eax, [edi+0B4h]
0x53F04A: fsub    [esp+2C0h+var_238]
0x53F051: mov     ecx, [eax+10h]
0x53F054: mov     edx, [eax+0Ch]
0x53F057: fmul    qword ptr ds:0A2FAA0h
0x53F05D: mov     ebp, [esp+2C0h+arg_0]
0x53F064: mov     [esp+2C0h+var_15C], ecx
0x53F06B: mov     ecx, [eax+18h]
0x53F06E: mov     [esp+2C0h+var_154], ecx
0x53F075: fstp    [esp+2C0h+var_154]
0x53F07C: fldz
0x53F07E: mov     [esp+2C0h+var_160], edx
0x53F085: mov     edx, [eax+14h]
0x53F088: fst     [esp+2C0h+var_244]
0x53F08C: mov     ecx, [esp+2C0h+var_244]
0x53F090: fst     [esp+2C0h+var_240]
0x53F097: mov     [esp+2C0h+var_158], edx
0x53F09E: fstp    [esp+2C0h+var_23C]
0x53F0A5: mov     edx, [esp+2C0h+var_240]
0x53F0AC: mov     esi, [esp+2C0h+var_23C]
0x53F0B3: mov     [eax+0Ch], ecx
0x53F0B6: mov     [eax+10h], edx
0x53F0B9: mov     edx, [esp+2C0h+var_154]
0x53F0C0: mov     [eax+14h], esi
0x53F0C3: mov     [eax+18h], edx
0x53F0C6: mov     ecx, [ebp+1Ch]
0x53F0C9: test    ecx, ecx
0x53F0CB: mov     esi, 1
0x53F0D0: jz      short loc_53F0F4
0x53F0D2: mov     eax, [ecx]
0x53F0D4: mov     edx, [eax+4]
0x53F0D7: call    edx
0x53F0D9: cmp     eax, offset dword_B3FD4C
0x53F0DE: setz    al
0x53F0E1: test    al, al
0x53F0E3: jz      short loc_53F0F4
0x53F0E5: mov     ebp, [ebp+1Ch]
0x53F0E8: movzx   eax, byte ptr [ebp+0DCh]
0x53F0EF: and     eax, 7
0x53F0F2: mov     esi, eax
0x53F0F4: xor     ecx, ecx
0x53F0F6: cmp     [esp+2C0h+arg_8], cl
0x53F0FD: push    0ACh ; '¬'; Size
0x53F102: setnz   cl
0x53F105: mov     ebp, ecx
0x53F107: call    FormHeapAlloc
0x53F10C: add     esp, 4
0x53F10F: mov     [esp+2C0h+var_2A8], eax
0x53F113: test    eax, eax
0x53F115: mov     [esp+2C0h+var_4], 5
0x53F120: jz      short loc_53F152
0x53F122: fld     [esp+2C0h+var_1D4]
0x53F129: push    esi; int
0x53F12A: push    ebp; int
0x53F12B: lea     edx, [esp+2C8h+var_22C]
0x53F132: push    edx; int
0x53F133: lea     ecx, [esp+2CCh+var_238]
0x53F13A: push    ecx; int
0x53F13B: lea     edx, [esp+2D0h+var_260]
0x53F13F: push    edx; int
0x53F140: push    ecx
0x53F141: mov     ecx, [esp+2D8h+var_270]
0x53F145: fstp    [esp+2D8h+var_2D8]; float
0x53F148: push    ecx; int
0x53F149: mov     ecx, eax
0x53F14B: call    sub_7EFA80
0x53F150: jmp     short loc_53F154
0x53F152: xor     eax, eax
0x53F154: push    eax; a2
0x53F155: mov     ecx, edi; this
0x53F157: mov     [esp+2C4h+var_4], ebx
0x53F15E: call    sub_405680
0x53F163: mov     esi, [esp+2C0h+var_1CC]
0x53F16A: push    6
0x53F16C: mov     ecx, esi
0x53F16E: call    NiNode_GetNiPropertyByID
0x53F173: test    eax, eax
0x53F175: jz      short loc_53F188
0x53F177: push    6
0x53F179: mov     ecx, esi
0x53F17B: call    NiNode_GetNiPropertyByID
0x53F180: push    eax; a2
0x53F181: mov     ecx, edi; this
0x53F183: call    sub_405680
0x53F188: push    0
0x53F18A: mov     ecx, esi
0x53F18C: call    NiNode_GetNiPropertyByID
0x53F191: test    eax, eax
0x53F193: jz      short loc_53F1A6
0x53F195: push    0
0x53F197: mov     ecx, esi
0x53F199: call    NiNode_GetNiPropertyByID
0x53F19E: push    eax; a2
0x53F19F: mov     ecx, edi; this
0x53F1A1: call    sub_405680
0x53F1A6: push    1
0x53F1A8: push    0
0x53F1AA: push    1Bh
0x53F1AC: push    edi
0x53F1AD: call    sub_7B8940
0x53F1B2: add     esp, 10h
0x53F1B5: test    al, al
0x53F1B7: jz      short loc_53F1BD
0x53F1B9: mov     eax, edi
0x53F1BB: jmp     short loc_53F1C9
0x53F1BD: mov     edx, [edi]
0x53F1BF: mov     eax, [edx]
0x53F1C1: push    1
0x53F1C3: mov     ecx, edi
0x53F1C5: call    eax
0x53F1C7: xor     eax, eax
0x53F1C9: mov     ecx, dword ptr [esp+2C0h+var_C]
0x53F1D0: mov     large fs:0, ecx
0x53F1D7: pop     ecx
0x53F1D8: pop     edi
0x53F1D9: pop     esi
0x53F1DA: pop     ebp
0x53F1DB: pop     ebx
0x53F1DC: add     esp, 2ACh
0x53F1E2: retn    0Ch
