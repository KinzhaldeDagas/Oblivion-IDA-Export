0x9DCFA0: push    0FFFFFFFFh
0x9DCFA2: push    offset SEH_9DCFA0
0x9DCFA7: mov     eax, large fs:0
0x9DCFAD: push    eax
0x9DCFAE: mov     eax, ___security_cookie
0x9DCFB3: xor     eax, esp
0x9DCFB5: push    eax
0x9DCFB6: lea     eax, [esp+10h+var_C]
0x9DCFBA: mov     large fs:0, eax
0x9DCFC0: push    offset byte_B06CBC
0x9DCFC5: mov     ecx, offset INISettingCollection
0x9DCFCA: mov     [esp+14h+var_4], 0
0x9DCFD2: call    SettingCollectionList_AddSetting
0x9DCFD7: push    offset sub_A18D80; void (__cdecl *)()
0x9DCFDC: call    _atexit
0x9DCFE1: add     esp, 4
0x9DCFE4: mov     ecx, [esp+10h+var_C]
0x9DCFE8: mov     large fs:0, ecx
0x9DCFEF: pop     ecx
0x9DCFF0: add     esp, 0Ch
0x9DCFF3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B06D0: mov     ecx, offset byte_B06CBC
0x9B06D5: jmp     loc_403BC0
0x9B06DA: mov     edx, [esp+arg_4]
0x9B06DE: lea     eax, [edx]
0x9B06E0: mov     ecx, [edx-4]
0x9B06E3: xor     ecx, eax
0x9B06E5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B06EA: mov     eax, offset stru_ADC9CC
0x9B06EF: jmp     ___CxxFrameHandler3
