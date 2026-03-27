0x993B98: push    ebp
0x993B99: mov     ebp, esp
0x993B9B: sub     esp, 28h
0x993B9E: xor     eax, eax
0x993BA0: cmp     dword_BAA648, eax
0x993BA6: push    ebx
0x993BA7: mov     ebx, [ebp+arg_4]
0x993BAA: push    esi
0x993BAB: mov     esi, [ebp+arg_8]
0x993BAE: push    edi
0x993BAF: mov     edi, [ebp+arg_0]
0x993BB2: mov     byte ptr [ebp+var_8], al
0x993BB5: mov     byte ptr [ebp+var_8+1], al
0x993BB8: mov     byte ptr [ebp+var_8+2], al
0x993BBB: mov     byte ptr [ebp+var_8+3], al
0x993BBE: mov     byte ptr [ebp+var_8+4], al
0x993BC1: mov     byte ptr [ebp+var_8+5], al
0x993BC4: mov     byte ptr [ebp+var_8+6], al
0x993BC7: mov     byte ptr [ebp+var_8+7], al
0x993BCA: jz      short loc_993BDA
0x993BCC: push    dword_BAAA98
0x993BD2: call    __decode_pointer
0x993BD7: pop     ecx
0x993BD8: jmp     short loc_993BDF
0x993BDA: mov     eax, offset sub_98A318
0x993BDF: mov     ecx, [ebp+arg_C]
0x993BE2: mov     edx, 0A6h ; '¦'
0x993BE7: cmp     ecx, edx
0x993BE9: jg      loc_993D63
0x993BEF: jz      loc_993D50
0x993BF5: cmp     ecx, 19h
0x993BF8: jg      loc_993CF6
0x993BFE: jz      loc_993CED
0x993C04: mov     edx, ecx
0x993C06: push    2
0x993C08: pop     ecx
0x993C09: sub     edx, ecx
0x993C0B: jz      loc_993CDE
0x993C11: dec     edx
0x993C12: jz      loc_993CD5
0x993C18: sub     edx, 5
0x993C1B: jz      loc_993CC6
0x993C21: dec     edx
0x993C22: jz      loc_993CAE
0x993C28: sub     edx, 5
0x993C2B: jz      short loc_993C9E
0x993C2D: dec     edx
0x993C2E: jz      short loc_993C75
0x993C30: sub     edx, 9
0x993C33: jnz     ___libm_error_support___def_993D72
0x993C39: mov     [ebp+var_28], 3
0x993C40: mov     [ebp+var_24], offset off_AA684C
0x993C47: fld     qword ptr [edi]
0x993C49: lea     ecx, [ebp+var_28]
0x993C4C: fstp    [ebp+var_20]
0x993C4F: push    ecx
0x993C50: fld     qword ptr [ebx]
0x993C52: fstp    [ebp+var_18]
0x993C55: fld     qword ptr [esi]
0x993C57: fstp    [ebp+var_10]
0x993C5A: call    eax
0x993C5C: test    eax, eax
0x993C5E: pop     ecx
0x993C5F: jnz     loc_993E08
0x993C65: call    __errno
0x993C6A: mov     dword ptr [eax], 22h ; '"'
0x993C70: jmp     loc_993E08
0x993C75: mov     [ebp+var_24], offset off_AA6850
0x993C7C: fld     qword ptr [edi]
0x993C7E: lea     ecx, [ebp+var_28]
0x993C81: fstp    [ebp+var_20]
0x993C84: push    ecx
0x993C85: fld     qword ptr [ebx]
0x993C87: mov     [ebp+var_28], 4
0x993C8E: fstp    [ebp+var_18]
0x993C91: fld     qword ptr [esi]
0x993C93: fstp    [ebp+var_10]
0x993C96: call    eax
0x993C98: pop     ecx
0x993C99: jmp     loc_993E08
0x993C9E: mov     [ebp+var_28], 3
0x993CA5: mov     [ebp+var_24], offset off_AA6850
0x993CAC: jmp     short loc_993C47
0x993CAE: mov     [ebp+var_24], offset aLog10_0
0x993CB5: fld     qword ptr [edi]
0x993CB7: fstp    [ebp+var_20]
0x993CBA: fld     qword ptr [ebx]
0x993CBC: fstp    [ebp+var_18]
0x993CBF: fld     qword ptr [esi]
0x993CC1: jmp     loc_993DE8
0x993CC6: mov     [ebp+var_28], ecx
0x993CC9: mov     [ebp+var_24], offset aLog10_0
0x993CD0: jmp     loc_993C47
0x993CD5: mov     [ebp+var_24], offset aLog
0x993CDC: jmp     short loc_993CB5
0x993CDE: mov     [ebp+var_28], ecx
0x993CE1: mov     [ebp+var_24], offset aLog
0x993CE8: jmp     loc_993C47
0x993CED: mov     [ebp+var_24], offset off_AA684C
0x993CF4: jmp     short loc_993C7C
0x993CF6: sub     ecx, 1Ah
0x993CF9: jz      short loc_993D49
0x993CFB: dec     ecx
0x993CFC: jz      short loc_993D3D
0x993CFE: dec     ecx
0x993CFF: jz      short ___libm_error_support___$LN36_1; jumptable 00993D72 case 1006
0x993D01: dec     ecx
0x993D02: jz      short loc_993D24
0x993D04: sub     ecx, 1Dh
0x993D07: jz      short ___libm_error_support___$LN30_1; jumptable 00993D72 case 1008
0x993D09: sub     ecx, 3
0x993D0C: jnz     ___libm_error_support___def_993D72
0x993D12: mov     [ebp+var_24], offset aAsin_0; jumptable 00993D72 case 1009
0x993D19: jmp     short loc_993CB5
0x993D1B: mov     [ebp+var_24], offset aAcos_0; jumptable 00993D72 case 1008
0x993D22: jmp     short loc_993CB5
0x993D24: mov     [ebp+var_24], offset off_AA684C
0x993D2B: fld     qword ptr [edi]
0x993D2D: fstp    qword ptr [esi]
0x993D2F: jmp     short loc_993CB5
0x993D31: mov     [ebp+var_24], offset off_AA684C; jumptable 00993D72 case 1006
0x993D38: jmp     loc_993CB5
0x993D3D: mov     [ebp+var_28], 2
0x993D44: jmp     loc_993C40
0x993D49: fld1
0x993D4B: jmp     loc_993E0B
0x993D50: mov     [ebp+var_28], 3
0x993D57: mov     [ebp+var_24], offset aExp10
0x993D5E: jmp     loc_993C47
0x993D63: add     ecx, 0FFFFFC18h; switch 13 cases
0x993D69: cmp     ecx, 0Ch
0x993D6C: ja      ___libm_error_support___def_993D72
0x993D72: jmp     ds:jpt_993D72[ecx*4]; switch jump
0x993D79: mov     [ebp+var_24], offset aLog; jumptable 00993D72 case 1000
0x993D80: jmp     short loc_993D2B
0x993D82: mov     [ebp+var_24], offset aLog10_0; jumptable 00993D72 case 1001
0x993D89: jmp     short loc_993D2B
0x993D8B: mov     [ebp+var_24], offset off_AA6850; jumptable 00993D72 case 1002
0x993D92: jmp     short loc_993D2B
0x993D94: mov     [ebp+var_24], offset aAtan_0; jumptable 00993D72 case 1003
0x993D9B: jmp     short loc_993D2B
0x993D9D: mov     [ebp+var_24], offset aCeil; jumptable 00993D72 case 1004
0x993DA4: jmp     short loc_993D2B
0x993DA6: mov     [ebp+var_24], offset aFloor; jumptable 00993D72 case 1005
0x993DAD: jmp     loc_993D2B
0x993DB2: mov     [ebp+var_24], offset aModf; jumptable 00993D72 case 1007
0x993DB9: jmp     loc_993D2B
0x993DBE: mov     [ebp+var_24], offset off_AA6800; jumptable 00993D72 case 1010
0x993DC5: jmp     short loc_993DD7
0x993DC7: mov     [ebp+var_24], offset off_AA67FC; jumptable 00993D72 case 1011
0x993DCE: jmp     short loc_993DD7
0x993DD0: mov     [ebp+var_24], offset off_AA67F8; jumptable 00993D72 case 1012
0x993DD7: fld     qword ptr [edi]
0x993DD9: fmul    [ebp+var_8]
0x993DDC: fst     qword ptr [esi]
0x993DDE: fld     qword ptr [edi]
0x993DE0: fstp    [ebp+var_20]
0x993DE3: fld     qword ptr [ebx]
0x993DE5: fstp    [ebp+var_18]
0x993DE8: lea     ecx, [ebp+var_28]
0x993DEB: fstp    [ebp+var_10]
0x993DEE: push    ecx
0x993DEF: mov     [ebp+var_28], 1
0x993DF6: call    eax
0x993DF8: test    eax, eax
0x993DFA: pop     ecx
0x993DFB: jnz     short loc_993E08
0x993DFD: call    __errno
0x993E02: mov     dword ptr [eax], 21h ; '!'
0x993E08: fld     [ebp+var_10]
0x993E0B: fstp    qword ptr [esi]
