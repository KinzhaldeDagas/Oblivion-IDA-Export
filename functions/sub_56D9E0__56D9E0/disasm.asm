0x56D9E0: push    ebp
0x56D9E1: mov     ebp, esp
0x56D9E3: and     esp, 0FFFFFFF8h
0x56D9E6: push    0FFFFFFFFh
0x56D9E8: push    offset SEH_56D9E0
0x56D9ED: mov     eax, large fs:0
0x56D9F3: push    eax
0x56D9F4: sub     esp, 214h
0x56D9FA: push    ebx
0x56D9FB: push    ebp
0x56D9FC: push    esi
0x56D9FD: push    edi
0x56D9FE: mov     eax, ds:0B30AACh
0x56DA03: xor     eax, esp
0x56DA05: push    eax
0x56DA06: lea     eax, [esp+234h+var_C]
0x56DA0D: mov     large fs:0, eax
0x56DA13: mov     ebx, ecx
0x56DA15: mov     [esp+234h+var_18C], ebx
0x56DA1C: mov     eax, [ebx+2Ch]
0x56DA1F: mov     ebp, [eax+0B8h]
0x56DA25: mov     ecx, [ebp+0Ch]
0x56DA28: mov     ecx, [ecx+8]
0x56DA2B: mov     [esp+234h+var_21C], ecx
0x56DA2F: lea     esi, [eax+64h]
0x56DA32: mov     ecx, 9
0x56DA37: lea     edi, [esp+234h+var_E8]
0x56DA3E: lea     edx, [esp+234h+var_34]
0x56DA45: rep movsd
0x56DA47: push    edx
0x56DA48: lea     ecx, [esp+238h+var_E8]
0x56DA4F: call    sub_7103C0
0x56DA54: lea     eax, [esp+234h+var_128]
0x56DA5B: push    eax
0x56DA5C: lea     esi, [ebx+40h]
0x56DA5F: push    esi
0x56DA60: lea     ecx, [esp+23Ch+var_E8]
0x56DA67: push    1
0x56DA69: push    ecx
0x56DA6A: call    sub_7107A0
0x56DA6F: fld     dword ptr [ebx+50h]
0x56DA72: add     esp, 0Ch
0x56DA75: lea     ecx, [esp+238h+var_C4]
0x56DA7C: fstp    [esp+238h+var_238]; float
0x56DA7F: call    NiMatrix33_InitRotationTransform
0x56DA84: mov     edx, [esi]
0x56DA86: mov     ecx, [esi+4]
0x56DA89: sub     esp, 0Ch
0x56DA8C: mov     eax, esp
0x56DA8E: mov     [eax], edx
0x56DA90: mov     edx, [esi+8]
0x56DA93: mov     [eax+4], ecx
0x56DA96: mov     [eax+8], edx
0x56DA99: lea     eax, [esp+240h+var_7C]
0x56DAA0: push    eax
0x56DAA1: call    sub_6F9290
0x56DAA6: add     esp, 10h
0x56DAA9: push    eax
0x56DAAA: lea     ecx, [esp+238h+var_58]
0x56DAB1: push    ecx
0x56DAB2: lea     ecx, [esp+23Ch+var_C4]
0x56DAB9: call    NiMAtrix33_Multiply
0x56DABE: mov     esi, eax
0x56DAC0: mov     eax, [ebx+2Ch]
0x56DAC3: mov     ecx, 9
0x56DAC8: lea     edi, [esp+234h+var_A0]
0x56DACF: rep movsd
0x56DAD1: lea     esi, [eax+64h]
0x56DAD4: mov     ecx, 0Dh
0x56DAD9: lea     edi, [esp+234h+var_11C]
0x56DAE0: rep movsd
0x56DAE2: fld     [esp+234h+var_F8]
0x56DAE9: fsub    dword ptr [ebx+34h]
0x56DAEC: fstp    [esp+234h+var_F8]
0x56DAF3: fld     [esp+234h+var_F4]
0x56DAFA: fsub    dword ptr [ebx+38h]
0x56DAFD: fstp    [esp+234h+var_F4]
0x56DB04: fld     [esp+234h+var_F0]
0x56DB0B: fsub    dword ptr [ebx+3Ch]
0x56DB0E: xor     esi, esi
0x56DB10: mov     [esp+234h+var_198], esi
0x56DB17: mov     [esp+234h+var_194], esi
0x56DB1E: fstp    [esp+234h+var_F0]
0x56DB25: mov     [esp+234h+var_190], 0
0x56DB2D: mov     [esp+234h+var_1A4], esi
0x56DB34: mov     [esp+234h+var_1A0], esi
0x56DB3B: mov     [esp+234h+var_19C], 0
0x56DB43: mov     [esp+234h+var_134], esi
0x56DB4A: mov     [esp+234h+var_130], esi
0x56DB51: mov     [esp+234h+var_12C], 0
0x56DB59: mov     [esp+234h+var_170], esi
0x56DB60: mov     [esp+234h+var_16C], esi
0x56DB67: mov     [esp+234h+var_168], 0
0x56DB6F: mov     [esp+234h+var_164], esi
0x56DB76: mov     [esp+234h+var_160], esi
0x56DB7D: mov     [esp+234h+var_15C], 0
0x56DB85: mov     ecx, [eax+0B4h]
0x56DB8B: mov     ecx, [ecx+34h]
0x56DB8E: movzx   ecx, word ptr [ecx+0Ch]
0x56DB92: movzx   edx, cx
0x56DB95: mov     eax, [eax+0B4h]
0x56DB9B: push    esi
0x56DB9C: mov     ecx, eax
0x56DB9E: mov     [esp+238h+var_208], edx
0x56DBA2: call    sub_728AB0
0x56DBA7: mov     [esp+234h+var_1B9], al
0x56DBAB: mov     eax, [ebx+2Ch]
0x56DBAE: mov     eax, [eax+0B4h]
0x56DBB4: lea     ecx, [esp+234h+var_198]
0x56DBBB: push    ecx
0x56DBBC: mov     ecx, eax
0x56DBBE: call    sub_728B60
0x56DBC3: mov     eax, [ebx+2Ch]
0x56DBC6: mov     eax, [eax+0B4h]
0x56DBCC: lea     edx, [esp+234h+var_1A4]
0x56DBD3: push    edx
0x56DBD4: mov     ecx, eax
0x56DBD6: call    sub_728D00
0x56DBDB: mov     eax, [ebx+2Ch]
0x56DBDE: mov     eax, [eax+0B4h]
0x56DBE4: lea     ecx, [esp+234h+var_134]
0x56DBEB: push    ecx
0x56DBEC: push    esi
0x56DBED: mov     ecx, eax
0x56DBEF: call    sub_728E70
0x56DBF4: mov     eax, [ebx+2Ch]
0x56DBF7: mov     eax, [eax+0B4h]
0x56DBFD: lea     edx, [esp+234h+var_170]
0x56DC04: push    edx
0x56DC05: mov     ecx, eax
0x56DC07: call    sub_728C00
0x56DC0C: mov     eax, [ebx+2Ch]
0x56DC0F: mov     eax, [eax+0B4h]
0x56DC15: lea     ecx, [esp+234h+var_164]
0x56DC1C: push    ecx
0x56DC1D: mov     ecx, eax
0x56DC1F: call    sub_728C80
0x56DC24: mov     eax, [ebp+0Ch]
0x56DC27: mov     eax, [eax+0Ch]
0x56DC2A: xor     ecx, ecx
0x56DC2C: cmp     [esp+234h+var_21C], esi
0x56DC30: mov     [esp+234h+var_220], esi
0x56DC34: mov     [esp+234h+var_1C4], eax
0x56DC38: jle     short loc_56DC6E
0x56DC3A: mov     edi, [esp+234h+var_21C]
0x56DC3E: add     eax, 22h ; '"'
0x56DC41: mov     dx, si
0x56DC44: add     dx, [eax-4]
0x56DC48: cmp     [eax], si
0x56DC4B: mov     word ptr [esp+234h+var_220], dx
0x56DC50: setnbe  cl
0x56DC53: test    cl, cl
0x56DC55: mov     ecx, [esp+234h+var_220]
0x56DC59: jz      short loc_56DC60
0x56DC5B: add     ecx, 2
0x56DC5E: jmp     short loc_56DC63
0x56DC60: lea     ecx, [ecx+ecx*2]
0x56DC63: add     eax, 2Ch ; ','
0x56DC66: sub     edi, 1
0x56DC69: movzx   ecx, cx
0x56DC6C: jnz     short loc_56DC44
0x56DC6E: movzx   eax, cx
0x56DC71: xor     ecx, ecx
0x56DC73: lea     eax, [eax+eax*2]
0x56DC76: mov     edx, 2
0x56DC7B: mul     edx
0x56DC7D: seto    cl
0x56DC80: neg     ecx
0x56DC82: or      ecx, eax
0x56DC84: push    ecx; Size
0x56DC85: call    FormHeapAlloc
0x56DC8A: mov     esi, [esp+238h+var_208]
0x56DC8E: mov     [esp+238h+Src], eax
0x56DC95: xor     ecx, ecx
0x56DC97: mov     eax, esi
0x56DC99: mov     edx, 4
0x56DC9E: mul     edx
0x56DCA0: seto    cl
0x56DCA3: neg     ecx
0x56DCA5: or      ecx, eax
0x56DCA7: push    ecx; Size
0x56DCA8: call    FormHeapAlloc
0x56DCAD: lea     ecx, ds:0[esi*4]
0x56DCB4: push    ecx
0x56DCB5: push    0FFFFFFFFh
0x56DCB7: xor     ebx, ebx
0x56DCB9: push    eax
0x56DCBA: mov     [esp+248h+var_1A8], eax
0x56DCC1: mov     [esp+248h+var_1C0], ebx
0x56DCC8: call    __memset
0x56DCCD: xor     ecx, ecx
0x56DCCF: mov     eax, esi
0x56DCD1: mov     edx, 0Ch
0x56DCD6: mul     edx
0x56DCD8: seto    cl
0x56DCDB: neg     ecx
0x56DCDD: or      ecx, eax
0x56DCDF: push    ecx; Size
0x56DCE0: call    FormHeapAlloc
0x56DCE5: mov     [esp+24Ch+var_1B0], eax
0x56DCEC: xor     ecx, ecx
0x56DCEE: mov     eax, esi
0x56DCF0: mov     edx, 10h
0x56DCF5: mul     edx
0x56DCF7: seto    cl
0x56DCFA: neg     ecx
0x56DCFC: or      ecx, eax
0x56DCFE: push    ecx; Size
0x56DCFF: call    FormHeapAlloc
0x56DD04: fldz
0x56DD06: add     esp, 1Ch
0x56DD09: test    eax, eax
0x56DD0B: jz      short loc_56DD31
0x56DD0D: mov     edx, esi
0x56DD0F: add     edx, 0FFFFFFFFh
0x56DD12: js      short loc_56DD2B
0x56DD14: lea     ecx, [eax+8]
0x56DD17: fst     dword ptr [ecx+4]
0x56DD1A: add     ecx, 10h
0x56DD1D: sub     edx, 1
0x56DD20: fst     dword ptr [ecx-10h]
0x56DD23: fst     dword ptr [ecx-14h]
0x56DD26: fst     dword ptr [ecx-18h]
0x56DD29: jns     short loc_56DD17
0x56DD2B: mov     [esp+234h+var_218], eax
0x56DD2F: jmp     short loc_56DD35
0x56DD31: mov     [esp+234h+var_218], ebx
0x56DD35: mov     eax, [ebp+8]
0x56DD38: fstp    st
0x56DD3A: cmp     [eax+44h], ebx
0x56DD3D: jz      loc_56ECB8
0x56DD43: xor     ecx, ecx
0x56DD45: mov     eax, esi
0x56DD47: mov     edx, 0Ch
0x56DD4C: mul     edx
0x56DD4E: seto    cl
0x56DD51: neg     ecx
0x56DD53: or      ecx, eax
0x56DD55: push    ecx; Size
0x56DD56: call    FormHeapAlloc
0x56DD5B: mov     [esp+238h+var_188], eax
0x56DD62: xor     ecx, ecx
0x56DD64: mov     eax, esi
0x56DD66: mov     edx, 0Ch
0x56DD6B: mul     edx
0x56DD6D: seto    cl
0x56DD70: neg     ecx
0x56DD72: or      ecx, eax
0x56DD74: push    ecx; Size
0x56DD75: call    FormHeapAlloc
0x56DD7A: add     esp, 8
0x56DD7D: push    0Ch
0x56DD7F: push    eax
0x56DD80: mov     [esp+23Ch+var_174], eax
0x56DD87: mov     eax, [esp+23Ch+var_188]
0x56DD8E: push    eax
0x56DD8F: mov     ecx, esi
0x56DD91: push    ecx
0x56DD92: lea     edx, [esp+244h+var_1A4]
0x56DD99: push    edx
0x56DD9A: lea     eax, [esp+248h+var_164]
0x56DDA1: push    eax
0x56DDA2: lea     ecx, [esp+24Ch+var_170]
0x56DDA9: push    ecx
0x56DDAA: lea     edx, [esp+250h+var_198]
0x56DDB1: push    edx
0x56DDB2: mov     ecx, ebp
0x56DDB4: call    nullsub_4
0x56DDB9: mov     eax, [ebp+8]
0x56DDBC: mov     ecx, [eax+44h]
0x56DDBF: mov     esi, [eax+40h]
0x56DDC2: mov     [esp+234h+var_200], ecx
0x56DDC6: xor     ecx, ecx
0x56DDC8: mov     eax, esi
0x56DDCA: mov     edx, 4Ch ; 'L'
0x56DDCF: mul     edx
0x56DDD1: seto    cl
0x56DDD4: mov     [esp+234h+var_1B4], esi
0x56DDDB: neg     ecx
0x56DDDD: or      ecx, eax
0x56DDDF: push    ecx; Size
0x56DDE0: call    FormHeapAlloc
0x56DDE5: mov     esi, eax
0x56DDE7: add     esp, 4
0x56DDEA: mov     [esp+234h+Dst], esi
0x56DDEE: xor     eax, eax
0x56DDF0: cmp     esi, eax
0x56DDF2: mov     [esp+234h+var_4], eax
0x56DDF9: jz      short loc_56DE27
0x56DDFB: mov     ebp, [esp+234h+var_1B4]
0x56DE02: add     ebp, 0FFFFFFFFh
0x56DE05: mov     edi, esi
0x56DE07: js      short loc_56DE1F
0x56DE09: lea     esp, [esp+0]
0x56DE10: mov     ecx, edi
0x56DE12: call    sub_72EF90
0x56DE17: add     edi, 4Ch ; 'L'
0x56DE1A: sub     ebp, 1
0x56DE1D: jns     short loc_56DE10
0x56DE1F: mov     [esp+234h+var_1CC], esi
0x56DE23: xor     eax, eax
0x56DE25: jmp     short loc_56DE2B
0x56DE27: mov     [esp+234h+var_1CC], eax
0x56DE2B: cmp     [esp+234h+var_1B4], eax
0x56DE32: mov     [esp+234h+var_4], 0FFFFFFFFh
0x56DE3D: mov     [esp+234h+var_214], eax
0x56DE41: jle     loc_56DF44
0x56DE47: jmp     short loc_56DE50
0x56DE49: align 10h
0x56DE50: mov     edx, [esp+234h+var_214]
0x56DE54: mov     ecx, [esp+234h+var_1CC]
0x56DE58: mov     eax, edx
0x56DE5A: imul    eax, 4Ch ; 'L'
0x56DE5D: lea     edi, [eax+ecx]
0x56DE60: mov     ecx, [esp+234h+var_200]
0x56DE64: lea     esi, [eax+ecx]
0x56DE67: mov     ecx, 0Dh
0x56DE6C: mov     [esp+234h+var_1C8], edi
0x56DE70: rep movsd
0x56DE72: xor     ecx, ecx
0x56DE74: test    edx, edx
0x56DE76: mov     edx, 8
0x56DE7B: jnz     short loc_56DED1
0x56DE7D: mov     esi, [esp+234h+var_208]
0x56DE81: add     esi, esi
0x56DE83: add     esi, esi
0x56DE85: mov     eax, esi
0x56DE87: mul     edx
0x56DE89: seto    cl
0x56DE8C: neg     ecx
0x56DE8E: or      ecx, eax
0x56DE90: push    ecx; Size
0x56DE91: call    FormHeapAlloc
0x56DE96: mov     ebp, eax
0x56DE98: add     esp, 4
0x56DE9B: mov     [esp+234h+Dst], ebp
0x56DE9F: test    ebp, ebp
0x56DEA1: mov     [esp+234h+var_4], 1
0x56DEAC: jz      short loc_56DF18
0x56DEAE: mov     edi, [esp+234h+var_208]
0x56DEB2: add     edi, edi
0x56DEB4: add     edi, edi
0x56DEB6: add     edi, 0FFFFFFFFh
0x56DEB9: mov     esi, ebp
0x56DEBB: js      short loc_56DF1A
0x56DEBD: lea     ecx, [ecx+0]
0x56DEC0: mov     ecx, esi
0x56DEC2: call    sub_72EFA0
0x56DEC7: add     esi, 8
0x56DECA: sub     edi, 1
0x56DECD: jns     short loc_56DEC0
0x56DECF: jmp     short loc_56DF1A
0x56DED1: mov     eax, [esp+234h+var_208]
0x56DED5: mul     edx
0x56DED7: seto    cl
0x56DEDA: neg     ecx
0x56DEDC: or      ecx, eax
0x56DEDE: push    ecx; Size
0x56DEDF: call    FormHeapAlloc
0x56DEE4: mov     ebp, eax
0x56DEE6: add     esp, 4
0x56DEE9: mov     [esp+234h+Dst], ebp
0x56DEED: test    ebp, ebp
0x56DEEF: mov     [esp+234h+var_4], 2
0x56DEFA: jz      short loc_56DF18
0x56DEFC: mov     edi, [esp+234h+var_208]
0x56DF00: add     edi, 0FFFFFFFFh
0x56DF03: mov     esi, ebp
0x56DF05: js      short loc_56DF1A
0x56DF07: mov     ecx, esi
0x56DF09: call    sub_72EFA0
0x56DF0E: add     esi, 8
0x56DF11: sub     edi, 1
0x56DF14: jns     short loc_56DF07
0x56DF16: jmp     short loc_56DF1A
0x56DF18: xor     ebp, ebp
0x56DF1A: mov     eax, [esp+234h+var_1C8]
0x56DF1E: mov     [eax+44h], ebp
0x56DF21: mov     eax, [esp+234h+var_214]
0x56DF25: add     eax, 1
0x56DF28: cmp     eax, [esp+234h+var_1B4]
0x56DF2F: mov     [esp+234h+var_4], 0FFFFFFFFh
0x56DF3A: mov     [esp+234h+var_214], eax
0x56DF3E: jl      loc_56DE50
0x56DF44: cmp     [esp+234h+var_208], 0
0x56DF49: mov     [esp+234h+var_220], 0
0x56DF51: jle     loc_56E1E8
0x56DF57: fld     [esp+234h+var_124]
0x56DF5E: mov     ebp, [esp+234h+var_1B0]
0x56DF65: mov     esi, [esp+234h+var_218]
0x56DF69: fstp    qword ptr [esp+234h+var_180]
0x56DF70: fld     [esp+234h+var_128]
0x56DF77: mov     edi, [esp+234h+var_174]
0x56DF7E: mov     eax, [esp+234h+var_188]
0x56DF85: fstp    [esp+234h+var_1E0]
0x56DF89: fld     [esp+234h+var_120]
0x56DF90: add     ebp, 8
0x56DF93: add     esi, 8
0x56DF96: fstp    [esp+234h+var_1F0]
0x56DF9A: fld1
0x56DF9C: sub     eax, edi
0x56DF9E: mov     [esp+234h+var_200], eax
0x56DFA2: mov     eax, ds:0B3F9B0h
0x56DFA7: mov     ecx, ds:0B3F9A8h
0x56DFAD: mov     edx, ds:0B3F9ACh
0x56DFB3: mov     [esp+234h+var_1F4], eax
0x56DFB7: mov     eax, [esp+234h+var_200]
0x56DFBB: mov     dword ptr [esp+234h+var_1FC], ecx
0x56DFBF: mov     ecx, [eax+edi]
0x56DFC2: mov     [esp+234h+var_140], ecx
0x56DFC9: mov     dword ptr [esp+234h+var_1FC+4], edx
0x56DFCD: mov     edx, [eax+edi+4]
0x56DFD1: mov     [esp+234h+var_13C], edx
0x56DFD8: mov     eax, [eax+edi+8]
0x56DFDC: mov     [esp+234h+var_138], eax
0x56DFE3: mov     eax, [edi+8]
0x56DFE6: mov     ecx, [edi]
0x56DFE8: mov     edx, [edi+4]
0x56DFEB: mov     [esp+234h+var_150], eax
0x56DFF2: mov     eax, [esp+234h+var_16C]
0x56DFF9: imul    eax, [esp+234h+var_220]
0x56DFFE: add     eax, [esp+234h+var_170]
0x56E005: mov     [esp+234h+var_158], ecx
0x56E00C: mov     [esp+234h+var_154], edx
0x56E013: fld     dword ptr [eax]
0x56E015: fstp    [esp+234h+var_214]
0x56E019: fld     [esp+234h+var_214]
0x56E01D: fld     st
0x56E01F: fsubr   st, st(2)
0x56E021: fstp    [esp+234h+var_204]
0x56E025: fstp    dword ptr [esi-8]
0x56E028: fld     dword ptr [eax+4]
0x56E02B: fstp    [esp+234h+var_214]
0x56E02F: fld     [esp+234h+var_204]
0x56E033: fld     [esp+234h+var_214]
0x56E037: fld     st
0x56E039: fsubp   st(2), st
0x56E03B: fxch    st(1)
0x56E03D: fstp    [esp+234h+var_204]
0x56E041: fstp    dword ptr [esi-4]
0x56E044: fld     dword ptr [eax+8]
0x56E047: fstp    [esp+234h+var_214]
0x56E04B: fld     [esp+234h+var_204]
0x56E04F: fld     [esp+234h+var_214]
0x56E053: fld     st
0x56E055: fsubp   st(2), st
0x56E057: fxch    st(1)
0x56E059: fstp    [esp+234h+var_204]
0x56E05D: fstp    dword ptr [esi]
0x56E05F: fld     [esp+234h+var_204]
0x56E063: fstp    dword ptr [esi+4]
0x56E066: fld     dword ptr [esi-4]
0x56E069: fadd    dword ptr [esi-8]
0x56E06C: fadd    dword ptr [esi]
0x56E06E: fstp    [esp+234h+Dst]
0x56E072: fsub    [esp+234h+Dst]
0x56E076: fstp    [esp+234h+Dst]
0x56E07A: fld     [esp+234h+Dst]
0x56E07E: fst     dword ptr [esi+4]
0x56E081: fcomp   qword ptr ds:0A68618h
0x56E087: fnstsw  ax
0x56E089: test    ah, 5
0x56E08C: jp      short loc_56E093
0x56E08E: fldz
0x56E090: fstp    dword ptr [esi+4]
0x56E093: mov     ecx, ds:0B3F9A8h
0x56E099: mov     edx, ds:0B3F9ACh
0x56E09F: mov     eax, ds:0B3F9B0h
0x56E0A4: mov     dword ptr [esp+234h+var_14C], ecx
0x56E0AB: lea     ecx, [esp+234h+var_14C]
0x56E0B2: push    ecx
0x56E0B3: mov     dword ptr [esp+238h+var_14C+4], edx
0x56E0BA: lea     edx, [esp+238h+var_140]
0x56E0C1: push    edx
0x56E0C2: mov     [esp+23Ch+var_144], eax
0x56E0C9: push    1
0x56E0CB: lea     eax, [esp+240h+var_F8]
0x56E0D2: push    eax
0x56E0D3: lea     ecx, [esp+244h+var_11C]
0x56E0DA: push    ecx
0x56E0DB: call    sub_710580
0x56E0E0: lea     edx, [esp+248h+var_1FC]
0x56E0E4: push    edx
0x56E0E5: lea     eax, [esp+24Ch+var_14C]
0x56E0EC: push    eax
0x56E0ED: push    1
0x56E0EF: lea     ecx, [esp+254h+var_A0]
0x56E0F6: push    offset Vector3_InitValue?
0x56E0FB: push    ecx
0x56E0FC: call    sub_710580
0x56E101: fld     dword ptr [esp+25Ch+var_1FC]
0x56E105: mov     eax, [esp+25Ch+var_18C]
0x56E10C: fdiv    dword ptr [eax+4Ch]
0x56E10F: add     esp, 28h
0x56E112: fld     qword ptr ds:0A2FAA0h
0x56E118: fadd    st(1), st
0x56E11A: fxch    st(1)
0x56E11C: fstp    dword ptr [ebp-8]
0x56E11F: fld     dword ptr [esp+234h+var_1FC+4]
0x56E123: fdiv    dword ptr [eax+4Ch]
0x56E126: faddp   st(1), st
0x56E128: fstp    dword ptr [ebp-4]
0x56E12B: fld     [esp+234h+var_154]
0x56E132: fmul    qword ptr [esp+234h+var_180]
0x56E139: fld     [esp+234h+var_158]
0x56E140: fmul    [esp+234h+var_1E0]
0x56E144: faddp   st(1), st
0x56E146: fld     [esp+234h+var_150]
0x56E14D: fmul    [esp+234h+var_1F0]
0x56E151: faddp   st(1), st
0x56E153: fstp    [esp+234h+Dst]
0x56E157: fld     [esp+234h+Dst]
0x56E15B: fldz
0x56E15D: fcom    st(1)
0x56E15F: fnstsw  ax
0x56E161: test    ah, 41h
0x56E164: jnz     short loc_56E16A
0x56E166: fstp    st(1)
0x56E168: jmp     short loc_56E16C
0x56E16A: fstp    st
0x56E16C: fld1
0x56E16E: mov     eax, 0Ah
0x56E173: fld     st
0x56E175: fsubrp  st(2), st
0x56E177: fxch    st(1)
0x56E179: fstp    [esp+234h+var_1C8]
0x56E17D: fld1
0x56E17F: fstp    [esp+234h+var_214]
0x56E183: test    al, 1
0x56E185: fld     [esp+234h+var_1C8]
0x56E189: jz      short loc_56E195
0x56E18B: fld     [esp+234h+var_214]
0x56E18F: fmul    st, st(1)
0x56E191: fstp    [esp+234h+var_214]
0x56E195: shr     eax, 1
0x56E197: jz      short loc_56E1A1
0x56E199: fmul    st, st
0x56E19B: fstp    [esp+234h+var_1C8]
0x56E19F: jmp     short loc_56E183
0x56E1A1: mov     eax, [esp+234h+var_220]
0x56E1A5: fstp    st
0x56E1A7: fld     [esp+234h+var_214]
0x56E1AB: add     eax, 1
0x56E1AE: fstp    [esp+234h+var_1B8]
0x56E1B2: add     esi, 10h
0x56E1B5: fld     [esp+234h+var_1F4]
0x56E1B9: add     edi, 0Ch
0x56E1BC: fabs
0x56E1BE: add     ebp, 0Ch
0x56E1C1: cmp     eax, [esp+234h+var_208]
0x56E1C5: fstp    [esp+234h+Dst]
0x56E1C9: fld     [esp+234h+Dst]
0x56E1CD: mov     [esp+234h+var_220], eax
0x56E1D1: fmul    qword ptr ds:0A4C2D0h
0x56E1D7: fsubr   st, st(1)
0x56E1D9: fmul    [esp+234h+var_1B8]
0x56E1DD: fstp    dword ptr [ebp-0Ch]
0x56E1E0: jl      loc_56DFA2
0x56E1E6: fstp    st
0x56E1E8: xor     edi, edi
0x56E1EA: cmp     [esp+234h+var_21C], edi
0x56E1EE: mov     [esp+234h+var_204], edi
0x56E1F2: mov     [esp+234h+var_214], edi
0x56E1F6: jle     loc_56E578
0x56E1FC: mov     esi, [esp+234h+var_1C4]
0x56E200: mov     edx, [esp+234h+var_21C]
0x56E204: add     esi, 14h
0x56E207: mov     [esp+234h+var_200], edx
0x56E20B: jmp     short loc_56E210
0x56E20D: align 10h
0x56E210: movzx   eax, word ptr [esi+0Ah]
0x56E214: cmp     word ptr [esi+0Eh], 0
0x56E219: mov     edx, [esi]
0x56E21B: mov     [esp+234h+var_220], eax
0x56E21F: movzx   eax, ax
0x56E222: setnbe  byte ptr [esp+234h+var_21C]
0x56E227: test    eax, eax
0x56E229: mov     [esp+234h+var_180], edx
0x56E230: mov     [esp+234h+var_20D], 0
0x56E235: mov     dword ptr [esp+234h+var_1E0], 0
0x56E23D: jle     loc_56E560
0x56E243: mov     ebp, edx
0x56E245: mov     [esp+234h+Dst], edx
0x56E249: add     edx, 4
0x56E24C: mov     [esp+234h+var_1C8], 0
0x56E254: mov     [esp+234h+var_1B8], edx
0x56E258: cmp     byte ptr [esp+234h+var_21C], 0
0x56E25D: jz      short loc_56E279
0x56E25F: movzx   edx, word ptr [ebp+2]
0x56E263: mov     cx, [ebp+0]
0x56E267: add     cx, di
0x56E26A: add     dx, di
0x56E26D: movzx   eax, cx
0x56E270: movzx   ecx, dx
0x56E273: movzx   edx, word ptr [ebp+4]
0x56E277: jmp     short loc_56E290
0x56E279: mov     ax, [edx-4]
0x56E27D: mov     cx, [edx-2]
0x56E281: mov     dx, [edx]
0x56E284: add     ax, di
0x56E287: add     cx, di
0x56E28A: movzx   eax, ax
0x56E28D: movzx   ecx, cx
0x56E290: add     dx, di
0x56E293: cmp     ax, cx
0x56E296: movzx   edx, dx
0x56E299: jz      loc_56E516
0x56E29F: cmp     ax, dx
0x56E2A2: jz      loc_56E516
0x56E2A8: cmp     cx, dx
0x56E2AB: jz      loc_56E516
0x56E2B1: mov     eax, [esp+234h+var_1B0]
0x56E2B8: mov     ecx, [esp+234h+var_180]
0x56E2BF: mov     edx, [esp+234h+var_21C]
0x56E2C3: push    0
0x56E2C5: push    eax
0x56E2C6: mov     eax, dword ptr [esp+23Ch+var_1E0]
0x56E2CA: push    ecx
0x56E2CB: mov     ecx, [esp+240h+var_18C]
0x56E2D2: push    edx
0x56E2D3: push    edi
0x56E2D4: push    eax
0x56E2D5: call    sub_56CB70
0x56E2DA: test    al, al
0x56E2DC: jz      loc_56E501
0x56E2E2: fldz
0x56E2E4: mov     edi, [esp+234h+var_218]
0x56E2E8: mov     [esp+234h+var_184], 0
0x56E2F3: mov     dword ptr [esp+234h+var_1F0], ebp
0x56E2F7: cmp     byte ptr [esp+234h+var_21C], 0
0x56E2FC: jz      short loc_56E307
0x56E2FE: mov     ecx, dword ptr [esp+234h+var_1F0]
0x56E302: movzx   eax, word ptr [ecx]
0x56E305: jmp     short loc_56E31F
0x56E307: mov     eax, [esp+234h+var_184]
0x56E30E: mov     edx, [esp+234h+var_1C8]
0x56E312: mov     ecx, [esp+234h+var_180]
0x56E319: add     edx, eax
0x56E31B: movzx   eax, word ptr [ecx+edx*2]
0x56E31F: add     eax, [esp+234h+var_214]
0x56E323: movzx   edx, ax
0x56E326: mov     eax, [esp+234h+var_1A8]
0x56E32D: cmp     dword ptr [eax+edx*4], 0FFFFFFFFh
0x56E331: lea     ecx, ds:0[edx*4]
0x56E338: jnz     loc_56E499
0x56E33E: movzx   ebp, bx
0x56E341: mov     [eax+ecx], ebp
0x56E344: movzx   eax, word ptr [esp+234h+var_204]
0x56E349: mov     ebp, [esp+234h+Src]
0x56E350: add     [esp+234h+var_204], 1
0x56E355: mov     [ebp+eax*2+0], bx
0x56E35A: mov     eax, [esp+234h+var_160]
0x56E361: fcom    dword ptr [edi+ecx*4]
0x56E364: imul    eax, edx
0x56E367: add     eax, [esp+234h+var_164]
0x56E36E: mov     edx, [eax]
0x56E370: fnstsw  ax
0x56E372: mov     [esp+234h+var_1C4], edx
0x56E376: test    ah, 44h
0x56E379: jnp     short loc_56E3B8
0x56E37B: mov     edi, [esi-10h]
0x56E37E: movzx   eax, byte ptr [esp+234h+var_1C4+3]
0x56E383: movzx   eax, word ptr [edi+eax*2]
0x56E387: movzx   eax, ax
0x56E38A: imul    eax, 4Ch ; 'L'
0x56E38D: add     eax, [esp+234h+var_1CC]
0x56E391: movzx   edi, word ptr [eax+48h]
0x56E395: mov     ebp, [eax+44h]
0x56E398: mov     [ebp+edi*8+0], bx
0x56E39D: movzx   ebx, word ptr [eax+48h]
0x56E3A1: mov     edi, [esp+234h+var_218]
0x56E3A5: mov     ebp, [eax+44h]
0x56E3A8: fld     dword ptr [edi+ecx*4]
0x56E3AB: fstp    dword ptr [ebp+ebx*8+4]
0x56E3AF: add     word ptr [eax+48h], 1
0x56E3B4: mov     ebx, [esp+234h+var_1C0]
0x56E3B8: fcom    dword ptr [edi+ecx*4+4]
0x56E3BC: fnstsw  ax
0x56E3BE: test    ah, 44h
0x56E3C1: jnp     short loc_56E403
0x56E3C3: mov     edi, [esi-10h]
0x56E3C6: movzx   eax, byte ptr [esp+234h+var_1C4+2]
0x56E3CB: movzx   eax, word ptr [edi+eax*2]
0x56E3CF: movzx   eax, ax
0x56E3D2: imul    eax, 4Ch ; 'L'
0x56E3D5: add     eax, [esp+234h+var_1CC]
0x56E3D9: movzx   edi, word ptr [eax+48h]
0x56E3DD: mov     ebp, [eax+44h]
0x56E3E0: mov     [ebp+edi*8+0], bx
0x56E3E5: movzx   edi, word ptr [eax+48h]
0x56E3E9: mov     ebp, [esp+234h+var_218]
0x56E3ED: mov     ebx, [eax+44h]
0x56E3F0: fld     dword ptr [ebp+ecx*4+4]
0x56E3F4: fstp    dword ptr [ebx+edi*8+4]
0x56E3F8: add     word ptr [eax+48h], 1
0x56E3FD: mov     ebx, [esp+234h+var_1C0]
0x56E401: mov     edi, ebp
0x56E403: fcom    dword ptr [edi+ecx*4+8]
0x56E407: fnstsw  ax
0x56E409: test    ah, 44h
0x56E40C: jnp     short loc_56E44A
0x56E40E: mov     edi, [esi-10h]
0x56E411: movzx   eax, dh
0x56E414: movzx   eax, word ptr [edi+eax*2]
0x56E418: movzx   eax, ax
0x56E41B: imul    eax, 4Ch ; 'L'
0x56E41E: add     eax, [esp+234h+var_1CC]
0x56E422: movzx   edi, word ptr [eax+48h]
0x56E426: mov     ebp, [eax+44h]
0x56E429: mov     [ebp+edi*8+0], bx
0x56E42E: movzx   ebx, word ptr [eax+48h]
0x56E432: mov     edi, [esp+234h+var_218]
0x56E436: mov     ebp, [eax+44h]
0x56E439: fld     dword ptr [edi+ecx*4+8]
0x56E43D: fstp    dword ptr [ebp+ebx*8+4]
0x56E441: add     word ptr [eax+48h], 1
0x56E446: mov     ebx, [esp+234h+var_1C0]
0x56E44A: fcom    dword ptr [edi+ecx*4+0Ch]
0x56E44E: fnstsw  ax
0x56E450: test    ah, 44h
0x56E453: jnp     short loc_56E489
0x56E455: mov     eax, [esi-10h]
0x56E458: movzx   edx, dl
0x56E45B: movzx   eax, word ptr [eax+edx*2]
0x56E45F: movzx   eax, ax
0x56E462: imul    eax, 4Ch ; 'L'
0x56E465: add     eax, [esp+234h+var_1CC]
0x56E469: movzx   edx, word ptr [eax+48h]
0x56E46D: mov     ebp, [eax+44h]
0x56E470: mov     [ebp+edx*8+0], bx
0x56E475: movzx   edx, word ptr [eax+48h]
0x56E479: fld     dword ptr [edi+ecx*4+0Ch]
0x56E47D: mov     ebp, [eax+44h]
0x56E480: fstp    dword ptr [ebp+edx*8+4]
0x56E484: add     word ptr [eax+48h], 1
0x56E489: mov     ebp, [esp+234h+Src]
0x56E490: add     ebx, 1
0x56E493: mov     [esp+234h+var_1C0], ebx
0x56E497: jmp     short loc_56E4B9
0x56E499: mov     edx, [esp+234h+var_204]
0x56E49D: mov     ax, [eax+ecx]
0x56E4A1: movzx   ebp, dx
0x56E4A4: mov     ecx, ebp
0x56E4A6: mov     ebp, [esp+234h+Src]
0x56E4AD: add     edx, 1
0x56E4B0: mov     [ebp+ecx*2+0], ax
0x56E4B5: mov     [esp+234h+var_204], edx
0x56E4B9: mov     eax, [esp+234h+var_184]
0x56E4C0: add     dword ptr [esp+234h+var_1F0], 2
0x56E4C5: add     eax, 1
0x56E4C8: cmp     eax, 3
0x56E4CB: mov     [esp+234h+var_184], eax
0x56E4D2: jl      loc_56E2F7
0x56E4D8: cmp     byte ptr [esp+234h+var_21C], 0
0x56E4DD: fstp    st
0x56E4DF: jz      short loc_56E529
0x56E4E1: cmp     [esp+234h+var_20D], 0
0x56E4E6: jz      short loc_56E501
0x56E4E8: movzx   eax, word ptr [esp+234h+var_204]
0x56E4ED: movzx   ecx, word ptr [ebp+eax*2-6]
0x56E4F2: movzx   edx, word ptr [ebp+eax*2-2]
0x56E4F7: mov     [ebp+eax*2-6], dx
0x56E4FC: mov     [ebp+eax*2-2], cx
0x56E501: cmp     byte ptr [esp+234h+var_21C], 0
0x56E506: jz      short loc_56E529
0x56E508: cmp     [esp+234h+var_20D], 0
0x56E50D: setz    cl
0x56E510: mov     [esp+234h+var_20D], cl
0x56E514: jmp     short loc_56E529
0x56E516: cmp     byte ptr [esp+234h+var_21C], 0
0x56E51B: jz      short loc_56E529
0x56E51D: cmp     [esp+234h+var_20D], 0
0x56E522: setz    dl
0x56E525: mov     [esp+234h+var_20D], dl
0x56E529: mov     ecx, dword ptr [esp+234h+var_1E0]
0x56E52D: mov     edx, [esp+234h+var_1B8]
0x56E531: mov     ebp, [esp+234h+Dst]
0x56E535: movzx   eax, word ptr [esp+234h+var_220]
0x56E53A: add     [esp+234h+var_1C8], 3
0x56E53F: mov     edi, [esp+234h+var_214]
0x56E543: add     ecx, 1
0x56E546: add     edx, 6
0x56E549: add     ebp, 2
0x56E54C: cmp     ecx, eax
0x56E54E: mov     dword ptr [esp+234h+var_1E0], ecx
0x56E552: mov     [esp+234h+var_1B8], edx
0x56E556: mov     [esp+234h+Dst], ebp
0x56E55A: jl      loc_56E258
0x56E560: movzx   eax, word ptr [esi+8]
0x56E564: add     edi, eax
0x56E566: add     esi, 2Ch ; ','
0x56E569: sub     [esp+234h+var_200], 1
0x56E56E: mov     [esp+234h+var_214], edi
0x56E572: jnz     loc_56E210
0x56E578: mov     ecx, [esp+234h+var_218]
0x56E57C: push    ecx
0x56E57D: call    FormHeapFree
0x56E582: add     esp, 4
0x56E585: test    bx, bx
0x56E588: jbe     loc_56EC20
0x56E58E: movzx   esi, word ptr [esp+234h+var_204]
0x56E593: xor     ecx, ecx
0x56E595: mov     eax, esi
0x56E597: mov     edx, 2
0x56E59C: mul     edx
0x56E59E: seto    cl
0x56E5A1: neg     ecx
0x56E5A3: or      ecx, eax
0x56E5A5: push    ecx; Size
0x56E5A6: call    FormHeapAlloc
0x56E5AB: mov     edx, [esp+238h+Src]
0x56E5B2: lea     ecx, [esi+esi]
0x56E5B5: push    ecx; Size
0x56E5B6: push    edx; Src
0x56E5B7: push    eax; Dst
0x56E5B8: mov     [esp+244h+var_180], eax
0x56E5BF: call    _memcpy
0x56E5C4: movzx   esi, bx
0x56E5C7: xor     ecx, ecx
0x56E5C9: mov     eax, esi
0x56E5CB: mov     edx, 0Ch
0x56E5D0: mul     edx
0x56E5D2: seto    cl
0x56E5D5: neg     ecx
0x56E5D7: or      ecx, eax
0x56E5D9: push    ecx; Size
0x56E5DA: call    FormHeapAlloc
0x56E5DF: mov     ebp, eax
0x56E5E1: xor     ecx, ecx
0x56E5E3: mov     eax, esi
0x56E5E5: mov     edx, 0Ch
0x56E5EA: mul     edx
0x56E5EC: seto    cl
0x56E5EF: mov     [esp+248h+var_200], ebp
0x56E5F3: neg     ecx
0x56E5F5: or      ecx, eax
0x56E5F7: push    ecx; Size
0x56E5F8: call    FormHeapAlloc
0x56E5FD: fld     qword ptr ds:0A68610h
0x56E603: add     esp, 18h
0x56E606: xor     esi, esi
0x56E608: cmp     [esp+234h+var_208], 4
0x56E60D: mov     [esp+234h+var_214], eax
0x56E611: jl      loc_56EA0C
0x56E617: mov     edx, [esp+234h+var_1A8]
0x56E61E: mov     ecx, [esp+234h+var_1B0]
0x56E625: add     edx, 8
0x56E628: mov     edi, 2
0x56E62D: add     ecx, 18h
0x56E630: cmp     dword ptr [edx-8], 0FFFFFFFFh
0x56E634: jz      loc_56E71E
0x56E63A: mov     eax, [esp+234h+var_194]
0x56E641: imul    eax, esi
0x56E644: add     eax, [esp+234h+var_198]
0x56E64B: mov     ebx, [eax]
0x56E64D: mov     dword ptr [esp+234h+var_1F0], ebx
0x56E651: mov     ebx, [eax+4]
0x56E654: mov     eax, [eax+8]
0x56E657: mov     [esp+234h+var_1E8], eax
0x56E65B: mov     eax, [esp+234h+var_1A0]
0x56E662: imul    eax, esi
0x56E665: add     eax, [esp+234h+var_1A4]
0x56E66C: mov     dword ptr [esp+234h+var_1F0+4], ebx
0x56E670: mov     ebx, [eax]
0x56E672: mov     dword ptr [esp+234h+var_1E0], ebx
0x56E676: mov     ebx, [eax+4]
0x56E679: mov     eax, [eax+8]
0x56E67C: fld     dword ptr [esp+234h+var_1E0]
0x56E680: fmul    st, st(1)
0x56E682: mov     dword ptr [esp+234h+var_1E0+4], ebx
0x56E686: mov     [esp+234h+var_1D8], eax
0x56E68A: mov     eax, [edx-8]
0x56E68D: fstp    [esp+234h+var_21C]
0x56E691: lea     eax, [eax+eax*2]
0x56E694: fld     dword ptr [esp+234h+var_1E0+4]
0x56E698: lea     eax, [ebp+eax*4+0]
0x56E69C: fmul    st, st(1)
0x56E69E: fstp    [esp+234h+var_220]
0x56E6A2: fld     [esp+234h+var_1D8]
0x56E6A6: fmul    st, st(1)
0x56E6A8: fstp    [esp+234h+var_218]
0x56E6AC: fld     [esp+234h+var_21C]
0x56E6B0: fadd    dword ptr [esp+234h+var_1F0]
0x56E6B4: fstp    [esp+234h+var_21C]
0x56E6B8: fld     dword ptr [esp+234h+var_1F0+4]
0x56E6BC: fadd    [esp+234h+var_220]
0x56E6C0: fstp    [esp+234h+var_220]
0x56E6C4: fld     [esp+234h+var_1E8]
0x56E6C8: fadd    [esp+234h+var_218]
0x56E6CC: fstp    [esp+234h+var_218]
0x56E6D0: fld     [esp+234h+var_21C]
0x56E6D4: fstp    dword ptr [esp+234h+var_1FC]
0x56E6D8: mov     ebx, dword ptr [esp+234h+var_1FC]
0x56E6DC: fld     [esp+234h+var_220]
0x56E6E0: mov     [eax], ebx
0x56E6E2: fstp    dword ptr [esp+234h+var_1FC+4]
0x56E6E6: mov     ebx, dword ptr [esp+234h+var_1FC+4]
0x56E6EA: fld     [esp+234h+var_218]
0x56E6EE: mov     [eax+4], ebx
0x56E6F1: fstp    [esp+234h+var_1F4]
0x56E6F5: mov     ebx, [esp+234h+var_1F4]
0x56E6F9: mov     [eax+8], ebx
0x56E6FC: mov     eax, [edx-8]
0x56E6FF: mov     ebx, [esp+234h+var_214]
0x56E703: lea     eax, [eax+eax*2]
0x56E706: lea     eax, [ebx+eax*4]
0x56E709: mov     ebx, [ecx-18h]
0x56E70C: mov     [eax], ebx
0x56E70E: mov     ebx, [ecx-14h]
0x56E711: mov     [eax+4], ebx
0x56E714: mov     ebx, [ecx-10h]
0x56E717: mov     [eax+8], ebx
0x56E71A: mov     ebx, [esp+234h+var_1C0]
0x56E71E: cmp     dword ptr [edx-4], 0FFFFFFFFh
0x56E722: jz      loc_56E812
0x56E728: mov     eax, [esp+234h+var_194]
0x56E72F: lea     ebx, [edi-1]
0x56E732: imul    eax, ebx
0x56E735: add     eax, [esp+234h+var_198]
0x56E73C: mov     ebx, [eax]
0x56E73E: mov     dword ptr [esp+234h+var_1F0], ebx
0x56E742: mov     ebx, [eax+4]
0x56E745: mov     eax, [eax+8]
0x56E748: mov     dword ptr [esp+234h+var_1F0+4], ebx
0x56E74C: mov     [esp+234h+var_1E8], eax
0x56E750: mov     eax, [esp+234h+var_1A0]
0x56E757: lea     ebx, [edi-1]
0x56E75A: imul    eax, ebx
0x56E75D: add     eax, [esp+234h+var_1A4]
0x56E764: mov     ebx, [eax]
0x56E766: mov     dword ptr [esp+234h+var_1E0], ebx
0x56E76A: fld     dword ptr [esp+234h+var_1E0]
0x56E76E: mov     ebx, [eax+4]
0x56E771: fmul    st, st(1)
0x56E773: mov     eax, [eax+8]
0x56E776: mov     dword ptr [esp+234h+var_1E0+4], ebx
0x56E77A: fstp    [esp+234h+var_21C]
0x56E77E: mov     [esp+234h+var_1D8], eax
0x56E782: fld     dword ptr [esp+234h+var_1E0+4]
0x56E786: mov     eax, [edx-4]
0x56E789: fmul    st, st(1)
0x56E78B: lea     eax, [eax+eax*2]
0x56E78E: lea     eax, [ebp+eax*4+0]
0x56E792: fstp    [esp+234h+var_220]
0x56E796: fld     [esp+234h+var_1D8]
0x56E79A: fmul    st, st(1)
0x56E79C: fstp    [esp+234h+var_218]
0x56E7A0: fld     [esp+234h+var_21C]
0x56E7A4: fadd    dword ptr [esp+234h+var_1F0]
0x56E7A8: fstp    [esp+234h+var_21C]
0x56E7AC: fld     dword ptr [esp+234h+var_1F0+4]
0x56E7B0: fadd    [esp+234h+var_220]
0x56E7B4: fstp    [esp+234h+var_220]
0x56E7B8: fld     [esp+234h+var_1E8]
0x56E7BC: fadd    [esp+234h+var_218]
0x56E7C0: fstp    [esp+234h+var_218]
0x56E7C4: fld     [esp+234h+var_21C]
0x56E7C8: fstp    dword ptr [esp+234h+var_1FC]
0x56E7CC: mov     ebx, dword ptr [esp+234h+var_1FC]
0x56E7D0: fld     [esp+234h+var_220]
0x56E7D4: mov     [eax], ebx
0x56E7D6: fstp    dword ptr [esp+234h+var_1FC+4]
0x56E7DA: mov     ebx, dword ptr [esp+234h+var_1FC+4]
0x56E7DE: fld     [esp+234h+var_218]
0x56E7E2: mov     [eax+4], ebx
0x56E7E5: fstp    [esp+234h+var_1F4]
0x56E7E9: mov     ebx, [esp+234h+var_1F4]
0x56E7ED: mov     [eax+8], ebx
0x56E7F0: mov     eax, [edx-4]
0x56E7F3: mov     ebx, [esp+234h+var_214]
0x56E7F7: lea     eax, [eax+eax*2]
0x56E7FA: lea     eax, [ebx+eax*4]
0x56E7FD: mov     ebx, [ecx-0Ch]
0x56E800: mov     [eax], ebx
0x56E802: mov     ebx, [ecx-8]
0x56E805: mov     [eax+4], ebx
0x56E808: mov     ebx, [ecx-4]
0x56E80B: mov     [eax+8], ebx
0x56E80E: mov     ebx, [esp+234h+var_1C0]
0x56E812: cmp     dword ptr [edx], 0FFFFFFFFh
0x56E815: jz      loc_56E8FC
0x56E81B: mov     eax, edi
0x56E81D: imul    eax, [esp+234h+var_194]
0x56E825: add     eax, [esp+234h+var_198]
0x56E82C: mov     ebx, [eax]
0x56E82E: mov     dword ptr [esp+234h+var_1F0], ebx
0x56E832: mov     ebx, [eax+4]
0x56E835: mov     eax, [eax+8]
0x56E838: mov     [esp+234h+var_1E8], eax
0x56E83C: mov     eax, edi
0x56E83E: imul    eax, [esp+234h+var_1A0]
0x56E846: add     eax, [esp+234h+var_1A4]
0x56E84D: mov     dword ptr [esp+234h+var_1F0+4], ebx
0x56E851: mov     ebx, [eax]
0x56E853: mov     dword ptr [esp+234h+var_1E0], ebx
0x56E857: mov     ebx, [eax+4]
0x56E85A: mov     eax, [eax+8]
0x56E85D: fld     dword ptr [esp+234h+var_1E0]
0x56E861: fmul    st, st(1)
0x56E863: mov     dword ptr [esp+234h+var_1E0+4], ebx
0x56E867: mov     [esp+234h+var_1D8], eax
0x56E86B: mov     eax, [edx]
0x56E86D: fstp    [esp+234h+var_21C]
0x56E871: lea     eax, [eax+eax*2]
0x56E874: fld     dword ptr [esp+234h+var_1E0+4]
0x56E878: lea     eax, [ebp+eax*4+0]
0x56E87C: fmul    st, st(1)
0x56E87E: fstp    [esp+234h+var_220]
0x56E882: fld     [esp+234h+var_1D8]
0x56E886: fmul    st, st(1)
0x56E888: fstp    [esp+234h+var_218]
0x56E88C: fld     [esp+234h+var_21C]
0x56E890: fadd    dword ptr [esp+234h+var_1F0]
0x56E894: fstp    [esp+234h+var_21C]
0x56E898: fld     dword ptr [esp+234h+var_1F0+4]
0x56E89C: fadd    [esp+234h+var_220]
0x56E8A0: fstp    [esp+234h+var_220]
0x56E8A4: fld     [esp+234h+var_1E8]
0x56E8A8: fadd    [esp+234h+var_218]
0x56E8AC: fstp    [esp+234h+var_218]
0x56E8B0: fld     [esp+234h+var_21C]
0x56E8B4: fstp    dword ptr [esp+234h+var_1FC]
0x56E8B8: mov     ebx, dword ptr [esp+234h+var_1FC]
0x56E8BC: fld     [esp+234h+var_220]
0x56E8C0: mov     [eax], ebx
0x56E8C2: fstp    dword ptr [esp+234h+var_1FC+4]
0x56E8C6: mov     ebx, dword ptr [esp+234h+var_1FC+4]
0x56E8CA: fld     [esp+234h+var_218]
0x56E8CE: mov     [eax+4], ebx
0x56E8D1: fstp    [esp+234h+var_1F4]
0x56E8D5: mov     ebx, [esp+234h+var_1F4]
0x56E8D9: mov     [eax+8], ebx
0x56E8DC: mov     eax, [edx]
0x56E8DE: mov     ebx, [esp+234h+var_214]
0x56E8E2: lea     eax, [eax+eax*2]
0x56E8E5: lea     eax, [ebx+eax*4]
0x56E8E8: mov     ebx, [ecx]
0x56E8EA: mov     [eax], ebx
0x56E8EC: mov     ebx, [ecx+4]
0x56E8EF: mov     [eax+4], ebx
0x56E8F2: mov     ebx, [ecx+8]
0x56E8F5: mov     [eax+8], ebx
0x56E8F8: mov     ebx, [esp+234h+var_1C0]
0x56E8FC: cmp     dword ptr [edx+4], 0FFFFFFFFh
0x56E900: jz      loc_56E9F1
0x56E906: mov     eax, [esp+234h+var_194]
0x56E90D: lea     ebp, [edi+1]
0x56E910: imul    eax, ebp
0x56E913: add     eax, [esp+234h+var_198]
0x56E91A: mov     ebx, [eax]
0x56E91C: mov     dword ptr [esp+234h+var_1F0], ebx
0x56E920: mov     ebx, [eax+4]
0x56E923: mov     eax, [eax+8]
0x56E926: mov     [esp+234h+var_1E8], eax
0x56E92A: mov     eax, [esp+234h+var_1A0]
0x56E931: imul    eax, ebp
0x56E934: add     eax, [esp+234h+var_1A4]
0x56E93B: mov     dword ptr [esp+234h+var_1F0+4], ebx
0x56E93F: mov     ebx, [eax]
0x56E941: mov     dword ptr [esp+234h+var_1E0], ebx
0x56E945: mov     ebx, [eax+4]
0x56E948: mov     eax, [eax+8]
0x56E94B: fld     dword ptr [esp+234h+var_1E0]
0x56E94F: fmul    st, st(1)
0x56E951: mov     dword ptr [esp+234h+var_1E0+4], ebx
0x56E955: mov     [esp+234h+var_1D8], eax
0x56E959: mov     eax, [edx+4]
0x56E95C: fstp    [esp+234h+var_21C]
0x56E960: mov     ebp, [esp+234h+var_200]
0x56E964: fld     dword ptr [esp+234h+var_1E0+4]
0x56E968: lea     eax, [eax+eax*2]
0x56E96B: fmul    st, st(1)
0x56E96D: lea     eax, [ebp+eax*4+0]
0x56E971: fstp    [esp+234h+var_220]
0x56E975: fld     [esp+234h+var_1D8]
0x56E979: fmul    st, st(1)
0x56E97B: fstp    [esp+234h+var_218]
0x56E97F: fld     [esp+234h+var_21C]
0x56E983: fadd    dword ptr [esp+234h+var_1F0]
0x56E987: fstp    [esp+234h+var_21C]
0x56E98B: fld     dword ptr [esp+234h+var_1F0+4]
0x56E98F: fadd    [esp+234h+var_220]
0x56E993: fstp    [esp+234h+var_220]
0x56E997: fld     [esp+234h+var_1E8]
0x56E99B: fadd    [esp+234h+var_218]
0x56E99F: fstp    [esp+234h+var_218]
0x56E9A3: fld     [esp+234h+var_21C]
0x56E9A7: fstp    dword ptr [esp+234h+var_1FC]
0x56E9AB: mov     ebx, dword ptr [esp+234h+var_1FC]
0x56E9AF: fld     [esp+234h+var_220]
0x56E9B3: mov     [eax], ebx
0x56E9B5: fstp    dword ptr [esp+234h+var_1FC+4]
0x56E9B9: mov     ebx, dword ptr [esp+234h+var_1FC+4]
0x56E9BD: fld     [esp+234h+var_218]
0x56E9C1: mov     [eax+4], ebx
0x56E9C4: fstp    [esp+234h+var_1F4]
0x56E9C8: mov     ebx, [esp+234h+var_1F4]
0x56E9CC: mov     [eax+8], ebx
0x56E9CF: mov     eax, [edx+4]
0x56E9D2: mov     ebx, [esp+234h+var_214]
0x56E9D6: lea     eax, [eax+eax*2]
0x56E9D9: lea     eax, [ebx+eax*4]
0x56E9DC: mov     ebx, [ecx+0Ch]
0x56E9DF: mov     [eax], ebx
0x56E9E1: mov     ebx, [ecx+10h]
0x56E9E4: mov     [eax+4], ebx
0x56E9E7: mov     ebx, [ecx+14h]
0x56E9EA: mov     [eax+8], ebx
0x56E9ED: mov     ebx, [esp+234h+var_1C0]
0x56E9F1: mov     eax, [esp+234h+var_208]
0x56E9F5: add     esi, 4
0x56E9F8: add     eax, 0FFFFFFFDh
0x56E9FB: add     ecx, 30h ; '0'
0x56E9FE: add     edx, 10h
0x56EA01: add     edi, 4
0x56EA04: cmp     esi, eax
0x56EA06: jl      loc_56E630
0x56EA0C: cmp     esi, [esp+234h+var_208]
0x56EA10: jge     loc_56EB29
0x56EA16: mov     edx, [esp+234h+var_1B0]
0x56EA1D: lea     ecx, [esi+esi*2]
0x56EA20: lea     ecx, [edx+ecx*4]
0x56EA23: mov     eax, [esp+234h+var_1A8]
0x56EA2A: mov     edx, [eax+esi*4]
0x56EA2D: cmp     edx, 0FFFFFFFFh
0x56EA30: jz      loc_56EB19
0x56EA36: mov     eax, [esp+234h+var_194]
0x56EA3D: imul    eax, esi
0x56EA40: add     eax, [esp+234h+var_198]
0x56EA47: lea     edx, [edx+edx*2]
0x56EA4A: mov     edi, [eax]
0x56EA4C: mov     dword ptr [esp+234h+var_1F0], edi
0x56EA50: mov     edi, [eax+4]
0x56EA53: mov     eax, [eax+8]
0x56EA56: mov     [esp+234h+var_1E8], eax
0x56EA5A: mov     eax, [esp+234h+var_1A0]
0x56EA61: imul    eax, esi
0x56EA64: add     eax, [esp+234h+var_1A4]
0x56EA6B: mov     dword ptr [esp+234h+var_1F0+4], edi
0x56EA6F: mov     edi, [eax]
0x56EA71: mov     dword ptr [esp+234h+var_1E0], edi
0x56EA75: mov     edi, [eax+4]
0x56EA78: mov     eax, [eax+8]
0x56EA7B: fld     dword ptr [esp+234h+var_1E0]
0x56EA7F: fmul    st, st(1)
0x56EA81: mov     dword ptr [esp+234h+var_1E0+4], edi
0x56EA85: mov     [esp+234h+var_1D8], eax
0x56EA89: lea     eax, [ebp+edx*4+0]
0x56EA8D: fstp    [esp+234h+var_21C]
0x56EA91: fld     dword ptr [esp+234h+var_1E0+4]
0x56EA95: fmul    st, st(1)
0x56EA97: fstp    [esp+234h+var_220]
0x56EA9B: fld     [esp+234h+var_1D8]
0x56EA9F: fmul    st, st(1)
0x56EAA1: fstp    [esp+234h+var_218]
0x56EAA5: fld     [esp+234h+var_21C]
0x56EAA9: fadd    dword ptr [esp+234h+var_1F0]
0x56EAAD: fstp    [esp+234h+var_21C]
0x56EAB1: fld     dword ptr [esp+234h+var_1F0+4]
0x56EAB5: fadd    [esp+234h+var_220]
0x56EAB9: fstp    [esp+234h+var_220]
0x56EABD: fld     [esp+234h+var_1E8]
0x56EAC1: fadd    [esp+234h+var_218]
0x56EAC5: fstp    [esp+234h+var_218]
0x56EAC9: fld     [esp+234h+var_21C]
0x56EACD: fstp    dword ptr [esp+234h+var_1FC]
0x56EAD1: mov     edx, dword ptr [esp+234h+var_1FC]
0x56EAD5: fld     [esp+234h+var_220]
0x56EAD9: mov     [eax], edx
0x56EADB: fstp    dword ptr [esp+234h+var_1FC+4]
0x56EADF: mov     edx, dword ptr [esp+234h+var_1FC+4]
0x56EAE3: fld     [esp+234h+var_218]
0x56EAE7: mov     [eax+4], edx
0x56EAEA: fstp    [esp+234h+var_1F4]
0x56EAEE: mov     edx, [esp+234h+var_1F4]
0x56EAF2: mov     [eax+8], edx
0x56EAF5: mov     eax, [esp+234h+var_1A8]
0x56EAFC: mov     eax, [eax+esi*4]
0x56EAFF: lea     edx, [eax+eax*2]
0x56EB02: mov     eax, [esp+234h+var_214]
0x56EB06: lea     eax, [eax+edx*4]
0x56EB09: mov     edx, [ecx]
0x56EB0B: mov     [eax], edx
0x56EB0D: mov     edx, [ecx+4]
0x56EB10: mov     [eax+4], edx
0x56EB13: mov     edx, [ecx+8]
0x56EB16: mov     [eax+8], edx
0x56EB19: add     esi, 1
0x56EB1C: add     ecx, 0Ch
0x56EB1F: cmp     esi, [esp+234h+var_208]
0x56EB23: jl      loc_56EA23
0x56EB29: cmp     [esp+234h+var_1B4], 0
0x56EB31: fstp    st
0x56EB33: jle     loc_56EBF3
0x56EB39: mov     esi, [esp+234h+var_1CC]
0x56EB3D: mov     eax, [esp+234h+var_1B4]
0x56EB44: add     esi, 44h ; 'D'
0x56EB47: mov     [esp+234h+var_1B8], eax
0x56EB4B: jmp     short loc_56EB50
0x56EB4D: align 10h
0x56EB50: movzx   edi, word ptr [esi+4]
0x56EB54: mov     ecx, [esi]
0x56EB56: mov     [esp+234h+var_1C4], ecx
0x56EB5A: xor     ecx, ecx
0x56EB5C: mov     eax, edi
0x56EB5E: mov     edx, 8
0x56EB63: mul     edx
0x56EB65: seto    cl
0x56EB68: mov     [esp+234h+var_200], edi
0x56EB6C: neg     ecx
0x56EB6E: or      ecx, eax
0x56EB70: push    ecx; Size
0x56EB71: call    FormHeapAlloc
0x56EB76: add     esp, 4
0x56EB79: mov     [esp+234h+Dst], eax
0x56EB7D: test    eax, eax
0x56EB7F: mov     [esp+234h+var_4], 3
0x56EB8A: jz      short loc_56EBB7
0x56EB8C: mov     edi, eax
0x56EB8E: mov     eax, [esp+234h+var_200]
0x56EB92: add     eax, 0FFFFFFFFh
0x56EB95: mov     [esp+234h+var_200], eax
0x56EB99: js      short loc_56EBB1
0x56EB9B: jmp     short loc_56EBA0
0x56EB9D: align 10h
0x56EBA0: mov     ecx, edi
0x56EBA2: call    sub_72EFA0
0x56EBA7: add     edi, 8
0x56EBAA: sub     [esp+234h+var_200], 1
0x56EBAF: jns     short loc_56EBA0
0x56EBB1: mov     eax, [esp+234h+Dst]
0x56EBB5: jmp     short loc_56EBB9
0x56EBB7: xor     eax, eax
0x56EBB9: mov     edi, [esp+234h+var_1C4]
0x56EBBD: mov     [esi], eax
0x56EBBF: movzx   ecx, word ptr [esi+4]
0x56EBC3: add     ecx, ecx
0x56EBC5: add     ecx, ecx
0x56EBC7: add     ecx, ecx
0x56EBC9: push    ecx; Size
0x56EBCA: push    edi; Src
0x56EBCB: push    eax; Dst
0x56EBCC: mov     [esp+240h+var_4], 0FFFFFFFFh
0x56EBD7: call    _memcpy
0x56EBDC: push    edi
0x56EBDD: call    FormHeapFree
0x56EBE2: add     esp, 10h
0x56EBE5: add     esi, 4Ch ; 'L'
0x56EBE8: sub     [esp+234h+var_1B8], 1
0x56EBED: jnz     loc_56EB50
0x56EBF3: mov     edx, [esp+234h+var_1CC]
0x56EBF7: mov     eax, [esp+234h+var_180]
0x56EBFE: mov     ecx, [esp+234h+var_214]
0x56EC02: mov     esi, [esp+234h+var_18C]
0x56EC09: push    edx
0x56EC0A: mov     edx, [esp+238h+var_204]
0x56EC0E: push    eax
0x56EC0F: mov     eax, [esi+2Ch]
0x56EC12: push    ecx
0x56EC13: push    ebp
0x56EC14: push    edx
0x56EC15: push    ebx
0x56EC16: push    eax
0x56EC17: mov     ecx, esi
0x56EC19: call    sub_56CFF0
0x56EC1E: jmp     short loc_56EC5F
0x56EC20: mov     edi, [esp+234h+var_1B4]
0x56EC27: test    edi, edi
0x56EC29: jle     short loc_56EC4B
0x56EC2B: mov     esi, [esp+234h+var_1CC]
0x56EC2F: add     esi, 44h ; 'D'
0x56EC32: mov     ecx, [esi]
0x56EC34: push    ecx
0x56EC35: call    FormHeapFree
0x56EC3A: mov     dword ptr [esi], 0
0x56EC40: add     esp, 4
0x56EC43: add     esi, 4Ch ; 'L'
0x56EC46: sub     edi, 1
0x56EC49: jnz     short loc_56EC32
0x56EC4B: mov     edx, [esp+234h+var_1CC]
0x56EC4F: push    edx
0x56EC50: call    FormHeapFree
0x56EC55: mov     esi, [esp+238h+var_18C]
0x56EC5C: add     esp, 4
0x56EC5F: mov     eax, [esp+234h+var_188]
0x56EC66: push    eax
0x56EC67: call    FormHeapFree
0x56EC6C: mov     ecx, [esp+238h+var_174]
0x56EC73: push    ecx
0x56EC74: call    FormHeapFree
0x56EC79: mov     edx, [esp+23Ch+Src]
0x56EC80: push    edx
0x56EC81: call    FormHeapFree
0x56EC86: mov     eax, [esp+240h+var_1A8]
0x56EC8D: push    eax
0x56EC8E: call    FormHeapFree
0x56EC93: mov     ecx, [esp+244h+var_1B0]
0x56EC9A: push    ecx
0x56EC9B: call    FormHeapFree
0x56ECA0: add     esp, 14h
0x56ECA3: cmp     [esp+234h+var_1B9], 0
0x56ECA8: jz      short loc_56ECB8
0x56ECAA: mov     edx, [esi+2Ch]
0x56ECAD: mov     ecx, [edx+0B4h]
0x56ECB3: call    sub_728B20
0x56ECB8: mov     ecx, [esp+234h+var_C]
0x56ECBF: mov     large fs:0, ecx
0x56ECC6: pop     ecx
0x56ECC7: pop     edi
0x56ECC8: pop     esi
0x56ECC9: pop     ebp
0x56ECCA: pop     ebx
0x56ECCB: mov     esp, ebp
0x56ECCD: pop     ebp
0x56ECCE: retn
