0x5045E0: push    ecx
0x5045E1: mov     ecx, [esp+4+arg_10]
0x5045E5: mov     edx, [esp+4+arg_C]
0x5045E9: push    esi
0x5045EA: mov     esi, [esp+8+a4]
0x5045EE: push    edi
0x5045EF: mov     edi, [esp+0Ch+l]
0x5045F3: lea     eax, [esp+0Ch+var_4]
0x5045F7: push    eax; UInt16
0x5045F8: mov     eax, [esp+10h+a3]
0x5045FC: push    edi; l
0x5045FD: push    ecx; a6
0x5045FE: mov     ecx, [esp+18h+arg_4]
0x504602: push    edx; a5
0x504603: mov     edx, [esp+1Ch+a1]
0x504607: push    esi; a4
0x504608: push    eax; a3
0x504609: push    ecx; a2
0x50460A: push    edx; a1
0x50460B: mov     dword ptr [esp+2Ch+var_4], 0
0x504613: call    Script_ExtractArgs
0x504618: add     esp, 20h
0x50461B: test    al, al
0x50461D: jnz     short loc_504623
0x50461F: pop     edi
0x504620: pop     esi
0x504621: pop     ecx
0x504622: retn
0x504623: test    esi, esi
0x504625: fldz
0x504627: push    ebx
0x504628: mov     ebx, [esp+10h+arg_18]
0x50462C: fstp    qword ptr [ebx]
0x50462E: jz      short loc_50464D
0x504630: test    edi, edi
0x504632: jz      short loc_50464D
0x504634: mov     eax, dword ptr [esp+10h+var_4]
0x504638: push    2000h
0x50463D: push    eax
0x50463E: mov     ecx, edi
0x504640: call    sub_4FB5F0
0x504645: test    al, al
0x504647: jz      short loc_50464D
0x504649: fld1
0x50464B: fstp    qword ptr [ebx]
0x50464D: pop     ebx
0x50464E: pop     edi
0x50464F: mov     al, 1
0x504651: pop     esi
0x504652: pop     ecx
0x504653: retn
