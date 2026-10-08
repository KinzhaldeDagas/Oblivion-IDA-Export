0x9DFF20: push    0FFFFFFFFh
0x9DFF22: push    offset SEH_9DFF20
0x9DFF27: mov     eax, large fs:0
0x9DFF2D: push    eax
0x9DFF2E: mov     eax, ___security_cookie
0x9DFF33: xor     eax, esp
0x9DFF35: push    eax
0x9DFF36: lea     eax, [esp+10h+var_C]
0x9DFF3A: mov     large fs:0, eax
0x9DFF40: push    offset dword_B070E0
0x9DFF45: mov     ecx, offset INISettingCollection
0x9DFF4A: mov     [esp+14h+var_4], 0
0x9DFF52: call    SettingCollectionList_AddSetting
0x9DFF57: push    offset sub_A1A5A0; void (__cdecl *)()
0x9DFF5C: call    _atexit
0x9DFF61: add     esp, 4
0x9DFF64: mov     ecx, [esp+10h+var_C]
0x9DFF68: mov     large fs:0, ecx
0x9DFF6F: pop     ecx
0x9DFF70: add     esp, 0Ch
0x9DFF73: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B2090: mov     ecx, offset dword_B070E0
0x9B2095: jmp     loc_403BC0
0x9B209A: mov     edx, [esp+arg_4]
0x9B209E: lea     eax, [edx]
0x9B20A0: mov     ecx, [edx-4]
0x9B20A3: xor     ecx, eax
0x9B20A5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B20AA: mov     eax, offset stru_ADE0E8
0x9B20AF: jmp     ___CxxFrameHandler3
