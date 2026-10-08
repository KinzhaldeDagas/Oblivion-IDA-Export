0x9F8BF0: push    0FFFFFFFFh
0x9F8BF2: push    offset SEH_9F8BF0
0x9F8BF7: mov     eax, large fs:0
0x9F8BFD: push    eax
0x9F8BFE: mov     eax, ___security_cookie
0x9F8C03: xor     eax, esp
0x9F8C05: push    eax
0x9F8C06: lea     eax, [esp+10h+var_C]
0x9F8C0A: mov     large fs:0, eax
0x9F8C10: push    offset dword_B120EC
0x9F8C15: mov     ecx, offset INISettingCollection
0x9F8C1A: mov     [esp+14h+var_4], 0
0x9F8C22: call    SettingCollectionList_AddSetting
0x9F8C27: push    offset sub_A23460; void (__cdecl *)()
0x9F8C2C: call    _atexit
0x9F8C31: add     esp, 4
0x9F8C34: mov     ecx, [esp+10h+var_C]
0x9F8C38: mov     large fs:0, ecx
0x9F8C3F: pop     ecx
0x9F8C40: add     esp, 0Ch
0x9F8C43: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9BC4C0: mov     ecx, offset dword_B120EC
0x9BC4C5: jmp     loc_403BC0
0x9BC4CA: mov     edx, [esp+arg_4]
0x9BC4CE: lea     eax, [edx]
0x9BC4D0: mov     ecx, [edx-4]
0x9BC4D3: xor     ecx, eax
0x9BC4D5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BC4DA: mov     eax, offset stru_AE6094
0x9BC4DF: jmp     ___CxxFrameHandler3
