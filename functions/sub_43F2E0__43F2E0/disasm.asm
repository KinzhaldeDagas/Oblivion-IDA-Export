0x43F2E0: push    esi
0x43F2E1: mov     esi, ecx
0x43F2E3: push    esi; lpCriticalSection
0x43F2E4: call    dword ptr ds:0A2806Ch
0x43F2EA: call    dword ptr ds:0A2808Ch
0x43F2F0: add     dword ptr [esi+7Ch], 1
0x43F2F4: mov     [esi+78h], eax
0x43F2F7: pop     esi
0x43F2F8: retn
