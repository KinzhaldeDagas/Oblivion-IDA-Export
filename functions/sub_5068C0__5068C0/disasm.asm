0x5068C0: push    ecx
0x5068C1: mov     ecx, [esp+4+l]
0x5068C5: mov     edx, [esp+4+arg_10]
0x5068C9: lea     eax, [esp+4+var_4]
0x5068CC: push    eax; UInt16
0x5068CD: mov     eax, [esp+8+arg_C]
0x5068D1: push    ecx; l
0x5068D2: mov     ecx, [esp+0Ch+a4]
0x5068D6: push    edx; a6
0x5068D7: mov     edx, [esp+10h+a3]
0x5068DB: push    eax; a5
0x5068DC: mov     eax, [esp+14h+arg_4]
0x5068E0: push    ecx; a4
0x5068E1: mov     ecx, [esp+18h+a1]
0x5068E5: push    edx; a3
0x5068E6: push    eax; a2
0x5068E7: push    ecx; a1
0x5068E8: mov     dword ptr [esp+24h+var_4], 0
0x5068F0: call    Script_ExtractArgs
0x5068F5: add     esp, 20h
0x5068F8: test    al, al
0x5068FA: jnz     short loc_5068FE
0x5068FC: pop     ecx
0x5068FD: retn
0x5068FE: mov     edx, dword ptr [esp+4+var_4]
0x506901: mov     ecx, ds:0B333A0h
0x506907: push    edx
0x506908: call    sub_444840
0x50690D: mov     al, 1
0x50690F: pop     ecx
0x506910: retn
