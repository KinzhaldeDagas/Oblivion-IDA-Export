0x8B18F0: push    esi
0x8B18F1: push    edi
0x8B18F2: mov     edi, [esp+8+arg_0]
0x8B18F6: mov     eax, edi
0x8B18F8: lea     edx, [eax+1]
0x8B18FB: jmp     short loc_8B1900
0x8B18FD: align 10h
0x8B1900: mov     cl, [eax]
0x8B1902: inc     eax
0x8B1903: test    cl, cl
0x8B1905: jnz     short loc_8B1900
0x8B1907: mov     ecx, ds:0BA7D98h
0x8B190D: sub     eax, edx
0x8B190F: mov     edx, [ecx]
0x8B1911: push    13h
0x8B1913: inc     eax
0x8B1914: push    eax
0x8B1915: call    dword ptr [edx]
0x8B1917: mov     esi, eax
0x8B1919: mov     ecx, edi
0x8B191B: sub     esi, edi
0x8B191D: lea     ecx, [ecx+0]
0x8B1920: mov     dl, [ecx]
0x8B1922: mov     [esi+ecx], dl
0x8B1925: inc     ecx
0x8B1926: test    dl, dl
0x8B1928: jnz     short loc_8B1920
0x8B192A: pop     edi
0x8B192B: pop     esi
0x8B192C: retn
