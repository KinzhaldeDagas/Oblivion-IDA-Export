0x98ACF6: push    14h
0x98ACF8: push    offset stru_AFFC48
0x98ACFD: call    __SEH_prolog4
0x98AD02: xor     ebx, ebx
0x98AD04: mov     [ebp+var_20], ebx
0x98AD07: cmp     [ebp+arg_0], 5
0x98AD0B: jbe     short loc_98AD2C
0x98AD0D: call    __errno
0x98AD12: mov     dword ptr [eax], 16h
0x98AD18: push    ebx
0x98AD19: push    ebx
0x98AD1A: push    ebx
0x98AD1B: push    ebx
0x98AD1C: push    ebx
0x98AD1D: call    __invalid_parameter
0x98AD22: add     esp, 14h
0x98AD25: xor     eax, eax
0x98AD27: jmp     loc_98AE58
0x98AD2C: call    __getptd
0x98AD31: mov     esi, eax
0x98AD33: mov     [ebp+var_1C], esi
0x98AD36: call    ___updatetlocinfo
0x98AD3B: or      dword ptr [esi+70h], 10h
0x98AD3F: mov     [ebp+ms_exc.registration.TryLevel], ebx
0x98AD42: push    1
0x98AD44: push    0D8h ; 'Ø'
0x98AD49: call    unknown_libname_74
0x98AD4E: pop     ecx
0x98AD4F: pop     ecx
0x98AD50: mov     edi, eax
0x98AD52: mov     [ebp+var_24], edi
0x98AD55: cmp     edi, ebx
0x98AD57: jz      _setlocale___$LN26_0
0x98AD5D: push    0Ch
0x98AD5F: call    __lock
0x98AD64: pop     ecx
0x98AD65: mov     [ebp+ms_exc.registration.TryLevel], 1
0x98AD6C: mov     ecx, [esi+6Ch]
0x98AD6F: mov     eax, edi
0x98AD71: call    __copytlocinfo_nolock
0x98AD76: mov     [ebp+ms_exc.registration.TryLevel], ebx
0x98AD79: call    _setlocale___$LN21_1
