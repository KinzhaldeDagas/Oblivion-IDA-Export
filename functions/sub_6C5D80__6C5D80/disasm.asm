0x6C5D80: push    0FFFFFFFFh
0x6C5D82: push    offset SEH_7F1810
0x6C5D87: mov     eax, large fs:0
0x6C5D8D: push    eax
0x6C5D8E: push    ecx
0x6C5D8F: push    esi
0x6C5D90: mov     eax, ds:0B30AACh
0x6C5D95: xor     eax, esp
0x6C5D97: push    eax
0x6C5D98: lea     eax, [esp+18h+var_C]
0x6C5D9C: mov     large fs:0, eax
0x6C5DA2: mov     esi, ecx
0x6C5DA4: mov     [esp+18h+var_10], esi
0x6C5DA8: call    NiObject_constr
0x6C5DAD: mov     eax, [esp+18h+Size]
0x6C5DB1: test    eax, eax
0x6C5DB3: mov     [esp+18h+var_4], 0
0x6C5DBB: mov     dword ptr [esi], offset ??_7NiStringPalette@@6B@; const NiStringPalette::`vftable'
0x6C5DC1: mov     dword ptr [esi+8], 0
0x6C5DC8: mov     [esi+0Ch], eax
0x6C5DCB: mov     dword ptr [esi+10h], 0
0x6C5DD2: jbe     short loc_6C5DEC
0x6C5DD4: push    eax; Size
0x6C5DD5: call    FormHeapAlloc
0x6C5DDA: mov     ecx, [esi+0Ch]
0x6C5DDD: push    ecx
0x6C5DDE: push    0
0x6C5DE0: push    eax
0x6C5DE1: mov     [esi+8], eax
0x6C5DE4: call    __memset
0x6C5DE9: add     esp, 10h
0x6C5DEC: mov     eax, esi
0x6C5DEE: mov     ecx, [esp+18h+var_C]
0x6C5DF2: mov     large fs:0, ecx
0x6C5DF9: pop     ecx
0x6C5DFA: pop     esi
0x6C5DFB: add     esp, 10h
0x6C5DFE: retn    4
0x9CFDD0: mov     ecx, [ebp-10h]
0x9CFDD3: jmp     NiRefObject_destr
0x9CFDD8: mov     edx, [esp+arg_4]
0x9CFDDC: lea     eax, [edx-8]
0x9CFDDF: mov     ecx, [edx-0Ch]
0x9CFDE2: xor     ecx, eax
0x9CFDE4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CFDE9: mov     eax, offset stru_AF88CC
0x9CFDEE: jmp     ___CxxFrameHandler3
