0x9DEA40: push    0FFFFFFFFh
0x9DEA42: push    offset SEH_9DEA40
0x9DEA47: mov     eax, large fs:0
0x9DEA4D: push    eax
0x9DEA4E: mov     eax, ___security_cookie
0x9DEA53: xor     eax, esp
0x9DEA55: push    eax
0x9DEA56: lea     eax, [esp+10h+var_C]
0x9DEA5A: mov     large fs:0, eax
0x9DEA60: push    offset flt_B06EF4
0x9DEA65: mov     ecx, offset INISettingCollection
0x9DEA6A: mov     [esp+14h+var_4], 0
0x9DEA72: call    SettingCollectionList_AddSetting
0x9DEA77: push    offset sub_A19AD0; void (__cdecl *)()
0x9DEA7C: call    _atexit
0x9DEA81: add     esp, 4
0x9DEA84: mov     ecx, [esp+10h+var_C]
0x9DEA88: mov     large fs:0, ecx
0x9DEA8F: pop     ecx
0x9DEA90: add     esp, 0Ch
0x9DEA93: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B1420: mov     ecx, offset flt_B06EF4
0x9B1425: jmp     loc_403BC0
0x9B142A: mov     edx, [esp+arg_4]
0x9B142E: lea     eax, [edx]
0x9B1430: mov     ecx, [edx-4]
0x9B1433: xor     ecx, eax
0x9B1435: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B143A: mov     eax, offset stru_ADD600
0x9B143F: jmp     ___CxxFrameHandler3
