0x9D9190: push    0FFFFFFFFh
0x9D9192: push    offset SEH_9D9190
0x9D9197: mov     eax, large fs:0
0x9D919D: push    eax
0x9D919E: mov     eax, ___security_cookie
0x9D91A3: xor     eax, esp
0x9D91A5: push    eax
0x9D91A6: lea     eax, [esp+10h+var_C]
0x9D91AA: mov     large fs:0, eax
0x9D91B0: push    offset flt_B02DD0
0x9D91B5: mov     ecx, offset INISettingCollection
0x9D91BA: mov     [esp+14h+var_4], 0
0x9D91C2: call    SettingCollectionList_AddSetting
0x9D91C7: push    offset sub_A16E80; void (__cdecl *)()
0x9D91CC: call    _atexit
0x9D91D1: add     esp, 4
0x9D91D4: mov     ecx, [esp+10h+var_C]
0x9D91D8: mov     large fs:0, ecx
0x9D91DF: pop     ecx
0x9D91E0: add     esp, 0Ch
0x9D91E3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AA900: mov     ecx, offset flt_B02DD0
0x9AA905: jmp     loc_403BC0
0x9AA90A: mov     edx, [esp+arg_4]
0x9AA90E: lea     eax, [edx]
0x9AA910: mov     ecx, [edx-4]
0x9AA913: xor     ecx, eax
0x9AA915: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AA91A: mov     eax, offset stru_AD7884
0x9AA91F: jmp     ___CxxFrameHandler3
