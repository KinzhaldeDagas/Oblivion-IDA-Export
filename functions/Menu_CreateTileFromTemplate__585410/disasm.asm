0x585410: push    0FFFFFFFFh
0x585412: push    offset SEH_71BE30
0x585417: mov     eax, large fs:0
0x58541D: push    eax
0x58541E: push    ebx
0x58541F: push    ebp
0x585420: push    esi
0x585421: push    edi
0x585422: mov     eax, ds:0B30AACh
0x585427: xor     eax, esp
0x585429: push    eax
0x58542A: lea     eax, [esp+20h+var_C]
0x58542E: mov     large fs:0, eax
0x585434: mov     eax, [esp+20h+arg_8]
0x585438: xor     ebp, ebp
0x58543A: test    eax, eax
0x58543C: jz      short loc_585441
0x58543E: mov     [ecx+10h], eax
0x585441: lea     edi, [ecx+8]
0x585444: test    edi, edi
0x585446: jz      loc_58551A
0x58544C: mov     ebx, [esp+20h+Str2]
0x585450: mov     esi, [edi]
0x585452: test    esi, esi
0x585454: jz      short loc_58547B
0x585456: test    ebx, ebx
0x585458: jz      short loc_58546C
0x58545A: mov     eax, [esi]
0x58545C: test    eax, eax
0x58545E: jz      short loc_58546C
0x585460: push    ebx; Str2
0x585461: push    eax; Str1
0x585462: call    __strcmp
0x585467: add     esp, 8
0x58546A: jmp     short loc_585477
0x58546C: xor     eax, eax
0x58546E: test    ebx, ebx
0x585470: setz    al
0x585473: lea     eax, [eax+eax-1]
0x585477: test    eax, eax
0x585479: jz      short loc_585482
0x58547B: mov     edi, [edi+4]
0x58547E: test    edi, edi
0x585480: jnz     short loc_585450
0x585482: test    esi, esi
0x585484: jz      loc_58551A
0x58548A: mov     ebp, ds:0B3B0A8h
0x585490: push    14h; Size
0x585492: call    FormHeapAlloc
0x585497: add     esp, 4
0x58549A: mov     [esp+20h+arg_8], eax
0x58549E: xor     edi, edi
0x5854A0: cmp     eax, edi
0x5854A2: mov     [esp+20h+var_4], edi
0x5854A6: jz      short loc_5854B1
0x5854A8: mov     ecx, eax
0x5854AA: call    sub_58CD30
0x5854AF: mov     edi, eax
0x5854B1: mov     ds:0B3B0A8h, edi
0x5854B7: mov     ebx, [edi]
0x5854B9: test    ebx, ebx
0x5854BB: mov     [esp+20h+var_4], 0FFFFFFFFh
0x5854C3: jz      short loc_5854D5
0x5854C5: mov     ecx, ebx
0x5854C7: call    sub_5852C0
0x5854CC: push    ebx
0x5854CD: call    FormHeapFree
0x5854D2: add     esp, 4
0x5854D5: mov     ecx, [esp+20h+arg_0]; TileWindow *
0x5854D9: push    esi; int
0x5854DA: mov     [edi], esi
0x5854DC: call    sub_590330
0x5854E1: mov     edi, eax
0x5854E3: push    esi
0x5854E4: mov     ecx, edi
0x5854E6: call    sub_58CF40
0x5854EB: mov     eax, ds:0B3B0A8h
0x5854F0: mov     dword ptr [eax], 0
0x5854F6: mov     ecx, ds:0B3B0A8h
0x5854FC: test    ecx, ecx
0x5854FE: mov     esi, ecx
0x585500: jz      short loc_585510
0x585502: call    sub_58CDB0
0x585507: push    esi
0x585508: call    FormHeapFree
0x58550D: add     esp, 4
0x585510: mov     ds:0B3B0A8h, ebp
0x585516: mov     eax, edi
0x585518: jmp     short loc_58551C
0x58551A: mov     eax, ebp
0x58551C: mov     ecx, [esp+20h+var_C]
0x585520: mov     large fs:0, ecx
0x585527: pop     ecx
0x585528: pop     edi
0x585529: pop     esi
0x58552A: pop     ebp
0x58552B: pop     ebx
0x58552C: add     esp, 0Ch
0x58552F: retn    0Ch
