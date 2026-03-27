0x502E20: sub     esp, 8
0x502E23: mov     edx, [esp+8+l]
0x502E27: push    esi
0x502E28: mov     esi, [esp+0Ch+a4]
0x502E2C: xor     eax, eax
0x502E2E: mov     dword ptr [esp+0Ch+var_4], eax
0x502E32: mov     [esp+0Ch+var_8], eax
0x502E36: lea     eax, [esp+0Ch+var_8]
0x502E3A: push    eax
0x502E3B: mov     eax, [esp+10h+arg_10]
0x502E3F: lea     ecx, [esp+10h+var_4]
0x502E43: push    ecx; UInt16
0x502E44: mov     ecx, [esp+14h+arg_C]
0x502E48: push    edx; l
0x502E49: mov     edx, [esp+18h+a3]
0x502E4D: push    eax; a6
0x502E4E: mov     eax, [esp+1Ch+arg_4]
0x502E52: push    ecx; a5
0x502E53: mov     ecx, [esp+20h+a1]
0x502E57: push    esi; a4
0x502E58: push    edx; a3
0x502E59: push    eax; a2
0x502E5A: push    ecx; a1
0x502E5B: call    Script_ExtractArgs
0x502E60: add     esp, 24h
0x502E63: test    al, al
0x502E65: jnz     short loc_502E6C
0x502E67: pop     esi
0x502E68: add     esp, 8
0x502E6B: retn
0x502E6C: mov     edx, [esp+0Ch+arg_18]
0x502E70: mov     eax, [esp+0Ch+var_8]
0x502E74: mov     ecx, dword ptr [esp+0Ch+var_4]
0x502E78: push    edx
0x502E79: push    eax
0x502E7A: push    ecx
0x502E7B: push    esi
0x502E7C: call    sub_4F67E0
0x502E81: add     esp, 10h
0x502E84: pop     esi
0x502E85: add     esp, 8
0x502E88: retn
