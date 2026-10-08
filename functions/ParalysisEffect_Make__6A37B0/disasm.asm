0x6A37B0: push    0FFFFFFFFh
0x6A37B2: push    offset SEH_8C62B0
0x6A37B7: mov     eax, large fs:0
0x6A37BD: push    eax
0x6A37BE: push    ecx
0x6A37BF: push    esi
0x6A37C0: mov     eax, ds:0B30AACh
0x6A37C5: xor     eax, esp
0x6A37C7: push    eax
0x6A37C8: lea     eax, [esp+18h+var_C]
0x6A37CC: mov     large fs:0, eax
0x6A37D2: push    3Ch ; '<'; Size
0x6A37D4: call    FormHeapAlloc
0x6A37D9: mov     esi, eax
0x6A37DB: add     esp, 4
0x6A37DE: mov     [esp+18h+var_10], esi
0x6A37E2: xor     eax, eax
0x6A37E4: cmp     esi, eax
0x6A37E6: mov     [esp+18h+var_4], eax
0x6A37EA: jz      short loc_6A380A
0x6A37EC: mov     eax, [esp+18h+effectItem]
0x6A37F0: mov     ecx, [esp+18h+magicItem]
0x6A37F4: mov     edx, [esp+18h+caster]
0x6A37F8: push    eax; int
0x6A37F9: push    ecx; int
0x6A37FA: push    edx; int
0x6A37FB: mov     ecx, esi; this
0x6A37FD: call    ValueModifierEffect_constr
0x6A3802: mov     dword ptr [esi], offset ??_7ParalysisEffect@@6B@; const ParalysisEffect::`vftable'
0x6A3808: mov     eax, esi
0x6A380A: mov     ecx, dword ptr [esp+18h+var_C]
0x6A380E: mov     large fs:0, ecx
0x6A3815: pop     ecx
0x6A3816: pop     esi
0x6A3817: add     esp, 10h
0x6A381A: retn
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
