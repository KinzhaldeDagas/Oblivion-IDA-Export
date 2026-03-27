0x6C6400: push    0FFFFFFFFh
0x6C6402: push    offset SEH_8C8970
0x6C6407: mov     eax, large fs:0
0x6C640D: push    eax
0x6C640E: push    ecx
0x6C640F: push    esi
0x6C6410: push    edi
0x6C6411: mov     eax, ds:0B30AACh
0x6C6416: xor     eax, esp
0x6C6418: push    eax
0x6C6419: lea     eax, [esp+1Ch+var_C]
0x6C641D: mov     large fs:0, eax
0x6C6423: mov     eax, ds:0B3CB30h
0x6C6428: test    eax, eax
0x6C642A: jnz     short loc_6C64A5
0x6C642C: push    14h; Size
0x6C642E: call    FormHeapAlloc
0x6C6433: add     esp, 4
0x6C6436: mov     [esp+1Ch+var_10], eax
0x6C643A: test    eax, eax
0x6C643C: mov     [esp+1Ch+var_4], 0
0x6C6444: jz      short loc_6C6456
0x6C6446: push    100h; Size
0x6C644B: mov     ecx, eax
0x6C644D: call    sub_6C5D80
0x6C6452: mov     esi, eax
0x6C6454: jmp     short loc_6C6458
0x6C6456: xor     esi, esi
0x6C6458: mov     eax, ds:0B3CB30h
0x6C645D: cmp     eax, esi
0x6C645F: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x6C6467: jz      short loc_6C64A5
0x6C6469: test    eax, eax
0x6C646B: jz      short loc_6C648B
0x6C646D: mov     edi, eax
0x6C646F: add     eax, 4
0x6C6472: push    eax; lpAddend
0x6C6473: call    dword ptr ds:0A2807Ch
0x6C6479: test    eax, eax
0x6C647B: jnz     short loc_6C648B
0x6C647D: test    edi, edi
0x6C647F: jz      short loc_6C648B
0x6C6481: mov     eax, [edi]
0x6C6483: mov     edx, [eax]
0x6C6485: push    1
0x6C6487: mov     ecx, edi
0x6C6489: call    edx
0x6C648B: test    esi, esi
0x6C648D: mov     eax, esi
0x6C648F: mov     ds:0B3CB30h, eax
0x6C6494: jz      short loc_6C64A5
0x6C6496: add     esi, 4
0x6C6499: push    esi; lpAddend
0x6C649A: call    dword ptr ds:0A28078h
0x6C64A0: mov     eax, ds:0B3CB30h
0x6C64A5: mov     ecx, dword ptr [esp+1Ch+var_C]
0x6C64A9: mov     large fs:0, ecx
0x6C64B0: pop     ecx
0x6C64B1: pop     edi
0x6C64B2: pop     esi
0x6C64B3: add     esp, 10h
0x6C64B6: retn
