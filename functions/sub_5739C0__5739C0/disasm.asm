0x5739C0: push    ecx
0x5739C1: fldz
0x5739C3: mov     eax, [esp+4+arg_18]
0x5739C7: push    ebp; int
0x5739C8: mov     ebp, [esp+8+arg_8]
0x5739CC: push    esi; int
0x5739CD: mov     esi, [esp+0Ch+arg_4]
0x5739D1: fst     dword ptr [esi]
0x5739D3: push    edi; int
0x5739D4: mov     edi, ecx
0x5739D6: fld     dword ptr [edi+2Ch]
0x5739D9: mov     ecx, [esp+10h+arg_0]
0x5739DD: fstp    dword ptr [ebp+0]
0x5739E0: add     eax, ecx
0x5739E2: cmp     byte ptr [eax], 0
0x5739E5: fst     [esp+10h+arg_4]; float
0x5739E9: mov     [esp+10h+var_4], 1; int
0x5739F1: jz      loc_573BC8
0x5739F7: fld     qword ptr ds:0A68950h
0x5739FD: push    ebx
0x5739FE: mov     ebx, eax
0x573A00: mov     edx, [esp+14h+arg_C]
0x573A04: test    edx, edx
0x573A06: jz      loc_573BC5
0x573A0C: jle     short loc_573A15
0x573A0E: sub     edx, 1
0x573A11: mov     [esp+14h+arg_C], edx
0x573A15: mov     al, [ebx]
0x573A17: movzx   ecx, al
0x573A1A: add     ecx, 0FFFFFF6Fh; switch 4 cases
0x573A20: cmp     ecx, 3
0x573A23: ja      short def_573A25
0x573A25: jmp     ds:jpt_573A25[ecx*4]; switch jump
0x573A2C: mov     al, 27h ; '''; jumptable 00573A25 cases 145,146
0x573A2E: jmp     short def_573A25
0x573A30: mov     al, 22h ; '"'; jumptable 00573A25 cases 147,148
