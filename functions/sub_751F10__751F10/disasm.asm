0x751F10: sub     esp, 1FCh
0x751F16: push    ebx
0x751F17: push    ebp
0x751F18: push    esi
0x751F19: push    edi
0x751F1A: mov     ebx, ecx
0x751F1C: mov     [esp+20Ch+var_1B8], ebx
0x751F20: mov     edx, [esp+20Ch+arg_C]
0x751F27: mov     eax, [edx+0B4h]
0x751F2D: movzx   ebp, [esp+20Ch+arg_8]
0x751F35: mov     esi, [eax+5Ch]
0x751F38: mov     edi, [eax+24h]
0x751F3B: mov     [esp+20Ch+var_184], edi
0x751F42: mov     edi, [eax+44h]
0x751F45: mov     [esp+20Ch+var_174], edi
0x751F4C: mov     edi, [eax+4Ch]
0x751F4F: mov     [esp+20Ch+var_160], edi
0x751F56: mov     edi, [eax+54h]
0x751F59: lea     ecx, ds:0[ebp*8]
0x751F60: sub     ecx, ebp
0x751F62: lea     esi, [esi+ecx*4]
0x751F65: mov     ecx, [eax+1Ch]
0x751F68: mov     [esp+20Ch+var_16C], edi
0x751F6F: mov     edi, [eax+58h]
0x751F72: mov     eax, [eax+60h]
0x751F75: mov     [esp+20Ch+var_198], eax
0x751F79: lea     eax, [ebp+ebp*2+0]
0x751F7D: add     eax, eax
0x751F7F: add     eax, eax
0x751F81: cmp     edx, [ebx+10h]
0x751F84: mov     [esp+20Ch+var_15C], edi
0x751F8B: mov     edi, [eax+ecx]
0x751F8E: mov     [esp+20Ch+var_1D0], edi
0x751F92: mov     edi, [eax+ecx+4]
0x751F96: mov     [esp+20Ch+var_1CC], edi
0x751F9A: mov     ecx, [eax+ecx+8]
0x751F9E: mov     [esp+20Ch+var_1C8], ecx
0x751FA2: mov     [esp+20Ch+var_154], eax
0x751FA9: mov     eax, [esi]
0x751FAB: mov     [esp+20Ch+var_1EC], eax
0x751FAF: mov     ecx, [esi+4]
0x751FB2: mov     [esp+20Ch+var_1E8], ecx
0x751FB6: mov     eax, [esi+8]
0x751FB9: mov     [esp+20Ch+var_194], esi
0x751FBD: mov     [esp+20Ch+var_1E4], eax
0x751FC1: jz      loc_7520A8
0x751FC7: lea     esi, [edx+64h]
0x751FCA: mov     ecx, 0Dh
0x751FCF: lea     edi, [esp+20Ch+var_108]
0x751FD6: rep movsd
0x751FD8: lea     ecx, [esp+20Ch+var_1D0]
0x751FDC: push    ecx
0x751FDD: lea     edx, [esp+210h+var_1DC]
0x751FE1: push    edx
0x751FE2: lea     ecx, [esp+214h+var_108]
0x751FE9: call    sub_53D4B0
0x751FEE: mov     ecx, [eax]
0x751FF0: mov     [esp+20Ch+var_1D0], ecx
0x751FF4: mov     edx, [eax+4]
0x751FF7: mov     [esp+20Ch+var_1CC], edx
0x751FFB: mov     eax, [eax+8]
0x751FFE: lea     ecx, [esp+20Ch+var_1EC]
0x752002: push    ecx
0x752003: lea     edx, [esp+210h+var_1DC]
0x752007: push    edx
0x752008: lea     ecx, [esp+214h+var_108]
0x75200F: mov     [esp+214h+var_1C8], eax
0x752013: call    sub_7101F0
0x752018: mov     ecx, [eax]
0x75201A: mov     esi, [ebx+10h]
0x75201D: mov     [esp+20Ch+var_1EC], ecx
0x752021: mov     edx, [eax+4]
0x752024: mov     [esp+20Ch+var_1E8], edx
0x752028: mov     eax, [eax+8]
0x75202B: mov     [esp+20Ch+var_1E4], eax
0x75202F: add     esi, 64h ; 'd'
0x752032: mov     ecx, 0Dh
0x752037: lea     edi, [esp+20Ch+var_A0]
0x75203E: rep movsd
0x752040: lea     ecx, [esp+20Ch+var_D4]
0x752047: push    ecx
0x752048: lea     ecx, [esp+210h+var_A0]
0x75204F: call    sub_718A80
0x752054: lea     edx, [esp+20Ch+var_1D0]
0x752058: push    edx
0x752059: lea     eax, [esp+210h+var_1DC]
0x75205D: push    eax
0x75205E: lea     ecx, [esp+214h+var_D4]
0x752065: call    sub_53D4B0
0x75206A: mov     ecx, [eax]
0x75206C: mov     [esp+20Ch+var_1D0], ecx
0x752070: mov     edx, [eax+4]
0x752073: mov     [esp+20Ch+var_1CC], edx
0x752077: mov     eax, [eax+8]
0x75207A: lea     ecx, [esp+20Ch+var_1EC]
0x75207E: push    ecx
0x75207F: lea     edx, [esp+210h+var_1DC]
0x752083: push    edx
0x752084: lea     ecx, [esp+214h+var_D4]
0x75208B: mov     [esp+214h+var_1C8], eax
0x75208F: call    sub_7101F0
0x752094: mov     ecx, [eax]
0x752096: mov     [esp+20Ch+var_1EC], ecx
0x75209A: mov     edx, [eax+4]
0x75209D: mov     [esp+20Ch+var_1E8], edx
0x7520A1: mov     eax, [eax+8]
0x7520A4: mov     [esp+20Ch+var_1E4], eax
0x7520A8: mov     ecx, [ebx+10h]
0x7520AB: mov     esi, [ecx+0B4h]
0x7520B1: mov     ecx, esi
0x7520B3: call    sub_74ED40
0x7520B8: movzx   eax, ax
0x7520BB: cmp     ax, ds:0A877E8h
0x7520C2: mov     [esp+20Ch+var_168], eax
0x7520C9: jz      loc_7526C7
0x7520CF: fld     [esp+20Ch+arg_0]
0x7520D6: movzx   ebx, ax
0x7520D9: fsub    [esp+20Ch+arg_4]
0x7520E0: mov     eax, [esi+5Ch]
0x7520E3: lea     edx, ds:0[ebx*8]
0x7520EA: sub     edx, ebx
0x7520EC: fstp    [esp+20Ch+var_1E0]
0x7520F0: lea     ecx, [eax+edx*4]
0x7520F3: fld     [esp+20Ch+var_1E8]
0x7520F7: mov     edx, [esi+1Ch]
0x7520FA: fld     [esp+20Ch+var_1EC]
0x7520FE: mov     eax, [esi+24h]
0x752101: fld     [esp+20Ch+var_1E4]
0x752105: mov     [esp+20Ch+var_164], ecx
0x75210C: mov     ecx, [esi+44h]
0x75210F: fld     st(1)
0x752111: fmulp   st(2), st
0x752113: mov     [esp+20Ch+var_18C], edx
0x75211A: mov     edx, [esi+4Ch]
0x75211D: mov     [esp+20Ch+var_17C], eax
0x752124: mov     eax, [esi+54h]
0x752127: fld     st(2)
0x752129: fmulp   st(3), st
0x75212B: mov     [esp+20Ch+var_190], ecx
0x75212F: mov     ecx, [esi+58h]
0x752132: fxch    st(1)
0x752134: mov     [esp+20Ch+var_188], edx
0x75213B: mov     edx, [esi+60h]
0x75213E: faddp   st(2), st
0x752140: mov     [esp+20Ch+var_180], eax
0x752147: mov     [esp+20Ch+var_170], ecx
0x75214E: fmul    st, st
0x752150: mov     [esp+20Ch+var_178], edx
0x752157: faddp   st(1), st
0x752159: fstp    [esp+20Ch+var_1F8]
0x75215D: fld     [esp+20Ch+var_1F8]
0x752161: call    __CIsqrt
0x752166: fstp    [esp+20Ch+var_1F8]
0x75216A: fld     [esp+20Ch+var_1F8]
0x75216E: fstp    [esp+20Ch+var_1B4]
0x752172: call    _rand
0x752177: mov     [esp+20Ch+var_1F8], eax
0x75217B: fild    [esp+20Ch+var_1F8]
0x75217F: mov     esi, [esp+20Ch+var_1B8]
0x752183: fdiv    qword ptr ds:0A3D5A8h
0x752189: fstp    [esp+20Ch+var_1F8]
0x75218D: fld     dword ptr [esi+24h]
0x752190: fmul    [esp+20Ch+var_1F8]
0x752194: fstp    [esp+20Ch+var_1F8]
0x752198: fld     [esp+20Ch+var_1F8]
0x75219C: fadd    qword ptr ds:0A2F928h
0x7521A2: fmul    [esp+20Ch+var_1B4]
0x7521A6: fstp    [esp+20Ch+var_158]
0x7521AD: call    _rand
0x7521B2: mov     [esp+20Ch+var_1F8], eax
0x7521B6: fild    [esp+20Ch+var_1F8]
0x7521BA: fdiv    qword ptr ds:0A3D5A8h
0x7521C0: fstp    [esp+20Ch+var_1F8]
0x7521C4: fld     dword ptr [esi+28h]
0x7521C7: fmul    [esp+20Ch+var_1F8]
0x7521CB: fmul    dword ptr ds:0B3F9A4h
0x7521D1: fstp    [esp+20Ch+var_1F8]
0x7521D5: call    _rand
0x7521DA: mov     [esp+20Ch+var_1F4], eax
0x7521DE: fild    [esp+20Ch+var_1F4]
0x7521E2: fdiv    qword ptr ds:0A3D5A8h
0x7521E8: fstp    [esp+20Ch+var_1F4]
0x7521EC: fld     [esp+20Ch+var_1F4]
0x7521F0: fmul    dword ptr ds:0B3F9A0h
0x7521F6: fstp    [esp+20Ch+var_1F0]
0x7521FA: fld     [esp+20Ch+var_1F8]
0x7521FE: call    __CIsin
0x752203: fstp    [esp+20Ch+var_1F4]
0x752207: fld     [esp+20Ch+var_1F4]
0x75220B: fstp    [esp+20Ch+var_1F4]
0x75220F: fld     [esp+20Ch+var_1F0]
0x752213: call    __CIcos
0x752218: fstp    [esp+20Ch+var_1FC]
0x75221C: fld     [esp+20Ch+var_1FC]
0x752220: fmul    [esp+20Ch+var_1F4]
0x752224: fstp    [esp+20Ch+var_1A4]
0x752228: fld     [esp+20Ch+var_1F0]
0x75222C: call    __CIsin
0x752231: fstp    [esp+20Ch+var_1FC]
0x752235: fld     [esp+20Ch+var_1FC]
0x752239: fmul    [esp+20Ch+var_1F4]
0x75223D: fstp    [esp+20Ch+var_1A0]
0x752241: fld     [esp+20Ch+var_1F8]
0x752245: call    __CIcos
0x75224A: fstp    [esp+20Ch+var_1FC]
0x75224E: fld     [esp+20Ch+var_1FC]
0x752252: lea     eax, [esp+20Ch+var_1C4]
0x752256: fstp    [esp+20Ch+var_19C]
0x75225A: push    eax
0x75225B: fld     [esp+210h+var_1EC]
0x75225F: lea     ecx, [esp+210h+var_1B0]
0x752263: fst     [esp+210h+var_1F0]
0x752267: push    ecx
0x752268: fld     [esp+214h+var_1E8]
0x75226C: lea     edx, [esp+214h+var_1DC]
0x752270: fst     [esp+214h+var_1FC]
0x752274: push    edx
0x752275: fld     st(1)
0x752277: lea     ecx, [esp+218h+var_12C]
0x75227E: fchs
0x752280: fstp    [esp+218h+var_1C4]
0x752284: fld     st
0x752286: fchs
0x752288: fstp    [esp+218h+var_1C0]
0x75228C: fldz
0x75228E: fst     [esp+218h+var_1BC]
0x752292: fst     [esp+218h+var_1B0]
0x752296: fst     [esp+218h+var_1AC]
0x75229A: fst     [esp+218h+var_1DC]
0x75229E: fstp    [esp+218h+var_1D8]
0x7522A2: fstp    [esp+218h+var_1A8]
0x7522A6: fstp    [esp+218h+var_1D4]
0x7522AA: call    sub_70FCC0
0x7522AF: fld     [esp+20Ch+var_1F0]
0x7522B3: fchs
0x7522B5: fstp    [esp+20Ch+var_1D8]
0x7522B9: fld     [esp+20Ch+var_1A0]
0x7522BD: fld     st
0x7522BF: fld     [esp+20Ch+var_1E4]
0x7522C3: fld     st
0x7522C5: fmulp   st(2), st
0x7522C7: fld     [esp+20Ch+var_19C]
0x7522CB: fld     st
0x7522CD: fld     [esp+20Ch+var_1E8]
0x7522D1: fld     st
0x7522D3: fmulp   st(2), st
0x7522D5: fxch    st(4)
0x7522D7: fsubrp  st(1), st
0x7522D9: fstp    [esp+20Ch+var_1C4]
0x7522DD: fld     [esp+20Ch+var_1EC]
0x7522E1: fld     st
0x7522E3: fmulp   st(2), st
0x7522E5: fld     [esp+20Ch+var_1A4]
0x7522E9: fld     st
0x7522EB: fmul    st, st(4)
0x7522ED: fsubp   st(3), st
0x7522EF: fxch    st(2)
0x7522F1: fstp    [esp+20Ch+var_1C0]
0x7522F5: fxch    st(1)
0x7522F7: fmulp   st(3), st
0x7522F9: fmulp   st(3), st
0x7522FB: fxch    st(1)
0x7522FD: fsubrp  st(2), st
0x7522FF: fxch    st(1)
0x752301: fstp    [esp+20Ch+var_1BC]
0x752305: fld     [esp+20Ch+var_1C0]
0x752309: fmul    [esp+20Ch+var_1D8]
0x75230D: fld     [esp+20Ch+var_1C4]
0x752311: fld     [esp+20Ch+var_1FC]
0x752315: fld     st
0x752317: fmulp   st(2), st
0x752319: fxch    st(2)
0x75231B: faddp   st(1), st
0x75231D: fld     [esp+20Ch+var_1BC]
0x752321: fmul    qword ptr ds:0A2FC68h
0x752327: faddp   st(1), st
0x752329: fstp    [esp+20Ch+var_1FC]
0x75232D: fld     [esp+20Ch+var_1FC]
0x752331: mov     ecx, 9
0x752336: fld     dword ptr ds:0A86530h
0x75233C: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x752341: fcom    st(1)
0x752343: lea     edi, [esp+20Ch+var_150]
0x75234A: rep movsd
0x75234C: fnstsw  ax
0x75234E: test    ah, 5
0x752351: jp      loc_752404
0x752357: fstp    st(1)
0x752359: push    ecx
0x75235A: fstp    st
0x75235C: lea     eax, [esp+210h+var_24]
0x752363: fld     [esp+210h+var_1F0]
0x752367: fld     [esp+210h+var_1B4]
0x75236B: fld     st
0x75236D: fld1
0x75236F: fdivrp  st(1), st
0x752371: fstp    [esp+210h+var_1FC]
0x752375: fld     [esp+210h+var_1FC]
0x752379: fstp    [esp+210h+var_210]; float
0x75237C: push    eax; int
0x75237D: push    ecx
0x75237E: fsubrp  st(3), st
0x752380: lea     ecx, [esp+218h+var_6C]
0x752387: fmul    st, st
0x752389: fld     st(1)
0x75238B: fmulp   st(2), st
0x75238D: faddp   st(1), st
0x75238F: fdivp   st(1), st
0x752391: fstp    [esp+218h+var_1FC]
0x752395: fld     [esp+218h+var_1FC]
0x752399: fstp    [esp+218h+var_218]; float
0x75239C: push    ecx; int
0x75239D: lea     ecx, [esp+21Ch+var_12C]
0x7523A4: call    sub_710190
0x7523A9: push    eax
0x7523AA: lea     edx, [esp+218h+var_A0]
0x7523B1: push    edx
0x7523B2: lea     ecx, [esp+21Ch+var_150]
0x7523B9: call    sub_70FFC0
0x7523BE: push    eax
0x7523BF: lea     eax, [esp+218h+var_D4]
0x7523C6: push    eax
0x7523C7: lea     ecx, [esp+21Ch+var_12C]
0x7523CE: call    NiMAtrix33_Multiply
0x7523D3: mov     ecx, eax
0x7523D5: call    sub_710190
0x7523DA: push    eax
0x7523DB: lea     ecx, [esp+210h+var_108]
0x7523E2: push    ecx
0x7523E3: lea     ecx, [esp+214h+var_150]
0x7523EA: call    sub_70FFC0
0x7523EF: mov     ecx, 9
0x7523F4: mov     esi, eax
0x7523F6: lea     edi, [esp+20Ch+var_150]
0x7523FD: rep movsd
0x7523FF: jmp     loc_752523
0x752404: fxch    st(1)
0x752406: fchs
0x752408: fcompp
0x75240A: fnstsw  ax
0x75240C: test    ah, 41h
0x75240F: jnz     loc_7524BB
0x752415: fld     [esp+20Ch+var_1F0]
0x752419: push    ecx
0x75241A: fld     [esp+210h+var_1B4]
0x75241E: lea     edx, [esp+210h+var_108]
0x752425: fld     st
0x752427: lea     eax, [esp+210h+var_D4]
0x75242E: fld1
0x752430: fdivrp  st(1), st
0x752432: fstp    [esp+210h+var_1FC]
0x752436: fld     [esp+210h+var_1FC]
0x75243A: fstp    [esp+210h+var_210]; float
0x75243D: push    edx; int
0x75243E: push    ecx
0x75243F: fsubrp  st(3), st
0x752441: lea     ecx, [esp+218h+var_12C]
0x752448: fmul    st, st
0x75244A: fld     st(1)
0x75244C: fmulp   st(2), st
0x75244E: faddp   st(1), st
0x752450: fdivp   st(1), st
0x752452: fstp    [esp+218h+var_1FC]
0x752456: fld     [esp+218h+var_1FC]
0x75245A: fstp    [esp+218h+var_218]; float
0x75245D: push    eax; int
0x75245E: call    sub_710190
0x752463: push    eax
0x752464: lea     ecx, [esp+218h+var_A0]
0x75246B: push    ecx
0x75246C: lea     ecx, [esp+21Ch+var_150]
0x752473: call    sub_710030
0x752478: push    eax
0x752479: lea     edx, [esp+218h+var_6C]
0x752480: push    edx
0x752481: lea     ecx, [esp+21Ch+var_12C]
0x752488: call    NiMAtrix33_Multiply
0x75248D: mov     ecx, eax
0x75248F: call    sub_710190
0x752494: push    eax
0x752495: lea     eax, [esp+210h+var_24]
0x75249C: push    eax
0x75249D: lea     ecx, [esp+214h+var_150]
0x7524A4: call    sub_710030
0x7524A9: mov     ecx, 9
0x7524AE: mov     esi, eax
0x7524B0: lea     edi, [esp+20Ch+var_150]
0x7524B7: rep movsd
0x7524B9: jmp     short loc_752523
0x7524BB: fstp    st
0x7524BD: fldz
0x7524BF: fcom    st(1)
0x7524C1: fnstsw  ax
0x7524C3: fstp    st(1)
0x7524C5: test    ah, 41h
0x7524C8: jnz     short loc_752521
0x7524CA: fst     [esp+20Ch+var_1DC]
0x7524CE: lea     ecx, [esp+20Ch+var_1DC]
0x7524D2: fst     [esp+20Ch+var_1D8]
0x7524D6: push    ecx
0x7524D7: fld     dword ptr ds:0A30634h
0x7524DD: lea     edx, [esp+210h+var_1B0]
0x7524E1: fst     [esp+210h+var_1D4]
0x7524E5: push    edx
0x7524E6: fst     [esp+214h+var_1AC]
0x7524EA: lea     eax, [esp+214h+var_1C4]
0x7524EE: fstp    [esp+214h+var_1C4]
0x7524F2: push    eax
0x7524F3: lea     ecx, [esp+218h+var_108]
0x7524FA: fst     [esp+218h+var_1B0]
0x7524FE: fst     [esp+218h+var_1A8]
0x752502: fst     [esp+218h+var_1C0]
0x752506: fstp    [esp+218h+var_1BC]
0x75250A: call    sub_70FCC0
0x75250F: mov     ecx, 9
0x752514: mov     esi, eax
0x752516: lea     edi, [esp+20Ch+var_150]
0x75251D: rep movsd
0x75251F: jmp     short loc_752523
0x752521: fstp    st
0x752523: fld     [esp+20Ch+var_158]
0x75252A: push    ecx
0x75252B: lea     ecx, [esp+210h+var_48]
0x752532: fstp    [esp+210h+var_210]; float
0x752535: push    ecx; int
0x752536: lea     ecx, [esp+214h+var_150]
0x75253D: call    sub_710190
0x752542: lea     edx, [esp+20Ch+var_1A4]
0x752546: push    edx
0x752547: lea     eax, [esp+210h+var_1DC]
0x75254B: push    eax
0x75254C: lea     ecx, [esp+214h+var_48]
0x752553: call    sub_7101F0
0x752558: fld     [esp+20Ch+var_1E0]
0x75255C: mov     ecx, [eax]
0x75255E: mov     esi, [esp+20Ch+var_164]
0x752565: mov     [esi], ecx
0x752567: mov     edx, [eax+4]
0x75256A: mov     [esi+4], edx
0x75256D: mov     eax, [eax+8]
0x752570: fstp    dword ptr [esi+0Ch]
0x752573: mov     [esi+8], eax
0x752576: call    _rand
0x75257B: mov     [esp+20Ch+var_1E0], eax
0x75257F: fild    [esp+20Ch+var_1E0]
0x752583: mov     eax, [esp+20Ch+var_1B8]
0x752587: mov     ecx, [esp+20Ch+var_194]
0x75258B: fdiv    qword ptr ds:0A3D5A8h
0x752591: fstp    [esp+20Ch+var_1E0]
0x752595: fld     [esp+20Ch+var_1E0]
0x752599: fsub    qword ptr ds:0A2FAA0h
0x75259F: fmul    dword ptr [eax+30h]
0x7525A2: fadd    dword ptr [eax+2Ch]
0x7525A5: mov     eax, [esp+20Ch+var_18C]
0x7525AC: fstp    dword ptr [esi+10h]
0x7525AF: mov     dx, [ecx+18h]
0x7525B3: add     dx, 1
0x7525B7: mov     [esi+18h], dx
0x7525BB: mov     ecx, [esp+20Ch+var_1D0]
0x7525BF: lea     edx, [ebx+ebx*2]
0x7525C2: add     edx, edx
0x7525C4: add     edx, edx
0x7525C6: mov     [edx+eax], ecx
0x7525C9: mov     ecx, [esp+20Ch+var_1CC]
0x7525CD: mov     [edx+eax+4], ecx
0x7525D1: mov     ecx, [esp+20Ch+var_1C8]
0x7525D5: mov     [edx+eax+8], ecx
0x7525D9: mov     ecx, [esp+20Ch+var_184]
0x7525E0: test    ecx, ecx
0x7525E2: jz      short loc_752613
0x7525E4: mov     edi, [esp+20Ch+var_17C]
0x7525EB: test    edi, edi
0x7525ED: jz      short loc_752613
0x7525EF: mov     eax, ebp
0x7525F1: shl     eax, 4
0x7525F4: add     eax, ecx
0x7525F6: mov     ecx, ebx
0x7525F8: shl     ecx, 4
0x7525FB: add     ecx, edi
0x7525FD: mov     edi, [eax]
0x7525FF: mov     [ecx], edi
0x752601: mov     edi, [eax+4]
0x752604: mov     [ecx+4], edi
0x752607: mov     edi, [eax+8]
0x75260A: mov     [ecx+8], edi
0x75260D: mov     eax, [eax+0Ch]
0x752610: mov     [ecx+0Ch], eax
0x752613: mov     ecx, [esp+20Ch+var_174]
0x75261A: test    ecx, ecx
0x75261C: jz      short loc_75262C
0x75261E: mov     eax, [esp+20Ch+var_190]
0x752622: test    eax, eax
0x752624: jz      short loc_75262C
0x752626: fld     dword ptr [ecx+ebp*4]
0x752629: fstp    dword ptr [eax+ebx*4]
0x75262C: mov     ecx, [esp+20Ch+var_160]
0x752633: test    ecx, ecx
0x752635: jz      short loc_752648
0x752637: mov     eax, [esp+20Ch+var_188]
0x75263E: test    eax, eax
0x752640: jz      short loc_752648
0x752642: fld     dword ptr [ecx+ebp*4]
0x752645: fstp    dword ptr [eax+ebx*4]
0x752648: mov     ecx, [esp+20Ch+var_16C]
0x75264F: test    ecx, ecx
0x752651: jz      short loc_752675
0x752653: mov     eax, [esp+20Ch+var_180]
0x75265A: test    eax, eax
0x75265C: jz      short loc_752675
0x75265E: fld     dword ptr [ecx+ebp*4]
0x752661: mov     ecx, [esp+20Ch+var_198]
0x752665: fstp    dword ptr [eax+ebx*4]
0x752668: mov     eax, [esp+20Ch+var_178]
0x75266F: fld     dword ptr [ecx+ebp*4]
0x752672: fstp    dword ptr [eax+ebx*4]
0x752675: mov     eax, [esp+20Ch+var_15C]
0x75267C: test    eax, eax
0x75267E: jz      short loc_7526A6
0x752680: mov     ecx, [esp+20Ch+var_170]
0x752687: test    ecx, ecx
0x752689: jz      short loc_7526A6
0x75268B: mov     edi, [esp+20Ch+var_154]
0x752692: add     eax, edi
0x752694: add     edx, ecx
0x752696: mov     ecx, [eax]
0x752698: mov     [edx], ecx
0x75269A: mov     ecx, [eax+4]
0x75269D: mov     [edx+4], ecx
0x7526A0: mov     eax, [eax+8]
0x7526A3: mov     [edx+8], eax
0x7526A6: fld     [esp+20Ch+arg_0]
0x7526AD: mov     ecx, [esp+20Ch+var_168]
0x7526B4: fsub    dword ptr [esi+0Ch]
0x7526B7: mov     edx, [esp+20Ch+var_1B8]
0x7526BB: push    ecx
0x7526BC: fstp    dword ptr [esi+14h]
0x7526BF: mov     ecx, [edx+10h]
0x7526C2: call    sub_749510
0x7526C7: pop     edi
0x7526C8: pop     esi
0x7526C9: pop     ebp
0x7526CA: pop     ebx
0x7526CB: add     esp, 1FCh
0x7526D1: retn    10h
