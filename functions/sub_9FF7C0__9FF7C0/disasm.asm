0x9FF7C0: push    0FFFFFFFFh
0x9FF7C2: push    offset SEH_9FF7C0
0x9FF7C7: mov     eax, large fs:0
0x9FF7CD: push    eax
0x9FF7CE: mov     eax, ___security_cookie
0x9FF7D3: xor     eax, esp
0x9FF7D5: push    eax
0x9FF7D6: lea     eax, [esp+10h+var_C]
0x9FF7DA: mov     large fs:0, eax
0x9FF7E0: push    offset dword_B162A4
0x9FF7E5: mov     ecx, offset INISettingCollection
0x9FF7EA: mov     [esp+14h+var_4], 0
0x9FF7F2: call    SettingCollectionList_AddSetting
0x9FF7F7: push    offset sub_A264C0; void (__cdecl *)()
0x9FF7FC: call    _atexit
0x9FF801: add     esp, 4
0x9FF804: mov     ecx, [esp+10h+var_C]
0x9FF808: mov     large fs:0, ecx
0x9FF80F: pop     ecx
0x9FF810: add     esp, 0Ch
0x9FF813: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C6B60: mov     ecx, offset dword_B162A4
0x9C6B65: jmp     loc_403BC0
0x9C6B6A: mov     edx, [esp+arg_4]
0x9C6B6E: lea     eax, [edx]
0x9C6B70: mov     ecx, [edx-4]
0x9C6B73: xor     ecx, eax
0x9C6B75: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C6B7A: mov     eax, offset stru_AEF030
0x9C6B7F: jmp     ___CxxFrameHandler3
