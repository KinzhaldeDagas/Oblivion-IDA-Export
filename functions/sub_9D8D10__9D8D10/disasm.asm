0x9D8D10: push    0FFFFFFFFh
0x9D8D12: push    offset SEH_9D8D10
0x9D8D17: mov     eax, large fs:0
0x9D8D1D: push    eax
0x9D8D1E: mov     eax, ___security_cookie
0x9D8D23: xor     eax, esp
0x9D8D25: push    eax
0x9D8D26: lea     eax, [esp+10h+var_C]
0x9D8D2A: mov     large fs:0, eax
0x9D8D30: push    offset bDisplayLODLand
0x9D8D35: mov     ecx, offset INISettingCollection
0x9D8D3A: mov     [esp+14h+var_4], 0
0x9D8D42: call    SettingCollectionList_AddSetting
0x9D8D47: push    offset bDisplayLODLand_UnregisterSetting; void (__cdecl *)()
0x9D8D4C: call    _atexit
0x9D8D51: add     esp, 4
0x9D8D54: mov     ecx, [esp+10h+var_C]
0x9D8D58: mov     large fs:0, ecx
0x9D8D5F: pop     ecx
0x9D8D60: add     esp, 0Ch
0x9D8D63: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AA6C0: mov     ecx, offset bDisplayLODLand
0x9AA6C5: jmp     loc_403BC0
0x9AA6CA: mov     edx, [esp+arg_4]
0x9AA6CE: lea     eax, [edx]
0x9AA6D0: mov     ecx, [edx-4]
0x9AA6D3: xor     ecx, eax
0x9AA6D5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AA6DA: mov     eax, offset stru_AD7674
0x9AA6DF: jmp     ___CxxFrameHandler3
