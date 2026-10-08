0x9DBFE0: push    0FFFFFFFFh
0x9DBFE2: push    offset SEH_9DBFE0
0x9DBFE7: mov     eax, large fs:0
0x9DBFED: push    eax
0x9DBFEE: mov     eax, ___security_cookie
0x9DBFF3: xor     eax, esp
0x9DBFF5: push    eax
0x9DBFF6: lea     eax, [esp+10h+var_C]
0x9DBFFA: mov     large fs:0, eax
0x9DC000: push    offset byte_B06310
0x9DC005: mov     ecx, offset INISettingCollection
0x9DC00A: mov     [esp+14h+var_4], 0
0x9DC012: call    SettingCollectionList_AddSetting
0x9DC017: push    offset sub_A18550; void (__cdecl *)()
0x9DC01C: call    _atexit
0x9DC021: add     esp, 4
0x9DC024: mov     ecx, [esp+10h+var_C]
0x9DC028: mov     large fs:0, ecx
0x9DC02F: pop     ecx
0x9DC030: add     esp, 0Ch
0x9DC033: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AEB60: mov     ecx, offset byte_B06310
0x9AEB65: jmp     loc_403BC0
0x9AEB6A: mov     edx, [esp+arg_4]
0x9AEB6E: lea     eax, [edx]
0x9AEB70: mov     ecx, [edx-4]
0x9AEB73: xor     ecx, eax
0x9AEB75: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AEB7A: mov     eax, offset stru_ADB26C
0x9AEB7F: jmp     ___CxxFrameHandler3
