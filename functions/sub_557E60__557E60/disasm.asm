0x557E60: push    0FFFFFFFFh
0x557E62: push    offset SEH_557E60
0x557E67: mov     eax, large fs:0
0x557E6D: push    eax
0x557E6E: sub     esp, 50h
0x557E71: push    ebx
0x557E72: push    ebp
0x557E73: push    esi
0x557E74: push    edi
0x557E75: mov     eax, ds:0B30AACh
0x557E7A: xor     eax, esp
0x557E7C: push    eax; ArgList
0x557E7D: lea     eax, [esp+70h+var_C]
0x557E81: mov     large fs:0, eax
0x557E87: mov     ebp, ecx
0x557E89: mov     [esp+70h+var_54], ebp
0x557E8D: xor     eax, eax
0x557E8F: mov     [esp+70h+var_5C], eax
0x557E93: mov     [esp+70h+var_4], eax
0x557E97: call    sub_523D80
0x557E9C: mov     ebx, [esp+70h+arg_4]
0x557EA0: mov     esi, [ebx]
0x557EA2: mov     edi, eax
0x557EA4: cmp     esi, edi
0x557EA6: jz      short loc_557ED8
0x557EA8: test    esi, esi
0x557EAA: jz      short loc_557EC8
0x557EAC: lea     eax, [esi+4]
0x557EAF: push    eax; lpAddend
0x557EB0: call    dword ptr ds:0A2807Ch
0x557EB6: test    eax, eax
0x557EB8: jnz     short loc_557EC8
0x557EBA: test    esi, esi
0x557EBC: jz      short loc_557EC8
0x557EBE: mov     edx, [esi]
0x557EC0: mov     eax, [edx]
0x557EC2: push    1
0x557EC4: mov     ecx, esi
0x557EC6: call    eax
0x557EC8: test    edi, edi
0x557ECA: mov     [ebx], edi
0x557ECC: jz      short loc_557ED8
0x557ECE: add     edi, 4
0x557ED1: push    edi; lpAddend
0x557ED2: call    dword ptr ds:0A28078h
0x557ED8: cmp     dword ptr [ebp+0Ch], 0
0x557EDC: jz      loc_55803D
0x557EE2: mov     ebx, [esp+70h+arg_0]
0x557EE6: test    ebx, ebx
0x557EE8: jnz     short loc_557EF9
0x557EEA: call    sub_5538D0
0x557EEF: mov     ebx, eax
0x557EF1: test    ebx, ebx
0x557EF3: jz      loc_55803D
0x557EF9: push    ebp
0x557EFA: call    sub_551960
0x557EFF: add     esp, 4
0x557F02: test    al, al
0x557F04: jnz     short loc_557F3C
0x557F06: mov     esi, [ebp+0Ch]
0x557F09: cmp     dword ptr [esi+8], 0
0x557F0D: jnz     short loc_557F2F
0x557F0F: mov     ecx, esi
0x557F11: call    BSStringT_GetLen
0x557F16: test    eax, eax
0x557F18: jz      loc_55802C
0x557F1E: mov     esi, [esi]
0x557F20: push    esi; Src
0x557F21: call    sub_557C80
0x557F26: mov     ecx, [ebp+0Ch]
0x557F29: add     esp, 4
0x557F2C: mov     [ecx+8], eax
0x557F2F: mov     edx, [ebp+0Ch]
0x557F32: cmp     dword ptr [edx+8], 0
0x557F36: jz      loc_55802C
0x557F3C: mov     edi, ds:0A2813Ch
0x557F42: push    0; Comperand
0x557F44: lea     esi, [ebp+18h]
0x557F47: push    1; Exchange
0x557F49: push    esi; Destination
0x557F4A: mov     [esp+7Ch+Destination], esi
0x557F4E: mov     [esp+7Ch+var_24], esi
0x557F52: call    edi ; InterlockedCompareExchange
0x557F54: test    eax, eax
0x557F56: setz    al
0x557F59: mov     byte ptr [esp+70h+var_20], al
0x557F5D: test    al, al
0x557F5F: mov     byte ptr [esp+70h+var_4], 1
0x557F64: jz      loc_55802C
0x557F6A: mov     eax, [ebp+0Ch]
0x557F6D: mov     eax, [eax+8]
0x557F70: test    eax, eax
0x557F72: jnz     short loc_557F7F
0x557F74: push    1; Comperand
0x557F76: push    eax; Exchange
0x557F77: push    esi; Destination
0x557F78: call    edi ; InterlockedCompareExchange
0x557F7A: jmp     loc_55802C
0x557F7F: push    0
0x557F81: lea     ecx, [eax+4]
0x557F84: call    sub_556320
0x557F89: mov     ecx, [ebp+0Ch]
0x557F8C: mov     ecx, [ecx+8]
0x557F8F: mov     edi, [eax+4]
0x557F92: push    0
0x557F94: add     ecx, 4
0x557F97: call    sub_556320
0x557F9C: test    edi, edi
0x557F9E: mov     eax, [eax+8]
0x557FA1: mov     [esp+70h+var_58], eax
0x557FA5: jz      short loc_558023
0x557FA7: test    eax, eax
0x557FA9: jz      short loc_558023
0x557FAB: mov     edx, [ebp+0Ch]
0x557FAE: mov     eax, [edx+8]
0x557FB1: add     ebx, 30h ; '0'
0x557FB4: xor     esi, esi
0x557FB6: mov     [esp+70h+var_38], ebx
0x557FBA: add     eax, 8
0x557FBD: lea     ecx, [ecx+0]
0x557FC0: mov     edx, [eax]
0x557FC2: test    edx, edx
0x557FC4: mov     ebp, [ebx]
0x557FC6: jz      short loc_557FD4
0x557FC8: mov     ecx, [eax+4]
0x557FCB: sub     ecx, edx
0x557FCD: sar     ecx, 6
0x557FD0: cmp     ebp, ecx
0x557FD2: jb      short loc_558016
0x557FD4: add     esi, 1
0x557FD7: add     ebx, 18h
0x557FDA: add     eax, 10h
0x557FDD: cmp     esi, 2
0x557FE0: jb      short loc_557FC0
0x557FE2: fldz
0x557FE4: push    24h ; '$'; Size
0x557FE6: fst     [esp+74h+var_10]
0x557FEA: fst     [esp+74h+var_14]
0x557FEE: fst     [esp+74h+var_18]
0x557FF2: fstp    [esp+74h+var_1C]
0x557FF6: call    FormHeapAlloc
0x557FFB: add     esp, 4
0x557FFE: mov     [esp+70h+arg_0], eax
0x558002: test    eax, eax
0x558004: mov     byte ptr [esp+70h+var_4], 2
0x558009: jz      short loc_558055
0x55800B: push    0
0x55800D: mov     ecx, eax; this
0x55800F: call    ??0BSFaceGenImage@@QAE@XZ; BSFaceGenImage::BSFaceGenImage(void)
0x558014: jmp     short loc_558057
0x558016: push    offset aFacegenTriedTo; "FaceGen - Tried to apply a coordinate t"...
0x55801B: call    PrintError
0x558020: add     esp, 4
0x558023: lea     ecx, [esp+70h+var_24]
0x558027: call    sub_5563B0
0x55802C: lea     ecx, [esp+70h+var_5C]; this
0x558030: mov     [esp+70h+var_4], 0FFFFFFFFh
0x558038: call    sub_7016A0
0x55803D: xor     al, al
0x55803F: mov     ecx, [esp+70h+var_C]
0x558043: mov     large fs:0, ecx
0x55804A: pop     ecx
0x55804B: pop     edi
0x55804C: pop     esi
0x55804D: pop     ebp
0x55804E: pop     ebx
0x55804F: add     esp, 5Ch
0x558052: retn    0Ch
0x558055: xor     eax, eax
0x558057: push    eax; a2
0x558058: lea     ecx, [esp+74h+var_5C]; this
0x55805C: mov     byte ptr [esp+74h+var_4], 1
0x558061: call    NiSmartPointer_Set??
0x558066: mov     ecx, [esp+70h+var_5C]
0x55806A: mov     esi, [esp+70h+var_58]
0x55806E: mov     [ecx+1Ch], edi
0x558071: mov     [ecx+20h], esi
0x558074: call    sub_54E390
0x558079: imul    esi, edi
0x55807C: lea     ecx, [esp+70h+var_1C]
0x558080: push    ecx
0x558081: push    esi
0x558082: mov     ecx, eax
0x558084: mov     [esp+78h+var_2C], eax
0x558088: call    sub_54E230
0x55808D: xor     ecx, ecx
0x55808F: lea     eax, [esi+esi*2]
0x558092: mov     edx, 4
0x558097: mul     edx
0x558099: seto    cl
0x55809C: neg     ecx
0x55809E: or      ecx, eax
0x5580A0: push    ecx; Size
0x5580A1: call    FormHeapAlloc
0x5580A6: lea     ecx, [esi+esi*2]
0x5580A9: add     ecx, ecx
0x5580AB: add     ecx, ecx
0x5580AD: push    ecx
0x5580AE: push    0
0x5580B0: push    eax
0x5580B1: mov     [esp+80h+var_4C], eax
0x5580B5: call    __memset
0x5580BA: mov     esi, [esp+80h+arg_8]
0x5580C1: add     esp, 10h
0x5580C4: test    esi, esi
0x5580C6: jz      short loc_5580EF
0x5580C8: mov     edx, [esp+70h+var_54]
0x5580CC: mov     eax, [edx+0Ch]
0x5580CF: mov     eax, [eax+8]
0x5580D2: lea     ebx, [eax+4]
0x5580D5: mov     ecx, ebx
0x5580D7: mov     [esp+70h+var_50], esi
0x5580DB: call    sub_556300
0x5580E0: cmp     esi, eax
0x5580E2: jbe     short loc_558115
0x5580E4: mov     ecx, ebx
0x5580E6: call    sub_556300
0x5580EB: mov     esi, eax
0x5580ED: jmp     short loc_558111
0x5580EF: mov     ecx, [esp+70h+var_54]
0x5580F3: mov     edx, [ecx+0Ch]
0x5580F6: mov     ecx, [edx+8]
0x5580F9: add     ecx, 4
0x5580FC: call    sub_556300
0x558101: mov     esi, eax
0x558103: cmp     esi, 1Eh
0x558106: mov     [esp+70h+var_50], esi
0x55810A: jbe     short loc_558115
0x55810C: mov     esi, 1Eh
0x558111: mov     [esp+70h+var_50], esi
0x558115: test    esi, esi
0x558117: mov     [esp+70h+arg_0], 0
0x55811F: jbe     loc_558351
0x558125: mov     [esp+70h+arg_8], 0
0x55812D: lea     ecx, [ecx+0]
0x558130: mov     ebx, [esp+70h+var_54]
0x558134: mov     eax, [ebx+0Ch]
0x558137: mov     esi, [eax+8]
0x55813A: mov     ecx, [esi+8]
0x55813D: mov     ebp, [esp+70h+arg_0]
0x558141: add     esi, 4
0x558144: test    ecx, ecx
0x558146: jz      short loc_558154
0x558148: mov     eax, [esi+8]
0x55814B: sub     eax, ecx
0x55814D: sar     eax, 6
0x558150: cmp     ebp, eax
0x558152: jb      short loc_558159
0x558154: call    __invalid_parameter_noinfo
0x558159: mov     ecx, [esi+4]
0x55815C: mov     edx, [esp+70h+arg_8]
0x558160: cmp     [ecx+edx+4], edi
0x558164: jz      short loc_558178
0x558166: push    462h; int
0x55816B: push    offset a__TesSharedFac; "..\\TES Shared\\FaceGen\\BSFaceGenModel"...
0x558170: call    sub_6ED6D0
0x558175: add     esp, 8
0x558178: mov     eax, [ebx+0Ch]
0x55817B: mov     esi, [eax+8]
0x55817E: mov     ecx, [esi+8]
0x558181: add     esi, 4
0x558184: test    ecx, ecx
0x558186: jz      short loc_558194
0x558188: mov     eax, [esi+8]
0x55818B: sub     eax, ecx
0x55818D: sar     eax, 6
0x558190: cmp     ebp, eax
0x558192: jb      short loc_558199
0x558194: call    __invalid_parameter_noinfo
0x558199: mov     ecx, [esi+4]
0x55819C: mov     edx, [esp+70h+var_58]
0x5581A0: mov     eax, [esp+70h+arg_8]
0x5581A4: cmp     [ecx+eax+8], edx
0x5581A8: jz      short loc_5581BC
0x5581AA: push    463h; int
0x5581AF: push    offset a__TesSharedFac; "..\\TES Shared\\FaceGen\\BSFaceGenModel"...
0x5581B4: call    sub_6ED6D0
0x5581B9: add     esp, 8
0x5581BC: mov     esi, [esp+70h+var_38]
0x5581C0: mov     eax, [esi+0Ch]
0x5581C3: test    eax, eax
0x5581C5: jz      short loc_5581D1
0x5581C7: mov     ecx, [esi+10h]
0x5581CA: sub     ecx, eax
0x5581CC: sar     ecx, 2
0x5581CF: jnz     short loc_5581D6
0x5581D1: call    __invalid_parameter_noinfo
0x5581D6: mov     edx, [esi+4]
0x5581D9: mov     eax, [esi+0Ch]
0x5581DC: imul    edx, ebp
0x5581DF: fld     dword ptr [eax+edx*4]
0x5581E2: fmul    qword ptr ds:0A3B1B8h
0x5581E8: lea     eax, [eax+edx*4]
0x5581EB: call    Double_To_SInt32
0x5581F0: test    eax, eax
0x5581F2: mov     [esp+70h+var_34], eax
0x5581F6: jz      loc_558337
0x5581FC: mov     ebp, [esp+70h+var_54]
0x558200: mov     ecx, [ebp+0Ch]
0x558203: mov     ecx, [ecx+8]
0x558206: mov     ebx, [esp+70h+arg_0]
0x55820A: push    ebx
0x55820B: add     ecx, 4
0x55820E: call    sub_556320
0x558213: mov     edx, [ebp+0Ch]
0x558216: mov     ecx, [edx+8]
0x558219: mov     esi, [eax+0Ch]
0x55821C: push    ebx
0x55821D: add     ecx, 4
0x558220: call    sub_556320
0x558225: mov     eax, [eax+4]
0x558228: add     eax, esi
0x55822A: mov     [esp+70h+var_30], eax
0x55822E: mov     eax, [esp+70h+var_4C]
0x558232: mov     [esp+70h+var_48], 0
0x55823A: mov     [esp+70h+var_44], eax
0x55823E: mov     edi, edi
0x558240: mov     ebx, [esp+70h+var_54]
0x558244: mov     ecx, [ebx+0Ch]
0x558247: mov     esi, [ecx+8]
0x55824A: mov     ecx, [esi+8]
0x55824D: add     esi, 4
0x558250: test    ecx, ecx
0x558252: jz      short loc_558262
0x558254: mov     eax, [esi+8]
0x558257: sub     eax, ecx
0x558259: sar     eax, 6
0x55825C: cmp     [esp+70h+arg_0], eax
0x558260: jb      short loc_558267
0x558262: call    __invalid_parameter_noinfo
0x558267: mov     edx, [esi+4]
0x55826A: mov     eax, [esp+70h+arg_8]
0x55826E: fld     dword ptr [edx+eax]
0x558271: fmul    qword ptr ds:0A3B1B8h
0x558277: call    Double_To_SInt32
0x55827C: mov     ecx, [ebx+0Ch]
0x55827F: mov     esi, [ecx+8]
0x558282: add     esi, 4
0x558285: mov     ebp, eax
0x558287: mov     eax, [esi+4]
0x55828A: imul    ebp, [esp+70h+var_34]
0x55828F: test    eax, eax
0x558291: jz      short loc_5582A1
0x558293: mov     ecx, [esi+8]
0x558296: sub     ecx, eax
0x558298: sar     ecx, 6
0x55829B: cmp     [esp+70h+arg_0], ecx
0x55829F: jb      short loc_5582A6
0x5582A1: call    __invalid_parameter_noinfo
0x5582A6: mov     esi, [esi+4]
0x5582A9: add     esi, [esp+70h+arg_8]
0x5582AD: mov     ecx, [esp+70h+var_48]
0x5582B1: mov     eax, [ecx+esi+14h]
0x5582B5: test    eax, eax
0x5582B7: lea     ebx, [ecx+esi+14h]
0x5582BB: jz      short loc_5582C5
0x5582BD: mov     edx, [ecx+esi+18h]
0x5582C1: sub     edx, eax
0x5582C3: jnz     short loc_5582CA
0x5582C5: call    __invalid_parameter_noinfo
0x5582CA: cmp     [esp+70h+var_58], 0
0x5582CF: mov     edx, [ebx]
0x5582D1: jbe     short loc_55831E
0x5582D3: mov     ecx, [esp+70h+var_44]
0x5582D7: mov     eax, [esp+70h+var_58]
0x5582DB: lea     esi, [edi+edi*2]
0x5582DE: add     esi, esi
0x5582E0: add     esi, esi
0x5582E2: mov     [esp+70h+var_40], ecx
0x5582E6: mov     [esp+70h+var_3C], eax
0x5582EA: lea     ebx, [ebx+0]
0x5582F0: xor     eax, eax
0x5582F2: test    edi, edi
0x5582F4: jbe     short loc_558309
0x5582F6: movsx   ebx, byte ptr [eax+edx]
0x5582FA: imul    ebx, ebp
0x5582FD: add     [ecx], ebx
0x5582FF: add     eax, 1
0x558302: add     ecx, 0Ch
0x558305: cmp     eax, edi
0x558307: jb      short loc_5582F6
0x558309: mov     ecx, [esp+70h+var_40]
0x55830D: add     edx, [esp+70h+var_30]
0x558311: add     ecx, esi
0x558313: sub     [esp+70h+var_3C], 1
0x558318: mov     [esp+70h+var_40], ecx
0x55831C: jnz     short loc_5582F0
0x55831E: mov     eax, [esp+70h+var_48]
0x558322: add     [esp+70h+var_44], 4
0x558327: add     eax, 10h
0x55832A: cmp     eax, 30h ; '0'
0x55832D: mov     [esp+70h+var_48], eax
0x558331: jb      loc_558240
0x558337: mov     eax, [esp+70h+arg_0]
0x55833B: add     [esp+70h+arg_8], 40h ; '@'
0x558340: add     eax, 1
0x558343: cmp     eax, [esp+70h+var_50]
0x558347: mov     [esp+70h+arg_0], eax
0x55834B: jb      loc_558130
0x558351: fld     qword ptr ds:0A64AA0h
0x558357: xor     ebx, ebx
0x558359: mov     ebp, [esp+70h+var_2C]
0x55835D: mov     esi, [ebp+4]
0x558360: cmp     esi, [ebp+8]
0x558363: mov     [esp+70h+var_3C], esi
0x558367: jbe     short loc_558379
0x558369: fstp    st
0x55836B: call    __invalid_parameter_noinfo
0x558370: fld     qword ptr ds:0A64AA0h
0x558376: cmp     esi, [ebp+8]
0x558379: jb      short loc_558388
0x55837B: fstp    st
0x55837D: call    __invalid_parameter_noinfo
0x558382: fld     qword ptr ds:0A64AA0h
0x558388: cmp     [esp+70h+var_58], 0
0x55838D: jbe     loc_558460
0x558393: mov     ecx, [esp+70h+var_4C]
0x558397: lea     eax, [edi+edi*2]
0x55839A: add     eax, eax
0x55839C: add     eax, eax
0x55839E: mov     [esp+70h+var_34], eax
0x5583A2: mov     eax, edi
0x5583A4: xor     ebp, ebp
0x5583A6: shl     eax, 4
0x5583A9: lea     edx, [ecx+ebx*4]
0x5583AC: mov     [esp+70h+var_30], eax
0x5583B0: mov     eax, [esp+70h+var_3C]
0x5583B4: mov     [esp+70h+arg_8], edx
0x5583B8: mov     edx, [esp+70h+var_58]
0x5583BC: lea     ecx, [eax+ebx*4]
0x5583BF: mov     [esp+70h+arg_0], ecx
0x5583C3: mov     [esp+70h+var_40], edx
0x5583C7: xor     esi, esi
0x5583C9: cmp     edi, 4
0x5583CC: jl      short loc_558410
0x5583CE: mov     ecx, [esp+70h+arg_0]
0x5583D2: mov     eax, [esp+70h+arg_8]
0x5583D6: lea     edx, [edi-4]
0x5583D9: shr     edx, 2
0x5583DC: add     edx, 1
0x5583DF: lea     esi, ds:0[edx*4]
0x5583E6: fild    dword ptr [eax]
0x5583E8: add     eax, 30h ; '0'
0x5583EB: add     ecx, 40h ; '@'
0x5583EE: sub     edx, 1
0x5583F1: fmul    st, st(1)
0x5583F3: fstp    dword ptr [ecx-40h]
0x5583F6: fild    dword ptr [eax-24h]
0x5583F9: fmul    st, st(1)
0x5583FB: fstp    dword ptr [ecx-30h]
0x5583FE: fild    dword ptr [eax-18h]
0x558401: fmul    st, st(1)
0x558403: fstp    dword ptr [ecx-20h]
0x558406: fild    dword ptr [eax-0Ch]
0x558409: fmul    st, st(1)
0x55840B: fstp    dword ptr [ecx-10h]
0x55840E: jnz     short loc_5583E6
0x558410: cmp     esi, edi
0x558412: jnb     short loc_558443
0x558414: mov     edx, [esp+70h+var_3C]
0x558418: lea     eax, [esi+ebp]
0x55841B: lea     ecx, [ebx+eax*4]
0x55841E: lea     edx, [edx+ecx*4]
0x558421: lea     ecx, [ebx+eax*2]
0x558424: add     ecx, eax
0x558426: mov     eax, [esp+70h+var_4C]
0x55842A: lea     ecx, [eax+ecx*4]
0x55842D: mov     eax, edi
0x55842F: sub     eax, esi
0x558431: fild    dword ptr [ecx]
0x558433: add     ecx, 0Ch
0x558436: add     edx, 10h
0x558439: sub     eax, 1
0x55843C: fmul    st, st(1)
0x55843E: fstp    dword ptr [edx-10h]
0x558441: jnz     short loc_558431
0x558443: mov     ecx, [esp+70h+var_30]
0x558447: mov     edx, [esp+70h+var_34]
0x55844B: add     [esp+70h+arg_0], ecx
0x55844F: add     [esp+70h+arg_8], edx
0x558453: add     ebp, edi
0x558455: sub     [esp+70h+var_40], 1
0x55845A: jnz     loc_5583C7
0x558460: add     ebx, 1
0x558463: cmp     ebx, 3
0x558466: jl      loc_558359
0x55846C: mov     eax, [esp+70h+var_4C]
0x558470: fstp    st
0x558472: push    eax
0x558473: call    FormHeapFree
0x558478: fld     dword ptr ds:0A3D65Ch
0x55847E: mov     ebx, [esp+74h+var_5C]
0x558482: add     esp, 4
0x558485: push    offset unk_B26040; int
0x55848A: sub     esp, 0Ch
0x55848D: fstp    [esp+80h+var_78]; float
0x558491: mov     ecx, ebx
0x558493: fld     dword ptr ds:0A40098h
0x558499: fstp    [esp+80h+var_7C]; float
0x55849D: fld     dword ptr ds:0A64A9Ch
0x5584A3: fstp    [esp+80h+var_80]; float
0x5584A6: call    sub_54DA40
0x5584AB: mov     ebp, [esp+70h+arg_4]
0x5584AF: mov     esi, [ebp+0]
0x5584B2: mov     edi, eax
0x5584B4: cmp     esi, edi
0x5584B6: jz      short loc_5584E9
0x5584B8: test    esi, esi
0x5584BA: jz      short loc_5584D8
0x5584BC: lea     ecx, [esi+4]
0x5584BF: push    ecx; lpAddend
0x5584C0: call    dword ptr ds:0A2807Ch
0x5584C6: test    eax, eax
0x5584C8: jnz     short loc_5584D8
0x5584CA: test    esi, esi
0x5584CC: jz      short loc_5584D8
0x5584CE: mov     edx, [esi]
0x5584D0: mov     eax, [edx]
0x5584D2: push    1
0x5584D4: mov     ecx, esi
0x5584D6: call    eax
0x5584D8: test    edi, edi
0x5584DA: mov     [ebp+0], edi
0x5584DD: jz      short loc_5584E9
0x5584DF: add     edi, 4
0x5584E2: push    edi; lpAddend
0x5584E3: call    dword ptr ds:0A28078h
0x5584E9: mov     ecx, [esp+70h+Destination]
0x5584ED: push    1; Comperand
0x5584EF: push    0; Exchange
0x5584F1: push    ecx; Destination
0x5584F2: call    dword ptr ds:0A2813Ch
0x5584F8: lea     edx, [ebx+4]
0x5584FB: push    edx; lpAddend
0x5584FC: mov     [esp+74h+var_4], 0FFFFFFFFh
0x558504: call    dword ptr ds:0A2807Ch
0x55850A: test    eax, eax
0x55850C: jnz     short loc_558518
0x55850E: mov     eax, [ebx]
0x558510: mov     edx, [eax]
0x558512: push    1
0x558514: mov     ecx, ebx
0x558516: call    edx
0x558518: mov     al, 1
0x55851A: jmp     loc_55803F
