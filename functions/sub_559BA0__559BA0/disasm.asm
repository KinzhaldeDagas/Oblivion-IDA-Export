0x559BA0: push    0FFFFFFFFh
0x559BA2: push    offset SEH_559C40
0x559BA7: mov     eax, large fs:0
0x559BAD: push    eax
0x559BAE: sub     esp, 8
0x559BB1: push    ebx
0x559BB2: push    ebp
0x559BB3: push    esi
0x559BB4: push    edi
0x559BB5: mov     eax, ds:0B30AACh
0x559BBA: xor     eax, esp
0x559BBC: push    eax
0x559BBD: lea     eax, [esp+28h+var_C]
0x559BC1: mov     large fs:0, eax
0x559BC7: mov     edi, ecx
0x559BC9: mov     ebx, ds:0A2813Ch
0x559BCF: push    0; Comperand
0x559BD1: lea     esi, [edi+14h]
0x559BD4: push    1; Exchange
0x559BD6: push    esi; Destination
0x559BD7: mov     [esp+34h+var_14], esi
0x559BDB: call    ebx ; InterlockedCompareExchange
0x559BDD: test    eax, eax
0x559BDF: setz    al
0x559BE2: mov     [esp+28h+var_10], al
0x559BE6: test    al, al
0x559BE8: mov     [esp+28h+var_4], 0
0x559BF0: jz      short loc_559C21
0x559BF2: mov     eax, [edi+8]
0x559BF5: test    eax, eax
0x559BF7: jz      short loc_559C1A
0x559BF9: mov     ebp, [eax+8]
0x559BFC: test    ebp, ebp
0x559BFE: jz      short loc_559C1A
0x559C00: mov     ecx, ebp
0x559C02: call    sub_5599B0
0x559C07: push    ebp
0x559C08: call    FormHeapFree
0x559C0D: mov     eax, [edi+8]
0x559C10: add     esp, 4
0x559C13: mov     dword ptr [eax+8], 0
0x559C1A: push    1; Comperand
0x559C1C: push    0; Exchange
0x559C1E: push    esi; Destination
0x559C1F: call    ebx ; InterlockedCompareExchange
0x559C21: mov     ecx, [esp+28h+var_C]
0x559C25: mov     large fs:0, ecx
0x559C2C: pop     ecx
0x559C2D: pop     edi
0x559C2E: pop     esi
0x559C2F: pop     ebp
0x559C30: pop     ebx
0x559C31: add     esp, 14h
0x559C34: retn
