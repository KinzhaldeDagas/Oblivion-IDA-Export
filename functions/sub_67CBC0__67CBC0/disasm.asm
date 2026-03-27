0x67CBC0: push    0FFFFFFFFh
0x67CBC2: push    offset SEH_8C62B0
0x67CBC7: mov     eax, large fs:0
0x67CBCD: push    eax
0x67CBCE: push    ecx
0x67CBCF: push    esi
0x67CBD0: mov     eax, ds:0B30AACh
0x67CBD5: xor     eax, esp
0x67CBD7: push    eax
0x67CBD8: lea     eax, [esp+18h+var_C]
0x67CBDC: mov     large fs:0, eax
0x67CBE2: mov     esi, ecx
0x67CBE4: push    8; Size
0x67CBE6: call    FormHeapAlloc
0x67CBEB: add     esp, 4
0x67CBEE: test    eax, eax
0x67CBF0: jz      short loc_67CC01
0x67CBF2: mov     dword ptr [eax], 0
0x67CBF8: mov     dword ptr [eax+4], 0
0x67CBFF: jmp     short loc_67CC03
0x67CC01: xor     eax, eax
0x67CC03: fldz
0x67CC05: push    54h ; 'T'; Size
0x67CC07: fstp    dword ptr [esi+20h]
0x67CC0A: mov     [esi], eax
0x67CC0C: mov     dword ptr [esi+4], 0
0x67CC13: call    FormHeapAlloc
0x67CC18: add     esp, 4
0x67CC1B: mov     [esp+18h+var_10], eax
0x67CC1F: test    eax, eax
0x67CC21: mov     [esp+18h+var_4], 0
0x67CC29: jz      short loc_67CC35
0x67CC2B: push    esi
0x67CC2C: mov     ecx, eax
0x67CC2E: call    sub_67C260
0x67CC33: jmp     short loc_67CC37
0x67CC35: xor     eax, eax
0x67CC37: mov     [esi+8], eax
0x67CC3A: mov     dword ptr [eax+18h], 0Fh
0x67CC41: mov     eax, esi
0x67CC43: mov     ecx, [esp+18h+var_C]
0x67CC47: mov     large fs:0, ecx
0x67CC4E: pop     ecx
0x67CC4F: pop     esi
0x67CC50: add     esp, 10h
0x67CC53: retn
