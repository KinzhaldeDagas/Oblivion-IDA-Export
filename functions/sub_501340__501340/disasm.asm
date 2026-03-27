0x501340: push    ecx
0x501341: mov     ecx, [esp+4+l]
0x501345: mov     edx, [esp+4+arg_10]
0x501349: lea     eax, [esp+4+var_4]
0x50134C: push    eax; UInt16
0x50134D: mov     eax, [esp+8+arg_C]
0x501351: push    ecx; l
0x501352: mov     ecx, [esp+0Ch+a4]
0x501356: push    edx; a6
0x501357: mov     edx, [esp+10h+a3]
0x50135B: push    eax; a5
0x50135C: mov     eax, [esp+14h+arg_4]
0x501360: push    ecx; a4
0x501361: mov     ecx, [esp+18h+a1]
0x501365: push    edx; a3
0x501366: push    eax; a2
0x501367: push    ecx; a1
0x501368: mov     dword ptr [esp+24h+var_4], 0
0x501370: call    Script_ExtractArgs
0x501375: add     esp, 20h
0x501378: test    al, al
0x50137A: jnz     short loc_50137E
0x50137C: pop     ecx
0x50137D: retn
0x50137E: cmp     dword ptr [esp+4+var_4], 0
0x501382: mov     al, 1
0x501384: setnz   dl
0x501387: mov     ds:0B3B77Ch, dl
0x50138D: pop     ecx
0x50138E: retn
