0x9DD360: push    0FFFFFFFFh
0x9DD362: push    offset SEH_9DD360
0x9DD367: mov     eax, large fs:0
0x9DD36D: push    eax
0x9DD36E: mov     eax, ___security_cookie
0x9DD373: xor     eax, esp
0x9DD375: push    eax
0x9DD376: lea     eax, [esp+10h+var_C]
0x9DD37A: mov     large fs:0, eax
0x9DD380: push    offset iMultiSample
0x9DD385: mov     ecx, offset INISettingCollection
0x9DD38A: mov     [esp+14h+var_4], 0
0x9DD392: call    SettingCollectionList_AddSetting
0x9DD397: push    offset sub_A18F60; void (__cdecl *)()
0x9DD39C: call    _atexit
0x9DD3A1: add     esp, 4
0x9DD3A4: mov     ecx, [esp+10h+var_C]
0x9DD3A8: mov     large fs:0, ecx
0x9DD3AF: pop     ecx
0x9DD3B0: add     esp, 0Ch
0x9DD3B3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B08B0: mov     ecx, offset iMultiSample
0x9B08B5: jmp     loc_403BC0
0x9B08BA: mov     edx, [esp+arg_4]
0x9B08BE: lea     eax, [edx]
0x9B08C0: mov     ecx, [edx-4]
0x9B08C3: xor     ecx, eax
0x9B08C5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B08CA: mov     eax, offset stru_ADCB84
0x9B08CF: jmp     ___CxxFrameHandler3
