0x730B70: push    0FFFFFFFFh
0x730B72: push    offset SEH_8C62B0
0x730B77: mov     eax, large fs:0
0x730B7D: push    eax
0x730B7E: push    ecx
0x730B7F: push    esi
0x730B80: mov     eax, ds:0B30AACh
0x730B85: xor     eax, esp
0x730B87: push    eax
0x730B88: lea     eax, [esp+18h+var_C]
0x730B8C: mov     large fs:0, eax
0x730B92: push    0Ch; Size
0x730B94: call    FormHeapAlloc
0x730B99: mov     esi, eax
0x730B9B: add     esp, 4
0x730B9E: mov     [esp+18h+var_10], esi
0x730BA2: xor     eax, eax
0x730BA4: cmp     esi, eax
0x730BA6: mov     [esp+18h+var_4], eax
0x730BAA: jz      short loc_730BBB
0x730BAC: mov     ecx, esi
0x730BAE: call    sub_721350
0x730BB3: mov     dword ptr [esi], offset ??_7NiVertWeightsExtraData@@6B@; const NiVertWeightsExtraData::`vftable'
0x730BB9: mov     eax, esi
0x730BBB: mov     ecx, [esp+18h+var_C]
0x730BBF: mov     large fs:0, ecx
0x730BC6: pop     ecx
0x730BC7: pop     esi
0x730BC8: add     esp, 10h
0x730BCB: retn
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
