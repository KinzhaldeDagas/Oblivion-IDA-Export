0x954EC0: push    ebp
0x954EC1: mov     ebp, esp
0x954EC3: and     esp, 0FFFFFFF8h
0x954EC6: sub     esp, 84h
0x954ECC: push    ebx
0x954ECD: push    esi
0x954ECE: mov     esi, [ebp+arg_8]
0x954ED1: mov     eax, [esi+8]
0x954ED4: push    edi
0x954ED5: mov     edi, [ebp+arg_0]
0x954ED8: mov     [esp+90h+var_6C], eax
0x954EDC: mov     al, [edi+4]
0x954EDF: test    al, al
0x954EE1: mov     ebx, ecx
0x954EE3: mov     [esp+90h+var_68], ebx
0x954EE7: jz      loc_954FD1
0x954EED: mov     ecx, [ebx+48h]
0x954EF0: lea     eax, [edi+0Ch]
0x954EF3: lea     edx, [ebx+50h]
0x954EF6: mov     [esp+90h+var_70], ecx
0x954EFA: xor     esi, esi
0x954EFC: mov     [esp+90h+var_68], eax
0x954F00: mov     [esp+90h+var_74], edx
0x954F04: mov     cl, [edi+39h]
0x954F07: test    cl, cl
0x954F09: jnz     short loc_954F10
0x954F0B: mov     byte ptr [esi+edi+40h], 1
0x954F10: fld     dword ptr [eax+4]
0x954F13: mov     ecx, [esp+90h+var_74]
0x954F17: fsub    dword ptr [eax]
0x954F19: mov     edx, [ecx]
0x954F1B: mov     [esp+90h+var_7C], edx
0x954F1F: fcomp   [esp+90h+var_7C]
0x954F23: fnstsw  ax
0x954F25: test    ah, 5
0x954F28: jp      short loc_954F74
0x954F2A: fld     [esp+90h+var_7C]
0x954F2E: fcomp   [esp+90h+var_70]
0x954F32: fnstsw  ax
0x954F34: test    ah, 5
0x954F37: jp      short loc_954F74
0x954F39: fld     dword ptr [ebx+3Ch]
0x954F3C: push    ecx
0x954F3D: fmul    [esp+94h+var_7C]
0x954F41: fstp    [esp+94h+var_94]
0x954F44: call    sub_8ECB30
0x954F49: mov     ecx, [esp+94h+var_6C]
0x954F4D: mov     edx, 1
0x954F52: shl     edx, cl
0x954F54: shl     eax, 7
0x954F57: add     esp, 4
0x954F5A: cmp     eax, edx
0x954F5C: jl      short loc_954F68
0x954F5E: mov     eax, [esp+90h+var_7C]
0x954F62: mov     [esp+90h+var_70], eax
0x954F66: jmp     short loc_954F74
0x954F68: mov     al, [edi+39h]
0x954F6B: test    al, al
0x954F6D: jnz     short loc_954F74
0x954F6F: mov     byte ptr [esi+edi+40h], 2
0x954F74: add     [esp+90h+var_74], 4
0x954F79: mov     eax, [esp+90h+var_68]
0x954F7D: inc     esi
0x954F7E: add     eax, 8
0x954F81: cmp     esi, 3
0x954F84: mov     [esp+90h+var_68], eax
0x954F88: jl      loc_954F04
0x954F8E: fld     dword ptr [ebx+3Ch]
0x954F91: push    ecx
0x954F92: fmul    dword ptr ds:0A37450h
0x954F98: fmul    [esp+94h+var_70]
0x954F9C: fstp    [esp+94h+var_94]
0x954F9F: call    sub_8ECB30
0x954FA4: add     esp, 4
0x954FA7: xor     ecx, ecx
0x954FA9: test    eax, eax
0x954FAB: jz      short loc_954FB7
0x954FAD: lea     ecx, [ecx+0]
0x954FB0: shr     eax, 1
0x954FB2: inc     ecx
0x954FB3: test    eax, eax
0x954FB5: jnz     short loc_954FB0
0x954FB7: lea     eax, [ecx+6]
0x954FBA: mov     ecx, [esp+90h+var_6C]
0x954FBE: cmp     eax, ecx
0x954FC0: jg      loc_955147
0x954FC6: mov     eax, ecx
0x954FC8: pop     edi
0x954FC9: pop     esi
0x954FCA: pop     ebx
0x954FCB: mov     esp, ebp
0x954FCD: pop     ebp
0x954FCE: retn    0Ch
0x954FD1: mov     al, [edi+39h]
0x954FD4: test    al, al
0x954FD6: jnz     short loc_954FFA
0x954FD8: mov     ecx, [esi]
0x954FDA: cmp     ecx, [ebx+18h]
0x954FDD: jge     short loc_954FFA
0x954FDF: mov     edx, [ebp+arg_4]
0x954FE2: push    esi
0x954FE3: push    edx
0x954FE4: push    edi
0x954FE5: lea     eax, [esp+9Ch+var_7D]
0x954FE9: push    eax
0x954FEA: mov     ecx, ebx
0x954FEC: call    sub_954D70
0x954FF1: cmp     byte ptr [eax], 0
0x954FF4: jz      short loc_954FFA
0x954FF6: mov     byte ptr [edi+3Ch], 1
0x954FFA: cmp     byte ptr [edi+3Ch], 1
0x954FFE: jnz     short loc_955011
0x955000: mov     edx, [ebp+arg_4]
0x955003: lea     ecx, [esp+90h+var_5C]
0x955007: push    ecx
0x955008: push    esi
0x955009: push    edx
0x95500A: mov     ecx, ebx
0x95500C: call    sub_954DB0
0x955011: mov     edx, [edi+0ECh]
0x955017: or      eax, 0FFFFFFFFh
0x95501A: mov     [esp+90h+var_7C], eax
0x95501E: mov     [esp+90h+var_78], eax
0x955022: mov     eax, [edi+0F0h]
0x955028: mov     [esp+90h+var_60], eax
0x95502C: xor     eax, eax
0x95502E: mov     [esp+90h+var_74], 7FFFFFFFh
0x955036: mov     [esp+90h+var_64], edx
0x95503A: mov     [esp+90h+var_70], eax
0x95503E: mov     edi, edi
0x955040: mov     ebx, [esp+eax+90h+var_60]
0x955044: test    ebx, ebx
0x955046: jz      short loc_9550B5
0x955048: mov     ecx, 12h
0x95504D: lea     edi, [esp+90h+var_48]
0x955051: rep movsd
0x955053: push    ebx
0x955054: lea     ecx, [esp+94h+var_48]
0x955058: call    sub_954710
0x95505D: mov     esi, [esp+90h+var_68]
0x955061: lea     ecx, [esi+30h]
0x955064: push    ecx
0x955065: push    ebx
0x955066: lea     ecx, [esp+98h+var_48]
0x95506A: call    sub_954C10
0x95506F: mov     edi, [ebp+arg_8]
0x955072: mov     edx, [edi]
0x955074: inc     edx
0x955075: lea     ecx, [esp+90h+var_48]
0x955079: mov     [esp+90h+var_48], edx
0x95507D: mov     [esp+90h+var_44], 0
0x955082: call    sub_954CA0
0x955087: lea     eax, [esp+90h+var_48]
0x95508B: push    eax
0x95508C: push    edi
0x95508D: push    ebx
0x95508E: mov     ecx, esi
0x955090: call    sub_954EC0
0x955095: mov     ecx, [esp+90h+var_70]
0x955099: mov     edi, [ebp+arg_0]
0x95509C: mov     edx, [esp+90h+var_64]
0x9550A0: mov     esi, [ebp+arg_8]
0x9550A3: mov     [esp+ecx+90h+var_78], eax
0x9550A7: mov     eax, [esp+90h+var_40]
0x9550AB: cmp     [esp+90h+var_74], eax
0x9550AF: jl      short loc_9550B5
0x9550B1: mov     [esp+90h+var_74], eax
0x9550B5: mov     eax, [esp+90h+var_70]
0x9550B9: sub     eax, 4
0x9550BC: cmp     eax, 0FFFFFFFCh
0x9550BF: mov     [esp+90h+var_70], eax
0x9550C3: jge     loc_955040
0x9550C9: mov     eax, [esp+90h+var_74]
0x9550CD: mov     esi, [esp+90h+var_6C]
0x9550D1: add     eax, 2
0x9550D4: lea     ecx, [esi+2]
0x9550D7: cmp     ecx, eax
0x9550D9: jge     short loc_9550DD
0x9550DB: mov     eax, ecx
0x9550DD: test    edx, edx
0x9550DF: jz      short loc_955110
0x9550E1: mov     cl, [edi+39h]
0x9550E4: test    cl, cl
0x9550E6: jz      short loc_9550F5
0x9550E8: mov     cl, [edx+39h]
0x9550EB: test    cl, cl
0x9550ED: jnz     short loc_9550FF
0x9550EF: cmp     [esp+90h+var_7C], eax
0x9550F3: jmp     short loc_9550F9
0x9550F5: cmp     [esp+90h+var_7C], esi
0x9550F9: jge     short loc_9550FF
0x9550FB: mov     byte ptr [edx+3Ch], 1
0x9550FF: mov     cl, [edx+3Ch]
0x955102: test    cl, cl
0x955104: jnz     short loc_955110
0x955106: mov     ecx, [esp+90h+var_7C]
0x95510A: cmp     eax, ecx
0x95510C: jl      short loc_955110
0x95510E: mov     eax, ecx
0x955110: mov     edx, [esp+90h+var_60]
0x955114: test    edx, edx
0x955116: jz      short loc_955147
0x955118: mov     cl, [edi+39h]
0x95511B: test    cl, cl
0x95511D: jz      short loc_95512C
0x95511F: mov     cl, [edx+39h]
0x955122: test    cl, cl
0x955124: jnz     short loc_955136
0x955126: cmp     [esp+90h+var_78], eax
0x95512A: jmp     short loc_955130
0x95512C: cmp     [esp+90h+var_78], esi
0x955130: jge     short loc_955136
0x955132: mov     byte ptr [edx+3Ch], 1
0x955136: mov     cl, [edx+3Ch]
0x955139: test    cl, cl
0x95513B: jnz     short loc_955147
0x95513D: mov     ecx, [esp+90h+var_78]
0x955141: cmp     eax, ecx
0x955143: jl      short loc_955147
0x955145: mov     eax, ecx
0x955147: pop     edi
0x955148: pop     esi
0x955149: pop     ebx
0x95514A: mov     esp, ebp
0x95514C: pop     ebp
0x95514D: retn    0Ch
