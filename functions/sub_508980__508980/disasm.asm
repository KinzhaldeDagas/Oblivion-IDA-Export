0x508980: sub     esp, 20h
0x508983: lea     eax, [esp+20h+var_14]
0x508987: push    eax
0x508988: lea     ecx, [esp+24h+var_18]
0x50898C: push    ecx
0x50898D: mov     ecx, [esp+28h+l]
0x508991: lea     edx, [esp+28h+var_1C]
0x508995: push    edx
0x508996: mov     edx, [esp+2Ch+arg_10]
0x50899A: lea     eax, [esp+2Ch+var_20]
0x50899E: push    eax; UInt16
0x50899F: mov     eax, [esp+30h+arg_C]
0x5089A3: push    ecx; l
0x5089A4: mov     ecx, [esp+34h+a4]
0x5089A8: push    edx; a6
0x5089A9: mov     edx, [esp+38h+a3]
0x5089AD: push    eax; a5
0x5089AE: mov     eax, [esp+3Ch+arg_4]
0x5089B2: push    ecx; a4
0x5089B3: mov     ecx, [esp+40h+a1]
0x5089B7: push    edx; a3
0x5089B8: push    eax; a2
0x5089B9: push    ecx; a1
0x5089BA: call    Script_ExtractArgs
0x5089BF: add     esp, 2Ch
0x5089C2: test    al, al
0x5089C4: jnz     short loc_5089CA
0x5089C6: add     esp, 20h
0x5089C9: retn
0x5089CA: fld     dword ptr [esp+20h+var_20]
0x5089CD: fstp    [esp+20h+var_10]
0x5089D1: mov     edx, [esp+20h+var_10]
0x5089D5: fld     [esp+20h+var_1C]
0x5089D9: mov     ds:0B2C728h, edx
0x5089DF: fstp    [esp+20h+var_C]
0x5089E3: mov     eax, [esp+20h+var_C]
0x5089E7: fld     [esp+20h+var_18]
0x5089EB: mov     ds:0B2C72Ch, eax
0x5089F0: fstp    [esp+20h+var_8]
0x5089F4: mov     ecx, [esp+20h+var_8]
0x5089F8: fld     [esp+20h+var_14]
0x5089FC: mov     ds:0B2C730h, ecx
0x508A02: fstp    [esp+20h+var_4]
0x508A06: mov     edx, [esp+20h+var_4]
0x508A0A: mov     ds:0B2C734h, edx
0x508A10: mov     al, 1
0x508A12: add     esp, 20h
0x508A15: retn
