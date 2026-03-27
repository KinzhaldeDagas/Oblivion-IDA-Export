0x98BFBE: push    0Ch
0x98BFC0: push    offset stru_AFFDC0
0x98BFC5: call    __SEH_prolog4
0x98BFCA: push    offset aKernel32_dll
0x98BFCF: call    ds:GetModuleHandleA
0x98BFD5: mov     [ebp+hModule], eax
0x98BFD8: mov     esi, [ebp+arg_0]
0x98BFDB: mov     dword ptr [esi+5Ch], offset unk_B312C8
0x98BFE2: xor     edi, edi
0x98BFE4: inc     edi
0x98BFE5: mov     [esi+14h], edi
0x98BFE8: test    eax, eax
0x98BFEA: jz      short loc_98C010
0x98BFEC: push    offset aEncodepointer
0x98BFF1: push    eax; hModule
0x98BFF2: mov     ebx, ds:GetProcAddress
0x98BFF8: call    ebx ; GetProcAddress
0x98BFFA: mov     [esi+1F8h], eax
0x98C000: push    offset aDecodepointer
0x98C005: push    [ebp+hModule]; hModule
0x98C008: call    ebx ; GetProcAddress
0x98C00A: mov     [esi+1FCh], eax
0x98C010: mov     [esi+70h], edi
0x98C013: mov     byte ptr [esi+0C8h], 43h ; 'C'
0x98C01A: mov     byte ptr [esi+14Bh], 43h ; 'C'
0x98C021: mov     eax, offset dword_B31390
0x98C026: mov     [esi+68h], eax
0x98C029: push    eax; lpAddend
0x98C02A: call    ds:InterlockedIncrement
0x98C030: push    0Ch
0x98C032: call    __lock
0x98C037: pop     ecx
0x98C038: and     [ebp+ms_exc.registration.TryLevel], 0
0x98C03C: mov     eax, [ebp+arg_4]
0x98C03F: mov     [esi+6Ch], eax
0x98C042: test    eax, eax
0x98C044: jnz     short loc_98C04E
0x98C046: mov     eax, off_B31998
0x98C04B: mov     [esi+6Ch], eax
0x98C04E: push    dword ptr [esi+6Ch]; lpAddend
0x98C051: call    ___addlocaleref
0x98C056: pop     ecx
0x98C057: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x98C05E: call    __initptd___$LN9_7
