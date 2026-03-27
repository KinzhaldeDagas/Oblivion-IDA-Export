0x941F30: sub     esp, 10h
0x941F33: push    ebp
0x941F34: mov     ebp, [esp+14h+arg_C]
0x941F38: push    esi
0x941F39: push    edi
0x941F3A: mov     edi, [esp+1Ch+arg_4]
0x941F3E: mov     ecx, edi
0x941F40: call    sub_940CF0
0x941F45: mov     esi, [ebx]
0x941F47: mov     ecx, edi
0x941F49: mov     [esp+1Ch+var_C], eax
0x941F4D: call    sub_940CE0
0x941F52: mov     [esp+1Ch+var_4], eax
0x941F56: mov     eax, [ebx+4]
0x941F59: test    eax, eax
0x941F5B: jz      loc_94212C
0x941F61: mov     edi, [esp+1Ch+arg_0]
0x941F65: mov     ecx, 1
0x941F6A: call    sub_941B90
0x941F6F: mov     ecx, [esp+1Ch+var_4]
0x941F73: lea     eax, [ecx-1]; switch 28 cases
0x941F76: cmp     eax, 1Bh
0x941F79: ja      def_941F86; jumptable 00941F86 default case, cases 21-24,26,27
0x941F7F: movzx   eax, ds:byte_942148[eax]
0x941F86: jmp     ds:jpt_941F86[eax*4]; switch jump
0x941F8D: cmp     ecx, 0Ch; jumptable 00941F86 cases 1-18,20
0x941F90: jl      short loc_941F9F
0x941F92: cmp     ecx, 12h
0x941F95: mov     dword ptr [esp+1Ch+Args], 1
0x941F9D: jle     short loc_941FA7
0x941F9F: mov     dword ptr [esp+1Ch+Args], 10h
0x941FA7: mov     eax, [ebx+4]
0x941FAA: test    eax, eax
0x941FAC: mov     [esp+1Ch+var_10], 0
0x941FB4: jle     def_941F86; jumptable 00941F86 default case, cases 21-24,26,27
0x941FBA: lea     ebx, [ebx+0]
0x941FC0: mov     eax, [esp+1Ch+var_10]
0x941FC4: cdq
0x941FC5: idiv    dword ptr [esp+1Ch+Args]
0x941FC9: test    edx, edx
0x941FCB: jnz     short loc_941FE8
0x941FCD: mov     ecx, [esp+1Ch+arg_0]
0x941FD1: mov     edx, [ecx]
0x941FD3: mov     eax, [esp+1Ch+arg_8]
0x941FD7: push    edx; Args
0x941FD8: push    offset off_AA22F0; Format
0x941FDD: push    eax; int
0x941FDE: call    sub_8BBEE0
0x941FE3: add     esp, 0Ch
0x941FE6: jmp     short loc_941FF3
0x941FE8: mov     ecx, [esp+1Ch+arg_8]
0x941FEC: push    20h ; ' '
0x941FEE: call    sub_8BBD90
0x941FF3: mov     edi, [esp+1Ch+arg_8]
0x941FF7: mov     eax, [esp+1Ch+var_4]
0x941FFB: mov     ecx, ebp
0x941FFD: call    sub_941760
0x942002: mov     edi, [esp+1Ch+var_C]
0x942006: mov     eax, [esp+1Ch+var_10]
0x94200A: mov     ecx, [ebx+4]
0x94200D: add     esi, edi
0x94200F: inc     eax
0x942010: cmp     eax, ecx
0x942012: mov     [esp+1Ch+var_10], eax
0x942016: jl      short loc_941FC0
0x942018: jmp     def_941F86; jumptable 00941F86 default case, cases 21-24,26,27
0x94201D: mov     ecx, [esp+1Ch+arg_4]; jumptable 00941F86 case 19
0x942021: mov     edx, [ecx]
0x942023: mov     eax, [esp+1Ch+arg_8]
0x942027: push    edx; Args
0x942028: push    offset aZeroArrayS; "<!-- zero array %s -->"
0x94202D: push    eax; int
0x94202E: call    sub_8BBEE0
0x942033: add     esp, 0Ch
0x942036: jmp     def_941F86; jumptable 00941F86 default case, cases 21-24,26,27
0x94203B: mov     eax, [ebx+4]; jumptable 00941F86 case 25
0x94203E: xor     edi, edi
0x942040: test    eax, eax
0x942042: jle     def_941F86; jumptable 00941F86 default case, cases 21-24,26,27
0x942048: mov     ecx, [esp+1Ch+arg_8]
0x94204C: push    ebp
0x94204D: push    ecx
0x94204E: mov     ecx, [esp+24h+arg_4]
0x942052: push    esi
0x942053: call    sub_90D1F0
0x942058: mov     ecx, [esp+28h+arg_0]
0x94205C: call    sub_941CE0
0x942061: mov     edx, [esp+28h+var_C]
0x942065: mov     eax, [ebx+4]
0x942068: add     esp, 0Ch
0x94206B: add     esi, edx
0x94206D: inc     edi
0x94206E: cmp     edi, eax
0x942070: jl      short loc_942048
0x942072: jmp     def_941F86; jumptable 00941F86 default case, cases 21-24,26,27
0x942077: mov     eax, [ebx+4]; jumptable 00941F86 case 28
0x94207A: xor     edi, edi
0x94207C: test    eax, eax
0x94207E: jle     def_941F86; jumptable 00941F86 default case, cases 21-24,26,27
0x942084: mov     eax, [esi]
0x942086: mov     edx, [ebp+0]
0x942089: push    eax
0x94208A: lea     ecx, [esp+20h+Args]
0x94208E: push    ecx
0x94208F: mov     ecx, ebp
0x942091: call    dword ptr [edx+10h]
0x942094: mov     eax, [esi+4]
0x942097: mov     edx, [ebp+0]
0x94209A: push    eax
0x94209B: lea     ecx, [esp+20h+var_4]
0x94209F: push    ecx
0x9420A0: mov     ecx, ebp
0x9420A2: call    dword ptr [edx+10h]
0x9420A5: mov     eax, [ebx+4]
0x9420A8: inc     edi
0x9420A9: cmp     edi, eax
0x9420AB: mov     eax, offset word_A36430
0x9420B0: jl      short loc_9420B7
0x9420B2: mov     eax, offset EmptyString
0x9420B7: mov     edx, [esp+1Ch+var_4]
0x9420BB: mov     ecx, [esp+1Ch+arg_8]
0x9420BF: push    eax
0x9420C0: mov     eax, dword ptr [esp+20h+Args]
0x9420C4: push    edx
0x9420C5: push    eax; Args
0x9420C6: push    offset aSSS_10; "(%s %s%s)"
0x9420CB: push    ecx; int
0x9420CC: call    sub_8BBEE0
0x9420D1: add     esi, [esp+30h+var_C]
0x9420D5: mov     ecx, [esp+30h+var_4]
0x9420D9: mov     eax, [ecx-4]
0x9420DC: add     ecx, 0FFFFFFF4h
0x9420DF: add     esp, 14h
0x9420E2: dec     eax
0x9420E3: mov     [ecx+8], eax
0x9420E6: jns     short loc_9420ED
0x9420E8: call    sub_8B1930
0x9420ED: mov     ecx, dword ptr [esp+1Ch+Args]
0x9420F1: mov     eax, [ecx-4]
0x9420F4: add     ecx, 0FFFFFFF4h
0x9420F7: dec     eax
0x9420F8: mov     [ecx+8], eax
0x9420FB: jns     short loc_942102
0x9420FD: call    sub_8B1930
0x942102: cmp     edi, [ebx+4]
0x942105: jl      loc_942084
0x94210B: mov     edi, [esp+1Ch+arg_0]; jumptable 00941F86 default case, cases 21-24,26,27
0x94210F: or      ecx, 0FFFFFFFFh
0x942112: call    sub_941B90
0x942117: mov     edx, [edi]
0x942119: mov     eax, [esp+1Ch+arg_8]
0x94211D: push    edx; Args
0x94211E: push    offset off_AA22F0; Format
0x942123: push    eax; int
0x942124: call    sub_8BBEE0
0x942129: add     esp, 0Ch
0x94212C: pop     edi
0x94212D: pop     esi
0x94212E: pop     ebp
0x94212F: add     esp, 10h
0x942132: retn
