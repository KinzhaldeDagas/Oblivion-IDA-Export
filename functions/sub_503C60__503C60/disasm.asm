0x503C60: sub     esp, 8
0x503C63: mov     edx, [esp+8+l]
0x503C67: fldz
0x503C69: lea     eax, [esp+8+var_4]
0x503C6D: fst     dword ptr [esp+8+var_8]
0x503C70: push    eax
0x503C71: fstp    [esp+0Ch+var_4]
0x503C75: mov     eax, [esp+0Ch+arg_10]
0x503C79: lea     ecx, [esp+0Ch+var_8]
0x503C7D: push    ecx; UInt16
0x503C7E: mov     ecx, [esp+10h+arg_C]
0x503C82: push    edx; l
0x503C83: mov     edx, [esp+14h+a4]
0x503C87: push    eax; a6
0x503C88: mov     eax, [esp+18h+a3]
0x503C8C: push    ecx; a5
0x503C8D: mov     ecx, [esp+1Ch+arg_4]
0x503C91: push    edx; a4
0x503C92: mov     edx, [esp+20h+a1]
0x503C96: push    eax; a3
0x503C97: push    ecx; a2
0x503C98: push    edx; a1
0x503C99: call    Script_ExtractArgs
0x503C9E: add     esp, 24h
0x503CA1: test    al, al
0x503CA3: jnz     short loc_503CA9
0x503CA5: add     esp, 8
0x503CA8: retn
0x503CA9: fld     dword ptr [esp+8+var_8]
0x503CAC: mov     al, 1
0x503CAE: fabs
0x503CB0: fstp    dword ptr [esp+8+var_8]
0x503CB3: fld     dword ptr [esp+8+var_8]
0x503CB6: fstp    dword ptr ds:0B42F4Ch
0x503CBC: fld     [esp+8+var_4]
0x503CC0: fabs
0x503CC2: fstp    [esp+8+var_4]
0x503CC6: fld     [esp+8+var_4]
0x503CCA: fstp    dword ptr ds:0B2C73Ch
0x503CD0: add     esp, 8
0x503CD3: retn
