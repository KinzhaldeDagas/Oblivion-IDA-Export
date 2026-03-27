0x5012F0: push    ecx
0x5012F1: mov     ecx, [esp+4+l]
0x5012F5: mov     edx, [esp+4+arg_10]
0x5012F9: lea     eax, [esp+4+var_4]
0x5012FC: push    eax; UInt16
0x5012FD: mov     eax, [esp+8+arg_C]
0x501301: push    ecx; l
0x501302: mov     ecx, [esp+0Ch+a4]
0x501306: push    edx; a6
0x501307: mov     edx, [esp+10h+a3]
0x50130B: push    eax; a5
0x50130C: mov     eax, [esp+14h+arg_4]
0x501310: push    ecx; a4
0x501311: mov     ecx, [esp+18h+a1]
0x501315: push    edx; a3
0x501316: push    eax; a2
0x501317: push    ecx; a1
0x501318: mov     dword ptr [esp+24h+var_4], 0
0x501320: call    Script_ExtractArgs
0x501325: add     esp, 20h
0x501328: test    al, al
0x50132A: jnz     short loc_50132E
0x50132C: pop     ecx
0x50132D: retn
0x50132E: cmp     dword ptr [esp+4+var_4], 0
0x501332: mov     al, 1
0x501334: setnz   dl
0x501337: mov     ds:0B3C089h, dl
0x50133D: pop     ecx
0x50133E: retn
