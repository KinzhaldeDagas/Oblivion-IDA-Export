0x9DFB00: push    0FFFFFFFFh
0x9DFB02: push    offset SEH_9DFB00
0x9DFB07: mov     eax, large fs:0
0x9DFB0D: push    eax
0x9DFB0E: mov     eax, ___security_cookie
0x9DFB13: xor     eax, esp
0x9DFB15: push    eax
0x9DFB16: lea     eax, [esp+10h+var_C]
0x9DFB1A: mov     large fs:0, eax
0x9DFB20: push    offset dword_B07088
0x9DFB25: mov     ecx, offset INISettingCollection
0x9DFB2A: mov     [esp+14h+var_4], 0
0x9DFB32: call    SettingCollectionList_AddSetting
0x9DFB37: push    offset sub_A1A390; void (__cdecl *)()
0x9DFB3C: call    _atexit
0x9DFB41: add     esp, 4
0x9DFB44: mov     ecx, [esp+10h+var_C]
0x9DFB48: mov     large fs:0, ecx
0x9DFB4F: pop     ecx
0x9DFB50: add     esp, 0Ch
0x9DFB53: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B1E80: mov     ecx, offset dword_B07088
0x9B1E85: jmp     loc_403BC0
0x9B1E8A: mov     edx, [esp+arg_4]
0x9B1E8E: lea     eax, [edx]
0x9B1E90: mov     ecx, [edx-4]
0x9B1E93: xor     ecx, eax
0x9B1E95: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B1E9A: mov     eax, offset stru_ADDF04
0x9B1E9F: jmp     ___CxxFrameHandler3
