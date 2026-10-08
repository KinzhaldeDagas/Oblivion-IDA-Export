0x6E7E70: push    0FFFFFFFFh
0x6E7E72: push    offset SEH_8C62B0
0x6E7E77: mov     eax, large fs:0
0x6E7E7D: push    eax
0x6E7E7E: push    ecx
0x6E7E7F: push    esi
0x6E7E80: mov     eax, ds:0B30AACh
0x6E7E85: xor     eax, esp
0x6E7E87: push    eax
0x6E7E88: lea     eax, [esp+18h+var_C]
0x6E7E8C: mov     large fs:0, eax
0x6E7E92: push    20h ; ' '; Size
0x6E7E94: call    FormHeapAlloc
0x6E7E99: mov     esi, eax
0x6E7E9B: add     esp, 4
0x6E7E9E: mov     [esp+18h+var_10], esi
0x6E7EA2: test    esi, esi
0x6E7EA4: mov     [esp+18h+var_4], 0
0x6E7EAC: jz      short loc_6E7EDB
0x6E7EAE: push    0
0x6E7EB0: mov     ecx, esi
0x6E7EB2: call    sub_6E7F50
0x6E7EB7: mov     dword ptr [esi], offset ??_7NiBoolTimelineInterpolator@@6B@; const NiBoolTimelineInterpolator::`vftable'
0x6E7EBD: mov     dword ptr [esi+18h], 0
0x6E7EC4: mov     byte ptr [esi+1Ch], 0
0x6E7EC8: mov     eax, esi
0x6E7ECA: mov     ecx, [esp+18h+var_C]
0x6E7ECE: mov     large fs:0, ecx
0x6E7ED5: pop     ecx
0x6E7ED6: pop     esi
0x6E7ED7: add     esp, 10h
0x6E7EDA: retn
0x6E7EDB: xor     eax, eax
0x6E7EDD: mov     ecx, [esp+18h+var_C]
0x6E7EE1: mov     large fs:0, ecx
0x6E7EE8: pop     ecx
0x6E7EE9: pop     esi
0x6E7EEA: add     esp, 10h
0x6E7EED: retn
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
