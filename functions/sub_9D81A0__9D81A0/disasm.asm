0x9D81A0: push    0FFFFFFFFh
0x9D81A2: push    offset SEH_9D81A0
0x9D81A7: mov     eax, large fs:0
0x9D81AD: push    eax
0x9D81AE: mov     eax, ___security_cookie
0x9D81B3: xor     eax, esp
0x9D81B5: push    eax
0x9D81B6: lea     eax, [esp+10h+var_C]
0x9D81BA: mov     large fs:0, eax
0x9D81C0: push    offset flt_B02C4C
0x9D81C5: mov     ecx, offset INISettingCollection
0x9D81CA: mov     [esp+14h+var_4], 0
0x9D81D2: call    SettingCollectionList_AddSetting
0x9D81D7: push    offset sub_A164F0; void (__cdecl *)()
0x9D81DC: call    _atexit
0x9D81E1: add     esp, 4
0x9D81E4: mov     ecx, [esp+10h+var_C]
0x9D81E8: mov     large fs:0, ecx
0x9D81EF: pop     ecx
0x9D81F0: add     esp, 0Ch
0x9D81F3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9A9EB0: mov     ecx, offset flt_B02C4C
0x9A9EB5: jmp     loc_403BC0
0x9A9EBA: mov     edx, [esp+arg_4]
0x9A9EBE: lea     eax, [edx]
0x9A9EC0: mov     ecx, [edx-4]
0x9A9EC3: xor     ecx, eax
0x9A9EC5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9A9ECA: mov     eax, offset stru_AD6F4C
0x9A9ECF: jmp     ___CxxFrameHandler3
