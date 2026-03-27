0x444EC0: push    ecx
0x444EC1: mov     eax, ds:0B33B00h
0x444EC6: mov     eax, [eax+18h]
0x444EC9: push    esi
0x444ECA: shr     eax, 0Bh
0x444ECD: mov     esi, ecx
0x444ECF: mov     ecx, ds:0B33A98h
0x444ED5: and     al, 1
0x444ED7: test    ecx, ecx
0x444ED9: push    edi
0x444EDA: jz      short loc_444EFB
0x444EDC: cmp     dword ptr [esi+34h], 0
0x444EE0: jnz     short loc_444EFB
0x444EE2: mov     edx, ds:0BA9DE4h
0x444EE8: mov     edi, large fs:2Ch
0x444EEF: mov     edx, [edi+edx*4]
0x444EF2: cmp     byte ptr [edx+184h], 0
0x444EF9: jz      short loc_444F03
0x444EFB: test    al, al
0x444EFD: jz      loc_444F9D
0x444F03: cmp     dword ptr [esi+74h], 0
0x444F07: mov     edi, [esi+20h]
0x444F0A: push    ebx
0x444F0B: mov     ebx, [esi+24h]
0x444F0E: jnz     short loc_444F1B
0x444F10: mov     eax, [ecx+0Ch]
0x444F13: push    eax
0x444F14: mov     ecx, esi
0x444F16: call    sub_4431F0
0x444F1B: mov     eax, [esp+10h+arg_0]
0x444F1F: test    eax, eax
0x444F21: jz      short loc_444F56
0x444F23: fld     dword ptr [eax]
0x444F25: fstp    [esp+10h+var_4]
0x444F29: fld     [esp+10h+var_4]
0x444F2D: fistp   [esp+10h+arg_0]
0x444F31: mov     ecx, [esp+10h+arg_0]
0x444F35: sar     ecx, 0Ch
0x444F38: mov     [esi+20h], ecx
0x444F3B: fld     dword ptr [eax+4]
0x444F3E: fstp    [esp+10h+var_4]
0x444F42: fld     [esp+10h+var_4]
0x444F46: fistp   [esp+10h+arg_0]
0x444F4A: mov     edx, [esp+10h+arg_0]
0x444F4E: sar     edx, 0Ch
0x444F51: mov     [esi+24h], edx
0x444F54: jmp     short loc_444F5C
0x444F56: mov     [esi+20h], edi
0x444F59: mov     [esi+24h], ebx
0x444F5C: mov     ecx, [esi+20h]
0x444F5F: mov     edx, [esi+24h]
0x444F62: mov     [esi+28h], ecx
0x444F65: mov     ecx, [esp+10h+arg_4]
0x444F69: push    ecx
0x444F6A: push    eax
0x444F6B: mov     ecx, esi
0x444F6D: mov     [esi+2Ch], edx
0x444F70: call    sub_444C70
0x444F75: cmp     dword ptr [esi+34h], 0
0x444F79: pop     ebx
0x444F7A: jnz     short loc_444F81
0x444F7C: call    sub_499E40
0x444F81: mov     ecx, ds:0B33B00h
0x444F87: call    sub_45A500
0x444F8C: test    al, al
0x444F8E: jnz     short loc_444F98
0x444F90: mov     ecx, [esi+54h]
0x444F93: call    WaterSurfaceLoop
0x444F98: call    sub_537D40
0x444F9D: pop     edi
0x444F9E: pop     esi
0x444F9F: pop     ecx
0x444FA0: retn    8
