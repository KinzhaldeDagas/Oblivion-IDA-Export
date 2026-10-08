0x9DB8D0: push    0FFFFFFFFh
0x9DB8D2: push    offset SEH_9DB8D0
0x9DB8D7: mov     eax, large fs:0
0x9DB8DD: push    eax
0x9DB8DE: mov     eax, ___security_cookie
0x9DB8E3: xor     eax, esp
0x9DB8E5: push    eax
0x9DB8E6: lea     eax, [esp+10h+var_C]
0x9DB8EA: mov     large fs:0, eax
0x9DB8F0: push    offset byte_B05584
0x9DB8F5: mov     ecx, offset INISettingCollection
0x9DB8FA: mov     [esp+14h+var_4], 0
0x9DB902: call    SettingCollectionList_AddSetting
0x9DB907: push    offset sub_A181B0; void (__cdecl *)()
0x9DB90C: call    _atexit
0x9DB911: add     esp, 4
0x9DB914: mov     ecx, [esp+10h+var_C]
0x9DB918: mov     large fs:0, ecx
0x9DB91F: pop     ecx
0x9DB920: add     esp, 0Ch
0x9DB923: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9ADED0: mov     ecx, offset byte_B05584
0x9ADED5: jmp     loc_403BC0
0x9ADEDA: mov     edx, [esp+arg_4]
0x9ADEDE: lea     eax, [edx]
0x9ADEE0: mov     ecx, [edx-4]
0x9ADEE3: xor     ecx, eax
0x9ADEE5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9ADEEA: mov     eax, offset stru_ADA7E8
0x9ADEEF: jmp     ___CxxFrameHandler3
