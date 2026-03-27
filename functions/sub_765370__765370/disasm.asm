0x765370: push    esi
0x765371: mov     esi, [esp+4+arg_0]
0x765375: test    esi, esi
0x765377: jz      loc_76547B
0x76537D: mov     ax, [esi+2Eh]
0x765381: and     ax, 0F000h
0x765385: cmp     ax, 4000h
0x765389: jnz     loc_76547B
0x76538F: movzx   eax, word ptr [esi+8]
0x765393: push    ebx
0x765394: movzx   ebx, byte ptr [esi+30h]
0x765398: test    ebx, ebx
0x76539A: mov     [esp+8+arg_0], ebx
0x76539E: jnz     short loc_7653BA
0x7653A0: movzx   ecx, word ptr [esi+2Ch]
0x7653A4: and     ecx, 0F000h
0x7653AA: push    ecx
0x7653AB: push    ebx
0x7653AC: push    ebx
0x7653AD: push    ebx
0x7653AE: push    ebx
0x7653AF: push    ebx
0x7653B0: push    eax
0x7653B1: mov     ecx, esi
0x7653B3: call    sub_728890
0x7653B8: jmp     short loc_76540F
0x7653BA: push    ebp
0x7653BB: push    edi
0x7653BC: xor     edx, edx
0x7653BE: xor     ebp, ebp
0x7653C0: xor     edi, edi
0x7653C2: xor     eax, eax
0x7653C4: xor     ecx, ecx
0x7653C6: test    bl, 1
0x7653C9: jz      short loc_7653CE
0x7653CB: mov     edx, [esi+1Ch]
0x7653CE: test    bl, 2
0x7653D1: jz      short loc_7653D6
0x7653D3: mov     ebp, [esi+20h]
0x7653D6: test    bl, 4
0x7653D9: jz      short loc_7653DE
0x7653DB: mov     edi, [esi+24h]
0x7653DE: test    bl, 8
0x7653E1: jz      short loc_7653ED
0x7653E3: movzx   ecx, byte ptr [esi+2Ch]
0x7653E7: mov     eax, [esi+28h]
0x7653EA: and     ecx, 3Fh
0x7653ED: movzx   ebx, word ptr [esi+2Ch]
0x7653F1: and     ebx, 0F000h
0x7653F7: push    ebx
0x7653F8: push    ecx
0x7653F9: push    eax
0x7653FA: movzx   eax, word ptr [esi+8]
0x7653FE: push    edi
0x7653FF: push    ebp
0x765400: push    edx
0x765401: push    eax
0x765402: mov     ecx, esi
0x765404: call    sub_728890
0x765409: mov     ebx, [esp+10h+arg_0]
0x76540D: pop     edi
0x76540E: pop     ebp
0x76540F: cmp     [esp+8+arg_8], 0
0x765414: jz      short loc_76542C
0x765416: test    bl, 20h
0x765419: jnz     short loc_76547A
0x76541B: mov     edx, [esp+8+arg_4]
0x76541F: mov     ecx, [edx+8]
0x765422: call    sub_72EFB0
0x765427: pop     ebx
0x765428: pop     esi
0x765429: retn    0Ch
0x76542C: test    bl, 10h
0x76542F: jnz     short loc_76547A
0x765431: push    esi
0x765432: push    offset dword_B3FD2C
0x765437: call    NiRTTI__IsObjectOfRTTIType
0x76543C: add     esp, 8
0x76543F: test    al, al
0x765441: jz      short loc_765456
0x765443: movzx   eax, word ptr [esi+40h]
0x765447: push    0
0x765449: push    eax
0x76544A: mov     ecx, esi
0x76544C: call    sub_71FC80
0x765451: pop     ebx
0x765452: pop     esi
0x765453: retn    0Ch
0x765456: push    esi
0x765457: push    offset dword_B3FD0C
0x76545C: call    NiRTTI__IsObjectOfRTTIType
0x765461: add     esp, 8
0x765464: test    al, al
0x765466: jz      short loc_76547A
0x765468: mov     ecx, [esi+48h]
0x76546B: movzx   edx, word ptr [esi+44h]
0x76546F: push    0
0x765471: push    ecx
0x765472: push    edx
0x765473: mov     ecx, esi
0x765475: call    sub_71A040
0x76547A: pop     ebx
0x76547B: pop     esi
0x76547C: retn    0Ch
