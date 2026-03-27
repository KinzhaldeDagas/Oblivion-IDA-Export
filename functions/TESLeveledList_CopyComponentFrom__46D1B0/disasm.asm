0x46D1B0: push    ecx
0x46D1B1: mov     eax, [esp+4+arg_0]
0x46D1B5: push    esi
0x46D1B6: push    edi
0x46D1B7: push    0; int
0x46D1B9: push    offset ??_R0?AVTESLeveledList@@@8; struct TypeDescriptor *
0x46D1BE: push    offset ??_R0?AVBaseFormComponent@@@8; struct _s_RTTICompleteObjectLocator *
0x46D1C3: mov     edi, ecx
0x46D1C5: push    0; int
0x46D1C7: push    eax; void *
0x46D1C8: mov     [esp+20h+var_4], edi
0x46D1CC: call    OblivionDynamicCast
0x46D1D1: mov     esi, eax
0x46D1D3: add     esp, 14h
0x46D1D6: test    esi, esi
0x46D1D8: mov     [esp+0Ch+arg_0], esi
0x46D1DC: jz      loc_46D2D1
0x46D1E2: push    ebx
0x46D1E3: push    ebp
0x46D1E4: mov     ecx, edi
0x46D1E6: call    TESLeveledList_Clear
0x46D1EB: lea     ebp, [esi+4]
0x46D1EE: test    ebp, ebp
0x46D1F0: lea     ebx, [edi+4]
0x46D1F3: jz      loc_46D295
0x46D1F9: lea     esp, [esp+0]
0x46D200: mov     esi, [ebp+0]
0x46D203: test    esi, esi
0x46D205: jz      loc_46D291
0x46D20B: push    0Ch; Size
0x46D20D: call    FormHeapAlloc
0x46D212: mov     ecx, [esi+4]
0x46D215: mov     edi, eax
0x46D217: mov     [edi+4], ecx
0x46D21A: mov     dx, [esi]
0x46D21D: mov     [edi], dx
0x46D220: mov     ax, [esi+8]
0x46D224: mov     [edi+8], ax
0x46D228: mov     eax, [esp+18h+var_4]
0x46D22C: add     eax, 4
0x46D22F: add     esp, 4
0x46D232: cmp     dword ptr [eax+4], 0
0x46D236: jnz     short loc_46D277
0x46D238: cmp     dword ptr [eax], 0
0x46D23B: jnz     short loc_46D277
0x46D23D: cmp     dword ptr [ebx], 0
0x46D240: jz      short loc_46D273
0x46D242: push    8; Size
0x46D244: call    FormHeapAlloc
0x46D249: add     esp, 4
0x46D24C: test    eax, eax
0x46D24E: jz      short loc_46D268
0x46D250: mov     ecx, [ebx]
0x46D252: mov     [eax], ecx
0x46D254: mov     dword ptr [eax+4], 0
0x46D25B: mov     edx, [ebx+4]
0x46D25E: mov     [eax+4], edx
0x46D261: mov     [ebx+4], eax
0x46D264: mov     [ebx], edi
0x46D266: jmp     short loc_46D282
0x46D268: mov     edx, [ebx+4]
0x46D26B: xor     eax, eax
0x46D26D: mov     [eax+4], edx
0x46D270: mov     [ebx+4], eax
0x46D273: mov     [ebx], edi
0x46D275: jmp     short loc_46D282
0x46D277: push    edi
0x46D278: mov     ecx, ebx
0x46D27A: call    BSSimpleList_PushBack
0x46D27F: mov     ebx, [ebx+4]
0x46D282: mov     ebp, [ebp+4]
0x46D285: test    ebp, ebp
0x46D287: mov     edi, [esp+14h+var_4]
0x46D28B: jnz     loc_46D200
0x46D291: mov     esi, [esp+14h+arg_0]
0x46D295: mov     al, [esi+0Ch]
0x46D298: mov     [edi+0Ch], al
0x46D29B: mov     al, 1
0x46D29D: test    [esi+0Dh], al
0x46D2A0: pop     ebp
0x46D2A1: pop     ebx
0x46D2A2: jz      short loc_46D2A9
0x46D2A4: or      [edi+0Dh], al
0x46D2A7: jmp     short loc_46D2AD
0x46D2A9: and     byte ptr [edi+0Dh], 0FEh
0x46D2AD: mov     al, 2
0x46D2AF: test    [esi+0Dh], al
0x46D2B2: jz      short loc_46D2B9
0x46D2B4: or      [edi+0Dh], al
0x46D2B7: jmp     short loc_46D2BD
0x46D2B9: and     byte ptr [edi+0Dh], 0FDh
0x46D2BD: mov     al, 4
0x46D2BF: test    [esi+0Dh], al
0x46D2C2: jz      short loc_46D2CD
0x46D2C4: or      [edi+0Dh], al
0x46D2C7: pop     edi
0x46D2C8: pop     esi
0x46D2C9: pop     ecx
0x46D2CA: retn    4
0x46D2CD: and     byte ptr [edi+0Dh], 0FBh
0x46D2D1: pop     edi
0x46D2D2: pop     esi
0x46D2D3: pop     ecx
0x46D2D4: retn    4
