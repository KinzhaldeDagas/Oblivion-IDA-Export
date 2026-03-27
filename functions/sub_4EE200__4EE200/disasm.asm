0x4EE200: mov     eax, [esp+arg_0]
0x4EE204: push    ebx
0x4EE205: push    ebp
0x4EE206: push    0; int
0x4EE208: push    offset ??_R0?AVTESWeather@@@8; struct TypeDescriptor *
0x4EE20D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4EE212: push    0; int
0x4EE214: push    eax; void *
0x4EE215: mov     ebx, ecx
0x4EE217: call    OblivionDynamicCast
0x4EE21C: mov     ebp, eax
0x4EE21E: add     esp, 14h
0x4EE221: test    ebp, ebp
0x4EE223: jz      loc_4EE35C
0x4EE229: push    esi
0x4EE22A: push    ebp; a2
0x4EE22B: mov     ecx, ebx; this
0x4EE22D: call    TESForm_CopyAllComponentsFrom
0x4EE232: xor     esi, esi
0x4EE234: lea     eax, [esi+esi*2+6]
0x4EE238: add     eax, eax
0x4EE23A: add     eax, eax
0x4EE23C: mov     edx, [eax+ebx]
0x4EE23F: lea     ecx, [eax+ebx]
0x4EE242: add     eax, ebp
0x4EE244: push    eax
0x4EE245: mov     eax, [edx+8]
0x4EE248: call    eax
0x4EE24A: lea     eax, [esi+1]
0x4EE24D: xor     edx, edx
0x4EE24F: mov     ecx, 3
0x4EE254: div     ecx
0x4EE256: mov     esi, edx
0x4EE258: cmp     esi, 2
0x4EE25B: jl      short loc_4EE234
0x4EE25D: mov     edx, [ebx+30h]
0x4EE260: mov     edx, [edx+8]
0x4EE263: lea     ecx, [ebx+30h]
0x4EE266: push    edi
0x4EE267: lea     eax, [ebp+30h]
0x4EE26A: push    eax
0x4EE26B: call    edx
0x4EE26D: mov     eax, [ebp+48h]
0x4EE270: mov     [ebx+48h], eax
0x4EE273: mov     ecx, [ebp+4Ch]
0x4EE276: mov     [ebx+4Ch], ecx
0x4EE279: mov     edx, [ebp+50h]
0x4EE27C: mov     [ebx+50h], edx
0x4EE27F: mov     ax, [ebp+54h]
0x4EE283: mov     [ebx+54h], ax
0x4EE287: mov     cl, [ebp+56h]
0x4EE28A: mov     [ebx+56h], cl
0x4EE28D: lea     edi, [ebx+68h]
0x4EE290: lea     esi, [ebp+68h]
0x4EE293: mov     ecx, 28h ; '('
0x4EE298: rep movsd
0x4EE29A: mov     edx, [ebp+58h]
0x4EE29D: mov     [ebx+58h], edx
0x4EE2A0: mov     eax, [ebp+5Ch]
0x4EE2A3: mov     [ebx+5Ch], eax
0x4EE2A6: mov     ecx, [ebp+60h]
0x4EE2A9: mov     [ebx+60h], ecx
0x4EE2AC: mov     edx, [ebp+64h]
0x4EE2AF: mov     [ebx+64h], edx
0x4EE2B2: lea     edi, [ebx+110h]
0x4EE2B8: lea     esi, [ebp+110h]
0x4EE2BE: mov     ecx, 0Eh
0x4EE2C3: add     ebx, 108h
0x4EE2C9: rep movsd
0x4EE2CB: cmp     dword ptr [ebx+4], 0
0x4EE2CF: jz      short loc_4EE2E7
0x4EE2D1: mov     eax, [ebx+4]
0x4EE2D4: mov     esi, [eax+4]
0x4EE2D7: push    eax
0x4EE2D8: call    FormHeapFree
0x4EE2DD: add     esp, 4
0x4EE2E0: test    esi, esi
0x4EE2E2: mov     [ebx+4], esi
0x4EE2E5: jnz     short loc_4EE2D1
0x4EE2E7: add     ebp, 108h
0x4EE2ED: mov     dword ptr [ebx], 0
0x4EE2F3: jz      short loc_4EE35A
0x4EE2F5: cmp     dword ptr [ebp+0], 0
0x4EE2F9: jz      short loc_4EE35A
0x4EE2FB: push    8; Size
0x4EE2FD: call    FormHeapAlloc
0x4EE302: mov     edi, eax
0x4EE304: add     esp, 4
0x4EE307: test    edi, edi
0x4EE309: jz      short loc_4EE353
0x4EE30B: mov     eax, [ebp+0]
0x4EE30E: mov     ecx, [eax+4]
0x4EE311: mov     eax, [eax]
0x4EE313: mov     esi, ebx
0x4EE315: mov     [edi], eax
0x4EE317: mov     [edi+4], ecx
0x4EE31A: cmp     dword ptr [esi+4], 0
0x4EE31E: jz      short loc_4EE329
0x4EE320: mov     esi, [esi+4]
0x4EE323: cmp     dword ptr [esi+4], 0
0x4EE327: jnz     short loc_4EE320
0x4EE329: cmp     dword ptr [esi], 0
0x4EE32C: jz      short loc_4EE351
0x4EE32E: push    8; Size
0x4EE330: call    FormHeapAlloc
0x4EE335: add     esp, 4
0x4EE338: test    eax, eax
0x4EE33A: jz      short loc_4EE34A
0x4EE33C: mov     [eax], edi
0x4EE33E: mov     dword ptr [eax+4], 0
0x4EE345: mov     [esi+4], eax
0x4EE348: jmp     short loc_4EE353
0x4EE34A: xor     eax, eax
0x4EE34C: mov     [esi+4], eax
0x4EE34F: jmp     short loc_4EE353
0x4EE351: mov     [esi], edi
0x4EE353: mov     ebp, [ebp+4]
0x4EE356: test    ebp, ebp
0x4EE358: jnz     short loc_4EE2F5
0x4EE35A: pop     edi
0x4EE35B: pop     esi
0x4EE35C: pop     ebp
0x4EE35D: pop     ebx
0x4EE35E: retn    4
