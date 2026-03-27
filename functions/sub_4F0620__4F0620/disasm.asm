0x4F0620: push    ebx
0x4F0621: mov     ebx, ecx
0x4F0623: mov     ecx, [ebx+7Ch]
0x4F0626: test    ecx, ecx
0x4F0628: jz      short loc_4F0630
0x4F062A: pop     ebx
0x4F062B: jmp     sub_4F0620
0x4F0630: push    edi
0x4F0631: push    8; Size
0x4F0633: call    FormHeapAlloc
0x4F0638: add     esp, 4
0x4F063B: test    eax, eax
0x4F063D: jz      short loc_4F0650
0x4F063F: mov     dword ptr [eax], 0
0x4F0645: mov     dword ptr [eax+4], 0
0x4F064C: mov     edi, eax
0x4F064E: jmp     short loc_4F0652
0x4F0650: xor     edi, edi
0x4F0652: test    edi, edi
0x4F0654: jz      short loc_4F0663
0x4F0656: mov     ecx, [ebx+34h]
0x4F0659: test    ecx, ecx
0x4F065B: jz      short loc_4F0663
0x4F065D: push    edi
0x4F065E: call    sub_4CB520
0x4F0663: push    esi
0x4F0664: mov     esi, ds:0B33A98h
0x4F066A: add     esi, 0Ch
0x4F066D: jz      short loc_4F0695
0x4F066F: nop
0x4F0670: mov     eax, [esi]
0x4F0672: test    eax, eax
0x4F0674: jz      short loc_4F068E
0x4F0676: cmp     [eax+7Ch], ebx
0x4F0679: jnz     short loc_4F068E
0x4F067B: test    edi, edi
0x4F067D: jz      short loc_4F068E
0x4F067F: mov     eax, [eax+34h]
0x4F0682: test    eax, eax
0x4F0684: jz      short loc_4F068E
0x4F0686: push    edi
0x4F0687: mov     ecx, eax
0x4F0689: call    sub_4CB520
0x4F068E: mov     esi, [esi+4]
0x4F0691: test    esi, esi
0x4F0693: jnz     short loc_4F0670
0x4F0695: pop     esi
0x4F0696: mov     eax, edi
0x4F0698: pop     edi
0x4F0699: pop     ebx
0x4F069A: retn
