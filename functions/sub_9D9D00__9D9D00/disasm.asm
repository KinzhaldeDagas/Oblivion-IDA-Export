0x9D9D00: push    0FFFFFFFFh
0x9D9D02: push    offset SEH_9D9D00
0x9D9D07: mov     eax, large fs:0
0x9D9D0D: push    eax
0x9D9D0E: mov     eax, ___security_cookie
0x9D9D13: xor     eax, esp
0x9D9D15: push    eax
0x9D9D16: lea     eax, [esp+10h+var_C]
0x9D9D1A: mov     large fs:0, eax
0x9D9D20: push    offset dword_B0317C
0x9D9D25: mov     ecx, offset INISettingCollection
0x9D9D2A: mov     [esp+14h+var_4], 0
0x9D9D32: call    SettingCollectionList_AddSetting
0x9D9D37: push    offset sub_A17420; void (__cdecl *)()
0x9D9D3C: call    _atexit
0x9D9D41: add     esp, 4
0x9D9D44: mov     ecx, [esp+10h+var_C]
0x9D9D48: mov     large fs:0, ecx
0x9D9D4F: pop     ecx
0x9D9D50: add     esp, 0Ch
0x9D9D53: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AB020: mov     ecx, offset dword_B0317C
0x9AB025: jmp     loc_403BC0
0x9AB02A: mov     edx, [esp+arg_4]
0x9AB02E: lea     eax, [edx]
0x9AB030: mov     ecx, [edx-4]
0x9AB033: xor     ecx, eax
0x9AB035: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AB03A: mov     eax, offset stru_AD7EE4
0x9AB03F: jmp     ___CxxFrameHandler3
