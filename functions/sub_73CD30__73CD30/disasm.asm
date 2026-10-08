0x73CD30: push    0FFFFFFFFh
0x73CD32: push    offset SEH_8C62B0
0x73CD37: mov     eax, large fs:0
0x73CD3D: push    eax
0x73CD3E: push    ecx
0x73CD3F: push    esi
0x73CD40: mov     eax, ds:0B30AACh
0x73CD45: xor     eax, esp
0x73CD47: push    eax
0x73CD48: lea     eax, [esp+18h+var_C]
0x73CD4C: mov     large fs:0, eax
0x73CD52: push    14h; Size
0x73CD54: call    FormHeapAlloc
0x73CD59: mov     esi, eax
0x73CD5B: add     esp, 4
0x73CD5E: mov     [esp+18h+var_10], esi
0x73CD62: test    esi, esi
0x73CD64: mov     [esp+18h+var_4], 0
0x73CD6C: jz      short loc_73CD9C
0x73CD6E: mov     ecx, esi
0x73CD70: call    sub_721350
0x73CD75: mov     dword ptr [esi], offset ??_7NiStringsExtraData@@6B@; const NiStringsExtraData::`vftable'
0x73CD7B: mov     dword ptr [esi+10h], 0
0x73CD82: mov     dword ptr [esi+0Ch], 0
0x73CD89: mov     eax, esi
0x73CD8B: mov     ecx, [esp+18h+var_C]
0x73CD8F: mov     large fs:0, ecx
0x73CD96: pop     ecx
0x73CD97: pop     esi
0x73CD98: add     esp, 10h
0x73CD9B: retn
0x73CD9C: xor     eax, eax
0x73CD9E: mov     ecx, [esp+18h+var_C]
0x73CDA2: mov     large fs:0, ecx
0x73CDA9: pop     ecx
0x73CDAA: pop     esi
0x73CDAB: add     esp, 10h
0x73CDAE: retn
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
