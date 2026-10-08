0x738830: push    0FFFFFFFFh
0x738832: push    offset SEH_8C62B0
0x738837: mov     eax, large fs:0
0x73883D: push    eax
0x73883E: push    ecx
0x73883F: push    esi
0x738840: mov     eax, ds:0B30AACh
0x738845: xor     eax, esp
0x738847: push    eax
0x738848: lea     eax, [esp+18h+var_C]
0x73884C: mov     large fs:0, eax
0x738852: push    0C0h ; 'À'; Size
0x738857: call    FormHeapAlloc
0x73885C: mov     esi, eax
0x73885E: add     esp, 4
0x738861: mov     [esp+18h+var_10], esi
0x738865: xor     eax, eax
0x738867: cmp     esi, eax
0x738869: mov     [esp+18h+var_4], eax
0x73886D: jz      short loc_73887E
0x73886F: mov     ecx, esi
0x738871: call    sub_717590
0x738876: mov     dword ptr [esi], offset ??_7NiScreenGeometry@@6B@; const NiScreenGeometry::`vftable'
0x73887C: mov     eax, esi
0x73887E: mov     ecx, [esp+18h+var_C]
0x738882: mov     large fs:0, ecx
0x738889: pop     ecx
0x73888A: pop     esi
0x73888B: add     esp, 10h
0x73888E: retn
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
