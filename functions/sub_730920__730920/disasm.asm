0x730920: push    0FFFFFFFFh
0x730922: push    offset SEH_8C62B0
0x730927: mov     eax, large fs:0
0x73092D: push    eax
0x73092E: push    ecx
0x73092F: push    esi
0x730930: mov     eax, ds:0B30AACh
0x730935: xor     eax, esp
0x730937: push    eax
0x730938: lea     eax, [esp+18h+var_C]
0x73093C: mov     large fs:0, eax
0x730942: push    10h; Size
0x730944: call    FormHeapAlloc
0x730949: mov     esi, eax
0x73094B: add     esp, 4
0x73094E: mov     [esp+18h+var_10], esi
0x730952: test    esi, esi
0x730954: mov     [esp+18h+var_4], 0
0x73095C: jz      short loc_730985
0x73095E: mov     ecx, esi
0x730960: call    sub_721350
0x730965: mov     dword ptr [esi], offset ??_7NiIntegerExtraData@@6B@; const NiIntegerExtraData::`vftable'
0x73096B: mov     dword ptr [esi+0Ch], 0
0x730972: mov     eax, esi
0x730974: mov     ecx, [esp+18h+var_C]
0x730978: mov     large fs:0, ecx
0x73097F: pop     ecx
0x730980: pop     esi
0x730981: add     esp, 10h
0x730984: retn
0x730985: xor     eax, eax
0x730987: mov     ecx, [esp+18h+var_C]
0x73098B: mov     large fs:0, ecx
0x730992: pop     ecx
0x730993: pop     esi
0x730994: add     esp, 10h
0x730997: retn
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
