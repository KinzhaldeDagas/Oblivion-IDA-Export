0x692300: push    0FFFFFFFFh
0x692302: push    offset SEH_8C62B0
0x692307: mov     eax, large fs:0
0x69230D: push    eax
0x69230E: push    ecx
0x69230F: push    esi
0x692310: mov     eax, ds:0B30AACh
0x692315: xor     eax, esp
0x692317: push    eax
0x692318: lea     eax, [esp+18h+var_C]
0x69231C: mov     large fs:0, eax
0x692322: push    38h ; '8'; Size
0x692324: call    FormHeapAlloc
0x692329: mov     esi, eax
0x69232B: add     esp, 4
0x69232E: mov     [esp+18h+var_10], esi
0x692332: xor     eax, eax
0x692334: cmp     esi, eax
0x692336: mov     [esp+18h+var_4], eax
0x69233A: jz      short loc_69235A
0x69233C: mov     eax, [esp+18h+effectItem]
0x692340: mov     ecx, [esp+18h+magicItem]
0x692344: mov     edx, [esp+18h+caster]
0x692348: push    eax; int
0x692349: push    ecx; int
0x69234A: push    edx; int
0x69234B: mov     ecx, esi; this
0x69234D: call    CommandEffect_constr
0x692352: mov     dword ptr [esi], offset ??_7CommandCreatureEffect@@6B@; const CommandCreatureEffect::`vftable'
0x692358: mov     eax, esi
0x69235A: mov     ecx, [esp+18h+var_C]
0x69235E: mov     large fs:0, ecx
0x692365: pop     ecx
0x692366: pop     esi
0x692367: add     esp, 10h
0x69236A: retn
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
