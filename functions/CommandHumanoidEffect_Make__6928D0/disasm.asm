0x6928D0: push    0FFFFFFFFh
0x6928D2: push    offset SEH_8C62B0
0x6928D7: mov     eax, large fs:0
0x6928DD: push    eax
0x6928DE: push    ecx
0x6928DF: push    esi
0x6928E0: mov     eax, ds:0B30AACh
0x6928E5: xor     eax, esp
0x6928E7: push    eax
0x6928E8: lea     eax, [esp+18h+var_C]
0x6928EC: mov     large fs:0, eax
0x6928F2: push    38h ; '8'; Size
0x6928F4: call    FormHeapAlloc
0x6928F9: mov     esi, eax
0x6928FB: add     esp, 4
0x6928FE: mov     [esp+18h+var_10], esi
0x692902: xor     eax, eax
0x692904: cmp     esi, eax
0x692906: mov     [esp+18h+var_4], eax
0x69290A: jz      short loc_69292A
0x69290C: mov     eax, [esp+18h+effectItem]
0x692910: mov     ecx, [esp+18h+magicItem]
0x692914: mov     edx, [esp+18h+caster]
0x692918: push    eax; int
0x692919: push    ecx; int
0x69291A: push    edx; int
0x69291B: mov     ecx, esi; this
0x69291D: call    CommandEffect_constr
0x692922: mov     dword ptr [esi], offset ??_7CommandHumanoidEffect@@6B@; const CommandHumanoidEffect::`vftable'
0x692928: mov     eax, esi
0x69292A: mov     ecx, [esp+18h+var_C]
0x69292E: mov     large fs:0, ecx
0x692935: pop     ecx
0x692936: pop     esi
0x692937: add     esp, 10h
0x69293A: retn
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
