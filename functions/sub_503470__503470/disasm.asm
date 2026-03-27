0x503470: push    ecx
0x503471: mov     ecx, [esp+4+l]
0x503475: mov     edx, [esp+4+arg_10]
0x503479: lea     eax, [esp+4+var_4]
0x50347C: push    eax; UInt16
0x50347D: mov     eax, [esp+8+arg_C]
0x503481: push    ecx; l
0x503482: mov     ecx, [esp+0Ch+a4]
0x503486: push    edx; a6
0x503487: mov     edx, [esp+10h+a3]
0x50348B: push    eax; a5
0x50348C: mov     eax, [esp+14h+arg_4]
0x503490: push    ecx; a4
0x503491: mov     ecx, [esp+18h+a1]
0x503495: push    edx; a3
0x503496: push    eax; a2
0x503497: push    ecx; a1
0x503498: mov     dword ptr [esp+24h+var_4], 0
0x5034A0: call    Script_ExtractArgs
0x5034A5: add     esp, 20h
0x5034A8: test    al, al
0x5034AA: jnz     short loc_5034AE
0x5034AC: pop     ecx
0x5034AD: retn
0x5034AE: mov     edx, [esp+4+arg_18]
0x5034B2: mov     eax, dword ptr [esp+4+var_4]
0x5034B5: mov     ecx, ds:0B333C4h
0x5034BB: push    edx
0x5034BC: push    0
0x5034BE: push    eax
0x5034BF: push    ecx
0x5034C0: call    sub_4F6EC0
0x5034C5: add     esp, 10h
0x5034C8: pop     ecx
0x5034C9: retn
