0x9FEE00: push    0FFFFFFFFh
0x9FEE02: push    offset SEH_9FEE00
0x9FEE07: mov     eax, large fs:0
0x9FEE0D: push    eax
0x9FEE0E: mov     eax, ___security_cookie
0x9FEE13: xor     eax, esp
0x9FEE15: push    eax
0x9FEE16: lea     eax, [esp+10h+var_C]
0x9FEE1A: mov     large fs:0, eax
0x9FEE20: push    offset bSoundEnabled_Audio
0x9FEE25: mov     ecx, offset INISettingCollection
0x9FEE2A: mov     [esp+14h+var_4], 0
0x9FEE32: call    SettingCollectionList_AddSetting
0x9FEE37: push    offset sub_A25FD0; void (__cdecl *)()
0x9FEE3C: call    _atexit
0x9FEE41: add     esp, 4
0x9FEE44: mov     ecx, [esp+10h+var_C]
0x9FEE48: mov     large fs:0, ecx
0x9FEE4F: pop     ecx
0x9FEE50: add     esp, 0Ch
0x9FEE53: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C6620: mov     ecx, offset bSoundEnabled_Audio
0x9C6625: jmp     loc_403BC0
0x9C662A: mov     edx, [esp+arg_4]
0x9C662E: lea     eax, [edx]
0x9C6630: mov     ecx, [edx-4]
0x9C6633: xor     ecx, eax
0x9C6635: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C663A: mov     eax, offset stru_AEEB60
0x9C663F: jmp     ___CxxFrameHandler3
