0x693FE0: push    0FFFFFFFFh
0x693FE2: push    offset SEH_8C62B0
0x693FE7: mov     eax, large fs:0
0x693FED: push    eax
0x693FEE: push    ecx
0x693FEF: push    esi
0x693FF0: mov     eax, ds:0B30AACh
0x693FF5: xor     eax, esp
0x693FF7: push    eax
0x693FF8: lea     eax, [esp+18h+var_C]
0x693FFC: mov     large fs:0, eax
0x694002: push    3Ch ; '<'; Size
0x694004: call    FormHeapAlloc
0x694009: mov     esi, eax
0x69400B: add     esp, 4
0x69400E: mov     [esp+18h+var_10], esi
0x694012: xor     eax, eax
0x694014: cmp     esi, eax
0x694016: mov     [esp+18h+var_4], eax
0x69401A: jz      short loc_69403A
0x69401C: mov     eax, [esp+18h+effectItem]
0x694020: mov     ecx, [esp+18h+magicItem]
0x694024: mov     edx, [esp+18h+caster]
0x694028: push    eax; int
0x694029: push    ecx; int
0x69402A: push    edx; int
0x69402B: mov     ecx, esi; this
0x69402D: call    ValueModifierEffect_constr
0x694032: mov     dword ptr [esi], offset ??_7InvisibilityEffect@@6B@; const InvisibilityEffect::`vftable'
0x694038: mov     eax, esi
0x69403A: mov     ecx, dword ptr [esp+18h+var_C]
0x69403E: mov     large fs:0, ecx
0x694045: pop     ecx
0x694046: pop     esi
0x694047: add     esp, 10h
0x69404A: retn
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
