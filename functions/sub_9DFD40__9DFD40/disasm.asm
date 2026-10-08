0x9DFD40: push    0FFFFFFFFh
0x9DFD42: push    offset SEH_9DFD40
0x9DFD47: mov     eax, large fs:0
0x9DFD4D: push    eax
0x9DFD4E: mov     eax, ___security_cookie
0x9DFD53: xor     eax, esp
0x9DFD55: push    eax
0x9DFD56: lea     eax, [esp+10h+var_C]
0x9DFD5A: mov     large fs:0, eax
0x9DFD60: push    offset dword_B070B8
0x9DFD65: mov     ecx, offset INISettingCollection
0x9DFD6A: mov     [esp+14h+var_4], 0
0x9DFD72: call    SettingCollectionList_AddSetting
0x9DFD77: push    offset sub_A1A4B0; void (__cdecl *)()
0x9DFD7C: call    _atexit
0x9DFD81: add     esp, 4
0x9DFD84: mov     ecx, [esp+10h+var_C]
0x9DFD88: mov     large fs:0, ecx
0x9DFD8F: pop     ecx
0x9DFD90: add     esp, 0Ch
0x9DFD93: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B1FA0: mov     ecx, offset dword_B070B8
0x9B1FA5: jmp     loc_403BC0
0x9B1FAA: mov     edx, [esp+arg_4]
0x9B1FAE: lea     eax, [edx]
0x9B1FB0: mov     ecx, [edx-4]
0x9B1FB3: xor     ecx, eax
0x9B1FB5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B1FBA: mov     eax, offset stru_ADE00C
0x9B1FBF: jmp     ___CxxFrameHandler3
