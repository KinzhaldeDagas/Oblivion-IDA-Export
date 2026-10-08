0x9F8D10: push    0FFFFFFFFh
0x9F8D12: push    offset SEH_9F8D10
0x9F8D17: mov     eax, large fs:0
0x9F8D1D: push    eax
0x9F8D1E: mov     eax, ___security_cookie
0x9F8D23: xor     eax, esp
0x9F8D25: push    eax
0x9F8D26: lea     eax, [esp+10h+var_C]
0x9F8D2A: mov     large fs:0, eax
0x9F8D30: push    offset unk_B12104
0x9F8D35: mov     ecx, offset INISettingCollection
0x9F8D3A: mov     [esp+14h+var_4], 0
0x9F8D42: call    SettingCollectionList_AddSetting
0x9F8D47: push    offset sub_A234F0; void (__cdecl *)()
0x9F8D4C: call    _atexit
0x9F8D51: add     esp, 4
0x9F8D54: mov     ecx, [esp+10h+var_C]
0x9F8D58: mov     large fs:0, ecx
0x9F8D5F: pop     ecx
0x9F8D60: add     esp, 0Ch
0x9F8D63: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9BC550: mov     ecx, offset unk_B12104
0x9BC555: jmp     loc_403BC0
0x9BC55A: mov     edx, [esp+arg_4]
0x9BC55E: lea     eax, [edx]
0x9BC560: mov     ecx, [edx-4]
0x9BC563: xor     ecx, eax
0x9BC565: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BC56A: mov     eax, offset stru_AE6118
0x9BC56F: jmp     ___CxxFrameHandler3
