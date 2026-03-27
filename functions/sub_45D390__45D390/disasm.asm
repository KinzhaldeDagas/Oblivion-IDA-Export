0x45D390: push    ecx
0x45D391: mov     eax, ds:0B33398h
0x45D396: push    esi
0x45D397: mov     esi, [eax+10h]
0x45D39A: push    edi
0x45D39B: mov     edi, ecx
0x45D39D: call    dword ptr ds:0A2808Ch
0x45D3A3: cmp     eax, esi
0x45D3A5: jnz     short loc_45D3AC
0x45D3A7: mov     al, [edi+18h]
0x45D3AA: jmp     short loc_45D3B2
0x45D3AC: mov     eax, [edi+18h]
0x45D3AF: shr     eax, 12h
0x45D3B2: and     al, 1
0x45D3B4: test    al, al
0x45D3B6: jnz     loc_45D447
0x45D3BC: mov     esi, [esp+0Ch+arg_0]
0x45D3C0: mov     edx, [esi+0Ch]
0x45D3C3: lea     ecx, [esp+0Ch+var_4]
0x45D3C7: push    ecx
0x45D3C8: mov     ecx, [edi]
0x45D3CA: push    edx
0x45D3CB: mov     [esp+14h+var_4], 0
0x45D3D3: call    NiTMap_GetAt
0x45D3D8: mov     eax, [esp+0Ch+var_4]
0x45D3DC: test    eax, eax
0x45D3DE: jz      short loc_45D447
0x45D3E0: test    dword ptr [eax], 2000000h
0x45D3E6: jz      short loc_45D447
0x45D3E8: push    ebp
0x45D3E9: mov     ecx, esi
0x45D3EB: call    sub_4E0840
0x45D3F0: movzx   ebp, ax
0x45D3F3: test    bp, bp
0x45D3F6: jz      short loc_45D446
0x45D3F8: push    offset aTessaveloadg_1; lpCriticalSection
0x45D3FD: mov     ecx, offset stru_B33B80
0x45D402: call    NiEnterCriticalSection
0x45D407: push    ebp
0x45D408: mov     ecx, edi
0x45D40A: call    sub_452310
0x45D40F: mov     ebp, eax
0x45D411: lea     eax, [ebp+2]
0x45D414: mov     ecx, esi
0x45D416: mov     [edi+14h], eax
0x45D419: call    sub_4E08D0
0x45D41E: push    ebp
0x45D41F: lea     ecx, [esi+44h]
0x45D422: mov     dword ptr [edi+14h], 0
0x45D429: call    sub_4210E0
0x45D42E: mov     edx, [esi]
0x45D430: mov     eax, [edx+40h]
0x45D433: push    1000000h
0x45D438: mov     ecx, esi
0x45D43A: call    eax
0x45D43C: mov     ecx, offset stru_B33B80; lpCriticalSection
0x45D441: call    NiLeaveCriticalSection_0
0x45D446: pop     ebp
0x45D447: pop     edi
0x45D448: pop     esi
0x45D449: pop     ecx
0x45D44A: retn    4
