0x9E2E20: push    0FFFFFFFFh
0x9E2E22: push    offset SEH_9E2E20
0x9E2E27: mov     eax, large fs:0
0x9E2E2D: push    eax
0x9E2E2E: mov     eax, ___security_cookie
0x9E2E33: xor     eax, esp
0x9E2E35: push    eax
0x9E2E36: lea     eax, [esp+10h+var_C]
0x9E2E3A: mov     large fs:0, eax
0x9E2E40: push    offset dword_B08B8C
0x9E2E45: mov     ecx, offset INISettingCollection
0x9E2E4A: mov     [esp+14h+var_4], 0
0x9E2E52: call    SettingCollectionList_AddSetting
0x9E2E57: push    offset sub_A1B9F0; void (__cdecl *)()
0x9E2E5C: call    _atexit
0x9E2E61: add     esp, 4
0x9E2E64: mov     ecx, [esp+10h+var_C]
0x9E2E68: mov     large fs:0, ecx
0x9E2E6F: pop     ecx
0x9E2E70: add     esp, 0Ch
0x9E2E73: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B4F90: mov     ecx, offset dword_B08B8C
0x9B4F95: jmp     loc_403BC0
0x9B4F9A: mov     edx, [esp+arg_4]
0x9B4F9E: lea     eax, [edx]
0x9B4FA0: mov     ecx, [edx-4]
0x9B4FA3: xor     ecx, eax
0x9B4FA5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B4FAA: mov     eax, offset stru_AE01B8
0x9B4FAF: jmp     ___CxxFrameHandler3
