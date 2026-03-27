0x442410: mov     eax, ds:0B333A0h
0x442415: sub     esp, 8
0x442418: cmp     dword ptr [eax+74h], 0
0x44241C: push    ebx
0x44241D: mov     ebx, ecx
0x44241F: jnz     short loc_442428
0x442421: xor     al, al
0x442423: pop     ebx
0x442424: add     esp, 8
0x442427: retn
0x442428: mov     ecx, ds:0B06A2Ch
0x44242E: mov     edx, [ebx+24h]
0x442431: push    ebp
0x442432: mov     ebp, [ebx+20h]
0x442435: mov     eax, ecx
0x442437: shr     eax, 1
0x442439: push    edi
0x44243A: sub     ebp, eax
0x44243C: sub     edx, eax
0x44243E: mov     [esp+14h+var_4], ebp
0x442442: mov     [esp+14h+var_8], edx
0x442446: xor     edi, edi
0x442448: push    esi
0x442449: lea     esp, [esp+0]
0x442450: cmp     edi, ecx
0x442452: jnb     short loc_4424C4
0x442454: xor     esi, esi
0x442456: cmp     esi, ecx
0x442458: jnb     short loc_4424B5
0x44245A: mov     ecx, [ebx+8]
0x44245D: push    esi
0x44245E: push    edi
0x44245F: call    GetGridEntry
0x442464: test    eax, eax
0x442466: jz      short loc_4424AA
0x442468: mov     eax, [eax]
0x44246A: test    eax, eax
0x44246C: jnz     short loc_44248C
0x44246E: mov     edx, [esp+18h+var_8]
0x442472: mov     ecx, ds:0B333A0h
0x442478: mov     ecx, [ecx+74h]; this
0x44247B: lea     eax, [esi+edx]
0x44247E: push    eax; signed int
0x44247F: lea     edx, [edi+ebp]
0x442482: push    edx; signed int
0x442483: call    TESWorldSpace__GetCellAtCellCoord
0x442488: test    eax, eax
0x44248A: jz      short loc_4424BA
0x44248C: mov     edx, ds:0B051DCh
0x442492: xor     ecx, ecx
0x442494: cmp     ecx, edx
0x442496: jnb     short loc_4424BA
0x442498: mov     ebp, [ebx+3Ch]
0x44249B: cmp     [ebp+ecx*4+0], eax
0x44249F: jz      short loc_4424A6
0x4424A1: add     ecx, 1
0x4424A4: jmp     short loc_442494
0x4424A6: mov     ebp, [esp+18h+var_4]
0x4424AA: mov     ecx, ds:0B06A2Ch
0x4424B0: add     esi, 1
0x4424B3: jmp     short loc_442456
0x4424B5: add     edi, 1
0x4424B8: jmp     short loc_442450
0x4424BA: pop     esi
0x4424BB: pop     edi
0x4424BC: pop     ebp
0x4424BD: xor     al, al
0x4424BF: pop     ebx
0x4424C0: add     esp, 8
0x4424C3: retn
0x4424C4: pop     esi
0x4424C5: pop     edi
0x4424C6: pop     ebp
0x4424C7: mov     al, 1
0x4424C9: pop     ebx
0x4424CA: add     esp, 8
0x4424CD: retn
