0x503E90: push    ecx
0x503E91: mov     ecx, [esp+4+arg_10]
0x503E95: mov     edx, [esp+4+arg_C]
0x503E99: push    esi
0x503E9A: mov     esi, [esp+8+a4]
0x503E9E: push    edi
0x503E9F: mov     edi, [esp+0Ch+l]
0x503EA3: lea     eax, [esp+0Ch+var_4]
0x503EA7: push    eax; UInt16
0x503EA8: mov     eax, [esp+10h+a3]
0x503EAC: push    edi; l
0x503EAD: push    ecx; a6
0x503EAE: mov     ecx, [esp+18h+arg_4]
0x503EB2: push    edx; a5
0x503EB3: mov     edx, [esp+1Ch+a1]
0x503EB7: push    esi; a4
0x503EB8: push    eax; a3
0x503EB9: push    ecx; a2
0x503EBA: push    edx; a1
0x503EBB: mov     dword ptr [esp+2Ch+var_4], 0
0x503EC3: call    Script_ExtractArgs
0x503EC8: add     esp, 20h
0x503ECB: test    al, al
0x503ECD: jnz     short loc_503ED3
0x503ECF: pop     edi
0x503ED0: pop     esi
0x503ED1: pop     ecx
0x503ED2: retn
0x503ED3: test    esi, esi
0x503ED5: fldz
0x503ED7: push    ebx
0x503ED8: mov     ebx, [esp+10h+arg_18]
0x503EDC: fstp    qword ptr [ebx]
0x503EDE: jz      short loc_503EFA
0x503EE0: test    edi, edi
0x503EE2: jz      short loc_503EFA
0x503EE4: mov     eax, dword ptr [esp+10h+var_4]
0x503EE8: push    8
0x503EEA: push    eax
0x503EEB: mov     ecx, edi
0x503EED: call    sub_4FB5F0
0x503EF2: test    al, al
0x503EF4: jz      short loc_503EFA
0x503EF6: fld1
0x503EF8: fstp    qword ptr [ebx]
0x503EFA: pop     ebx
0x503EFB: pop     edi
0x503EFC: mov     al, 1
0x503EFE: pop     esi
0x503EFF: pop     ecx
0x503F00: retn
