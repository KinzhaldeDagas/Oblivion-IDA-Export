0x9D84D0: push    0FFFFFFFFh
0x9D84D2: push    offset SEH_9D84D0
0x9D84D7: mov     eax, large fs:0
0x9D84DD: push    eax
0x9D84DE: mov     eax, ___security_cookie
0x9D84E3: xor     eax, esp
0x9D84E5: push    eax
0x9D84E6: lea     eax, [esp+10h+var_C]
0x9D84EA: mov     large fs:0, eax
0x9D84F0: push    offset off_B02CC0
0x9D84F5: mov     ecx, offset INISettingCollection
0x9D84FA: mov     [esp+14h+var_4], 0
0x9D8502: call    SettingCollectionList_AddSetting
0x9D8507: push    offset sub_A16820; void (__cdecl *)()
0x9D850C: call    _atexit
0x9D8511: add     esp, 4
0x9D8514: mov     ecx, [esp+10h+var_C]
0x9D8518: mov     large fs:0, ecx
0x9D851F: pop     ecx
0x9D8520: add     esp, 0Ch
0x9D8523: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AA2A0: mov     ecx, offset off_B02CC0
0x9AA2A5: jmp     loc_403BC0
0x9AA2AA: mov     edx, [esp+arg_4]
0x9AA2AE: lea     eax, [edx]
0x9AA2B0: mov     ecx, [edx-4]
0x9AA2B3: xor     ecx, eax
0x9AA2B5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AA2BA: mov     eax, offset stru_AD72AC
0x9AA2BF: jmp     ___CxxFrameHandler3
