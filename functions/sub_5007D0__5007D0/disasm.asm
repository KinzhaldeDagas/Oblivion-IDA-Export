0x5007D0: push    ecx
0x5007D1: mov     ecx, [esp+4+l]
0x5007D5: mov     edx, [esp+4+arg_10]
0x5007D9: lea     eax, [esp+4+var_4]
0x5007DC: push    eax; UInt16
0x5007DD: mov     eax, [esp+8+arg_C]
0x5007E1: push    ecx; l
0x5007E2: mov     ecx, [esp+0Ch+a4]
0x5007E6: push    edx; a6
0x5007E7: mov     edx, [esp+10h+a3]
0x5007EB: push    eax; a5
0x5007EC: mov     eax, [esp+14h+arg_4]
0x5007F0: push    ecx; a4
0x5007F1: mov     ecx, [esp+18h+a1]
0x5007F5: push    edx; a3
0x5007F6: push    eax; a2
0x5007F7: push    ecx; a1
0x5007F8: mov     dword ptr [esp+24h+var_4], 0
0x500800: call    Script_ExtractArgs
0x500805: add     esp, 20h
0x500808: test    al, al
0x50080A: jnz     short loc_50080E
0x50080C: pop     ecx
0x50080D: retn
0x50080E: cmp     dword ptr [esp+4+var_4], 0
0x500812: mov     al, 1
0x500814: setnz   dl
0x500817: mov     ds:0B3BDA5h, dl
0x50081D: pop     ecx
0x50081E: retn
