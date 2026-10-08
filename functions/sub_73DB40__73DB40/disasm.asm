0x73DB40: push    0FFFFFFFFh
0x73DB42: push    offset SEH_8C62B0
0x73DB47: mov     eax, large fs:0
0x73DB4D: push    eax
0x73DB4E: push    ecx
0x73DB4F: push    esi
0x73DB50: mov     eax, ds:0B30AACh
0x73DB55: xor     eax, esp
0x73DB57: push    eax
0x73DB58: lea     eax, [esp+18h+var_C]
0x73DB5C: mov     large fs:0, eax
0x73DB62: push    1Ch; Size
0x73DB64: call    FormHeapAlloc
0x73DB69: mov     esi, eax
0x73DB6B: add     esp, 4
0x73DB6E: mov     [esp+18h+var_10], esi
0x73DB72: xor     eax, eax
0x73DB74: cmp     esi, eax
0x73DB76: mov     [esp+18h+var_4], eax
0x73DB7A: jz      short loc_73DB91
0x73DB7C: mov     ecx, esi; this
0x73DB7E: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x73DB83: mov     dword ptr [esi], offset ??_7NiShadeProperty@@6B@; const NiShadeProperty::`vftable'
0x73DB89: mov     word ptr [esi+18h], 1
0x73DB8F: mov     eax, esi
0x73DB91: mov     ecx, [esp+18h+var_C]
0x73DB95: mov     large fs:0, ecx
0x73DB9C: pop     ecx
0x73DB9D: pop     esi
0x73DB9E: add     esp, 10h
0x73DBA1: retn
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
