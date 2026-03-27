0x79DA10: sub     esp, 24h
0x79DA13: fldz
0x79DA15: push    ebx
0x79DA16: mov     ebx, [esp+28h+arg_0]
0x79DA1A: push    ebp
0x79DA1B: push    esi
0x79DA1C: push    edi
0x79DA1D: mov     ebp, ecx
0x79DA1F: push    ecx
0x79DA20: mov     ecx, [ebp+30h]
0x79DA23: fstp    [esp+38h+var_38]; float
0x79DA26: mov     [esp+38h+var_24], ebp
0x79DA2A: call    sub_784210
0x79DA2F: fmul    dword ptr [ebx+14h]
0x79DA32: mov     eax, [ebp+34h]
0x79DA35: mov     esi, [esp+34h+arg_4]
0x79DA39: xor     edi, edi
0x79DA3B: fstp    [esp+34h+var_20]
0x79DA3F: test    eax, eax
0x79DA41: fld1
0x79DA43: jbe     short loc_79DAC0
0x79DA45: fldz
0x79DA47: fstp    [esp+34h+var_C]
0x79DA4B: jmp     short loc_79DA52
0x79DA4D: align 10h
0x79DA50: fld1
0x79DA52: mov     ecx, edi
0x79DA54: test    ecx, ecx
0x79DA56: mov     [esp+34h+arg_0], ecx
0x79DA5A: fild    [esp+34h+arg_0]
0x79DA5E: jge     short loc_79DA66
0x79DA60: fadd    dword ptr ds:0A2FC78h
0x79DA66: test    eax, eax
0x79DA68: mov     [esp+34h+arg_0], eax
0x79DA6C: fild    [esp+34h+arg_0]
0x79DA70: jge     short loc_79DA78
0x79DA72: fadd    dword ptr ds:0A2FC78h
0x79DA78: fsub    st, st(2)
0x79DA7A: push    ecx
0x79DA7B: mov     ecx, [ebp+30h]
0x79DA7E: fdivp   st(1), st
0x79DA80: fsubp   st(1), st
0x79DA82: fstp    [esp+38h+arg_0]
0x79DA86: fld     [esp+38h+arg_0]
0x79DA8A: fld     st
0x79DA8C: fchs
0x79DA8E: fmul    dword ptr [ebx+14h]
0x79DA91: fstp    [esp+38h+var_8]
0x79DA95: fstp    [esp+38h+var_38]; float
0x79DA98: call    sub_784210
0x79DA9D: fmul    dword ptr [ebx+14h]
0x79DAA0: lea     edx, [esp+34h+var_C]
0x79DAA4: push    edx
0x79DAA5: mov     ecx, esi
0x79DAA7: fsub    [esp+38h+var_20]
0x79DAAB: fstp    [esp+38h+var_4]
0x79DAAF: call    sub_791630
0x79DAB4: mov     eax, [ebp+34h]
0x79DAB7: add     edi, 1
0x79DABA: cmp     edi, eax
0x79DABC: jb      short loc_79DA50
0x79DABE: jmp     short loc_79DAC2
0x79DAC0: fstp    st
0x79DAC2: mov     edi, [ebp+34h]
0x79DAC5: sub     edi, 2
0x79DAC8: js      short loc_79DB35
0x79DACA: lea     ebx, [edi+edi*2]
0x79DACD: add     ebx, ebx
0x79DACF: add     ebx, ebx
0x79DAD1: mov     eax, [esi+4]
0x79DAD4: test    eax, eax
0x79DAD6: jz      short loc_79DAF1
0x79DAD8: mov     ecx, [esi+8]
0x79DADB: sub     ecx, eax
0x79DADD: mov     eax, 2AAAAAABh
0x79DAE2: imul    ecx
0x79DAE4: sar     edx, 1
0x79DAE6: mov     eax, edx
0x79DAE8: shr     eax, 1Fh
0x79DAEB: add     eax, edx
0x79DAED: cmp     edi, eax
0x79DAEF: jb      short loc_79DAF6
0x79DAF1: call    __invalid_parameter_noinfo
0x79DAF6: mov     eax, [esi+4]
0x79DAF9: mov     edx, [eax+ebx+4]
0x79DAFD: mov     ecx, [eax+ebx]
0x79DB00: add     eax, ebx
0x79DB02: mov     eax, [eax+8]
0x79DB05: mov     [esp+34h+var_8], edx
0x79DB09: fld     [esp+34h+var_8]
0x79DB0D: fmul    qword ptr ds:0A3D360h
0x79DB13: mov     [esp+34h+var_C], ecx
0x79DB17: lea     ecx, [esp+34h+var_C]
0x79DB1B: push    ecx
0x79DB1C: mov     ecx, esi
0x79DB1E: fstp    [esp+38h+var_8]
0x79DB22: mov     [esp+38h+var_4], eax
0x79DB26: call    sub_791630
0x79DB2B: sub     edi, 1
0x79DB2E: sub     ebx, 0Ch
0x79DB31: test    edi, edi
0x79DB33: jge     short loc_79DAD1
0x79DB35: mov     ecx, esi
0x79DB37: xor     edi, edi
0x79DB39: call    sub_6F1080
0x79DB3E: test    eax, eax
0x79DB40: jbe     loc_79DFD5
0x79DB46: fldz
0x79DB48: fmul    st, st
0x79DB4A: fstp    [esp+34h+var_14]
0x79DB4E: mov     edi, edi
0x79DB50: mov     edx, [ebp+34h]
0x79DB53: sub     edx, 1
0x79DB56: cmp     edi, edx
0x79DB58: jnz     short loc_79DB65
0x79DB5A: fld     dword ptr ds:0B2BA00h
0x79DB60: jmp     loc_79DF30
0x79DB65: test    edi, edi
0x79DB67: jnz     loc_79DC3D
0x79DB6D: mov     eax, [esi+4]
0x79DB70: test    eax, eax
0x79DB72: jz      short loc_79DB8E
0x79DB74: mov     ecx, [esi+8]
0x79DB77: sub     ecx, eax
0x79DB79: mov     eax, 2AAAAAABh
0x79DB7E: imul    ecx
0x79DB80: sar     edx, 1
0x79DB82: mov     eax, edx
0x79DB84: shr     eax, 1Fh
0x79DB87: add     eax, edx
0x79DB89: cmp     eax, 1
0x79DB8C: ja      short loc_79DB93
0x79DB8E: call    __invalid_parameter_noinfo
0x79DB93: mov     eax, [esi+4]
0x79DB96: test    eax, eax
0x79DB98: lea     ecx, [eax+0Ch]
0x79DB9B: mov     [esp+34h+arg_4], ecx
0x79DB9F: jz      short loc_79DBB8
0x79DBA1: mov     ecx, [esi+8]
0x79DBA4: sub     ecx, eax
0x79DBA6: mov     eax, 2AAAAAABh
0x79DBAB: imul    ecx
0x79DBAD: sar     edx, 1
0x79DBAF: mov     eax, edx
0x79DBB1: shr     eax, 1Fh
0x79DBB4: add     eax, edx
0x79DBB6: jnz     short loc_79DBBD
0x79DBB8: call    __invalid_parameter_noinfo
0x79DBBD: mov     eax, [esi+4]
0x79DBC0: test    eax, eax
0x79DBC2: mov     ebp, eax
0x79DBC4: jz      short loc_79DBE0
0x79DBC6: mov     ecx, [esi+8]
0x79DBC9: sub     ecx, eax
0x79DBCB: mov     eax, 2AAAAAABh
0x79DBD0: imul    ecx
0x79DBD2: sar     edx, 1
0x79DBD4: mov     eax, edx
0x79DBD6: shr     eax, 1Fh
0x79DBD9: add     eax, edx
0x79DBDB: cmp     eax, 1
0x79DBDE: ja      short loc_79DBE5
0x79DBE0: call    __invalid_parameter_noinfo
0x79DBE5: mov     ebx, [esi+4]
0x79DBE8: test    ebx, ebx
0x79DBEA: jz      short loc_79DC03
0x79DBEC: mov     ecx, [esi+8]
0x79DBEF: sub     ecx, ebx
0x79DBF1: mov     eax, 2AAAAAABh
0x79DBF6: imul    ecx
0x79DBF8: sar     edx, 1
0x79DBFA: mov     ecx, edx
0x79DBFC: shr     ecx, 1Fh
0x79DBFF: add     ecx, edx
0x79DC01: jnz     short loc_79DC08
0x79DC03: call    __invalid_parameter_noinfo
0x79DC08: mov     edx, [esi+4]
0x79DC0B: fld     dword ptr [ebx+14h]
0x79DC0E: fsub    dword ptr [edx+8]
0x79DC11: mov     eax, [esp+34h+arg_4]
0x79DC15: fstp    [esp+34h+arg_0]
0x79DC19: fld     [esp+34h+arg_0]
0x79DC1D: fld     dword ptr [eax+4]
0x79DC20: fsub    dword ptr [ebp+4]
0x79DC23: fstp    [esp+34h+arg_0]
0x79DC27: fld     [esp+34h+arg_0]
0x79DC2B: call    sub_98598A
0x79DC30: fstp    [esp+34h+arg_0]
0x79DC34: fld     [esp+34h+arg_0]
0x79DC38: jmp     loc_79DF26
0x79DC3D: mov     ecx, esi
0x79DC3F: call    sub_6F1080
0x79DC44: sub     eax, 1
0x79DC47: cmp     edi, eax
0x79DC49: mov     eax, [esi+4]
0x79DC4C: jnz     loc_79DD44
0x79DC52: test    eax, eax
0x79DC54: jz      short loc_79DC6F
0x79DC56: mov     ecx, [esi+8]
0x79DC59: sub     ecx, eax
0x79DC5B: mov     eax, 2AAAAAABh
0x79DC60: imul    ecx
0x79DC62: sar     edx, 1
0x79DC64: mov     eax, edx
0x79DC66: shr     eax, 1Fh
0x79DC69: add     eax, edx
0x79DC6B: cmp     edi, eax
0x79DC6D: jb      short loc_79DC74
0x79DC6F: call    __invalid_parameter_noinfo
0x79DC74: mov     eax, [esi+4]
0x79DC77: lea     ebp, [edi+edi*2]
0x79DC7A: add     ebp, ebp
0x79DC7C: add     ebp, ebp
0x79DC7E: test    eax, eax
0x79DC80: lea     ecx, [eax+ebp]
0x79DC83: mov     [esp+34h+arg_4], ecx
0x79DC87: lea     ebx, [edi-1]
0x79DC8A: jz      short loc_79DCA5
0x79DC8C: mov     ecx, [esi+8]
0x79DC8F: sub     ecx, eax
0x79DC91: mov     eax, 2AAAAAABh
0x79DC96: imul    ecx
0x79DC98: sar     edx, 1
0x79DC9A: mov     eax, edx
0x79DC9C: shr     eax, 1Fh
0x79DC9F: add     eax, edx
0x79DCA1: cmp     ebx, eax
0x79DCA3: jb      short loc_79DCAA
0x79DCA5: call    __invalid_parameter_noinfo
0x79DCAA: mov     eax, [esi+4]
0x79DCAD: test    eax, eax
0x79DCAF: lea     edx, [ebx+ebx*2]
0x79DCB2: lea     ecx, [eax+edx*4]
0x79DCB5: mov     [esp+34h+var_20], ecx
0x79DCB9: jz      short loc_79DCD4
0x79DCBB: mov     ecx, [esi+8]
0x79DCBE: sub     ecx, eax
0x79DCC0: mov     eax, 2AAAAAABh
0x79DCC5: imul    ecx
0x79DCC7: sar     edx, 1
0x79DCC9: mov     eax, edx
0x79DCCB: shr     eax, 1Fh
0x79DCCE: add     eax, edx
0x79DCD0: cmp     edi, eax
0x79DCD2: jb      short loc_79DCD9
0x79DCD4: call    __invalid_parameter_noinfo
0x79DCD9: mov     eax, [esi+4]
0x79DCDC: test    eax, eax
0x79DCDE: mov     [esp+34h+arg_0], eax
0x79DCE2: jz      short loc_79DCFD
0x79DCE4: mov     ecx, [esi+8]
0x79DCE7: sub     ecx, eax
0x79DCE9: mov     eax, 2AAAAAABh
0x79DCEE: imul    ecx
0x79DCF0: sar     edx, 1
0x79DCF2: mov     eax, edx
0x79DCF4: shr     eax, 1Fh
0x79DCF7: add     eax, edx
0x79DCF9: cmp     ebx, eax
0x79DCFB: jb      short loc_79DD02
0x79DCFD: call    __invalid_parameter_noinfo
0x79DD02: mov     edx, [esp+34h+arg_0]
0x79DD06: fld     dword ptr [edx+ebp+8]
0x79DD0A: mov     ecx, [esi+4]
0x79DD0D: mov     edx, [esp+34h+arg_4]
0x79DD11: lea     eax, [ebx+ebx*2]
0x79DD14: fsub    dword ptr [ecx+eax*4+8]
0x79DD18: mov     eax, [esp+34h+var_20]
0x79DD1C: fstp    [esp+34h+arg_0]
0x79DD20: fld     [esp+34h+arg_0]
0x79DD24: fld     dword ptr [edx+4]
0x79DD27: fsub    dword ptr [eax+4]
0x79DD2A: fstp    [esp+34h+arg_0]
0x79DD2E: fld     [esp+34h+arg_0]
0x79DD32: call    sub_98598A
0x79DD37: fstp    [esp+34h+arg_0]
0x79DD3B: fld     [esp+34h+arg_0]
0x79DD3F: jmp     loc_79DF26
0x79DD44: test    eax, eax
0x79DD46: lea     ebx, [edi+1]
0x79DD49: jz      short loc_79DD64
0x79DD4B: mov     ecx, [esi+8]
0x79DD4E: sub     ecx, eax
0x79DD50: mov     eax, 2AAAAAABh
0x79DD55: imul    ecx
0x79DD57: sar     edx, 1
0x79DD59: mov     eax, edx
0x79DD5B: shr     eax, 1Fh
0x79DD5E: add     eax, edx
0x79DD60: cmp     ebx, eax
0x79DD62: jb      short loc_79DD69
0x79DD64: call    __invalid_parameter_noinfo
0x79DD69: mov     eax, [esi+4]
0x79DD6C: test    eax, eax
0x79DD6E: lea     ecx, [ebx+ebx*2]
0x79DD71: lea     edx, [eax+ecx*4]
0x79DD74: mov     [esp+34h+arg_4], edx
0x79DD78: jz      short loc_79DD93
0x79DD7A: mov     ecx, [esi+8]
0x79DD7D: sub     ecx, eax
0x79DD7F: mov     eax, 2AAAAAABh
0x79DD84: imul    ecx
0x79DD86: sar     edx, 1
0x79DD88: mov     eax, edx
0x79DD8A: shr     eax, 1Fh
0x79DD8D: add     eax, edx
0x79DD8F: cmp     edi, eax
0x79DD91: jb      short loc_79DD98
0x79DD93: call    __invalid_parameter_noinfo
0x79DD98: mov     eax, [esi+4]
0x79DD9B: lea     ebp, [edi+edi*2]
0x79DD9E: add     ebp, ebp
0x79DDA0: add     ebp, ebp
0x79DDA2: test    eax, eax
0x79DDA4: lea     ecx, [eax+ebp]
0x79DDA7: mov     [esp+34h+var_1C], ebp
0x79DDAB: mov     [esp+34h+var_20], ecx
0x79DDAF: jz      short loc_79DDCA
0x79DDB1: mov     ecx, [esi+8]
0x79DDB4: sub     ecx, eax
0x79DDB6: mov     eax, 2AAAAAABh
0x79DDBB: imul    ecx
0x79DDBD: sar     edx, 1
0x79DDBF: mov     eax, edx
0x79DDC1: shr     eax, 1Fh
0x79DDC4: add     eax, edx
0x79DDC6: cmp     ebx, eax
0x79DDC8: jb      short loc_79DDCF
0x79DDCA: call    __invalid_parameter_noinfo
0x79DDCF: mov     eax, [esi+4]
0x79DDD2: test    eax, eax
0x79DDD4: lea     edx, [ebx+ebx*2]
0x79DDD7: lea     ecx, [eax+edx*4]
0x79DDDA: mov     [esp+34h+arg_0], ecx
0x79DDDE: jz      short loc_79DDF9
0x79DDE0: mov     ecx, [esi+8]
0x79DDE3: sub     ecx, eax
0x79DDE5: mov     eax, 2AAAAAABh
0x79DDEA: imul    ecx
0x79DDEC: sar     edx, 1
0x79DDEE: mov     eax, edx
0x79DDF0: shr     eax, 1Fh
0x79DDF3: add     eax, edx
0x79DDF5: cmp     edi, eax
0x79DDF7: jb      short loc_79DDFE
0x79DDF9: call    __invalid_parameter_noinfo
0x79DDFE: mov     edx, [esp+34h+arg_0]
0x79DE02: fld     dword ptr [edx+8]
0x79DE05: mov     ebx, [esi+4]
0x79DE08: fsub    dword ptr [ebx+ebp+8]
0x79DE0C: mov     eax, [esp+34h+arg_4]
0x79DE10: mov     ecx, [esp+34h+var_20]
0x79DE14: fstp    [esp+34h+arg_0]
0x79DE18: fld     [esp+34h+arg_0]
0x79DE1C: fld     dword ptr [eax+4]
0x79DE1F: fsub    dword ptr [ecx+4]
0x79DE22: fstp    [esp+34h+arg_0]
0x79DE26: fld     [esp+34h+arg_0]
0x79DE2A: call    sub_98598A
0x79DE2F: fstp    [esp+34h+arg_0]
0x79DE33: test    ebx, ebx
0x79DE35: fld     [esp+34h+arg_0]
0x79DE39: fstp    [esp+34h+var_18]
0x79DE3D: jz      short loc_79DE58
0x79DE3F: mov     ecx, [esi+8]
0x79DE42: sub     ecx, ebx
0x79DE44: mov     eax, 2AAAAAABh
0x79DE49: imul    ecx
0x79DE4B: sar     edx, 1
0x79DE4D: mov     eax, edx
0x79DE4F: shr     eax, 1Fh
0x79DE52: add     eax, edx
0x79DE54: cmp     edi, eax
0x79DE56: jb      short loc_79DE5D
0x79DE58: call    __invalid_parameter_noinfo
0x79DE5D: mov     eax, [esi+4]
0x79DE60: add     ebp, eax
0x79DE62: test    eax, eax
0x79DE64: mov     [esp+34h+arg_4], ebp
0x79DE68: lea     ebx, [edi-1]
0x79DE6B: jz      short loc_79DE86
0x79DE6D: mov     ecx, [esi+8]
0x79DE70: sub     ecx, eax
0x79DE72: mov     eax, 2AAAAAABh
0x79DE77: imul    ecx
0x79DE79: sar     edx, 1
0x79DE7B: mov     eax, edx
0x79DE7D: shr     eax, 1Fh
0x79DE80: add     eax, edx
0x79DE82: cmp     ebx, eax
0x79DE84: jb      short loc_79DE8B
0x79DE86: call    __invalid_parameter_noinfo
0x79DE8B: mov     eax, [esi+4]
0x79DE8E: test    eax, eax
0x79DE90: lea     edx, [ebx+ebx*2]
0x79DE93: lea     ecx, [eax+edx*4]
0x79DE96: mov     [esp+34h+var_20], ecx
0x79DE9A: jz      short loc_79DEB5
0x79DE9C: mov     ecx, [esi+8]
0x79DE9F: sub     ecx, eax
0x79DEA1: mov     eax, 2AAAAAABh
0x79DEA6: imul    ecx
0x79DEA8: sar     edx, 1
0x79DEAA: mov     eax, edx
0x79DEAC: shr     eax, 1Fh
0x79DEAF: add     eax, edx
0x79DEB1: cmp     edi, eax
0x79DEB3: jb      short loc_79DEBA
0x79DEB5: call    __invalid_parameter_noinfo
0x79DEBA: mov     ebp, [esi+4]
0x79DEBD: test    ebp, ebp
0x79DEBF: jz      short loc_79DEDA
0x79DEC1: mov     ecx, [esi+8]
0x79DEC4: sub     ecx, ebp
0x79DEC6: mov     eax, 2AAAAAABh
0x79DECB: imul    ecx
0x79DECD: sar     edx, 1
0x79DECF: mov     eax, edx
0x79DED1: shr     eax, 1Fh
0x79DED4: add     eax, edx
0x79DED6: cmp     ebx, eax
0x79DED8: jb      short loc_79DEDF
0x79DEDA: call    __invalid_parameter_noinfo
0x79DEDF: mov     edx, [esp+34h+var_1C]
0x79DEE3: fld     dword ptr [edx+ebp+8]
0x79DEE7: mov     ecx, [esi+4]
0x79DEEA: mov     edx, [esp+34h+arg_4]
0x79DEEE: lea     eax, [ebx+ebx*2]
0x79DEF1: fsub    dword ptr [ecx+eax*4+8]
0x79DEF5: mov     eax, [esp+34h+var_20]
0x79DEF9: fstp    [esp+34h+arg_0]
0x79DEFD: fld     [esp+34h+arg_0]
0x79DF01: fld     dword ptr [edx+4]
0x79DF04: fsub    dword ptr [eax+4]
0x79DF07: fstp    [esp+34h+arg_0]
0x79DF0B: fld     [esp+34h+arg_0]
0x79DF0F: call    sub_98598A
0x79DF14: fstp    [esp+34h+arg_0]
0x79DF18: fld     [esp+34h+arg_0]
0x79DF1C: fadd    [esp+34h+var_18]
0x79DF20: fmul    qword ptr ds:0A2FAA0h
0x79DF26: fadd    dword ptr ds:0B2BA00h
0x79DF2C: mov     ebp, [esp+34h+var_24]
0x79DF30: fstp    [esp+34h+arg_0]
0x79DF34: fld     [esp+34h+arg_0]
0x79DF38: call    __CIcos
0x79DF3D: fstp    [esp+34h+arg_4]
0x79DF41: fld     [esp+34h+arg_4]
0x79DF45: fstp    [esp+34h+var_8]
0x79DF49: fld     [esp+34h+arg_0]
0x79DF4D: call    __CIsin
0x79DF52: fstp    [esp+34h+arg_0]
0x79DF56: fld     [esp+34h+arg_0]
0x79DF5A: fstp    [esp+34h+var_4]
0x79DF5E: fld     [esp+34h+var_8]
0x79DF62: fld     [esp+34h+var_4]
0x79DF66: fld     st(1)
0x79DF68: fmulp   st(2), st
0x79DF6A: fxch    st(1)
0x79DF6C: fadd    [esp+34h+var_14]
0x79DF70: fld     st(1)
0x79DF72: fmulp   st(2), st
0x79DF74: faddp   st(1), st
0x79DF76: fstp    [esp+34h+arg_0]
0x79DF7A: fld     [esp+34h+arg_0]
0x79DF7E: call    __CIsqrt
0x79DF83: fstp    [esp+34h+arg_0]
0x79DF87: fld     [esp+34h+arg_0]
0x79DF8B: lea     ecx, [esp+34h+var_C]
0x79DF8F: fld1
0x79DF91: push    ecx
0x79DF92: fdivrp  st(1), st
0x79DF94: mov     ecx, [esp+38h+arg_8]
0x79DF98: fstp    [esp+38h+arg_0]
0x79DF9C: fld     [esp+38h+arg_0]
0x79DFA0: fld     qword ptr ds:0A2FC68h
0x79DFA6: fmul    st, st(1)
0x79DFA8: fstp    [esp+38h+var_C]
0x79DFAC: fld     [esp+38h+var_8]
0x79DFB0: fmul    st, st(1)
0x79DFB2: fstp    [esp+38h+var_8]
0x79DFB6: fmul    [esp+38h+var_4]
0x79DFBA: fstp    [esp+38h+var_4]
0x79DFBE: call    sub_791630
0x79DFC3: mov     ecx, esi
0x79DFC5: add     edi, 1
0x79DFC8: call    sub_6F1080
0x79DFCD: cmp     edi, eax
0x79DFCF: jb      loc_79DB50
0x79DFD5: pop     edi
0x79DFD6: pop     esi
0x79DFD7: pop     ebp
0x79DFD8: pop     ebx
0x79DFD9: add     esp, 24h
0x79DFDC: retn    0Ch
