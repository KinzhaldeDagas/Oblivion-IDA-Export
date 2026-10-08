0x692040: push    0FFFFFFFFh
0x692042: push    offset SEH_8C62B0
0x692047: mov     eax, large fs:0
0x69204D: push    eax
0x69204E: push    ecx
0x69204F: push    esi
0x692050: mov     eax, ds:0B30AACh
0x692055: xor     eax, esp
0x692057: push    eax
0x692058: lea     eax, [esp+18h+var_C]
0x69205C: mov     large fs:0, eax
0x692062: push    3Ch ; '<'; Size
0x692064: call    FormHeapAlloc
0x692069: mov     esi, eax
0x69206B: add     esp, 4
0x69206E: mov     [esp+18h+var_10], esi
0x692072: xor     eax, eax
0x692074: cmp     esi, eax
0x692076: mov     [esp+18h+var_4], eax
0x69207A: jz      short loc_69209A
0x69207C: mov     eax, [esp+18h+effectItem]
0x692080: mov     ecx, [esp+18h+magicItem]
0x692084: mov     edx, [esp+18h+caster]
0x692088: push    eax; int
0x692089: push    ecx; int
0x69208A: push    edx; int
0x69208B: mov     ecx, esi; this
0x69208D: call    ValueModifierEffect_constr
0x692092: mov     dword ptr [esi], offset ??_7ChameleonEffect@@6B@; const ChameleonEffect::`vftable'
0x692098: mov     eax, esi
0x69209A: mov     ecx, dword ptr [esp+18h+var_C]
0x69209E: mov     large fs:0, ecx
0x6920A5: pop     ecx
0x6920A6: pop     esi
0x6920A7: add     esp, 10h
0x6920AA: retn
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
