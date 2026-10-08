0x9FEA50: push    0FFFFFFFFh
0x9FEA52: push    offset SEH_9FEA50
0x9FEA57: mov     eax, large fs:0
0x9FEA5D: push    eax
0x9FEA5E: mov     eax, ___security_cookie
0x9FEA63: xor     eax, esp
0x9FEA65: push    eax
0x9FEA66: lea     eax, [esp+10h+var_C]
0x9FEA6A: mov     large fs:0, eax
0x9FEA70: push    offset byte_B15A68
0x9FEA75: mov     ecx, offset INISettingCollection
0x9FEA7A: mov     [esp+14h+var_4], 0
0x9FEA82: call    SettingCollectionList_AddSetting
0x9FEA87: push    offset sub_A25FA0; void (__cdecl *)()
0x9FEA8C: call    _atexit
0x9FEA91: add     esp, 4
0x9FEA94: mov     ecx, [esp+10h+var_C]
0x9FEA98: mov     large fs:0, ecx
0x9FEA9F: pop     ecx
0x9FEAA0: add     esp, 0Ch
0x9FEAA3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C55F0: mov     ecx, offset byte_B15A68
0x9C55F5: jmp     loc_403BC0
0x9C55FA: mov     edx, [esp+arg_4]
0x9C55FE: lea     eax, [edx]
0x9C5600: mov     ecx, [edx-4]
0x9C5603: xor     ecx, eax
0x9C5605: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C560A: mov     eax, offset stru_AEDDB4
0x9C560F: jmp     ___CxxFrameHandler3
