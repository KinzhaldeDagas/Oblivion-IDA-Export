0x45DFE0: mov     edx, [esi]
0x45DFE2: mov     eax, [edx+24h]
0x45DFE5: mov     ecx, esi
0x45DFE7: call    eax
0x45DFE9: mov     ebp, ds:0B33C18h
0x45DFEF: mov     ecx, ds:0B33C14h
0x45DFF5: mov     edx, [esp+arg_34]
0x45DFF9: push    ebp
0x45DFFA: push    ecx
0x45DFFB: push    edx
0x45DFFC: mov     ecx, ebx
0x45DFFE: call    sub_45BAB0
0x45E003: mov     ecx, [ebx+40h]
0x45E006: test    ecx, ecx
0x45E008: jz      short loc_45E02F
0x45E00A: mov     al, [esi+4]
0x45E00D: mov     edx, [esi+0Ch]
0x45E010: mov     byte ptr [esp+arg_1C], al
0x45E014: lea     eax, [esp+arg_18]
0x45E018: push    eax
0x45E019: mov     [esp+4+arg_18], edx
0x45E01D: mov     word ptr [esp+4+anonymous_0+2], bp
0x45E022: mov     [esp+4+arg_1C+1], 0
0x45E02A: call    sub_45AD00
0x45E02F: mov     ecx, esi
0x45E031: call    TESFile_ClearFormRecord
0x45E036: mov     ebp, [esp+arg_14]
