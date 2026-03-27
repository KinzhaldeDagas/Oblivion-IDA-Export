0x737330: push    0FFFFFFFFh
0x737332: push    offset SEH_737330
0x737337: mov     eax, large fs:0
0x73733D: push    eax
0x73733E: sub     esp, 64h
0x737341: push    ebx
0x737342: push    ebp
0x737343: push    esi
0x737344: push    edi
0x737345: mov     eax, ds:0B30AACh
0x73734A: xor     eax, esp
0x73734C: push    eax
0x73734D: lea     eax, [esp+84h+var_C]
0x737351: mov     large fs:0, eax
0x737357: mov     ebp, ecx
0x737359: lea     ecx, [esp+84h+var_50]
0x73735D: call    InitSurfacEData
0x737362: lea     esi, [ebp+80h]
0x737368: push    esi; lpCriticalSection
0x737369: mov     [esp+88h+var_64], esi
0x73736D: call    dword ptr ds:0A2806Ch
