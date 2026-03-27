0x6440B0: push    ebx
0x6440B1: mov     ebx, [esp+4+arg_0]
0x6440B5: push    esi
0x6440B6: push    edi
0x6440B7: mov     esi, ecx
0x6440B9: xor     edi, edi
0x6440BB: cmp     [esi+2Ch], edi
0x6440BE: jnz     short loc_6440CB
0x6440C0: mov     eax, [esi]
0x6440C2: mov     edx, [eax+558h]
0x6440C8: push    ebx
0x6440C9: call    edx
0x6440CB: mov     eax, [esi+2Ch]
0x6440CE: test    eax, eax
0x6440D0: jz      short def_6440FF; jumptable 006440FF default case, cases 19-22,25,27,33,34,38-49
0x6440D2: mov     ecx, [esi+8]
0x6440D5: mov     edi, [ecx+28h]
0x6440D8: mov     edx, ecx
0x6440DA: cmp     byte ptr [edx+20h], 8
0x6440DE: jnz     short def_6440FF; jumptable 006440FF default case, cases 19-22,25,27,33,34,38-49
0x6440E0: mov     ecx, eax
0x6440E2: mov     eax, [ecx]
0x6440E4: mov     edx, [eax+170h]
0x6440EA: call    edx
0x6440EC: movzx   eax, byte ptr [eax+4]
0x6440F0: add     eax, 0FFFFFFEEh; switch 34 cases
0x6440F3: cmp     eax, 21h
0x6440F6: ja      short def_6440FF; jumptable 006440FF default case, cases 19-22,25,27,33,34,38-49
0x6440F8: movzx   eax, ds:byte_644280[eax]
0x6440FF: jmp     ds:jpt_6440FF[eax*4]; switch jump
0x644106: mov     ecx, [esi+2Ch]; jumptable 006440FF case 26
0x644109: mov     edx, [ecx]
0x64410B: mov     eax, [edx+170h]
0x644111: push    0; int
0x644113: push    offset ??_R0?AVTESObjectLIGH@@@8; struct TypeDescriptor *
0x644118: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x64411D: push    0; int
0x64411F: call    eax
0x644121: push    eax; void *
0x644122: call    OblivionDynamicCast
0x644127: add     esp, 14h
0x64412A: test    eax, eax
0x64412C: jz      short loc_644147
0x64412E: mov     ecx, [eax+7Ch]
0x644131: shr     ecx, 1
0x644133: test    cl, 1
0x644136: jnz     short loc_644147
0x644138: mov     edx, [esi]; jumptable 006440FF cases 18,23,24,28-32,35-37,50,51
0x64413A: mov     eax, [edx+188h]
0x644140: push    1
0x644142: push    ebx
0x644143: mov     ecx, esi
0x644145: call    eax
0x644147: pop     edi
0x644148: pop     esi
0x644149: pop     ebx
0x64414A: retn    4
0x64414D: test    edi, edi; jumptable 006440FF default case, cases 19-22,25,27,33,34,38-49
0x64414F: jz      short loc_64415C
0x644151: mov     ecx, edi
0x644153: call    sub_569E60
0x644158: test    eax, eax
0x64415A: jnz     short loc_64416E
0x64415C: mov     eax, [esi+8]
0x64415F: mov     ecx, [eax+1Ch]
0x644162: shr     ecx, 2
0x644165: test    cl, 1
0x644168: jz      loc_644252
0x64416E: mov     edx, [esi+8]
0x644171: mov     ecx, [edx+28h]
0x644174: test    ecx, ecx
0x644176: mov     edi, 1
0x64417B: jz      short loc_644193
0x64417D: call    sub_452A60
0x644182: test    eax, eax
0x644184: jz      short loc_644193
0x644186: mov     eax, [esi+8]
0x644189: mov     ecx, [eax+28h]
0x64418C: call    sub_452A60
0x644191: mov     edi, eax
0x644193: mov     edx, [esi]
0x644195: mov     eax, [edx+554h]
0x64419B: push    edi
0x64419C: push    ebx
0x64419D: mov     ecx, esi
0x64419F: call    eax
0x6441A1: test    al, al
0x6441A3: jz      short loc_644219
0x6441A5: fld     dword ptr ds:0A30634h
0x6441AB: push    ecx
0x6441AC: mov     ecx, [esi+8]
0x6441AF: fstp    [esp+10h+var_10]; float
0x6441B2: push    0; char
0x6441B4: push    ebx; int
0x6441B5: call    sub_566DC0
0x6441BA: test    al, al
0x6441BC: jnz     short loc_6441D7
0x6441BE: mov     ecx, [esi+8]
0x6441C1: cmp     byte ptr [ecx+20h], 3
0x6441C5: jnz     short loc_6441D7
0x6441C7: mov     edx, [esi]
0x6441C9: mov     eax, [edx+17Ch]
0x6441CF: push    0
0x6441D1: mov     ecx, esi
0x6441D3: call    eax
0x6441D5: jmp     short loc_6441F9
0x6441D7: mov     eax, [esi+8]
0x6441DA: cmp     dword ptr [eax+18h], 1Ah
0x6441DE: jnz     short loc_6441EA
0x6441E0: cmp     dword ptr [eax+30h], 0
0x6441E4: jnz     short loc_6441EA
0x6441E6: push    2
0x6441E8: jmp     short loc_6441EC
0x6441EA: push    1
0x6441EC: mov     edx, [esi]
0x6441EE: mov     eax, [edx+188h]
0x6441F4: push    ebx
0x6441F5: mov     ecx, esi
0x6441F7: call    eax
0x6441F9: mov     ecx, [esi+8]
0x6441FC: cmp     byte ptr [ecx+20h], 2
0x644200: jnz     loc_644147
0x644206: mov     edx, [esi]
0x644208: mov     eax, [edx+508h]
0x64420E: push    ebx
0x64420F: mov     ecx, esi
0x644211: call    eax
0x644213: pop     edi
0x644214: pop     esi
0x644215: pop     ebx
0x644216: retn    4
0x644219: mov     ecx, ebx; this
0x64421B: call    Actor__GetProcessLevel
0x644220: cmp     eax, 2
0x644223: mov     edx, [esi]
0x644225: jge     short loc_64423F
0x644227: fld     dword ptr ds:0A71E4Ch
0x64422D: mov     eax, [edx+6Ch]
0x644230: push    ecx
0x644231: fstp    [esp+10h+var_10]
0x644234: push    ebx
0x644235: mov     ecx, esi
0x644237: call    eax
0x644239: pop     edi
0x64423A: pop     esi
0x64423B: pop     ebx
0x64423C: retn    4
0x64423F: mov     eax, [edx+51Ch]
0x644245: push    1
0x644247: push    ebx
0x644248: mov     ecx, esi
0x64424A: call    eax
0x64424C: pop     edi
0x64424D: pop     esi
0x64424E: pop     ebx
0x64424F: retn    4
0x644252: cmp     dword ptr [eax+18h], 1Ah
0x644256: jnz     loc_644138; jumptable 006440FF cases 18,23,24,28-32,35-37,50,51
0x64425C: mov     edx, [esi]
0x64425E: mov     eax, [edx+188h]
0x644264: push    2
0x644266: push    ebx
0x644267: mov     ecx, esi
0x644269: call    eax
0x64426B: pop     edi
0x64426C: pop     esi
0x64426D: pop     ebx
0x64426E: retn    4
