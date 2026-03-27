0x98C22E: push    edi
0x98C22F: push    offset aKernel32_dll
0x98C234: call    ds:GetModuleHandleA
0x98C23A: mov     edi, eax
0x98C23C: test    edi, edi
0x98C23E: jnz     short loc_98C249
0x98C240: call    __mtterm
0x98C245: xor     eax, eax
0x98C247: pop     edi
0x98C248: retn
0x98C249: push    esi
0x98C24A: mov     esi, ds:GetProcAddress
0x98C250: push    offset aFlsalloc
0x98C255: push    edi; hModule
0x98C256: call    esi ; GetProcAddress
0x98C258: push    offset aFlsgetvalue
0x98C25D: push    edi; hModule
0x98C25E: mov     FlsAlloc, eax
0x98C263: call    esi ; GetProcAddress
0x98C265: push    offset aFlssetvalue
0x98C26A: push    edi; hModule
0x98C26B: mov     lpTlsValue, eax
0x98C270: call    esi ; GetProcAddress
0x98C272: push    offset aFlsfree
0x98C277: push    edi; hModule
0x98C278: mov     FlsSetValue, eax
0x98C27D: call    esi ; GetProcAddress
0x98C27F: cmp     FlsAlloc, 0
0x98C286: mov     esi, ds:TlsSetValue
0x98C28C: mov     dword_BA9E24, eax
0x98C291: jz      short loc_98C2A9
0x98C293: cmp     lpTlsValue, 0
0x98C29A: jz      short loc_98C2A9
0x98C29C: cmp     FlsSetValue, 0
0x98C2A3: jz      short loc_98C2A9
0x98C2A5: test    eax, eax
0x98C2A7: jnz     short loc_98C2CD
0x98C2A9: mov     eax, ds:TlsGetValue
0x98C2AE: mov     lpTlsValue, eax
0x98C2B3: mov     eax, ds:TlsFree
0x98C2B8: mov     FlsAlloc, offset ___crtTlsAlloc@4
0x98C2C2: mov     FlsSetValue, esi
0x98C2C8: mov     dword_BA9E24, eax
0x98C2CD: call    ds:TlsAlloc
0x98C2D3: cmp     eax, 0FFFFFFFFh
0x98C2D6: mov     dwTlsIndex, eax
0x98C2DB: jz      loc_98C3AD
0x98C2E1: push    lpTlsValue; lpTlsValue
0x98C2E7: push    eax; dwTlsIndex
0x98C2E8: call    esi ; TlsSetValue
0x98C2EA: test    eax, eax
0x98C2EC: jz      loc_98C3AD
0x98C2F2: call    __init_pointers
0x98C2F7: push    FlsAlloc
0x98C2FD: call    __encode_pointer
0x98C302: push    lpTlsValue
0x98C308: mov     FlsAlloc, eax
0x98C30D: call    __encode_pointer
0x98C312: push    FlsSetValue
0x98C318: mov     lpTlsValue, eax
0x98C31D: call    __encode_pointer
0x98C322: push    dword_BA9E24
0x98C328: mov     FlsSetValue, eax
0x98C32D: call    __encode_pointer
0x98C332: add     esp, 10h
0x98C335: mov     dword_BA9E24, eax
0x98C33A: call    __mtinitlocks
0x98C33F: test    eax, eax
0x98C341: jz      short loc_98C3A8
0x98C343: push    offset __freefls@4
0x98C348: push    FlsAlloc
0x98C34E: call    __decode_pointer
0x98C353: pop     ecx
0x98C354: call    eax
0x98C356: cmp     eax, 0FFFFFFFFh
0x98C359: mov     dword_B310AC, eax
0x98C35E: jz      short loc_98C3A8
0x98C360: push    214h
0x98C365: push    1
0x98C367: call    unknown_libname_74
0x98C36C: mov     esi, eax
0x98C36E: test    esi, esi
0x98C370: pop     ecx
0x98C371: pop     ecx
0x98C372: jz      short loc_98C3A8
0x98C374: push    esi
0x98C375: push    dword_B310AC
0x98C37B: push    FlsSetValue
0x98C381: call    __decode_pointer
0x98C386: pop     ecx
0x98C387: call    eax
0x98C389: test    eax, eax
0x98C38B: jz      short loc_98C3A8
0x98C38D: push    0
0x98C38F: push    esi
0x98C390: call    __initptd
0x98C395: pop     ecx
0x98C396: pop     ecx
0x98C397: call    ds:GetCurrentThreadId
0x98C39D: or      dword ptr [esi+4], 0FFFFFFFFh
0x98C3A1: mov     [esi], eax
0x98C3A3: xor     eax, eax
0x98C3A5: inc     eax
0x98C3A6: jmp     short loc_98C3AF
0x98C3A8: call    __mtterm
0x98C3AD: xor     eax, eax
0x98C3AF: pop     esi
0x98C3B0: pop     edi
0x98C3B1: retn
