0x51C3B0: sub     esp, 8
0x51C3B3: push    esi
0x51C3B4: mov     esi, ecx
0x51C3B6: mov     ecx, ds:0B33B00h
0x51C3BC: push    34h ; '4'; Size
0x51C3BE: lea     eax, [esi+38h]
0x51C3C1: push    eax; Src
0x51C3C2: call    SaveLoad_SaveData
0x51C3C7: mov     ecx, [esi+1Ch]
0x51C3CA: mov     eax, ecx
0x51C3CC: test    eax, eax
0x51C3CE: mov     [esp+0Ch+Src], 0
0x51C3D3: jnz     short loc_51C3DA
0x51C3D5: mov     eax, offset EmptyString
0x51C3DA: lea     edx, [eax+1]
0x51C3DD: lea     ecx, [ecx+0]
0x51C3E0: mov     cl, [eax]
0x51C3E2: add     eax, 1
0x51C3E5: test    cl, cl
0x51C3E7: jnz     short loc_51C3E0
0x51C3E9: mov     ecx, ds:0B33B00h
0x51C3EF: sub     eax, edx
0x51C3F1: push    1; Size
0x51C3F3: lea     edx, [esp+10h+Src]
0x51C3F7: push    edx; Src
0x51C3F8: mov     [esp+14h+Src], al
0x51C3FC: call    SaveLoad_SaveData
0x51C401: mov     cl, [esp+0Ch+Src]
0x51C405: test    cl, cl
0x51C407: jz      short loc_51C425
0x51C409: mov     eax, [esi+1Ch]
0x51C40C: test    eax, eax
0x51C40E: jnz     short loc_51C415
0x51C410: mov     eax, offset EmptyString
0x51C415: movzx   ecx, cl
0x51C418: push    ecx; Size
0x51C419: mov     ecx, ds:0B33B00h
0x51C41F: push    eax; Src
0x51C420: call    SaveLoad_SaveData
0x51C425: mov     edx, [esi+30h]
0x51C428: mov     eax, edx
0x51C42A: test    eax, eax
0x51C42C: mov     [esp+0Ch+Src], 0
0x51C431: jnz     short loc_51C438
0x51C433: mov     eax, offset EmptyString
0x51C438: lea     edx, [eax+1]
0x51C43B: jmp     short loc_51C440
0x51C43D: align 10h
0x51C440: mov     cl, [eax]
0x51C442: add     eax, 1
0x51C445: test    cl, cl
0x51C447: jnz     short loc_51C440
0x51C449: mov     ecx, ds:0B33B00h
0x51C44F: sub     eax, edx
0x51C451: mov     [esp+0Ch+Src], al
0x51C455: push    1; Size
0x51C457: lea     eax, [esp+10h+Src]
0x51C45B: push    eax; Src
0x51C45C: call    SaveLoad_SaveData
0x51C461: mov     cl, [esp+0Ch+Src]
0x51C465: test    cl, cl
0x51C467: jz      short loc_51C485
0x51C469: mov     eax, [esi+30h]
0x51C46C: test    eax, eax
0x51C46E: jnz     short loc_51C475
0x51C470: mov     eax, offset EmptyString
0x51C475: movzx   ecx, cl
0x51C478: push    ecx; Size
0x51C479: mov     ecx, ds:0B33B00h
0x51C47F: push    eax; Src
0x51C480: call    SaveLoad_SaveData
0x51C485: pop     esi
0x51C486: add     esp, 8
0x51C489: retn
