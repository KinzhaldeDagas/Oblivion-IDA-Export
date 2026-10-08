0x6D7D90: push    0FFFFFFFFh
0x6D7D92: push    offset SEH_8C62B0
0x6D7D97: mov     eax, large fs:0
0x6D7D9D: push    eax
0x6D7D9E: push    ecx
0x6D7D9F: push    esi
0x6D7DA0: mov     eax, ds:0B30AACh
0x6D7DA5: xor     eax, esp
0x6D7DA7: push    eax
0x6D7DA8: lea     eax, [esp+18h+var_C]
0x6D7DAC: mov     large fs:0, eax
0x6D7DB2: push    18h; Size
0x6D7DB4: call    FormHeapAlloc
0x6D7DB9: mov     esi, eax
0x6D7DBB: add     esp, 4
0x6D7DBE: mov     [esp+18h+var_10], esi
0x6D7DC2: xor     eax, eax
0x6D7DC4: cmp     esi, eax
0x6D7DC6: mov     [esp+18h+var_4], eax
0x6D7DCA: jz      short loc_6D7DDB
0x6D7DCC: mov     ecx, esi; this
0x6D7DCE: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x6D7DD3: mov     dword ptr [esi], offset ??_7NiSequenceStreamHelper@@6B@; const NiSequenceStreamHelper::`vftable'
0x6D7DD9: mov     eax, esi
0x6D7DDB: mov     ecx, [esp+18h+var_C]
0x6D7DDF: mov     large fs:0, ecx
0x6D7DE6: pop     ecx
0x6D7DE7: pop     esi
0x6D7DE8: add     esp, 10h
0x6D7DEB: retn
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
