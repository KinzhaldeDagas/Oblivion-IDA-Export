0x9806FD: push    esi
0x9806FE: call    ____lc_handle_func
0x980703: mov     eax, [eax+4]
0x980706: mov     esi, [esp+4+arg_0]
0x98070A: mov     [esi], eax
0x98070C: call    ____lc_codepage_func
0x980711: push    2
0x980713: push    100h
0x980718: mov     [esi+4], eax
0x98071B: call    unknown_libname_74
0x980720: test    eax, eax
0x980722: pop     ecx
0x980723: pop     ecx
0x980724: mov     [esi+8], eax
0x980727: jz      short loc_980748
0x980729: push    200h; Size
0x98072E: call    ___pctype_func
0x980733: push    eax; Src
0x980734: push    dword ptr [esi+8]; Dst
0x980737: call    _memcpy
0x98073C: add     esp, 0Ch
0x98073F: mov     dword ptr [esi+0Ch], 1
0x980746: jmp     short loc_980754
0x980748: call    ___pctype_func
0x98074D: and     dword ptr [esi+0Ch], 0
0x980751: mov     [esi+8], eax
0x980754: mov     eax, esi
0x980756: pop     esi
0x980757: retn
