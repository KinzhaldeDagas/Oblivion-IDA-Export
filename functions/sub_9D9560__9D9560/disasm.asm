0x9D9560: push    0FFFFFFFFh
0x9D9562: push    offset SEH_9D9560
0x9D9567: mov     eax, large fs:0
0x9D956D: push    eax
0x9D956E: mov     eax, ___security_cookie
0x9D9573: xor     eax, esp
0x9D9575: push    eax
0x9D9576: lea     eax, [esp+10h+var_C]
0x9D957A: mov     large fs:0, eax
0x9D9580: push    offset lpParameter
0x9D9585: mov     ecx, offset INISettingCollection
0x9D958A: mov     [esp+14h+var_4], 0
0x9D9592: call    SettingCollectionList_AddSetting
0x9D9597: push    offset sub_A17060; void (__cdecl *)()
0x9D959C: call    _atexit
0x9D95A1: add     esp, 4
0x9D95A4: mov     ecx, [esp+10h+var_C]
0x9D95A8: mov     large fs:0, ecx
0x9D95AF: pop     ecx
0x9D95B0: add     esp, 0Ch
0x9D95B3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AAAE0: mov     ecx, offset lpParameter
0x9AAAE5: jmp     loc_403BC0
0x9AAAEA: mov     edx, [esp+arg_4]
0x9AAAEE: lea     eax, [edx]
0x9AAAF0: mov     ecx, [edx-4]
0x9AAAF3: xor     ecx, eax
0x9AAAF5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AAAFA: mov     eax, offset stru_AD7A3C
0x9AAAFF: jmp     ___CxxFrameHandler3
