0x9D9800: push    0FFFFFFFFh
0x9D9802: push    offset SEH_9D9800
0x9D9807: mov     eax, large fs:0
0x9D980D: push    eax
0x9D980E: mov     eax, ___security_cookie
0x9D9813: xor     eax, esp
0x9D9815: push    eax
0x9D9816: lea     eax, [esp+10h+var_C]
0x9D981A: mov     large fs:0, eax
0x9D9820: push    offset dword_B030BC
0x9D9825: mov     ecx, offset INISettingCollection
0x9D982A: mov     [esp+14h+var_4], 0
0x9D9832: call    SettingCollectionList_AddSetting
0x9D9837: push    offset sub_A171B0; void (__cdecl *)()
0x9D983C: call    _atexit
0x9D9841: add     esp, 4
0x9D9844: mov     ecx, [esp+10h+var_C]
0x9D9848: mov     large fs:0, ecx
0x9D984F: pop     ecx
0x9D9850: add     esp, 0Ch
0x9D9853: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AAC30: mov     ecx, offset dword_B030BC
0x9AAC35: jmp     loc_403BC0
0x9AAC3A: mov     edx, [esp+arg_4]
0x9AAC3E: lea     eax, [edx]
0x9AAC40: mov     ecx, [edx-4]
0x9AAC43: xor     ecx, eax
0x9AAC45: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AAC4A: mov     eax, offset stru_AD7B70
0x9AAC4F: jmp     ___CxxFrameHandler3
