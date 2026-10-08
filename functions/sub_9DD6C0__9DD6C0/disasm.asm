0x9DD6C0: push    0FFFFFFFFh
0x9DD6C2: push    offset SEH_9DD6C0
0x9DD6C7: mov     eax, large fs:0
0x9DD6CD: push    eax
0x9DD6CE: mov     eax, ___security_cookie
0x9DD6D3: xor     eax, esp
0x9DD6D5: push    eax
0x9DD6D6: lea     eax, [esp+10h+var_C]
0x9DD6DA: mov     large fs:0, eax
0x9DD6E0: push    offset dword_B06D54
0x9DD6E5: mov     ecx, offset INISettingCollection
0x9DD6EA: mov     [esp+14h+var_4], 0
0x9DD6F2: call    SettingCollectionList_AddSetting
0x9DD6F7: push    offset sub_A19110; void (__cdecl *)()
0x9DD6FC: call    _atexit
0x9DD701: add     esp, 4
0x9DD704: mov     ecx, [esp+10h+var_C]
0x9DD708: mov     large fs:0, ecx
0x9DD70F: pop     ecx
0x9DD710: add     esp, 0Ch
0x9DD713: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B0A60: mov     ecx, offset dword_B06D54
0x9B0A65: jmp     loc_403BC0
0x9B0A6A: mov     edx, [esp+arg_4]
0x9B0A6E: lea     eax, [edx]
0x9B0A70: mov     ecx, [edx-4]
0x9B0A73: xor     ecx, eax
0x9B0A75: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B0A7A: mov     eax, offset stru_ADCD10
0x9B0A7F: jmp     ___CxxFrameHandler3
