0x4431F0: push    ebx
0x4431F1: mov     ebx, [esp+4+arg_0]
0x4431F5: test    ebx, ebx
0x4431F7: push    esi
0x4431F8: mov     esi, ecx
0x4431FA: jz      loc_4432F0
0x443200: cmp     [esi+74h], ebx
0x443203: jz      loc_4432F0
0x443209: push    3
0x44320B: call    nullsub_returnTrue_0arg
0x443210: add     esp, 4
0x443213: cmp     byte ptr ds:0B051CCh, 0
0x44321A: jz      short loc_443261
0x44321C: cmp     dword ptr [esi+34h], 0
0x443220: jz      short loc_443229
0x443222: mov     ecx, esi; this
0x443224: call    sub_4425D0
0x443229: mov     eax, [esi+74h]
0x44322C: push    edi
0x44322D: push    eax
0x44322E: push    1
0x443230: mov     ecx, esi
0x443232: call    sub_43FFF0
0x443237: cmp     dword ptr [esi+34h], 0
0x44323B: mov     edi, eax
0x44323D: jnz     short loc_44324A
0x44323F: push    1
0x443241: mov     ecx, esi
0x443243: call    sub_43FE30
0x443248: add     edi, eax
0x44324A: call    sub_4C9300
0x44324F: test    edi, edi
0x443251: pop     edi
0x443252: jnz     short loc_443258
0x443254: test    al, al
0x443256: jz      short loc_443261
0x443258: push    0; a2
0x44325A: mov     ecx, esi; this
0x44325C: call    sub_43FC20
0x443261: mov     ecx, ds:0B33398h
0x443267: mov     dword ptr [ecx+18h], 0
0x44326E: mov     ecx, esi; this
0x443270: mov     [esi+74h], ebx
0x443273: call    sub_4425D0
0x443278: mov     eax, 7FFFFFFFh
0x44327D: mov     [esi+20h], eax
0x443280: mov     [esi+24h], eax
0x443283: mov     [esi+28h], eax
0x443286: mov     [esi+2Ch], eax
0x443289: mov     [esi+48h], eax
0x44328C: mov     [esi+4Ch], eax
0x44328F: mov     esi, ds:0B33A98h
0x443295: add     esi, 0Ch
0x443298: jz      short loc_4432E1
0x44329A: test    esi, esi
0x44329C: jz      short loc_4432DA
0x44329E: mov     ecx, [esi]
0x4432A0: call    sub_4EF7E0
0x4432A5: test    eax, eax
0x4432A7: jz      short loc_4432BD
0x4432A9: mov     ecx, [esi]
0x4432AB: cmp     ecx, ebx
0x4432AD: jnz     short loc_4432BD
0x4432AF: call    sub_4EF7E0
0x4432B4: mov     ecx, eax
0x4432B6: call    sub_4EBC00
0x4432BB: jmp     short loc_4432DA
0x4432BD: mov     ecx, [esi]
0x4432BF: call    sub_4EF7E0
0x4432C4: test    eax, eax
0x4432C6: jz      short loc_4432DA
0x4432C8: mov     ecx, [esi]
0x4432CA: cmp     ecx, ebx
0x4432CC: jz      short loc_4432DA
0x4432CE: call    sub_4EF7E0
0x4432D3: mov     ecx, eax
0x4432D5: call    sub_4EA570
0x4432DA: mov     esi, [esi+4]
0x4432DD: test    esi, esi
0x4432DF: jnz     short loc_44329E
0x4432E1: call    sub_57A0D0
0x4432E6: push    2
0x4432E8: call    nullsub_returnTrue_0arg
0x4432ED: add     esp, 4
0x4432F0: pop     esi
0x4432F1: pop     ebx
0x4432F2: retn    4
