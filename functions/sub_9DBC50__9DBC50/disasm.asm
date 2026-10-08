0x9DBC50: push    0FFFFFFFFh
0x9DBC52: push    offset SEH_9DBC50
0x9DBC57: mov     eax, large fs:0
0x9DBC5D: push    eax
0x9DBC5E: mov     eax, ___security_cookie
0x9DBC63: xor     eax, esp
0x9DBC65: push    eax
0x9DBC66: lea     eax, [esp+10h+var_C]
0x9DBC6A: mov     large fs:0, eax
0x9DBC70: push    offset unk_B05B9C
0x9DBC75: mov     ecx, offset INISettingCollection
0x9DBC7A: mov     [esp+14h+var_4], 0
0x9DBC82: call    SettingCollectionList_AddSetting
0x9DBC87: push    offset sub_A18380; void (__cdecl *)()
0x9DBC8C: call    _atexit
0x9DBC91: add     esp, 4
0x9DBC94: mov     ecx, [esp+10h+var_C]
0x9DBC98: mov     large fs:0, ecx
0x9DBC9F: pop     ecx
0x9DBCA0: add     esp, 0Ch
0x9DBCA3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AE7D0: mov     ecx, offset unk_B05B9C
0x9AE7D5: jmp     loc_403BC0
0x9AE7DA: mov     edx, [esp+arg_4]
0x9AE7DE: lea     eax, [edx]
0x9AE7E0: mov     ecx, [edx-4]
0x9AE7E3: xor     ecx, eax
0x9AE7E5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AE7EA: mov     eax, offset stru_ADAF74
0x9AE7EF: jmp     ___CxxFrameHandler3
