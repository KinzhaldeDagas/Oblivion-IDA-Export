0x5043E0: push    ecx
0x5043E1: mov     ecx, [esp+4+arg_10]
0x5043E5: mov     edx, [esp+4+arg_C]
0x5043E9: push    esi
0x5043EA: mov     esi, [esp+8+a4]
0x5043EE: push    edi
0x5043EF: mov     edi, [esp+0Ch+l]
0x5043F3: lea     eax, [esp+0Ch+var_4]
0x5043F7: push    eax; UInt16
0x5043F8: mov     eax, [esp+10h+a3]
0x5043FC: push    edi; l
0x5043FD: push    ecx; a6
0x5043FE: mov     ecx, [esp+18h+arg_4]
0x504402: push    edx; a5
0x504403: mov     edx, [esp+1Ch+a1]
0x504407: push    esi; a4
0x504408: push    eax; a3
0x504409: push    ecx; a2
0x50440A: push    edx; a1
0x50440B: mov     dword ptr [esp+2Ch+var_4], 0
0x504413: call    Script_ExtractArgs
0x504418: add     esp, 20h
0x50441B: test    al, al
0x50441D: jnz     short loc_504423
0x50441F: pop     edi
0x504420: pop     esi
0x504421: pop     ecx
0x504422: retn
0x504423: test    esi, esi
0x504425: fldz
0x504427: push    ebx
0x504428: mov     ebx, [esp+10h+arg_18]
0x50442C: fstp    qword ptr [ebx]
0x50442E: jz      short loc_50444D
0x504430: test    edi, edi
0x504432: jz      short loc_50444D
0x504434: mov     eax, dword ptr [esp+10h+var_4]
0x504438: push    200h
0x50443D: push    eax
0x50443E: mov     ecx, edi
0x504440: call    sub_4FB5F0
0x504445: test    al, al
0x504447: jz      short loc_50444D
0x504449: fld1
0x50444B: fstp    qword ptr [ebx]
0x50444D: pop     ebx
0x50444E: pop     edi
0x50444F: mov     al, 1
0x504451: pop     esi
0x504452: pop     ecx
0x504453: retn
