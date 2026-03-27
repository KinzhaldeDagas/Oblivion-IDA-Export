0x503010: push    ecx
0x503011: mov     ecx, [esp+4+l]
0x503015: mov     edx, [esp+4+arg_10]
0x503019: push    esi
0x50301A: mov     esi, [esp+8+a4]
0x50301E: lea     eax, [esp+8+var_4]
0x503022: push    eax; UInt16
0x503023: mov     eax, [esp+0Ch+arg_C]
0x503027: push    ecx; l
0x503028: mov     ecx, [esp+10h+a3]
0x50302C: push    edx; a6
0x50302D: mov     edx, [esp+14h+arg_4]
0x503031: push    eax; a5
0x503032: mov     eax, [esp+18h+a1]
0x503036: push    esi; a4
0x503037: push    ecx; a3
0x503038: push    edx; a2
0x503039: push    eax; a1
0x50303A: mov     dword ptr [esp+28h+var_4], 0
0x503042: call    Script_ExtractArgs
0x503047: add     esp, 20h
0x50304A: test    al, al
0x50304C: jnz     short loc_503051
0x50304E: pop     esi
0x50304F: pop     ecx
0x503050: retn
0x503051: mov     ecx, [esp+8+arg_18]
0x503055: mov     edx, dword ptr [esp+8+var_4]
0x503059: push    ecx
0x50305A: push    0
0x50305C: push    edx
0x50305D: push    esi
0x50305E: call    sub_4F6B50
0x503063: add     esp, 10h
0x503066: pop     esi
0x503067: pop     ecx
0x503068: retn
