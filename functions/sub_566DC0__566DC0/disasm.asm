0x566DC0: sub     esp, 24h
0x566DC3: push    esi
0x566DC4: mov     esi, [esp+28h+arg_0]
0x566DC8: test    esi, esi
0x566DCA: push    edi
0x566DCB: mov     edi, ecx
0x566DCD: mov     [esp+2Ch+var_24], edi
0x566DD1: jnz     short loc_566DDD
0x566DD3: pop     edi
0x566DD4: xor     al, al
0x566DD6: pop     esi
0x566DD7: add     esp, 24h
0x566DDA: retn    0Ch
0x566DDD: mov     ecx, [edi+24h]
0x566DE0: test    ecx, ecx
0x566DE2: jz      short loc_566E03
0x566DE4: call    sub_569740
0x566DE9: cmp     eax, 3
0x566DEC: jnz     short loc_566E03
0x566DEE: mov     ecx, esi
0x566DF0: call    sub_5E0260
0x566DF5: test    al, al
0x566DF7: jnz     short loc_566E03
0x566DF9: pop     edi
0x566DFA: mov     al, 1
0x566DFC: pop     esi
0x566DFD: add     esp, 24h
0x566E00: retn    0Ch
0x566E03: push    ebp
0x566E04: push    esi
0x566E05: mov     ecx, edi
0x566E07: call    sub_566940
0x566E0C: push    esi
0x566E0D: mov     ecx, edi
0x566E0F: mov     ebp, eax
0x566E11: call    sub_566A40
0x566E16: mov     edi, eax
0x566E18: test    edi, edi
0x566E1A: jz      short loc_566E29
0x566E1C: mov     ecx, edi; this
0x566E1E: call    TESObjectCELL_IsInterior
0x566E23: test    al, al
0x566E25: jnz     short loc_566E29
0x566E27: xor     edi, edi
0x566E29: push    ebx
0x566E2A: mov     ecx, esi; this
0x566E2C: call    TESObjectREFR_GetWorldSpace
0x566E31: mov     ecx, esi; this
0x566E33: mov     ebx, eax
0x566E35: call    TESObjectREFR_GetParentCell
0x566E3A: test    eax, eax
0x566E3C: mov     dword ptr [esp+34h+var_20], eax
0x566E40: jz      short loc_566E55
0x566E42: mov     ecx, eax; this
0x566E44: call    TESObjectCELL_IsInterior
0x566E49: test    al, al
0x566E4B: jnz     short loc_566E77
0x566E4D: mov     dword ptr [esp+34h+var_20], 0
0x566E55: test    edi, edi
0x566E57: jnz     loc_5670DF
0x566E5D: cmp     ebx, ebp
0x566E5F: jnz     loc_5670DF
0x566E65: mov     ebp, [esp+34h+var_24]
0x566E69: mov     ecx, [ebp+24h]
0x566E6C: test    ecx, ecx
0x566E6E: jz      short loc_566EA2
0x566E70: call    TESPackage_LocationData_GetRadius
0x566E75: jmp     short loc_566EA4
0x566E77: cmp     dword ptr [esp+34h+var_20], edi
0x566E7B: jnz     loc_5670DF
0x566E81: mov     ebp, [esp+34h+var_24]
0x566E85: mov     ecx, [ebp+24h]
0x566E88: test    ecx, ecx
0x566E8A: jz      short loc_566E69
0x566E8C: call    sub_569740
0x566E91: cmp     eax, 1
0x566E94: jnz     short loc_566E69
0x566E96: pop     ebx
0x566E97: pop     ebp
0x566E98: pop     edi
0x566E99: mov     al, al
0x566E9B: pop     esi
0x566E9C: add     esp, 24h
0x566E9F: retn    0Ch
0x566EA2: xor     eax, eax
0x566EA4: cmp     [esp+34h+arg_4], 0
0x566EA9: mov     ebx, eax
0x566EAB: mov     [esp+34h+var_24], ebx
0x566EAF: jz      short loc_566EB9
0x566EB1: xor     ebx, ebx
0x566EB3: mov     [esp+34h+var_24], ebx
0x566EB7: jmp     short loc_566EDD
0x566EB9: fld     dword ptr ds:0A30634h
0x566EBF: fld     [esp+34h+arg_8]
0x566EC3: fucom   st(1)
0x566EC5: fnstsw  ax
0x566EC7: fstp    st(1)
0x566EC9: test    ah, 44h
0x566ECC: jnp     short loc_566EDB
0x566ECE: call    Double_To_SInt32
0x566ED3: mov     ebx, eax
0x566ED5: mov     [esp+34h+var_24], ebx
0x566ED9: jmp     short loc_566EDD
0x566EDB: fstp    st
0x566EDD: push    esi
0x566EDE: lea     eax, [esp+38h+var_18]
0x566EE2: push    eax
0x566EE3: mov     ecx, ebp
0x566EE5: mov     [esp+3Ch+arg_4], 0
0x566EEA: call    sub_566B30
0x566EEF: mov     ecx, [ebp+24h]
0x566EF2: xor     edi, edi
0x566EF4: test    ecx, ecx
0x566EF6: jz      short loc_566EFF
0x566EF8: call    sub_5697E0
0x566EFD: mov     edi, eax
0x566EFF: test    ebx, ebx
0x566F01: jnz     loc_56707B
0x566F07: mov     ecx, [ebp+24h]
0x566F0A: test    ecx, ecx
0x566F0C: jz      loc_567071
0x566F12: test    edi, edi
0x566F14: jz      loc_567152
0x566F1A: mov     edx, [esi]
0x566F1C: mov     eax, [edx+380h]
0x566F22: mov     ecx, esi
0x566F24: call    eax
0x566F26: cmp     edi, eax
0x566F28: jnz     short loc_566F7F
0x566F2A: cmp     [esi+58h], ebx
0x566F2D: jz      short loc_566F7F
0x566F2F: mov     edx, [esi]
0x566F31: mov     eax, [edx+380h]
0x566F37: mov     ecx, esi
0x566F39: call    eax
0x566F3B: lea     ecx, [esp+34h+var_C]
0x566F3F: push    ecx
0x566F40: mov     ecx, eax
0x566F42: call    sub_625290
0x566F47: mov     ecx, [esi+58h]
0x566F4A: mov     edx, [ecx]
0x566F4C: mov     eax, [edx+8]
0x566F4F: call    eax
0x566F51: test    eax, eax
0x566F53: jnz     short loc_566F6D
0x566F55: mov     ecx, [esp+34h+var_C]
0x566F59: mov     edx, [esp+34h+var_8]
0x566F5D: mov     eax, [esp+34h+var_4]
0x566F61: mov     [esp+34h+var_18], ecx
0x566F65: mov     [esp+34h+var_14], edx
0x566F69: mov     [esp+34h+var_10], eax
0x566F6D: mov     [esp+34h+var_24], 0Ah
0x566F75: mov     [esp+34h+arg_4], 1
0x566F7A: jmp     loc_56707B
0x566F7F: mov     ecx, edi
0x566F81: call    sub_4D74B0
0x566F86: test    al, al
0x566F88: jz      short loc_566FE0
0x566F8A: mov     ecx, [esi+58h]
0x566F8D: test    ecx, ecx
0x566F8F: jz      short loc_566FE0
0x566F91: mov     edx, [ecx]
0x566F93: mov     eax, [edx+380h]
0x566F99: call    eax
0x566F9B: test    eax, eax
0x566F9D: jz      short loc_566FE0
0x566F9F: mov     ecx, [esi+58h]
0x566FA2: mov     edx, [ecx]
0x566FA4: mov     eax, [edx+8]
0x566FA7: call    eax
0x566FA9: test    eax, eax
0x566FAB: jnz     short loc_566FCE
0x566FAD: mov     ecx, [esi+58h]
0x566FB0: mov     edx, [ecx]
0x566FB2: mov     eax, [edx+380h]
0x566FB8: call    eax
0x566FBA: mov     ecx, [eax]
0x566FBC: mov     [esp+34h+var_18], ecx
0x566FC0: mov     edx, [eax+4]
0x566FC3: mov     [esp+34h+var_14], edx
0x566FC7: mov     eax, [eax+8]
0x566FCA: mov     [esp+34h+var_10], eax
0x566FCE: mov     [esp+34h+var_24], 14h
0x566FD6: mov     [esp+34h+arg_4], 1
0x566FDB: jmp     loc_56707B
0x566FE0: mov     edx, [edi]
0x566FE2: mov     eax, [edx+170h]
0x566FE8: mov     ecx, edi
0x566FEA: call    eax
0x566FEC: cmp     eax, ds:0B35EB0h
0x566FF2: jz      short loc_566FCE
0x566FF4: mov     edx, [edi]
0x566FF6: mov     eax, [edx+170h]
0x566FFC: mov     ecx, edi
0x566FFE: call    eax
0x567000: cmp     eax, ds:0B35EACh
0x567006: jz      short loc_566FCE
0x567008: mov     edx, [edi]
0x56700A: mov     eax, [edx+190h]
0x567010: mov     ecx, edi
0x567012: call    eax
0x567014: test    al, al
0x567016: mov     edx, [edi]
0x567018: mov     ecx, edi
0x56701A: jz      loc_5670EB
0x567020: mov     eax, [edx+18Ch]
0x567026: call    eax
0x567028: cmp     eax, 9
0x56702B: jnz     short loc_56703C
0x56702D: mov     [esp+34h+var_24], 5Ah ; 'Z'
0x567035: mov     [esp+34h+arg_4], 1
0x56703A: jmp     short loc_56707B
0x56703C: mov     edx, [edi]
0x56703E: mov     eax, [edx+170h]
0x567044: mov     ecx, edi
0x567046: call    eax
0x567048: push    eax
0x567049: call    sub_46D5C0
0x56704E: add     esp, 4
0x567051: call    Double_To_SInt32
0x567056: mov     [esp+34h+arg_0], eax
0x56705A: fild    [esp+34h+arg_0]
0x56705E: fadd    qword ptr ds:0A46E48h
0x567064: call    Double_To_SInt32
0x567069: mov     [esp+34h+var_24], eax
0x56706D: test    eax, eax
0x56706F: jnz     short loc_56707B
0x567071: mov     ecx, ds:0B36B28h
0x567077: mov     [esp+34h+var_24], ecx
0x56707B: cmp     byte ptr [ebp+20h], 5
0x56707F: mov     byte ptr [esp+34h+arg_0], 0
0x567084: jnz     loc_567172
0x56708A: cmp     dword ptr [esp+34h+var_20], 0
0x56708F: jz      loc_567172
0x567095: mov     edx, [esi]
0x567097: mov     eax, [edx+174h]
0x56709D: mov     ecx, esi
0x56709F: call    eax
0x5670A1: fld     dword ptr [eax+8]
0x5670A4: push    esi
0x5670A5: fstp    [esp+38h+var_20]
0x5670A9: lea     ecx, [esp+38h+var_C]
0x5670AD: push    ecx
0x5670AE: mov     ecx, ebp
0x5670B0: call    sub_566B30
0x5670B5: fld     dword ptr [eax+8]
0x5670B8: fsubr   [esp+34h+var_20]
0x5670BC: fstp    [esp+34h+arg_8]
0x5670C0: fld     [esp+34h+arg_8]
0x5670C4: fabs
0x5670C6: fstp    [esp+34h+arg_8]
0x5670CA: fld     [esp+34h+arg_8]
0x5670CE: fcomp   qword ptr ds:0A309F0h
0x5670D4: fnstsw  ax
0x5670D6: test    ah, 41h
0x5670D9: jnz     loc_567172
0x5670DF: pop     ebx
0x5670E0: pop     ebp
0x5670E1: pop     edi
0x5670E2: xor     al, al
0x5670E4: pop     esi
0x5670E5: add     esp, 24h
0x5670E8: retn    0Ch
0x5670EB: fld     dword ptr ds:0A417B4h
0x5670F1: mov     eax, [edx+170h]
0x5670F7: fstp    [esp+34h+arg_0]
0x5670FB: call    eax
0x5670FD: movzx   eax, byte ptr [eax+4]
0x567101: cmp     eax, 12h
0x567104: jz      short loc_567110
0x567106: cmp     eax, 17h
0x567109: jz      short loc_567110
0x56710B: cmp     eax, 1Ch
0x56710E: jnz     short loc_567116
0x567110: fldz
0x567112: fstp    [esp+34h+arg_0]
0x567116: mov     edx, [edi]
0x567118: mov     eax, [edx+170h]
0x56711E: mov     ecx, edi
0x567120: call    eax
0x567122: push    eax
0x567123: call    sub_46D5C0
0x567128: add     esp, 4
0x56712B: call    Double_To_SInt32
0x567130: mov     [esp+34h+arg_8], eax
0x567134: fild    [esp+34h+arg_8]
0x567138: fadd    [esp+34h+arg_0]
0x56713C: call    Double_To_SInt32
0x567141: test    eax, eax
0x567143: mov     [esp+34h+var_24], eax
0x567147: jge     loc_56706F
0x56714D: jmp     loc_567071
0x567152: call    sub_569740
0x567157: cmp     eax, 3
0x56715A: jnz     loc_567071
0x567160: mov     [esp+34h+arg_4], 1
0x567165: mov     [esp+34h+var_24], 0Ah
0x56716D: jmp     loc_56707B
0x567172: mov     edx, [esi]
0x567174: mov     eax, [edx+334h]
0x56717A: push    1
0x56717C: mov     ecx, esi
0x56717E: xor     bl, bl
0x567180: call    eax
0x567182: test    al, al
0x567184: jz      short loc_5671AB
0x567186: mov     edx, [esi]
0x567188: mov     eax, [edx+330h]
0x56718E: mov     ecx, esi
0x567190: call    eax
0x567192: test    eax, eax
0x567194: jz      short loc_5671AB
0x567196: mov     edx, [esi]
0x567198: mov     eax, [edx+330h]
0x56719E: mov     ecx, esi
0x5671A0: call    eax
0x5671A2: mov     ecx, eax
0x5671A4: call    sub_6163A0
0x5671A9: mov     bl, al
0x5671AB: cmp     [esp+34h+arg_4], 0
0x5671B0: fild    [esp+34h+var_24]
0x5671B4: lea     edx, [esp+34h+var_18]
0x5671B8: setz    cl
0x5671BB: push    ecx; char
0x5671BC: push    ecx
0x5671BD: fstp    [esp+3Ch+var_3C]; float
0x5671C0: push    edx; int
0x5671C1: push    esi; int
0x5671C2: call    sub_684B30
0x5671C7: add     esp, 10h
0x5671CA: test    al, al
0x5671CC: jz      short loc_5671D6
0x5671CE: test    bl, bl
0x5671D0: jz      loc_567262
0x5671D6: test    edi, edi
0x5671D8: jz      loc_567267
0x5671DE: mov     ecx, edi
0x5671E0: call    sub_4D74B0
0x5671E5: test    al, al
0x5671E7: jz      short loc_567267
0x5671E9: mov     ecx, [esi+58h]
0x5671EC: test    ecx, ecx
0x5671EE: jz      short loc_567267
0x5671F0: mov     eax, [ecx]
0x5671F2: mov     edx, [eax+380h]
0x5671F8: call    edx
0x5671FA: test    eax, eax
0x5671FC: jz      short loc_567267
0x5671FE: mov     eax, [esi]
0x567200: mov     edx, [eax+174h]
0x567206: mov     ecx, esi
0x567208: call    edx
0x56720A: fld     [esp+34h+var_18]
0x56720E: fsub    dword ptr [eax]
0x567210: lea     ecx, [esp+34h+var_C]
0x567214: fstp    [esp+34h+var_C]
0x567218: fld     [esp+34h+var_14]
0x56721C: fsub    dword ptr [eax+4]
0x56721F: fstp    [esp+34h+var_8]
0x567223: fld     [esp+34h+var_10]
0x567227: fsub    dword ptr [eax+8]
0x56722A: fstp    [esp+34h+var_4]
0x56722E: call    sub_404C90
0x567233: fcomp   qword ptr ds:0A309F0h
0x567239: fnstsw  ax
0x56723B: test    ah, 5
0x56723E: jp      short loc_567251
0x567240: mov     eax, [esi]
0x567242: mov     edx, [eax+18Ch]
0x567248: mov     ecx, esi
0x56724A: call    edx
0x56724C: cmp     eax, 4
0x56724F: jz      short loc_567262
0x567251: mov     eax, [esi]
0x567253: mov     edx, [eax+18Ch]
0x567259: mov     ecx, esi
0x56725B: call    edx
0x56725D: cmp     eax, 9
0x567260: jnz     short loc_567267
0x567262: mov     byte ptr [esp+34h+arg_0], 1
0x567267: mov     al, byte ptr [esp+34h+arg_0]
0x56726B: pop     ebx
0x56726C: pop     ebp
0x56726D: pop     edi
0x56726E: pop     esi
0x56726F: add     esp, 24h
0x567272: retn    0Ch
