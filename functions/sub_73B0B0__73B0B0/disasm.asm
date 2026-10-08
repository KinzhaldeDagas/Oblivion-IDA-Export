0x73B0B0: push    0FFFFFFFFh
0x73B0B2: push    offset SEH_8C62B0
0x73B0B7: mov     eax, large fs:0
0x73B0BD: push    eax
0x73B0BE: push    ecx
0x73B0BF: push    esi
0x73B0C0: mov     eax, ds:0B30AACh
0x73B0C5: xor     eax, esp
0x73B0C7: push    eax
0x73B0C8: lea     eax, [esp+18h+var_C]
0x73B0CC: mov     large fs:0, eax
0x73B0D2: push    1Ch; Size
0x73B0D4: call    FormHeapAlloc
0x73B0D9: mov     esi, eax
0x73B0DB: add     esp, 4
0x73B0DE: mov     [esp+18h+var_10], esi
0x73B0E2: xor     eax, eax
0x73B0E4: cmp     esi, eax
0x73B0E6: mov     [esp+18h+var_4], eax
0x73B0EA: jz      short loc_73B109
0x73B0EC: mov     ecx, esi
0x73B0EE: call    sub_721350
0x73B0F3: fldz
0x73B0F5: fst     dword ptr [esi+18h]
0x73B0F8: mov     dword ptr [esi], offset ??_7NiVectorExtraData@@6B@; const NiVectorExtraData::`vftable'
0x73B0FE: fst     dword ptr [esi+14h]
0x73B101: mov     eax, esi
0x73B103: fst     dword ptr [esi+10h]
0x73B106: fstp    dword ptr [esi+0Ch]
0x73B109: mov     ecx, [esp+18h+var_C]
0x73B10D: mov     large fs:0, ecx
0x73B114: pop     ecx
0x73B115: pop     esi
0x73B116: add     esp, 10h
0x73B119: retn
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
