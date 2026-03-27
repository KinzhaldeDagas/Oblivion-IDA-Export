0x7623D0: mov     eax, [esp+arg_8]
0x7623D4: mov     ecx, [esp+arg_0]
0x7623D8: and     dword ptr [eax], 0FFFFFF0Fh
0x7623DE: cmp     ecx, 6; switch 7 cases
0x7623E1: ja      short def_7623E3
0x7623E3: jmp     ds:jpt_7623E3[ecx*4]; switch jump
0x7623EA: mov     ecx, [esp+arg_4]; jumptable 007623E3 case 0
0x7623EE: mov     dword ptr [ecx], 1
0x7623F4: or      dword ptr [eax], 50h
0x7623F7: mov     al, 1
0x7623F9: retn
0x7623FA: mov     edx, [esp+arg_4]; jumptable 007623E3 case 1
0x7623FE: mov     dword ptr [edx], 1
0x762404: or      dword ptr [eax], 40h
0x762407: mov     al, 1
0x762409: retn
0x76240A: mov     ecx, [esp+arg_4]; jumptable 007623E3 case 2
0x76240E: mov     dword ptr [ecx], 1
0x762414: or      dword ptr [eax], 80h
0x76241A: mov     al, 1
0x76241C: retn
0x76241D: mov     edx, [esp+arg_4]; jumptable 007623E3 case 3
0x762421: mov     dword ptr [edx], 1
0x762427: or      dword ptr [eax], 20h
0x76242A: mov     al, 1
0x76242C: retn
0x76242D: mov     ecx, [esp+arg_4]; jumptable 007623E3 case 5
0x762431: mov     dword ptr [ecx], 2
0x762437: or      dword ptr [eax], 40h
0x76243A: mov     al, 1
0x76243C: retn
0x76243D: mov     edx, [esp+arg_4]; jumptable 007623E3 case 6
0x762441: mov     dword ptr [edx], 2
0x762447: or      dword ptr [eax], 80h
0x76244D: mov     al, 1
0x76244F: retn
0x762450: mov     ecx, [esp+arg_4]; jumptable 007623E3 case 4
0x762454: mov     dword ptr [ecx], 2
0x76245A: or      dword ptr [eax], 20h
0x76245D: mov     al, 1
0x76245F: retn
