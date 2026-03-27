0x99A4FF: push    ebx
0x99A500: push    ebp
0x99A501: push    esi
0x99A502: push    edi
0x99A503: mov     edi, [esp+10h+arg_0]
0x99A507: cmp     dword ptr [edi+20h], 0
0x99A50B: mov     ebx, offset off_B31EF0
0x99A510: jz      short loc_99A54F
0x99A512: xor     ebp, ebp
0x99A514: push    0B8h ; '¸'
0x99A519: inc     ebp
0x99A51A: push    ebp
0x99A51B: call    unknown_libname_74
0x99A520: mov     esi, eax
0x99A522: test    esi, esi
0x99A524: pop     ecx
0x99A525: pop     ecx
0x99A526: jnz     short loc_99A52C
0x99A528: mov     eax, ebp
0x99A52A: jmp     short loc_99A56D
0x99A52C: mov     eax, edi
0x99A52E: call    __get_lc_time
0x99A533: test    eax, eax
0x99A535: jz      short loc_99A547
0x99A537: push    esi
0x99A538: call    __free_lc_time
0x99A53D: push    esi; Memory
0x99A53E: call    _free
0x99A543: pop     ecx
0x99A544: pop     ecx
0x99A545: jmp     short loc_99A528
0x99A547: mov     [esi+0B4h], ebp
0x99A54D: jmp     short loc_99A551
0x99A54F: mov     esi, ebx
0x99A551: add     edi, 0D4h ; 'Ô'
0x99A557: mov     eax, [edi]
0x99A559: cmp     eax, ebx
0x99A55B: jz      short loc_99A569
0x99A55D: add     eax, 0B4h ; '´'
0x99A562: push    eax; lpAddend
0x99A563: call    ds:InterlockedDecrement
0x99A569: mov     [edi], esi
0x99A56B: xor     eax, eax
0x99A56D: pop     edi
0x99A56E: pop     esi
0x99A56F: pop     ebp
0x99A570: pop     ebx
0x99A571: retn
