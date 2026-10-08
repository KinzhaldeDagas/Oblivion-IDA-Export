0x9DB9F0: push    0FFFFFFFFh
0x9DB9F2: push    offset SEH_9DB9F0
0x9DB9F7: mov     eax, large fs:0
0x9DB9FD: push    eax
0x9DB9FE: mov     eax, ___security_cookie
0x9DBA03: xor     eax, esp
0x9DBA05: push    eax
0x9DBA06: lea     eax, [esp+10h+var_C]
0x9DBA0A: mov     large fs:0, eax
0x9DBA10: push    offset byte_B0559C
0x9DBA15: mov     ecx, offset INISettingCollection
0x9DBA1A: mov     [esp+14h+var_4], 0
0x9DBA22: call    SettingCollectionList_AddSetting
0x9DBA27: push    offset sub_A18240; void (__cdecl *)()
0x9DBA2C: call    _atexit
0x9DBA31: add     esp, 4
0x9DBA34: mov     ecx, [esp+10h+var_C]
0x9DBA38: mov     large fs:0, ecx
0x9DBA3F: pop     ecx
0x9DBA40: add     esp, 0Ch
0x9DBA43: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9ADF60: mov     ecx, offset byte_B0559C
0x9ADF65: jmp     loc_403BC0
0x9ADF6A: mov     edx, [esp+arg_4]
0x9ADF6E: lea     eax, [edx]
0x9ADF70: mov     ecx, [edx-4]
0x9ADF73: xor     ecx, eax
0x9ADF75: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9ADF7A: mov     eax, offset stru_ADA86C
0x9ADF7F: jmp     ___CxxFrameHandler3
