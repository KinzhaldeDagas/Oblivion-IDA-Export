0x9DBDD0: push    0FFFFFFFFh
0x9DBDD2: push    offset SEH_9DBDD0
0x9DBDD7: mov     eax, large fs:0
0x9DBDDD: push    eax
0x9DBDDE: mov     eax, ___security_cookie
0x9DBDE3: xor     eax, esp
0x9DBDE5: push    eax
0x9DBDE6: lea     eax, [esp+10h+var_C]
0x9DBDEA: mov     large fs:0, eax
0x9DBDF0: push    offset byte_B05BBC
0x9DBDF5: mov     ecx, offset INISettingCollection
0x9DBDFA: mov     [esp+14h+var_4], 0
0x9DBE02: call    SettingCollectionList_AddSetting
0x9DBE07: push    offset sub_A18440; void (__cdecl *)()
0x9DBE0C: call    _atexit
0x9DBE11: add     esp, 4
0x9DBE14: mov     ecx, [esp+10h+var_C]
0x9DBE18: mov     large fs:0, ecx
0x9DBE1F: pop     ecx
0x9DBE20: add     esp, 0Ch
0x9DBE23: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AE890: mov     ecx, offset byte_B05BBC
0x9AE895: jmp     loc_403BC0
0x9AE89A: mov     edx, [esp+arg_4]
0x9AE89E: lea     eax, [edx]
0x9AE8A0: mov     ecx, [edx-4]
0x9AE8A3: xor     ecx, eax
0x9AE8A5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AE8AA: mov     eax, offset stru_ADB024
0x9AE8AF: jmp     ___CxxFrameHandler3
