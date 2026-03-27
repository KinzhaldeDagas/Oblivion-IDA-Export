0x681DF0: push    0FFFFFFFFh
0x681DF2: push    offset SEH_681DF0
0x681DF7: mov     eax, large fs:0
0x681DFD: push    eax
0x681DFE: sub     esp, 0C4h
0x681E04: push    ebx
0x681E05: push    ebp
0x681E06: push    esi
0x681E07: push    edi
0x681E08: mov     eax, ds:0B30AACh
0x681E0D: xor     eax, esp
0x681E0F: push    eax
0x681E10: lea     eax, [esp+0E4h+var_C]
0x681E17: mov     large fs:0, eax
0x681E1D: mov     ebp, ecx
0x681E1F: mov     edi, [esp+0E4h+arg_0]
0x681E26: test    edi, edi
0x681E28: jz      loc_682413
0x681E2E: mov     ecx, [esp+0E4h+arg_4]
0x681E35: test    ecx, ecx
0x681E37: jz      loc_682413
0x681E3D: call    sub_6899C0
0x681E42: mov     ecx, [eax]
0x681E44: mov     edx, [eax+4]
0x681E47: mov     esi, [ebp+0]
0x681E4A: mov     eax, [eax+8]
0x681E4D: xor     ebx, ebx
0x681E4F: test    esi, esi
0x681E51: mov     [esp+0E4h+var_B4], ecx
0x681E55: mov     [esp+0E4h+var_B0], edx
0x681E59: mov     [esp+0E4h+var_AC], eax
0x681E5D: jz      loc_681F95
0x681E63: cmp     ds:0B15750h, bl
0x681E69: jz      loc_681F95
0x681E6F: mov     edx, [esi]
0x681E71: mov     eax, [edx+58h]
0x681E74: push    offset aAvoidnode; "AvoidNode"
0x681E79: mov     ecx, esi
0x681E7B: call    eax
0x681E7D: test    eax, eax
0x681E7F: jz      short loc_681E94
0x681E81: mov     edx, [eax]
0x681E83: mov     ecx, eax
0x681E85: mov     eax, [edx+8]
0x681E88: call    eax
0x681E8A: mov     ebx, eax
0x681E8C: test    ebx, ebx
0x681E8E: jnz     loc_681F31
0x681E94: push    0DCh ; 'Ü'; Size
0x681E99: call    FormHeapAlloc
0x681E9E: add     esp, 4
0x681EA1: mov     [esp+0E4h+var_D0], eax
0x681EA5: xor     ebx, ebx
0x681EA7: cmp     eax, ebx
0x681EA9: mov     [esp+0E4h+var_4], ebx
0x681EB0: jz      short loc_681EBC
0x681EB2: push    ebx
0x681EB3: mov     ecx, eax; this
0x681EB5: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x681EBA: mov     ebx, eax
0x681EBC: mov     [esp+0E4h+var_4], 0FFFFFFFFh
0x681EC7: call    sub_4E70B0
0x681ECC: push    eax; a2
0x681ECD: mov     ecx, ebx; this
0x681ECF: call    sub_405680
0x681ED4: push    offset aAvoidnode; "AvoidNode"
0x681ED9: mov     ecx, ebx
0x681EDB: call    NiObjectNET_SetName
0x681EE0: push    1Ch; Size
0x681EE2: call    FormHeapAlloc
0x681EE7: add     esp, 4
0x681EEA: mov     [esp+0E4h+var_D0], eax
0x681EEE: test    eax, eax
0x681EF0: mov     [esp+0E4h+var_4], 1
0x681EFB: jz      short loc_681F06
0x681EFD: mov     ecx, eax
0x681EFF: call    sub_4059D0
0x681F04: jmp     short loc_681F08
0x681F06: xor     eax, eax
0x681F08: or      word ptr [eax+18h], 1
0x681F0D: push    eax; a2
0x681F0E: mov     ecx, ebx; this
0x681F10: mov     [esp+0E8h+var_4], 0FFFFFFFFh
0x681F1B: call    sub_405680
0x681F20: mov     edx, [esi]
0x681F22: mov     eax, [edx+84h]
0x681F28: push    1
0x681F2A: push    ebx
0x681F2B: mov     ecx, esi
0x681F2D: call    eax
0x681F2F: jmp     short loc_681F95
0x681F31: movzx   eax, word ptr [ebx+0B6h]
0x681F38: xor     edi, edi
0x681F3A: test    eax, eax
0x681F3C: mov     [esp+0E4h+var_C8], eax
0x681F40: jbe     short loc_681F83
0x681F42: mov     edx, [ebx]
0x681F44: mov     edx, [edx+8Ch]
0x681F4A: push    edi
0x681F4B: lea     eax, [esp+0E8h+var_D0]
0x681F4F: push    eax
0x681F50: mov     ecx, ebx
0x681F52: call    edx
0x681F54: mov     eax, [esp+0E4h+var_D0]
0x681F58: test    eax, eax
0x681F5A: jz      short loc_681F7A
0x681F5C: mov     esi, eax
0x681F5E: add     eax, 4
0x681F61: push    eax; lpAddend
0x681F62: call    dword ptr ds:0A2807Ch
0x681F68: test    eax, eax
0x681F6A: jnz     short loc_681F7A
0x681F6C: test    esi, esi
0x681F6E: jz      short loc_681F7A
0x681F70: mov     eax, [esi]
0x681F72: mov     edx, [eax]
0x681F74: push    1
0x681F76: mov     ecx, esi
0x681F78: call    edx
0x681F7A: add     edi, 1
0x681F7D: cmp     edi, [esp+0E4h+var_C8]
0x681F81: jb      short loc_681F42
0x681F83: lea     ecx, [ebx+0ACh]
0x681F89: call    sub_477EF0
0x681F8E: mov     edi, [esp+0E4h+arg_0]
0x681F95: mov     eax, [edi]
0x681F97: mov     edx, [eax+174h]
0x681F9D: mov     ecx, edi
0x681F9F: call    edx
0x681FA1: fld     [esp+0E4h+var_B0]
0x681FA5: fsub    dword ptr [eax+4]
0x681FA8: fstp    [esp+0E4h+var_D0]
0x681FAC: fld     [esp+0E4h+var_AC]
0x681FB0: fsub    dword ptr [eax+8]
0x681FB3: fstp    [esp+0E4h+var_C8]
0x681FB7: fld     [esp+0E4h+var_B4]
0x681FBB: fsub    dword ptr [eax]
0x681FBD: lea     eax, [esp+0E4h+var_8C]
0x681FC1: push    eax
0x681FC2: fstp    [esp+0E8h+var_8C]
0x681FC6: fld     [esp+0E8h+var_D0]
0x681FCA: fstp    [esp+0E8h+var_88]
0x681FCE: fld     [esp+0E8h+var_C8]
0x681FD2: fstp    [esp+0E8h+var_84]
0x681FD6: call    sub_683CB0
0x681FDB: fstp    [esp+0E8h+var_D0]
0x681FDF: mov     ecx, ebp
0x681FE1: fld     [esp+0E8h+var_D0]
0x681FE5: fstp    [esp+0E8h+var_E8]; float
0x681FE8: call    sub_680E70
0x681FED: push    30h ; '0'
0x681FEF: lea     ecx, [esp+0E8h+var_60]
0x681FF6: push    0
0x681FF8: push    ecx
0x681FF9: call    __memset
0x681FFE: add     esp, 0Ch
0x682001: cmp     byte ptr ds:0B15750h, 0
0x682008: jz      short loc_68201B
0x68200A: lea     edx, [esp+0E4h+var_60]
0x682011: push    edx
0x682012: push    edi
0x682013: call    sub_680F60
0x682018: add     esp, 8
0x68201B: fld     dword ptr ds:0B33E9Ch
0x682021: movsx   eax, byte ptr [ebp+0Ch]
0x682025: cmp     eax, 3
0x682028: fstp    [esp+0E4h+var_C8]
0x68202C: fld     dword ptr [ebp+24h]
0x68202F: fstp    [esp+0E4h+var_D0]
0x682033: jl      loc_682104
0x682039: cmp     eax, 4
0x68203C: jle     short loc_6820A5
0x68203E: cmp     eax, 5
0x682041: jnz     loc_682104
0x682047: fld     [esp+0E4h+var_C8]
0x68204B: push    3Fh ; '?'
0x68204D: fadd    dword ptr [ebp+1Ch]
0x682050: mov     ecx, edi
0x682052: fstp    [esp+0E8h+var_D0]
0x682056: fld     [esp+0E8h+var_D0]
0x68205A: fld     dword ptr ds:0B3A4A8h
0x682060: fcomp   st(1)
0x682062: fnstsw  ax
0x682064: test    ah, 41h
0x682067: jnz     short loc_682084
0x682069: fstp    dword ptr [ebp+1Ch]
0x68206C: call    sub_5E05F0
0x682071: mov     al, [ebp+0Ch]
0x682074: push    edi
0x682075: mov     ecx, ebp
0x682077: mov     [ebp+0Dh], al
0x68207A: call    sub_680D30
0x68207F: jmp     loc_682413
0x682084: fstp    st
0x682086: call    sub_5E05F0
0x68208B: fldz
0x68208D: push    edi
0x68208E: mov     ecx, ebp
0x682090: fstp    dword ptr [ebp+1Ch]
0x682093: mov     byte ptr [ebp+0Ch], 0
0x682097: mov     byte ptr [ebp+0Dh], 0
0x68209B: call    sub_680D30
0x6820A0: jmp     loc_682413
0x6820A5: fld     dword ptr [ebp+20h]
0x6820A8: fsub    [esp+0E4h+var_C8]
0x6820AC: fstp    [esp+0E4h+var_D0]
0x6820B0: fldz
0x6820B2: fld     [esp+0E4h+var_D0]
0x6820B6: fcom    st(1)
0x6820B8: fnstsw  ax
0x6820BA: test    ah, 41h
0x6820BD: jnz     short loc_6820E5
0x6820BF: fstp    st(1)
0x6820C1: push    ecx
0x6820C2: fstp    dword ptr [ebp+20h]
0x6820C5: mov     ecx, ebp
0x6820C7: fld     dword ptr [ebp+10h]
0x6820CA: fstp    [esp+0E8h+var_E8]; float
0x6820CD: call    sub_680E70
0x6820D2: mov     cl, [ebp+0Ch]
0x6820D5: mov     [ebp+0Dh], cl
0x6820D8: push    edi
0x6820D9: mov     ecx, ebp
0x6820DB: call    sub_680D30
0x6820E0: jmp     loc_682413
0x6820E5: fstp    st
0x6820E7: push    edi
0x6820E8: mov     ecx, ebp
0x6820EA: fstp    dword ptr [ebp+20h]
0x6820ED: mov     byte ptr [ebp+0Ch], 0
0x6820F1: mov     byte ptr [ebp+0Dh], 0
0x6820F5: call    sub_680D30
0x6820FA: fldz
0x6820FC: fstp    dword ptr [ebp+10h]
0x6820FF: jmp     loc_682413
0x682104: push    edi
0x682105: mov     ecx, ebp
0x682107: call    sub_681D90
0x68210C: fldz
0x68210E: mov     cl, al
0x682110: test    cl, cl
0x682112: mov     byte ptr [esp+0E4h+var_CC+3], cl
0x682116: jz      short loc_682159
0x682118: cmp     byte ptr [ebp+30h], 0
0x68211C: fstp    st
0x68211E: jz      short loc_682129
0x682120: mov     byte ptr [ebp+0Ch], 7
0x682124: jmp     loc_682413
0x682129: push    edi
0x68212A: mov     byte ptr [ebp+0Ch], 0
0x68212E: call    Actor__CanUSeDoor?
0x682133: add     esp, 4
0x682136: test    al, al
0x682138: jz      short loc_68217A
0x68213A: push    edi
0x68213B: mov     ecx, ebp
0x68213D: call    sub_681050
0x682142: test    al, al
0x682144: jz      short loc_68217A
0x682146: mov     dl, [ebp+0Ch]
0x682149: push    edi
0x68214A: mov     ecx, ebp
0x68214C: mov     [ebp+0Dh], dl
0x68214F: call    sub_680D30
0x682154: jmp     loc_682413
0x682159: fst     dword ptr [ebp+14h]
0x68215C: xor     eax, eax
0x68215E: fst     dword ptr [ebp+10h]
0x682161: mov     byte ptr [ebp+0Ch], 0
0x682165: fst     dword ptr [ebp+1Ch]
0x682168: fst     dword ptr [ebp+24h]
0x68216B: mov     [ebp+28h], eax
0x68216E: mov     [ebp+2Ch], eax
0x682171: fst     [esp+0E4h+var_D0]
0x682175: mov     [ebp+30h], eax
0x682178: jmp     short loc_682180
0x68217A: fldz
0x68217C: mov     cl, byte ptr [esp+0E4h+var_CC+3]
0x682180: fld     [esp+0E4h+var_D0]
0x682184: fst     dword ptr [ebp+24h]
0x682187: fld     dword ptr ds:0B3A4B8h
0x68218D: fcompp
0x68218F: fnstsw  ax
0x682191: test    ah, 5
0x682194: jp      short loc_68219A
0x682196: mov     byte ptr [ebp+0Ch], 7
0x68219A: test    ebx, ebx
0x68219C: jz      loc_6823FC
0x6821A2: test    cl, cl
0x6821A4: fst     [esp+0E4h+var_9C]
0x6821A8: fld1
0x6821AA: fst     [esp+0E4h+var_98]
0x6821AE: fxch    st(1)
0x6821B0: fst     [esp+0E4h+var_94]
0x6821B4: fst     [esp+0E4h+var_90]
0x6821B8: jz      short loc_6821EE
0x6821BA: fxch    st(1)
0x6821BC: fstp    [esp+0E4h+var_C4]
0x6821C0: mov     eax, [esp+0E4h+var_C4]
0x6821C4: mov     [esp+0E4h+var_9C], eax
0x6821C8: fst     [esp+0E4h+var_C0]
0x6821CC: mov     ecx, [esp+0E4h+var_C0]
0x6821D0: fst     [esp+0E4h+var_BC]
0x6821D4: mov     edx, [esp+0E4h+var_BC]
0x6821D8: fstp    [esp+0E4h+var_B8]
0x6821DC: mov     eax, [esp+0E4h+var_B8]
0x6821E0: mov     [esp+0E4h+var_98], ecx
0x6821E4: mov     [esp+0E4h+var_94], edx
0x6821E8: mov     [esp+0E4h+var_90], eax
0x6821EC: jmp     short loc_68222C
0x6821EE: cmp     byte ptr [ebp+0Ch], 0
0x6821F2: jz      short loc_682228
0x6821F4: fxch    st(1)
0x6821F6: fst     [esp+0E4h+var_C4]
0x6821FA: mov     ecx, [esp+0E4h+var_C4]
0x6821FE: fstp    [esp+0E4h+var_C0]
0x682202: mov     edx, [esp+0E4h+var_C0]
0x682206: mov     [esp+0E4h+var_9C], ecx
0x68220A: fst     [esp+0E4h+var_BC]
0x68220E: mov     eax, [esp+0E4h+var_BC]
0x682212: fstp    [esp+0E4h+var_B8]
0x682216: mov     ecx, [esp+0E4h+var_B8]
0x68221A: mov     [esp+0E4h+var_98], edx
0x68221E: mov     [esp+0E4h+var_94], eax
0x682222: mov     [esp+0E4h+var_90], ecx
0x682226: jmp     short loc_68222C
0x682228: fstp    st
0x68222A: fstp    st
0x68222C: fld     [esp+0E4h+var_40]
0x682233: lea     edx, [esp+0E4h+var_9C]
0x682237: push    edx; int
0x682238: sub     esp, 0Ch
0x68223B: fstp    [esp+0F4h+a2]; float
0x68223F: fld     [esp+0F4h+var_44]
0x682246: fstp    [esp+0F4h+var_F0]; float
0x68224A: fld     [esp+0F4h+var_48]
0x682251: fstp    [esp+0F4h+var_F4]; float
0x682254: call    sub_47EA60
0x682259: mov     ecx, [esp+0F4h+var_38]
0x682260: mov     edx, [esp+0F4h+var_34]
0x682267: mov     esi, eax
0x682269: mov     eax, [esp+0F4h+var_3C]
0x682270: mov     [esi+54h], eax
0x682273: mov     [esi+58h], ecx
0x682276: add     esp, 10h
0x682279: mov     [esi+5Ch], edx
0x68227C: mov     eax, [ebx]
0x68227E: mov     edx, [eax+84h]
0x682284: push    1
0x682286: push    esi
0x682287: mov     ecx, ebx
0x682289: call    edx
0x68228B: mov     ecx, esi; this
0x68228D: call    NiAVObject_InitializePropertyState
0x682292: mov     ecx, esi
0x682294: call    NiNode_UpdateDynamicEffectState
0x682299: fldz
0x68229B: push    0; a3
0x68229D: push    ecx
0x68229E: mov     ecx, esi; this
0x6822A0: fstp    [esp+0ECh+a2]; a2
0x6822A3: call    NiAVObject_UpdateNiAVObject
0x6822A8: push    ebx
0x6822A9: lea     eax, [ebp+28h]
0x6822AC: push    eax
0x6822AD: push    edi
0x6822AE: call    sub_6818D0
0x6822B3: fldz
0x6822B5: fst     [esp+0F0h+var_A8]
0x6822B9: mov     ecx, 9
0x6822BE: fld     dword ptr ds:0A3D8F0h
0x6822C4: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x6822C9: fstp    [esp+0F0h+var_A4]
0x6822CD: lea     edi, [esp+0F0h+var_30]
0x6822D4: rep movsd
0x6822D6: fstp    [esp+0F0h+var_A0]
0x6822DA: fld     dword ptr [ebp+18h]
0x6822DD: fstp    [esp+0F0h+var_E8]; float
0x6822E1: add     esp, 8
0x6822E4: lea     ecx, [esp+0E8h+var_30]
0x6822EB: call    NiMatrix33_InitRotationTransform
0x6822F0: lea     ecx, [esp+0E4h+var_A8]
0x6822F4: push    ecx
0x6822F5: lea     edx, [esp+0E8h+var_8C]
0x6822F9: push    edx
0x6822FA: lea     ecx, [esp+0ECh+var_30]
0x682301: call    sub_7101F0
0x682306: mov     ecx, [eax]
0x682308: mov     esi, [esp+0E4h+arg_0]
0x68230F: mov     [esp+0E4h+var_A8], ecx
0x682313: mov     edx, [eax+4]
0x682316: mov     [esp+0E4h+var_A4], edx
0x68231A: mov     eax, [eax+8]
0x68231D: mov     edx, [esi]
0x68231F: mov     [esp+0E4h+var_A0], eax
0x682323: mov     eax, [edx+174h]
0x682329: mov     ecx, esi
0x68232B: call    eax
0x68232D: mov     ecx, [eax]
0x68232F: mov     [esp+0E4h+var_B4], ecx
0x682333: mov     edx, [eax+4]
0x682336: mov     [esp+0E4h+var_B0], edx
0x68233A: mov     eax, [eax+8]
0x68233D: mov     ecx, esi
0x68233F: mov     [esp+0E4h+var_AC], eax
0x682343: call    sub_5E0660
0x682348: fmul    qword ptr ds:0A2FAA0h
0x68234E: fadd    [esp+0E4h+var_AC]
0x682352: fstp    [esp+0E4h+var_AC]
0x682356: fld1
0x682358: lea     ecx, [esp+0E4h+var_70]
0x68235C: fst     [esp+0E4h+var_70]
0x682360: push    ecx
0x682361: fst     [esp+0E8h+var_6C]
0x682365: lea     edx, [esp+0E8h+var_C4]
0x682369: fldz
0x68236B: push    edx
0x68236C: fst     [esp+0ECh+var_68]
0x682373: lea     eax, [esp+0ECh+var_80]
0x682377: fst     [esp+0ECh+var_64]
0x68237E: push    eax
0x68237F: fld     [esp+0F0h+var_A8]
0x682383: lea     ecx, [esp+0F0h+var_B4]
0x682387: fadd    [esp+0F0h+var_B4]
0x68238B: push    ecx
0x68238C: fstp    [esp+0F4h+var_C4]
0x682390: fld     [esp+0F4h+var_B0]
0x682394: fadd    [esp+0F4h+var_A4]
0x682398: fstp    [esp+0F4h+var_C0]
0x68239C: fld     [esp+0F4h+var_A0]
0x6823A0: fadd    [esp+0F4h+var_AC]
0x6823A4: fstp    [esp+0F4h+var_BC]
0x6823A8: fxch    st(1)
0x6823AA: fst     [esp+0F4h+var_80]
0x6823AE: fstp    [esp+0F4h+var_7C]
0x6823B2: fst     [esp+0F4h+var_78]
0x6823B6: fstp    [esp+0F4h+var_74]
0x6823BD: call    sub_47F070
0x6823C2: mov     edx, [ebx]
0x6823C4: add     esp, 10h
0x6823C7: mov     esi, eax
0x6823C9: mov     eax, [edx+84h]
0x6823CF: push    1
0x6823D1: push    esi
0x6823D2: mov     ecx, ebx
0x6823D4: call    eax
0x6823D6: mov     ecx, esi; this
0x6823D8: call    NiAVObject_InitializePropertyState
0x6823DD: mov     ecx, esi
0x6823DF: call    NiNode_UpdateDynamicEffectState
0x6823E4: fldz
0x6823E6: push    0; a3
0x6823E8: push    ecx
0x6823E9: mov     ecx, esi; this
0x6823EB: fstp    [esp+0ECh+a2]; a2
0x6823EE: call    NiAVObject_UpdateNiAVObject
0x6823F3: mov     edi, [esp+0E4h+arg_0]
0x6823FA: jmp     short loc_6823FE
0x6823FC: fstp    st
0x6823FE: mov     cl, [ebp+0Ch]
0x682401: mov     [ebp+0Dh], cl
0x682404: mov     edx, [edi]
0x682406: mov     eax, [edx+1E0h]
0x68240C: mov     ecx, edi
0x68240E: call    eax
0x682410: fstp    dword ptr [ebp+14h]
0x682413: mov     ecx, [esp+0E4h+var_C]
0x68241A: mov     large fs:0, ecx
0x682421: pop     ecx
0x682422: pop     edi
0x682423: pop     esi
0x682424: pop     ebp
0x682425: pop     ebx
0x682426: add     esp, 0D0h
0x68242C: retn    8
