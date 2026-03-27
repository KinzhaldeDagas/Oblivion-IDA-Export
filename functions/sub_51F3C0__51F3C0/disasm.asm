0x51F3C0: push    ecx
0x51F3C1: push    ebx
0x51F3C2: push    ebp
0x51F3C3: mov     ebp, ecx
0x51F3C5: call    TESForm_InitializeFormRecord
0x51F3CA: lea     ecx, [ebp+18h]
0x51F3CD: call    TESFullName_Save
0x51F3D2: lea     ecx, [ebp+24h]
0x51F3D5: call    sub_46E650
0x51F3DA: push    1; Size
0x51F3DC: lea     eax, [ebp+34h]
0x51F3DF: push    eax; Src
0x51F3E0: mov     ecx, ebp; this
0x51F3E2: call    TESForm_SaveGenericComponents
0x51F3E7: push    4; Size
0x51F3E9: lea     ecx, [ebp+38h]
0x51F3EC: push    ecx; Src
0x51F3ED: push    4D414E43h; int
0x51F3F2: call    TESForm_PutFormRecordChunkData
0x51F3F7: lea     ebx, [ebp+3Ch]
0x51F3FA: add     esp, 0Ch
0x51F3FD: test    ebx, ebx
0x51F3FF: mov     [esp+0Ch+Src], 0
0x51F407: jz      loc_51F564
0x51F40D: push    esi
0x51F40E: push    edi
0x51F40F: nop
0x51F410: cmp     dword ptr [ebx+4], 0
0x51F414: jnz     short loc_51F41F
0x51F416: cmp     dword ptr [ebx], 0
0x51F419: jz      loc_51F562
0x51F41F: mov     esi, [ebx]
0x51F421: push    4; Size
0x51F423: lea     edx, [esp+18h+Src]
0x51F427: push    edx; Src
0x51F428: push    4D414E52h; int
0x51F42D: call    TESForm_PutFormRecordChunkData
0x51F432: movzx   edx, word ptr [esi+4]
0x51F436: add     esp, 0Ch
0x51F439: cmp     dx, 0FFFFh
0x51F43E: jnz     short loc_51F452
0x51F440: mov     eax, [esi]
0x51F442: lea     edi, [eax+1]
0x51F445: mov     cl, [eax]
0x51F447: add     eax, 1
0x51F44A: test    cl, cl
0x51F44C: jnz     short loc_51F445
0x51F44E: sub     eax, edi
0x51F450: jmp     short loc_51F455
0x51F452: movzx   eax, dx
0x51F455: test    eax, eax
0x51F457: jz      short loc_51F489
0x51F459: cmp     dx, 0FFFFh
0x51F45E: jnz     short loc_51F472
0x51F460: mov     eax, [esi]
0x51F462: lea     edx, [eax+1]
0x51F465: mov     cl, [eax]
0x51F467: add     eax, 1
0x51F46A: test    cl, cl
0x51F46C: jnz     short loc_51F465
0x51F46E: sub     eax, edx
0x51F470: jmp     short loc_51F475
0x51F472: movzx   eax, dx
0x51F475: add     eax, 1
0x51F478: push    eax
0x51F479: mov     eax, [esi]
0x51F47B: push    eax
0x51F47C: push    4D414E4Dh
0x51F481: call    j_TESForm_PutCurrentChunkData
0x51F486: add     esp, 0Ch
0x51F489: movzx   eax, word ptr [esi+0Ch]
0x51F48D: cmp     ax, 0FFFFh
0x51F491: jnz     short loc_51F4AD
0x51F493: mov     eax, [esi+8]
0x51F496: lea     edx, [eax+1]
0x51F499: lea     esp, [esp+0]
0x51F4A0: mov     cl, [eax]
0x51F4A2: add     eax, 1
0x51F4A5: test    cl, cl
0x51F4A7: jnz     short loc_51F4A0
0x51F4A9: sub     eax, edx
0x51F4AB: jmp     short loc_51F4B0
0x51F4AD: movzx   eax, ax
0x51F4B0: test    eax, eax
0x51F4B2: jz      short loc_51F4E9
0x51F4B4: movzx   eax, word ptr [esi+0Ch]
0x51F4B8: cmp     ax, 0FFFFh
0x51F4BC: jnz     short loc_51F4D1
0x51F4BE: mov     eax, [esi+8]
0x51F4C1: lea     edx, [eax+1]
0x51F4C4: mov     cl, [eax]
0x51F4C6: add     eax, 1
0x51F4C9: test    cl, cl
0x51F4CB: jnz     short loc_51F4C4
0x51F4CD: sub     eax, edx
0x51F4CF: jmp     short loc_51F4D4
0x51F4D1: movzx   eax, ax
0x51F4D4: mov     ecx, [esi+8]
0x51F4D7: add     eax, 1
0x51F4DA: push    eax
0x51F4DB: push    ecx
0x51F4DC: push    4D414E46h
0x51F4E1: call    j_TESForm_PutCurrentChunkData
0x51F4E6: add     esp, 0Ch
0x51F4E9: movzx   eax, word ptr [esi+18h]
0x51F4ED: cmp     ax, 0FFFFh
0x51F4F1: jnz     short loc_51F50D
0x51F4F3: mov     eax, [esi+14h]
0x51F4F6: lea     edx, [eax+1]
0x51F4F9: lea     esp, [esp+0]
0x51F500: mov     cl, [eax]
0x51F502: add     eax, 1
0x51F505: test    cl, cl
0x51F507: jnz     short loc_51F500
0x51F509: sub     eax, edx
0x51F50B: jmp     short loc_51F510
0x51F50D: movzx   eax, ax
0x51F510: test    eax, eax
0x51F512: jz      short loc_51F552
0x51F514: movzx   eax, word ptr [esi+18h]
0x51F518: cmp     ax, 0FFFFh
0x51F51C: jnz     short loc_51F531
0x51F51E: mov     eax, [esi+14h]
0x51F521: lea     edx, [eax+1]
0x51F524: mov     cl, [eax]
0x51F526: add     eax, 1
0x51F529: test    cl, cl
0x51F52B: jnz     short loc_51F524
0x51F52D: sub     eax, edx
0x51F52F: jmp     short loc_51F534
0x51F531: movzx   eax, ax
0x51F534: mov     esi, [esi+14h]
0x51F537: test    esi, esi
0x51F539: jnz     short loc_51F540
0x51F53B: mov     esi, offset EmptyString
0x51F540: add     eax, 1
0x51F543: push    eax
0x51F544: push    esi
0x51F545: push    4D414E49h
0x51F54A: call    j_TESForm_PutCurrentChunkData
0x51F54F: add     esp, 0Ch
0x51F552: add     [esp+14h+Src], 1
0x51F557: mov     ebx, [ebx+4]
0x51F55A: test    ebx, ebx
0x51F55C: jnz     loc_51F410
0x51F562: pop     edi
0x51F563: pop     esi
0x51F564: mov     ecx, ebp; this
0x51F566: call    TESForm_FinalizeFormRecord
0x51F56B: pop     ebp
0x51F56C: pop     ebx
0x51F56D: pop     ecx
0x51F56E: retn
