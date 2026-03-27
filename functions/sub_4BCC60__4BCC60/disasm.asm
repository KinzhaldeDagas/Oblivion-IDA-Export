0x4BCC60: push    esi
0x4BCC61: push    1
0x4BCC63: push    0
0x4BCC65: mov     esi, ecx
0x4BCC67: call    sub_434650
0x4BCC6C: test    eax, eax
0x4BCC6E: jnz     short loc_4BCC83
0x4BCC70: mov     eax, [esi+20h]
0x4BCC73: push    800h
0x4BCC78: push    0
0x4BCC7A: push    eax
0x4BCC7B: call    FileFinder_LoadBSFile
0x4BCC80: add     esp, 0Ch
0x4BCC83: mov     esi, [esi+2Ch]
0x4BCC86: test    esi, esi
0x4BCC88: jz      short loc_4BCCA6
0x4BCC8A: mov     edx, [esi+4]
0x4BCC8D: push    eax
0x4BCC8E: mov     eax, [esi+24h]
0x4BCC91: push    eax
0x4BCC92: mov     eax, [esi]
0x4BCC94: lea     ecx, [esi+0Ch]
0x4BCC97: push    ecx
0x4BCC98: mov     ecx, [esi+8]
0x4BCC9B: push    edx
0x4BCC9C: push    eax
0x4BCC9D: call    sub_4F1990
0x4BCCA2: mov     byte ptr [esi+28h], 1
0x4BCCA6: pop     esi
0x4BCCA7: retn
