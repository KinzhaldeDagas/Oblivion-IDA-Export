0x8BEFC0: push    0FFFFFFFFh
0x8BEFC2: push    offset SEH_8C62B0
0x8BEFC7: mov     eax, large fs:0
0x8BEFCD: push    eax
0x8BEFCE: push    ecx
0x8BEFCF: push    esi
0x8BEFD0: mov     eax, ds:0B30AACh
0x8BEFD5: xor     eax, esp
0x8BEFD7: push    eax
0x8BEFD8: lea     eax, [esp+18h+var_C]
0x8BEFDC: mov     large fs:0, eax
0x8BEFE2: push    10h; Size
0x8BEFE4: call    FormHeapAlloc
0x8BEFE9: mov     esi, eax
0x8BEFEB: add     esp, 4
0x8BEFEE: mov     [esp+18h+var_10], esi
0x8BEFF2: test    esi, esi
0x8BEFF4: mov     [esp+18h+var_4], 0
0x8BEFFC: jz      short loc_8BF03C
0x8BEFFE: mov     ecx, esi; this
0x8BF000: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x8BF005: mov     eax, 1
0x8BF00A: mov     dword ptr [esi], offset ??_7bhkConstraint@@6B@; const bhkConstraint::`vftable'
0x8BF010: mov     dword ptr [esi+0Ch], 0
0x8BF017: add     ds:0BA7D4Ch, eax
0x8BF01D: mov     dword ptr [esi], offset ??_7bhkMalleableConstraint@@6B@; const bhkMalleableConstraint::`vftable'
0x8BF023: add     ds:0BA8088h, eax
0x8BF029: mov     eax, esi
0x8BF02B: mov     ecx, [esp+18h+var_C]
0x8BF02F: mov     large fs:0, ecx
0x8BF036: pop     ecx
0x8BF037: pop     esi
0x8BF038: add     esp, 10h
0x8BF03B: retn
0x8BF03C: xor     eax, eax
0x8BF03E: mov     ecx, [esp+18h+var_C]
0x8BF042: mov     large fs:0, ecx
0x8BF049: pop     ecx
0x8BF04A: pop     esi
0x8BF04B: add     esp, 10h
0x8BF04E: retn
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
