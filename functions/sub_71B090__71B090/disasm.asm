0x71B090: sub     esp, 408h
0x71B096: mov     eax, ds:0B30AACh
0x71B09B: xor     eax, esp
0x71B09D: mov     [esp+408h+var_4], eax
0x71B0A4: push    esi
0x71B0A5: push    edi; MaxCount
0x71B0A6: mov     edi, [esp+410h+Src]
0x71B0AD: push    104h; Size
0x71B0B2: call    FormHeapAlloc
0x71B0B7: add     esp, 4
0x71B0BA: cmp     dword ptr ds:0B3FD24h, 0
0x71B0C1: mov     esi, eax
0x71B0C3: jz      short loc_71B0FB
0x71B0C5: push    edi; FullPath
0x71B0C6: lea     ecx, [esp+414h+Dir]; Dir
0x71B0CA: call    sub_748760
0x71B0CF: mov     eax, ds:0B3FD24h
0x71B0D4: push    eax; Src
0x71B0D5: lea     ecx, [esp+414h+Dst]
0x71B0DC: push    100h; SizeInBytes
0x71B0E1: push    ecx; Dst
0x71B0E2: call    _strcpy_s
0x71B0E7: add     esp, 0Ch
0x71B0EA: push    104h; int
0x71B0EF: push    esi; int
0x71B0F0: lea     ecx, [esp+418h+Dir]; Src
0x71B0F4: call    sub_7487B0
0x71B0F9: jmp     short loc_71B11E
0x71B0FB: mov     eax, edi
0x71B0FD: lea     edx, [eax+1]
0x71B100: mov     cl, [eax]
0x71B102: add     eax, 1
0x71B105: test    cl, cl
0x71B107: jnz     short loc_71B100
0x71B109: sub     eax, edx
0x71B10B: add     eax, 1
0x71B10E: push    eax; Src
0x71B10F: push    edi; Src
0x71B110: push    104h; SizeInBytes
0x71B115: push    esi; Dst
0x71B116: call    _strncpy_s
0x71B11B: add     esp, 10h
0x71B11E: mov     ecx, [esp+410h+var_4]
0x71B125: pop     edi
0x71B126: mov     eax, esi
0x71B128: pop     esi
0x71B129: xor     ecx, esp
0x71B12B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x71B130: add     esp, 408h
0x71B136: retn
