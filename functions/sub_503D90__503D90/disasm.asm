0x503D90: push    ecx
0x503D91: mov     ecx, [esp+4+arg_10]
0x503D95: mov     edx, [esp+4+arg_C]
0x503D99: push    esi
0x503D9A: mov     esi, [esp+8+a4]
0x503D9E: push    edi
0x503D9F: mov     edi, [esp+0Ch+l]
0x503DA3: lea     eax, [esp+0Ch+var_4]
0x503DA7: push    eax; UInt16
0x503DA8: mov     eax, [esp+10h+a3]
0x503DAC: push    edi; l
0x503DAD: push    ecx; a6
0x503DAE: mov     ecx, [esp+18h+arg_4]
0x503DB2: push    edx; a5
0x503DB3: mov     edx, [esp+1Ch+a1]
0x503DB7: push    esi; a4
0x503DB8: push    eax; a3
0x503DB9: push    ecx; a2
0x503DBA: push    edx; a1
0x503DBB: mov     dword ptr [esp+2Ch+var_4], 0
0x503DC3: call    Script_ExtractArgs
0x503DC8: add     esp, 20h
0x503DCB: test    al, al
0x503DCD: jnz     short loc_503DD3
0x503DCF: pop     edi
0x503DD0: pop     esi
0x503DD1: pop     ecx
0x503DD2: retn
0x503DD3: test    esi, esi
0x503DD5: fldz
0x503DD7: push    ebx
0x503DD8: mov     ebx, [esp+10h+arg_18]
0x503DDC: fstp    qword ptr [ebx]
0x503DDE: jz      short loc_503DFD
0x503DE0: test    edi, edi
0x503DE2: jz      short loc_503DFD
0x503DE4: mov     eax, dword ptr [esp+10h+var_4]
0x503DE8: push    4000h
0x503DED: push    eax
0x503DEE: mov     ecx, edi
0x503DF0: call    sub_4FB5F0
0x503DF5: test    al, al
0x503DF7: jz      short loc_503DFD
0x503DF9: fld1
0x503DFB: fstp    qword ptr [ebx]
0x503DFD: pop     ebx
0x503DFE: pop     edi
0x503DFF: mov     al, 1
0x503E01: pop     esi
0x503E02: pop     ecx
0x503E03: retn
