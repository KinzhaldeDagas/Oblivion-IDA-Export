0x72CAA0: push    0FFFFFFFFh
0x72CAA2: push    offset SEH_8C62B0
0x72CAA7: mov     eax, large fs:0
0x72CAAD: push    eax
0x72CAAE: push    ecx
0x72CAAF: push    esi
0x72CAB0: mov     eax, ds:0B30AACh
0x72CAB5: xor     eax, esp
0x72CAB7: push    eax
0x72CAB8: lea     eax, [esp+18h+var_C]
0x72CABC: mov     large fs:0, eax
0x72CAC2: push    10h; Size
0x72CAC4: call    FormHeapAlloc
0x72CAC9: mov     esi, eax
0x72CACB: add     esp, 4
0x72CACE: mov     [esp+18h+var_10], esi
0x72CAD2: test    esi, esi
0x72CAD4: mov     [esp+18h+var_4], 0
0x72CADC: jz      short loc_72CB05
0x72CADE: mov     ecx, esi
0x72CAE0: call    NiObject_constr
0x72CAE5: mov     dword ptr [esi], offset ??_7NiSkinPartition@@6B@; const NiSkinPartition::`vftable'
0x72CAEB: mov     dword ptr [esi+0Ch], 0
0x72CAF2: mov     eax, esi
0x72CAF4: mov     ecx, [esp+18h+var_C]
0x72CAF8: mov     large fs:0, ecx
0x72CAFF: pop     ecx
0x72CB00: pop     esi
0x72CB01: add     esp, 10h
0x72CB04: retn
0x72CB05: xor     eax, eax
0x72CB07: mov     ecx, [esp+18h+var_C]
0x72CB0B: mov     large fs:0, ecx
0x72CB12: pop     ecx
0x72CB13: pop     esi
0x72CB14: add     esp, 10h
0x72CB17: retn
0x9D62E0: mov     eax, [ebp-10h]
0x9D62E3: push    eax
0x9D62E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D62E9: pop     ecx
0x9D62EA: retn
0x9D62EB: mov     edx, [esp+arg_4]
0x9D62EF: lea     eax, [edx-8]
0x9D62F2: mov     ecx, [edx-0Ch]
0x9D62F5: xor     ecx, eax
0x9D62F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D62FC: mov     eax, offset stru_AFE21C
0x9D6301: jmp     ___CxxFrameHandler3
