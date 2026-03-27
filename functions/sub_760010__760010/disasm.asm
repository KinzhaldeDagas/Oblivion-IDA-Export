0x760010: push    ebx
0x760011: mov     ebx, [esp+4+a2]
0x760015: cmp     ebx, ds:0B28CB0h
0x76001B: push    esi
0x76001C: push    edi
0x76001D: mov     edi, [esp+0Ch+a3]
0x760021: mov     esi, ecx
0x760023: jb      short loc_760063
0x760025: cmp     ebx, ds:0B28CB8h
0x76002B: jb      short loc_760038
0x76002D: pop     edi
0x76002E: pop     esi
0x76002F: mov     eax, 1
0x760034: pop     ebx
0x760035: retn    8
0x760038: test    edi, edi
0x76003A: mov     [esp+0Ch+a2], edi
0x76003E: jz      short loc_760044
0x760040: add     dword ptr [edi+5Ch], 1
0x760044: lea     eax, [esp+0Ch+a2]
0x760048: push    eax
0x760049: push    ebx
0x76004A: lea     ecx, [esi+20h]
0x76004D: call    sub_75FED0
0x760052: test    edi, edi
0x760054: jz      short loc_760063
0x760056: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x76005A: jnz     short loc_760063
0x76005C: mov     ecx, edi
0x76005E: call    sub_772560
0x760063: mov     ecx, [esi+24h]
0x760066: mov     eax, [ecx+ebx*4]
0x760069: test    eax, eax
0x76006B: push    ebp
0x76006C: jz      short loc_7600B2
0x76006E: add     dword ptr [esi+18h], 0FFFFFFFFh
0x760072: mov     ebp, [eax+4]
0x760075: test    ebp, ebp
0x760077: jz      short loc_760085
0x760079: lea     edx, [ebp+4]
0x76007C: push    edx; lpAddend
0x76007D: call    dword ptr ds:0A28078h
0x760083: test    ebp, ebp
0x760085: setnz   byte ptr [esp+10h+a2]
0x76008A: test    ebp, ebp
0x76008C: jz      short loc_7600A7
0x76008E: lea     eax, [ebp+4]
0x760091: push    eax; lpAddend
0x760092: call    dword ptr ds:0A2807Ch
0x760098: test    eax, eax
0x76009A: jnz     short loc_7600A7
0x76009C: mov     edx, [ebp+0]
0x76009F: mov     eax, [edx]
0x7600A1: push    1
0x7600A3: mov     ecx, ebp
0x7600A5: call    eax
0x7600A7: cmp     byte ptr [esp+10h+a2], 0
0x7600AC: jz      short loc_7600B2
0x7600AE: add     dword ptr [esi+1Ch], 0FFFFFFFFh
0x7600B2: test    edi, edi
0x7600B4: mov     [esp+10h+a2], edi
0x7600B8: mov     ebp, 1
0x7600BD: jz      short loc_7600C2
0x7600BF: add     [edi+5Ch], ebp
0x7600C2: lea     ecx, [esp+10h+a2]
0x7600C6: push    ecx
0x7600C7: push    ebx
0x7600C8: lea     ecx, [esi+20h]
0x7600CB: call    sub_75FED0
0x7600D0: test    edi, edi
0x7600D2: jz      short loc_760134
0x7600D4: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x7600D8: jnz     short loc_7600E1
0x7600DA: mov     ecx, edi
0x7600DC: call    sub_772560
0x7600E1: mov     [edi], ebx
0x7600E3: mov     eax, [esi+14h]
0x7600E6: cmp     eax, ebx
0x7600E8: jnz     short loc_7600F0
0x7600EA: add     eax, 1
0x7600ED: mov     [esi+14h], eax
0x7600F0: add     [esi+18h], ebp
0x7600F3: mov     edi, [edi+4]
0x7600F6: test    edi, edi
0x7600F8: jz      short loc_760106
0x7600FA: lea     edx, [edi+4]
0x7600FD: push    edx; lpAddend
0x7600FE: call    dword ptr ds:0A28078h
0x760104: test    edi, edi
0x760106: setnz   bl
0x760109: test    edi, edi
0x76010B: jz      short loc_760124
0x76010D: lea     eax, [edi+4]
0x760110: push    eax; lpAddend
0x760111: call    dword ptr ds:0A2807Ch
0x760117: test    eax, eax
0x760119: jnz     short loc_760124
0x76011B: mov     edx, [edi]
0x76011D: mov     eax, [edx]
0x76011F: push    ebp
0x760120: mov     ecx, edi
0x760122: call    eax
0x760124: test    bl, bl
0x760126: jz      short loc_760165
0x760128: add     [esi+1Ch], ebp
0x76012B: pop     ebp
0x76012C: pop     edi
0x76012D: pop     esi
0x76012E: xor     eax, eax
0x760130: pop     ebx
0x760131: retn    8
0x760134: mov     eax, [esi+14h]
0x760137: add     ebx, 1
0x76013A: cmp     eax, ebx
0x76013C: jnz     short loc_760165
0x76013E: test    eax, eax
0x760140: jz      short loc_760165
0x760142: mov     ecx, [esi+24h]
0x760145: mov     ecx, [ecx+eax*4-4]
0x760149: lea     esp, [esp+0]
0x760150: test    ecx, ecx
0x760152: jz      short loc_76015F
0x760154: test    eax, eax
0x760156: jnz     short loc_760150
0x760158: pop     ebp
0x760159: pop     edi
0x76015A: pop     esi
0x76015B: pop     ebx
0x76015C: retn    8
0x76015F: add     eax, 0FFFFFFFFh
0x760162: mov     [esi+14h], eax
0x760165: pop     ebp
0x760166: pop     edi
0x760167: pop     esi
0x760168: xor     eax, eax
0x76016A: pop     ebx
0x76016B: retn    8
