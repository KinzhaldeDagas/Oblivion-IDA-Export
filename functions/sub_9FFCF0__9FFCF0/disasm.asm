0x9FFCF0: push    0FFFFFFFFh
0x9FFCF2: push    offset SEH_9FFCF0
0x9FFCF7: mov     eax, large fs:0
0x9FFCFD: push    eax
0x9FFCFE: mov     eax, ___security_cookie
0x9FFD03: xor     eax, esp
0x9FFD05: push    eax
0x9FFD06: lea     eax, [esp+10h+var_C]
0x9FFD0A: mov     large fs:0, eax
0x9FFD10: push    offset flt_B23C50
0x9FFD15: mov     ecx, offset INISettingCollection
0x9FFD1A: mov     [esp+14h+var_4], 0
0x9FFD22: call    SettingCollectionList_AddSetting
0x9FFD27: push    offset sub_A26740; void (__cdecl *)()
0x9FFD2C: call    _atexit
0x9FFD31: add     esp, 4
0x9FFD34: mov     ecx, [esp+10h+var_C]
0x9FFD38: mov     large fs:0, ecx
0x9FFD3F: pop     ecx
0x9FFD40: add     esp, 0Ch
0x9FFD43: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C6E10: mov     ecx, offset flt_B23C50
0x9C6E15: jmp     loc_403BC0
0x9C6E1A: mov     edx, [esp+arg_4]
0x9C6E1E: lea     eax, [edx]
0x9C6E20: mov     ecx, [edx-4]
0x9C6E23: xor     ecx, eax
0x9C6E25: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C6E2A: mov     eax, offset stru_AEF2A8
0x9C6E2F: jmp     ___CxxFrameHandler3
