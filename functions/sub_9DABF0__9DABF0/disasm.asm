0x9DABF0: push    0FFFFFFFFh
0x9DABF2: push    offset SEH_9DABF0
0x9DABF7: mov     eax, large fs:0
0x9DABFD: push    eax
0x9DABFE: mov     eax, ___security_cookie
0x9DAC03: xor     eax, esp
0x9DAC05: push    eax
0x9DAC06: lea     eax, [esp+10h+var_C]
0x9DAC0A: mov     large fs:0, eax
0x9DAC10: push    offset bInvalidateOlderFiles_Archive
0x9DAC15: mov     ecx, offset INISettingCollection
0x9DAC1A: mov     [esp+14h+var_4], 0
0x9DAC22: call    SettingCollectionList_AddSetting
0x9DAC27: push    offset sub_A17B30; void (__cdecl *)()
0x9DAC2C: call    _atexit
0x9DAC31: add     esp, 4
0x9DAC34: mov     ecx, [esp+10h+var_C]
0x9DAC38: mov     large fs:0, ecx
0x9DAC3F: pop     ecx
0x9DAC40: add     esp, 0Ch
0x9DAC43: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9ABDB0: mov     ecx, offset bInvalidateOlderFiles_Archive
0x9ABDB5: jmp     loc_403BC0
0x9ABDBA: mov     edx, [esp+arg_4]
0x9ABDBE: lea     eax, [edx]
0x9ABDC0: mov     ecx, [edx-4]
0x9ABDC3: xor     ecx, eax
0x9ABDC5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9ABDCA: mov     eax, offset stru_AD8B0C
0x9ABDCF: jmp     ___CxxFrameHandler3
