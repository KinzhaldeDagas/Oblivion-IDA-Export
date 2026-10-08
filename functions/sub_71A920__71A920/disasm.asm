0x71A920: push    0FFFFFFFFh
0x71A922: push    offset SEH_8C62B0
0x71A927: mov     eax, large fs:0
0x71A92D: push    eax
0x71A92E: push    ecx
0x71A92F: push    esi
0x71A930: mov     eax, ds:0B30AACh
0x71A935: xor     eax, esp
0x71A937: push    eax
0x71A938: lea     eax, [esp+18h+var_C]
0x71A93C: mov     large fs:0, eax
0x71A942: push    38h ; '8'; Size
0x71A944: call    FormHeapAlloc
0x71A949: mov     esi, eax
0x71A94B: add     esp, 4
0x71A94E: mov     [esp+18h+var_10], esi
0x71A952: test    esi, esi
0x71A954: mov     [esp+18h+var_4], 0
0x71A95C: jz      short loc_71A986
0x71A95E: mov     ecx, esi
0x71A960: call    NiBackToFrontAccumulator_Constructor
0x71A965: mov     dword ptr [esi], offset ??_7NiAlphaAccumulator@@6B@; const NiAlphaAccumulator::`vftable'
0x71A96B: mov     byte ptr [esi+34h], 1
0x71A96F: mov     byte ptr [esi+35h], 0
0x71A973: mov     eax, esi
0x71A975: mov     ecx, [esp+18h+var_C]
0x71A979: mov     large fs:0, ecx
0x71A980: pop     ecx
0x71A981: pop     esi
0x71A982: add     esp, 10h
0x71A985: retn
0x71A986: xor     eax, eax
0x71A988: mov     ecx, [esp+18h+var_C]
0x71A98C: mov     large fs:0, ecx
0x71A993: pop     ecx
0x71A994: pop     esi
0x71A995: add     esp, 10h
0x71A998: retn
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
