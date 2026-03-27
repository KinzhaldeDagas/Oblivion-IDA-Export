0x50D3E0: sub     esp, 8
0x50D3E3: mov     edx, [esp+8+l]
0x50D3E7: xor     eax, eax
0x50D3E9: mov     dword ptr [esp+8+var_8], eax
0x50D3EC: mov     [esp+8+var_4], eax
0x50D3F0: lea     eax, [esp+8+var_4]
0x50D3F4: push    eax
0x50D3F5: mov     eax, [esp+0Ch+arg_10]
0x50D3F9: lea     ecx, [esp+0Ch+var_8]
0x50D3FD: push    ecx; UInt16
0x50D3FE: mov     ecx, [esp+10h+arg_C]
0x50D402: push    edx; l
0x50D403: mov     edx, [esp+14h+a4]
0x50D407: push    eax; a6
0x50D408: mov     eax, [esp+18h+a3]
0x50D40C: push    ecx; a5
0x50D40D: mov     ecx, [esp+1Ch+arg_4]
0x50D411: push    edx; a4
0x50D412: mov     edx, [esp+20h+a1]
0x50D416: push    eax; a3
0x50D417: push    ecx; a2
0x50D418: push    edx; a1
0x50D419: call    Script_ExtractArgs
0x50D41E: add     esp, 24h
0x50D421: test    al, al
0x50D423: jnz     short loc_50D429
0x50D425: add     esp, 8
0x50D428: retn
0x50D429: mov     eax, dword ptr [esp+8+var_8]
0x50D42C: cmp     eax, 7
0x50D42F: ja      short loc_50D453
0x50D431: mov     ecx, ds:0B333C4h
0x50D437: push    eax
0x50D438: call    Actor_GetBaseCalcAVi
0x50D43D: mov     ecx, [esp+8+var_4]
0x50D441: mov     edx, dword ptr [esp+8+var_8]
0x50D444: add     eax, ecx
0x50D446: mov     ecx, ds:0B333C4h
0x50D44C: push    eax
0x50D44D: push    edx
0x50D44E: call    Player_Actor_SetAViBase
0x50D453: mov     al, 1
0x50D455: add     esp, 8
0x50D458: retn
