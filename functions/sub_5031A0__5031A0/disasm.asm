0x5031A0: sub     esp, 8
0x5031A3: mov     edx, [esp+8+l]
0x5031A7: lea     eax, [esp+8+var_4]
0x5031AB: push    eax
0x5031AC: mov     eax, [esp+0Ch+arg_10]
0x5031B0: lea     ecx, [esp+0Ch+var_8]
0x5031B4: push    ecx; UInt16
0x5031B5: mov     ecx, [esp+10h+arg_C]
0x5031B9: push    edx; l
0x5031BA: mov     edx, [esp+14h+a4]
0x5031BE: push    eax; a6
0x5031BF: mov     eax, [esp+18h+a3]
0x5031C3: push    ecx; a5
0x5031C4: mov     ecx, [esp+1Ch+arg_4]
0x5031C8: push    edx; a4
0x5031C9: mov     edx, [esp+20h+a1]
0x5031CD: push    eax; a3
0x5031CE: push    ecx; a2
0x5031CF: push    edx; a1
0x5031D0: mov     dword ptr [esp+2Ch+var_8], 0
0x5031D8: mov     [esp+2Ch+var_4], 0
0x5031E0: call    Script_ExtractArgs
0x5031E5: add     esp, 24h
0x5031E8: test    al, al
0x5031EA: jnz     short loc_5031F0
0x5031EC: add     esp, 8
0x5031EF: retn
0x5031F0: mov     ecx, dword ptr [esp+8+var_8]
0x5031F3: test    ecx, ecx
0x5031F5: jz      short loc_503205
0x5031F7: cmp     [esp+8+var_4], 0
0x5031FC: setnle  al
0x5031FF: push    eax
0x503200: call    sub_4C9840
0x503205: mov     al, 1
0x503207: add     esp, 8
0x50320A: retn
