0xA10E50: push    0FFFFFFFFh
0xA10E52: push    offset SEH_A10E50
0xA10E57: mov     eax, large fs:0
0xA10E5D: push    eax
0xA10E5E: mov     eax, ___security_cookie
0xA10E63: xor     eax, esp
0xA10E65: push    eax
0xA10E66: lea     eax, [esp+10h+var_C]
0xA10E6A: mov     large fs:0, eax
0xA10E70: push    offset iDistantLODGroupWidth_DistantLOD
0xA10E75: mov     ecx, offset INISettingCollection
0xA10E7A: mov     [esp+14h+var_4], 0
0xA10E82: call    SettingCollectionList_AddSetting
0xA10E87: push    offset sub_A27120; void (__cdecl *)()
0xA10E8C: call    _atexit
0xA10E91: add     esp, 4
0xA10E94: mov     ecx, [esp+10h+var_C]
0xA10E98: mov     large fs:0, ecx
0xA10E9F: pop     ecx
0xA10EA0: add     esp, 0Ch
0xA10EA3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9CDA80: mov     ecx, offset iDistantLODGroupWidth_DistantLOD
0x9CDA85: jmp     loc_403BC0
0x9CDA8A: mov     edx, [esp+arg_4]
0x9CDA8E: lea     eax, [edx]
0x9CDA90: mov     ecx, [edx-4]
0x9CDA93: xor     ecx, eax
0x9CDA95: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CDA9A: mov     eax, offset stru_AF6C64
0x9CDA9F: jmp     ___CxxFrameHandler3
