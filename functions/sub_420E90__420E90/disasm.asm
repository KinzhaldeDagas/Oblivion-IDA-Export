0x420E90: push    4Eh ; 'N'; Advances every Oblivion friend-hit entry timer by the frame-time delta and removes/frees entries older than the configured friend-hit timer.
0x420E92: call    BaseExtraList_GetExtraData
0x420E97: test    eax, eax
0x420E99: jz      short locret_420EA2
0x420E9B: mov     ecx, eax
0x420E9D: jmp     loc_42AFF0
0x420EA2: retn    4
0x42AFF0: push    edi
0x42AFF1: mov     edi, ecx
0x42AFF3: mov     ecx, [edi+0Ch]
0x42AFF6: mov     eax, ecx
0x42AFF8: test    eax, eax
0x42AFFA: jz      short loc_42B019
0x42AFFC: lea     esp, [esp+0]
0x42B000: mov     edx, [eax]
0x42B002: test    edx, edx
0x42B004: jz      short loc_42B019
0x42B006: fld     dword ptr [edx+8]
0x42B009: mov     eax, [eax+4]
0x42B00C: test    eax, eax
0x42B00E: fadd    dword ptr ds:0B33E9Ch
0x42B014: fstp    dword ptr [edx+8]
0x42B017: jnz     short loc_42B000
0x42B019: mov     edx, ecx
0x42B01B: test    edx, edx
0x42B01D: jz      short loc_42B054
0x42B01F: push    esi
0x42B020: mov     esi, [edx]
0x42B022: test    esi, esi
0x42B024: jz      short loc_42B053
0x42B026: fld     dword ptr [esi+8]
0x42B029: fld     flt_B36778+128h
0x42B02F: fcompp
0x42B031: fnstsw  ax
0x42B033: test    ah, 5
0x42B036: jp      short loc_42B04C
0x42B038: push    esi
0x42B039: call    BSSimpleList_Remove
0x42B03E: push    esi
0x42B03F: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x42B044: mov     ecx, [edi+0Ch]
0x42B047: add     esp, 4
0x42B04A: mov     edx, ecx
0x42B04C: mov     edx, [edx+4]
0x42B04F: test    edx, edx
0x42B051: jnz     short loc_42B020
0x42B053: pop     esi
0x42B054: pop     edi
0x42B055: retn    4
