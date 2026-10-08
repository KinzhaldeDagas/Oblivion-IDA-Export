0x9DFE00: push    0FFFFFFFFh
0x9DFE02: push    offset SEH_9DFE00
0x9DFE07: mov     eax, large fs:0
0x9DFE0D: push    eax
0x9DFE0E: mov     eax, ___security_cookie
0x9DFE13: xor     eax, esp
0x9DFE15: push    eax
0x9DFE16: lea     eax, [esp+10h+var_C]
0x9DFE1A: mov     large fs:0, eax
0x9DFE20: push    offset unk_B070C8
0x9DFE25: mov     ecx, offset INISettingCollection
0x9DFE2A: mov     [esp+14h+var_4], 0
0x9DFE32: call    SettingCollectionList_AddSetting
0x9DFE37: push    offset sub_A1A510; void (__cdecl *)()
0x9DFE3C: call    _atexit
0x9DFE41: add     esp, 4
0x9DFE44: mov     ecx, [esp+10h+var_C]
0x9DFE48: mov     large fs:0, ecx
0x9DFE4F: pop     ecx
0x9DFE50: add     esp, 0Ch
0x9DFE53: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B2000: mov     ecx, offset unk_B070C8
0x9B2005: jmp     loc_403BC0
0x9B200A: mov     edx, [esp+arg_4]
0x9B200E: lea     eax, [edx]
0x9B2010: mov     ecx, [edx-4]
0x9B2013: xor     ecx, eax
0x9B2015: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B201A: mov     eax, offset stru_ADE064
0x9B201F: jmp     ___CxxFrameHandler3
