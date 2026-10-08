0x98A1B9: push    0Ch
0x98A1BB: push    offset stru_AFFC08
0x98A1C0: call    __SEH_prolog4
0x98A1C5: call    __getptd
0x98A1CA: mov     esi, eax
0x98A1CC: mov     eax, dword_B318B0
0x98A1D1: test    [esi+70h], eax
0x98A1D4: jz      short loc_98A1F8
0x98A1D6: cmp     dword ptr [esi+6Ch], 0
0x98A1DA: jz      short loc_98A1F8
0x98A1DC: call    __getptd
0x98A1E1: mov     esi, [eax+6Ch]
0x98A1F8: push    0Ch
0x98A1FA: call    __lock
0x98A1FF: pop     ecx
0x98A200: and     [ebp+ms_exc.registration.TryLevel], 0
0x98A204: lea     eax, [esi+6Ch]
0x98A207: mov     edi, off_B31998
0x98A20D: call    __updatetlocinfoEx_nolock
0x98A212: mov     [ebp+var_1C], eax
0x98A215: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x98A21C: call    ___updatetlocinfo___$LN11_5
0x98A221: jmp     short ___updatetlocinfo___$LN12_3
0x98A223: push    0Ch
0x98A225: call    __unlock
0x98A22A: pop     ecx
0x98A22B: mov     esi, [ebp+var_1C]
0x98A22E: retn
