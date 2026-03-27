0x4A51F0: push    0FFFFFFFFh
0x4A51F2: push    offset SEH_690310
0x4A51F7: mov     eax, large fs:0
0x4A51FD: push    eax
0x4A51FE: push    ecx
0x4A51FF: push    ebx
0x4A5200: push    ebp
0x4A5201: push    esi
0x4A5202: push    edi
0x4A5203: mov     eax, ds:0B30AACh
0x4A5208: xor     eax, esp
0x4A520A: push    eax
0x4A520B: lea     eax, [esp+24h+var_C]
0x4A520F: mov     large fs:0, eax
0x4A5215: mov     esi, ecx
0x4A5217: mov     [esp+24h+var_10], esi
0x4A521B: mov     ebp, [esp+24h+a1]
0x4A521F: xor     ebx, ebx
0x4A5221: cmp     ebp, ebx
0x4A5223: jz      loc_4A536C
0x4A5229: mov     ecx, ebp
0x4A522B: call    TESFile_GetChunkType
0x4A5230: cmp     eax, 444D4452h
0x4A5235: jz      short loc_4A5249
0x4A5237: mov     ecx, ebp
0x4A5239: call    TESFile_GetChunkType
0x4A523E: cmp     eax, 44534452h
0x4A5243: jnz     loc_4A536C
0x4A5249: mov     ecx, ebp
0x4A524B: call    TESFile_GetChunkType
0x4A5250: cmp     eax, 444D4452h
0x4A5255: jnz     short loc_4A5269
0x4A5257: add     esi, 8
0x4A525A: push    esi
0x4A525B: mov     ecx, ebp
0x4A525D: call    TESFile_GetChunkData4
0x4A5262: mov     al, 1
0x4A5264: jmp     loc_4A536E
0x4A5269: mov     ecx, [ebp+254h]
0x4A526F: mov     eax, 0AAAAAAABh
0x4A5274: mul     ecx
0x4A5276: mov     esi, edx
0x4A5278: shr     esi, 3
0x4A527B: cmp     ecx, 4
0x4A527E: jz      loc_4A536C
0x4A5284: xor     ecx, ecx
0x4A5286: mov     eax, esi
0x4A5288: mov     edx, 0Ch
0x4A528D: mul     edx
0x4A528F: seto    cl
0x4A5292: neg     ecx
0x4A5294: or      ecx, eax
0x4A5296: push    ecx; Size
0x4A5297: call    FormHeapAlloc
0x4A529C: mov     edi, eax
0x4A529E: add     esp, 4
0x4A52A1: mov     [esp+24h+a1], edi
0x4A52A5: cmp     edi, ebx
0x4A52A7: mov     [esp+24h+var_4], ebx
0x4A52AB: jz      short loc_4A52BD
0x4A52AD: push    offset sub_4A5040
0x4A52B2: push    esi
0x4A52B3: push    0Ch
0x4A52B5: push    edi
0x4A52B6: call    sub_401080
0x4A52BB: mov     ebx, edi
0x4A52BD: lea     eax, [esi+esi*2]
0x4A52C0: add     eax, eax
0x4A52C2: add     eax, eax
0x4A52C4: push    eax; a4
0x4A52C5: push    ebx; Dst
0x4A52C6: mov     ecx, ebp; a1
0x4A52C8: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x4A52D0: call    TESFile_GetChunkData
0x4A52D5: test    esi, esi
0x4A52D7: jbe     loc_4A535F
0x4A52DD: mov     edi, ebx
0x4A52DF: mov     ebp, esi
0x4A52E1: push    0Ch; Size
0x4A52E3: call    FormHeapAlloc
0x4A52E8: add     esp, 4
0x4A52EB: test    eax, eax
0x4A52ED: jz      short loc_4A5307
0x4A52EF: mov     dword ptr [eax], 0
0x4A52F5: mov     dword ptr [eax+4], 0Fh
0x4A52FC: mov     dword ptr [eax+8], 0
0x4A5303: mov     esi, eax
0x4A5305: jmp     short loc_4A5309
0x4A5307: xor     esi, esi
0x4A5309: mov     ecx, [edi]
0x4A530B: mov     [esi], ecx
0x4A530D: mov     edx, [edi+4]
0x4A5310: mov     [esi+4], edx
0x4A5313: mov     eax, [edi+8]
0x4A5316: mov     [esi+8], eax
0x4A5319: mov     eax, [esi]
0x4A531B: test    eax, eax
0x4A531D: jz      short loc_4A534E
0x4A531F: mov     ecx, ds:0B33A98h
0x4A5325: push    eax
0x4A5326: call    sub_4473F0
0x4A532B: test    eax, eax
0x4A532D: jz      short loc_4A534E
0x4A532F: mov     ecx, [esi]
0x4A5331: push    ecx
0x4A5332: mov     ecx, ds:0B33A98h
0x4A5338: call    sub_4473F0
0x4A533D: mov     ecx, [esp+24h+var_10]
0x4A5341: push    esi
0x4A5342: add     ecx, 0Ch
0x4A5345: mov     [esi], eax
0x4A5347: call    BSSimpleList_PushBack
0x4A534C: jmp     short loc_4A5357
0x4A534E: push    esi
0x4A534F: call    FormHeapFree
0x4A5354: add     esp, 4
0x4A5357: add     edi, 0Ch
0x4A535A: sub     ebp, 1
0x4A535D: jnz     short loc_4A52E1
0x4A535F: push    ebx
0x4A5360: call    FormHeapFree
0x4A5365: add     esp, 4
0x4A5368: mov     al, 1
0x4A536A: jmp     short loc_4A536E
0x4A536C: xor     al, al
0x4A536E: mov     ecx, [esp+24h+var_C]
0x4A5372: mov     large fs:0, ecx
0x4A5379: pop     ecx
0x4A537A: pop     edi
0x4A537B: pop     esi
0x4A537C: pop     ebp
0x4A537D: pop     ebx
0x4A537E: add     esp, 10h
0x4A5381: retn    4
