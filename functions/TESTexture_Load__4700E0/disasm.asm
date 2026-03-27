0x4700E0: push    ebp
0x4700E1: mov     ebp, esp
0x4700E3: push    ecx
0x4700E4: mov     eax, ds:0B30AACh
0x4700E9: xor     eax, ebp
0x4700EB: mov     [ebp+var_4], eax
0x4700EE: push    ebx
0x4700EF: mov     ebx, [ebp+a1]
0x4700F2: push    esi
0x4700F3: xor     esi, esi
0x4700F5: cmp     ebx, esi
0x4700F7: push    edi
0x4700F8: jz      short loc_470152
0x4700FA: mov     edi, [ebp+arg_0]
0x4700FD: cmp     edi, esi
0x4700FF: jz      short loc_470152
0x470101: mov     eax, [ebx+254h]
0x470107: cmp     eax, esi
0x470109: jz      short loc_47013B
0x47010B: call    __alloca?
0x470110: mov     esi, esp
0x470112: push    0; a4
0x470114: push    esi; Dst
0x470115: mov     ecx, ebx; a1
0x470117: call    TESFile_GetChunkData
0x47011C: push    0; a3
0x47011E: push    esi; a2
0x47011F: lea     ecx, [edi+4]; this
0x470122: call    BSStringT_Set
0x470127: lea     esp, [ebp-10h]
0x47012A: pop     edi
0x47012B: pop     esi
0x47012C: pop     ebx
0x47012D: mov     ecx, [ebp+var_4]
0x470130: xor     ecx, ebp
0x470132: call    @__security_check_cookie@4; __security_check_cookie(x)
0x470137: mov     esp, ebp
0x470139: pop     ebp
0x47013A: retn
0x47013B: mov     eax, [edi+4]
0x47013E: push    eax
0x47013F: call    FormHeapFree
0x470144: add     esp, 4
0x470147: mov     [edi+4], esi
0x47014A: mov     [edi+0Ah], si
0x47014E: mov     [edi+8], si
0x470152: lea     esp, [ebp-10h]
0x470155: pop     edi
0x470156: pop     esi
0x470157: pop     ebx
0x470158: mov     ecx, [ebp+var_4]
0x47015B: xor     ecx, ebp
0x47015D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x470162: mov     esp, ebp
0x470164: pop     ebp
0x470165: retn
