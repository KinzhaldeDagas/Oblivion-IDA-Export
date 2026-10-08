0x7214D0: push    0FFFFFFFFh
0x7214D2: push    offset SEH_8C62B0
0x7214D7: mov     eax, large fs:0
0x7214DD: push    eax
0x7214DE: push    ecx
0x7214DF: push    esi
0x7214E0: mov     eax, ds:0B30AACh
0x7214E5: xor     eax, esp
0x7214E7: push    eax
0x7214E8: lea     eax, [esp+18h+var_C]
0x7214EC: mov     large fs:0, eax
0x7214F2: push    0Ch; Size
0x7214F4: call    FormHeapAlloc
0x7214F9: mov     esi, eax
0x7214FB: add     esp, 4
0x7214FE: mov     [esp+18h+var_10], esi
0x721502: test    esi, esi
0x721504: mov     [esp+18h+var_4], 0
0x72150C: jz      short loc_721535
0x72150E: mov     ecx, esi
0x721510: call    NiObject_constr
0x721515: mov     dword ptr [esi], offset ??_7NiExtraData@@6B@; const NiExtraData::`vftable'
0x72151B: mov     dword ptr [esi+8], 0
0x721522: mov     eax, esi
0x721524: mov     ecx, [esp+18h+var_C]
0x721528: mov     large fs:0, ecx
0x72152F: pop     ecx
0x721530: pop     esi
0x721531: add     esp, 10h
0x721534: retn
0x721535: xor     eax, eax
0x721537: mov     ecx, [esp+18h+var_C]
0x72153B: mov     large fs:0, ecx
0x721542: pop     ecx
0x721543: pop     esi
0x721544: add     esp, 10h
0x721547: retn
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
