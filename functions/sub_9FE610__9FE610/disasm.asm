0x9FE610: push    8; Size
0x9FE612: call    FormHeapAlloc
0x9FE617: add     esp, 4
0x9FE61A: test    eax, eax
0x9FE61C: jz      short loc_9FE63C
0x9FE61E: mov     dword ptr [eax], 0
0x9FE624: mov     dword ptr [eax+4], 0
0x9FE62B: push    offset sub_A25DB0; void (__cdecl *)()
0x9FE630: mov     dword_B3BDB0, eax
0x9FE635: call    _atexit
0x9FE63A: pop     ecx
0x9FE63B: retn
0x9FE63C: xor     eax, eax
0x9FE63E: push    offset sub_A25DB0; void (__cdecl *)()
0x9FE643: mov     dword_B3BDB0, eax
0x9FE648: call    _atexit
0x9FE64D: pop     ecx
0x9FE64E: retn
