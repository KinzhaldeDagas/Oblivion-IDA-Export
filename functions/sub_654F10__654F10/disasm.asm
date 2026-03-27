0x654F10: sub     esp, 8
0x654F13: push    ebp
0x654F14: push    esi
0x654F15: push    edi
0x654F16: mov     edi, [esp+14h+arg_0]
0x654F1A: mov     eax, [edi]
0x654F1C: mov     edx, [eax+164h]
0x654F22: mov     esi, ecx
0x654F24: mov     ecx, edi
0x654F26: call    edx
0x654F28: mov     ebp, eax
0x654F2A: test    ebp, ebp
0x654F2C: jz      short loc_654F58
0x654F2E: mov     ecx, [esi+120h]
0x654F34: test    ecx, ecx
0x654F36: jnz     short loc_654F63
0x654F38: mov     eax, [esi]
0x654F3A: mov     edx, [eax+370h]
0x654F40: push    7Fh
0x654F42: push    ecx
0x654F43: push    ecx
0x654F44: push    edi
0x654F45: mov     ecx, esi
0x654F47: call    edx
0x654F49: mov     eax, [esi]
0x654F4B: mov     edx, [eax+188h]
0x654F51: push    1
0x654F53: push    edi
0x654F54: mov     ecx, esi
0x654F56: call    edx
0x654F58: pop     edi
0x654F59: pop     esi
0x654F5A: xor     al, al
0x654F5C: pop     ebp
0x654F5D: add     esp, 8
0x654F60: retn    4
0x654F63: mov     eax, [ecx]
0x654F65: mov     edx, [eax+170h]
0x654F6B: push    ebx
0x654F6C: call    edx
0x654F6E: movzx   eax, byte ptr [esi+136h]
0x654F75: push    eax
0x654F76: call    sub_4AE5D0
0x654F7B: mov     bl, al
0x654F7D: mov     al, [esi+11Dh]
0x654F83: add     esp, 4
0x654F86: cmp     al, 4
0x654F88: jnz     short loc_654F92
0x654F8A: test    bl, bl
0x654F8C: jnz     loc_6551DB
0x654F92: cmp     al, 9
0x654F94: jnz     short loc_654F9E
0x654F96: test    bl, bl
0x654F98: jz      loc_6551DB
0x654F9E: movzx   eax, al
0x654FA1: add     eax, 0FFFFFFFCh; switch 7 cases
0x654FA4: cmp     eax, 6
0x654FA7: ja      def_654FB4; jumptable 00654FB4 default case, cases 6-8
0x654FAD: movzx   eax, ds:byte_6553D4[eax]
0x654FB4: jmp     ds:jpt_654FB4[eax*4]; switch jump
0x654FBB: test    bl, bl; jumptable 00654FB4 cases 4,9
0x654FBD: jz      short loc_654FFA
0x654FBF: mov     ecx, edi
0x654FC1: call    sub_5E12B0
0x654FC6: test    eax, eax
0x654FC8: jz      short loc_654FDA
0x654FCA: mov     edx, [eax]
0x654FCC: push    0
0x654FCE: mov     ecx, eax
0x654FD0: mov     eax, [edx+9Ch]
0x654FD6: push    0
0x654FD8: call    eax
0x654FDA: movzx   eax, byte ptr [esi+124h]
0x654FE1: mov     ecx, [esi+120h]
0x654FE7: mov     edx, [esi]
0x654FE9: mov     edx, [edx+370h]
0x654FEF: push    eax
0x654FF0: push    ecx
0x654FF1: push    0Ah
0x654FF3: push    edi
0x654FF4: mov     ecx, esi
0x654FF6: call    edx
0x654FF8: jmp     short loc_655018
0x654FFA: movzx   ecx, byte ptr [esi+124h]
0x655001: mov     edx, [esi+120h]
0x655007: mov     eax, [esi]
0x655009: mov     eax, [eax+370h]
0x65500F: push    ecx
0x655010: push    edx
0x655011: push    5
0x655013: push    edi
0x655014: mov     ecx, esi
0x655016: call    eax
0x655018: mov     ecx, [esi+120h]
0x65501E: push    ecx
0x65501F: mov     ecx, ds:0B362C0h
0x655025: push    edi
0x655026: call    sub_521450
0x65502B: test    eax, eax
0x65502D: mov     [esp+18h+arg_0], eax
0x655031: jnz     loc_6551E7
0x655037: movzx   edx, byte ptr [esi+124h]
0x65503E: mov     ecx, [esi+120h]
0x655044: push    eax
0x655045: push    edx
0x655046: call    sub_4D7300
0x65504B: mov     byte ptr [ebp+0C4h], 1
0x655052: mov     ecx, [esi+120h]
0x655058: mov     eax, [esi]
0x65505A: mov     edx, [eax+370h]
0x655060: push    7Fh
0x655062: push    ecx
0x655063: push    0
0x655065: push    edi
0x655066: mov     ecx, esi
0x655068: call    edx
0x65506A: push    0
0x65506C: push    0
0x65506E: mov     ecx, edi
0x655070: call    HideEquipment
0x655075: movzx   eax, byte ptr [esi+136h]
0x65507C: mov     ecx, [esi+120h]
0x655082: push    eax
0x655083: mov     eax, [ecx]
0x655085: mov     edx, [eax+170h]
0x65508B: call    edx
0x65508D: mov     ecx, eax
0x65508F: call    sub_4AEBE0
0x655094: push    ecx
0x655095: fchs
0x655097: mov     ecx, edi
0x655099: fstp    [esp+1Ch+var_1C]; float
0x65509C: call    sub_659B90
0x6550A1: mov     ebp, [edi]
0x6550A3: mov     eax, [ebp+1E0h]
0x6550A9: mov     ecx, edi
0x6550AB: call    eax
0x6550AD: fadd    qword ptr ds:0A3D5B8h
0x6550B3: mov     edx, [ebp+1E8h]
0x6550B9: push    ecx
0x6550BA: fstp    [esp+1Ch+arg_0]
0x6550BE: mov     ecx, edi
0x6550C0: fld     [esp+1Ch+arg_0]
0x6550C4: fstp    [esp+1Ch+var_1C]
0x6550C7: call    edx
0x6550C9: fldz
0x6550CB: push    ecx
0x6550CC: lea     ebp, [esi+128h]
0x6550D2: fstp    [esp+1Ch+var_1C]; float
0x6550D5: mov     ecx, ebp
0x6550D7: call    sub_6FAEE0
0x6550DC: mov     byte ptr [esi+136h], 0
0x6550E3: mov     eax, ds:0B3F9A8h
0x6550E8: mov     [ebp+0], eax
0x6550EB: mov     ecx, ds:0B3F9ACh
0x6550F1: mov     [ebp+4], ecx
0x6550F4: mov     edx, ds:0B3F9B0h
0x6550FA: push    0
0x6550FC: mov     ecx, edi
0x6550FE: mov     [ebp+8], edx
0x655101: mov     dword ptr [esi+120h], 0
0x65510B: call    sub_65AC20
0x655110: test    bl, bl
0x655112: jz      loc_6551DB
0x655118: mov     eax, [esi]
0x65511A: mov     edx, [eax+184h]
0x655120: mov     ecx, esi
0x655122: mov     byte ptr [esp+18h+var_8], 1
0x655127: mov     byte ptr [esp+18h+arg_0], 1
0x65512C: call    edx
0x65512E: test    eax, eax
0x655130: jz      short loc_655150
0x655132: mov     eax, [eax+1Ch]
0x655135: mov     ecx, eax
0x655137: shr     ecx, 14h
0x65513A: test    cl, 1
0x65513D: jz      short loc_655144
0x65513F: mov     byte ptr [esp+18h+var_8], 0
0x655144: shr     eax, 15h
0x655147: test    al, 1
0x655149: jz      short loc_655150
0x65514B: mov     byte ptr [esp+18h+arg_0], 0
0x655150: mov     ecx, edi
0x655152: call    sub_5E32D0
0x655157: test    al, al
0x655159: push    0; int
0x65515B: mov     ecx, edi
0x65515D: jz      short loc_6551A4
0x65515F: mov     edx, [edi]
0x655161: mov     eax, [edx+170h]
0x655167: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x65516C: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x655171: push    0; int
0x655173: call    eax
0x655175: push    eax; void *
0x655176: call    OblivionDynamicCast
0x65517B: add     esp, 14h
0x65517E: test    eax, eax
0x655180: jz      short loc_6551DB
0x655182: mov     ecx, [esp+18h+arg_0]
0x655186: mov     edx, [esp+18h+var_8]
0x65518A: push    1; char
0x65518C: push    0; int
0x65518E: push    ecx; int
0x65518F: push    edx; int
0x655190: push    edi; int
0x655191: mov     ecx, eax; int
0x655193: call    sub_5227A0
0x655198: pop     ebx
0x655199: pop     edi
0x65519A: pop     esi
0x65519B: xor     al, al
0x65519D: pop     ebp
0x65519E: add     esp, 8
0x6551A1: retn    4
0x6551A4: mov     eax, [edi]
0x6551A6: mov     edx, [eax+170h]
0x6551AC: push    offset ??_R0?AVTESCreature@@@8; struct TypeDescriptor *
0x6551B1: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x6551B6: push    0; int
0x6551B8: call    edx
0x6551BA: push    eax; void *
0x6551BB: call    OblivionDynamicCast
0x6551C0: add     esp, 14h
0x6551C3: test    eax, eax
0x6551C5: jz      short loc_6551DB
0x6551C7: mov     ecx, [esp+18h+arg_0]
0x6551CB: mov     edx, [esp+18h+var_8]
0x6551CF: push    1
0x6551D1: push    ecx
0x6551D2: push    edx
0x6551D3: push    edi
0x6551D4: mov     ecx, eax
0x6551D6: call    sub_51E240
0x6551DB: pop     ebx
0x6551DC: pop     edi
0x6551DD: pop     esi
0x6551DE: xor     al, al
0x6551E0: pop     ebp
0x6551E1: add     esp, 8
0x6551E4: retn    4
0x6551E7: mov     ecx, eax
0x6551E9: call    sub_520200
0x6551EE: push    eax
0x6551EF: mov     eax, [esp+1Ch+arg_0]
0x6551F3: push    eax
0x6551F4: mov     ecx, ebp
0x6551F6: call    sub_475300
0x6551FB: pop     ebx
0x6551FC: pop     edi
0x6551FD: pop     esi
0x6551FE: mov     al, 1
0x655200: pop     ebp
0x655201: add     esp, 8
0x655204: retn    4
0x655207: mov     ecx, ebp; jumptable 00654FB4 cases 5,10
0x655209: call    sub_4711F0
0x65520E: test    al, al
0x655210: jz      loc_6552C6
0x655216: push    0
0x655218: mov     ecx, ebp
0x65521A: call    sub_4706E0
0x65521F: test    eax, eax
0x655221: jz      short loc_655236
0x655223: push    0
0x655225: mov     ecx, ebp
0x655227: call    sub_4706E0
0x65522C: cmp     dword ptr [eax+44h], 1
0x655230: jnz     loc_6552C6
0x655236: mov     byte ptr [ebp+0C4h], 1
0x65523D: movzx   eax, byte ptr [esi+124h]
0x655244: mov     ecx, [esi+120h]
0x65524A: mov     edx, [esi]
0x65524C: mov     edx, [edx+370h]
0x655252: movzx   ebx, byte ptr [esi+11Dh]
0x655259: push    eax
0x65525A: push    ecx
0x65525B: push    0
0x65525D: push    edi
0x65525E: mov     ecx, esi
0x655260: call    edx
0x655262: movzx   eax, byte ptr [esi+136h]
0x655269: mov     ecx, [esi+120h]
0x65526F: push    eax
0x655270: mov     eax, [ecx]
0x655272: mov     edx, [eax+170h]
0x655278: call    edx
0x65527A: mov     ecx, eax
0x65527C: call    sub_4AEBE0
0x655281: push    ecx
0x655282: fchs
0x655284: mov     ecx, edi
0x655286: fstp    [esp+18h+var_18]; float
0x655289: call    sub_659B90
0x65528E: movzx   ecx, byte ptr [esi+124h]
0x655295: mov     edx, [esi+120h]
0x65529B: mov     eax, [esi]
0x65529D: mov     eax, [eax+370h]
0x6552A3: push    ecx
0x6552A4: push    edx
0x6552A5: push    ebx
0x6552A6: push    edi
0x6552A7: mov     ecx, esi
0x6552A9: call    eax
0x6552AB: push    edi
0x6552AC: mov     ecx, ebp
0x6552AE: call    sub_477E50
0x6552B3: pop     ebx
0x6552B4: pop     edi
0x6552B5: pop     esi
0x6552B6: mov     byte ptr [ebp+0C4h], 1
0x6552BD: mov     al, 1
0x6552BF: pop     ebp
0x6552C0: add     esp, 8
0x6552C3: retn    4
0x6552C6: mov     ecx, ebp
0x6552C8: call    sub_472EA0
0x6552CD: test    al, al
0x6552CF: jz      loc_6553BB
0x6552D5: movzx   ecx, byte ptr [esi+124h]
0x6552DC: push    0
0x6552DE: push    ecx
0x6552DF: mov     ecx, [esi+120h]
0x6552E5: call    sub_4D7300
0x6552EA: push    7Fh
0x6552EC: push    0
0x6552EE: mov     byte ptr [ebp+0C4h], 1
0x6552F5: mov     edx, [esi]
0x6552F7: mov     eax, [edx+370h]
0x6552FD: push    0
0x6552FF: push    edi
0x655300: mov     ecx, esi
0x655302: call    eax
0x655304: push    0
0x655306: push    0
0x655308: mov     ecx, edi
0x65530A: call    HideEquipment
0x65530F: mov     ebx, [edi]
0x655311: mov     edx, [ebx+1E0h]
0x655317: mov     ecx, edi
0x655319: call    edx
0x65531B: fadd    qword ptr ds:0A3D5B8h
0x655321: mov     eax, [ebx+1E8h]
0x655327: push    ecx
0x655328: fstp    [esp+1Ch+arg_0]
0x65532C: mov     ecx, edi
0x65532E: fld     [esp+1Ch+arg_0]
0x655332: fstp    [esp+1Ch+var_1C]
0x655335: call    eax
0x655337: fldz
0x655339: push    ecx
0x65533A: lea     ebp, [esi+128h]
0x655340: fstp    [esp+1Ch+var_1C]; float
0x655343: mov     ecx, ebp
0x655345: call    sub_6FAEE0
0x65534A: mov     byte ptr [esi+136h], 0
0x655351: mov     ecx, ds:0B3F9A8h
0x655357: mov     [ebp+0], ecx
0x65535A: mov     edx, ds:0B3F9ACh
0x655360: mov     [ebp+4], edx
0x655363: mov     eax, ds:0B3F9B0h
0x655368: push    0
0x65536A: mov     ecx, edi
0x65536C: mov     [ebp+8], eax
0x65536F: call    sub_65AC20
0x655374: mov     edx, [esi]
0x655376: mov     edx, [edx+18Ch]
0x65537C: lea     eax, [esp+18h+var_4]
0x655380: push    eax
0x655381: mov     ecx, esi
0x655383: call    edx
0x655385: mov     esi, [eax]
0x655387: lea     ecx, [esp+18h+var_4]; this
0x65538B: call    sub_7016A0
0x655390: test    esi, esi
0x655392: jz      short loc_6553BB
0x655394: add     edi, 2Ch ; ','
0x655397: push    edi; a2
0x655398: mov     ecx, esi; this
0x65539A: call    sub_452A10
0x65539F: pop     ebx
0x6553A0: pop     edi
0x6553A1: pop     esi
0x6553A2: mov     al, 1
0x6553A4: pop     ebp
0x6553A5: add     esp, 8
0x6553A8: retn    4
0x6553AB: neg     bl; jumptable 00654FB4 default case, cases 6-8
0x6553AD: sbb     bl, bl
0x6553AF: and     bl, 5
0x6553B2: add     bl, 4
0x6553B5: mov     [esi+11Dh], bl
0x6553BB: pop     ebx
0x6553BC: pop     edi
0x6553BD: pop     esi
0x6553BE: mov     al, 1
0x6553C0: pop     ebp
0x6553C1: add     esp, 8
0x6553C4: retn    4
