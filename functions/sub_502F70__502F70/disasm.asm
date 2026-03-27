0x502F70: push    ecx
0x502F71: mov     ecx, [esp+4+l]
0x502F75: mov     edx, [esp+4+arg_10]
0x502F79: push    esi
0x502F7A: mov     esi, [esp+8+a4]
0x502F7E: lea     eax, [esp+8+var_4]
0x502F82: push    eax; UInt16
0x502F83: mov     eax, [esp+0Ch+arg_C]
0x502F87: push    ecx; l
0x502F88: mov     ecx, [esp+10h+a3]
0x502F8C: push    edx; a6
0x502F8D: mov     edx, [esp+14h+arg_4]
0x502F91: push    eax; a5
0x502F92: mov     eax, [esp+18h+a1]
0x502F96: push    esi; a4
0x502F97: push    ecx; a3
0x502F98: push    edx; a2
0x502F99: push    eax; a1
0x502F9A: mov     dword ptr [esp+28h+var_4], 0
0x502FA2: call    Script_ExtractArgs
0x502FA7: add     esp, 20h
0x502FAA: test    al, al
0x502FAC: jnz     short loc_502FB1
0x502FAE: pop     esi
0x502FAF: pop     ecx
0x502FB0: retn
0x502FB1: mov     ecx, [esp+8+arg_18]
0x502FB5: mov     edx, dword ptr [esp+8+var_4]
0x502FB9: push    ecx
0x502FBA: push    0
0x502FBC: push    edx
0x502FBD: push    esi
0x502FBE: call    Cmd_GetIsCurrentWeather
0x502FC3: add     esp, 10h
0x502FC6: pop     esi
0x502FC7: pop     ecx
0x502FC8: retn
