0x98D55E: xor     eax, eax
0x98D560: cmp     [esp+arg_0], eax
0x98D564: push    0; dwMaximumSize
0x98D566: setz    al
0x98D569: push    1000h; dwInitialSize
0x98D56E: push    eax; flOptions
0x98D56F: call    ds:HeapCreate
0x98D575: test    eax, eax
0x98D577: mov     hHeap, eax
0x98D57C: jnz     short loc_98D581
0x98D57E: xor     eax, eax
0x98D580: retn
0x98D581: call    ___heap_select
0x98D586: cmp     eax, 3
0x98D589: mov     dword_BAABC0, eax
0x98D58E: jnz     short loc_98D5B4
0x98D590: push    3F8h
0x98D595: call    ___sbh_heap_init
0x98D59A: test    eax, eax
0x98D59C: pop     ecx
0x98D59D: jnz     short loc_98D5B4
0x98D59F: push    hHeap; hHeap
0x98D5A5: call    ds:HeapDestroy
0x98D5AB: and     hHeap, 0
0x98D5B2: jmp     short loc_98D57E
0x98D5B4: xor     eax, eax
0x98D5B6: inc     eax
0x98D5B7: retn
