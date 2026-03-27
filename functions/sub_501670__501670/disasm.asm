0x501670: push    ecx
0x501671: mov     ecx, [esp+4+l]
0x501675: mov     edx, [esp+4+arg_10]
0x501679: push    esi
0x50167A: mov     esi, [esp+8+a4]
0x50167E: lea     eax, [esp+8+var_4]
0x501682: push    eax; UInt16
0x501683: mov     eax, [esp+0Ch+arg_C]
0x501687: push    ecx; l
0x501688: mov     ecx, [esp+10h+a3]
0x50168C: push    edx; a6
0x50168D: mov     edx, [esp+14h+arg_4]
0x501691: push    eax; a5
0x501692: mov     eax, [esp+18h+a1]
0x501696: push    esi; a4
0x501697: push    ecx; a3
0x501698: push    edx; a2
0x501699: push    eax; a1
0x50169A: mov     dword ptr [esp+28h+var_4], 0
0x5016A2: call    Script_ExtractArgs
0x5016A7: add     esp, 20h
0x5016AA: test    al, al
0x5016AC: jnz     short loc_5016B1
0x5016AE: pop     esi
0x5016AF: pop     ecx
0x5016B0: retn
0x5016B1: mov     ecx, [esp+8+arg_18]
0x5016B5: mov     edx, dword ptr [esp+8+var_4]
0x5016B9: push    ecx
0x5016BA: push    0
0x5016BC: push    edx
0x5016BD: push    esi
0x5016BE: call    sub_4F6060
0x5016C3: add     esp, 10h
0x5016C6: pop     esi
0x5016C7: pop     ecx
0x5016C8: retn
