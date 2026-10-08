0x9D8D70: push    0FFFFFFFFh
0x9D8D72: push    offset SEH_9D8D70
0x9D8D77: mov     eax, large fs:0
0x9D8D7D: push    eax
0x9D8D7E: mov     eax, ___security_cookie
0x9D8D83: xor     eax, esp
0x9D8D85: push    eax
0x9D8D86: lea     eax, [esp+10h+var_C]
0x9D8D8A: mov     large fs:0, eax
0x9D8D90: push    offset OB_INI_fLocalTreeMipMapLODBias_SpeedTree_010201A0
0x9D8D95: mov     ecx, offset INISettingCollection
0x9D8D9A: mov     [esp+14h+var_4], 0
0x9D8DA2: call    SettingCollectionList_AddSetting
0x9D8DA7: push    offset sub_A16C70; void (__cdecl *)()
0x9D8DAC: call    _atexit
0x9D8DB1: add     esp, 4
0x9D8DB4: mov     ecx, [esp+10h+var_C]
0x9D8DB8: mov     large fs:0, ecx
0x9D8DBF: pop     ecx
0x9D8DC0: add     esp, 0Ch
0x9D8DC3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AA6F0: mov     ecx, offset OB_INI_fLocalTreeMipMapLODBias_SpeedTree_010201A0
0x9AA6F5: jmp     loc_403BC0
0x9AA6FA: mov     edx, [esp+arg_4]
0x9AA6FE: lea     eax, [edx]
0x9AA700: mov     ecx, [edx-4]
0x9AA703: xor     ecx, eax
0x9AA705: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AA70A: mov     eax, offset stru_AD76A0
0x9AA70F: jmp     ___CxxFrameHandler3
