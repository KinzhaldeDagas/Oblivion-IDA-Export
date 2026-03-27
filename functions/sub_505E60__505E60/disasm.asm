0x505E60: sub     esp, 8
0x505E63: mov     edx, [esp+8+l]
0x505E67: lea     eax, [esp+8+var_8]
0x505E6A: push    eax
0x505E6B: mov     eax, [esp+0Ch+arg_10]
0x505E6F: lea     ecx, [esp+0Ch+var_4]
0x505E73: push    ecx; UInt16
0x505E74: mov     ecx, [esp+10h+arg_C]
0x505E78: push    edx; l
0x505E79: mov     edx, [esp+14h+a4]
0x505E7D: push    eax; a6
0x505E7E: mov     eax, [esp+18h+a3]
0x505E82: push    ecx; a5
0x505E83: mov     ecx, [esp+1Ch+arg_4]
0x505E87: push    edx; a4
0x505E88: mov     edx, [esp+20h+a1]
0x505E8C: push    eax; a3
0x505E8D: push    ecx; a2
0x505E8E: push    edx; a1
0x505E8F: mov     [esp+2Ch+var_8], 0
0x505E97: mov     dword ptr [esp+2Ch+var_4], 0
0x505E9F: call    Script_ExtractArgs
0x505EA4: add     esp, 24h
0x505EA7: test    al, al
0x505EA9: jnz     short loc_505EAF
0x505EAB: add     esp, 8
0x505EAE: retn
0x505EAF: mov     eax, [esp+8+var_8]
0x505EB2: test    eax, eax
0x505EB4: jnz     short loc_505EC9
0x505EB6: mov     ecx, ds:0B333C4h
0x505EBC: mov     eax, [ecx]
0x505EBE: mov     edx, [eax+170h]
0x505EC4: call    edx
0x505EC6: mov     [esp+8+var_8], eax
0x505EC9: mov     ecx, dword ptr [esp+8+var_4]
0x505ECD: test    ecx, ecx
0x505ECF: jz      short loc_505ED7
0x505ED1: push    eax
0x505ED2: call    sub_4CAA10
0x505ED7: mov     al, 1
0x505ED9: add     esp, 8
0x505EDC: retn
