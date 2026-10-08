0x9DE980: push    0FFFFFFFFh
0x9DE982: push    offset SEH_9DE980
0x9DE987: mov     eax, large fs:0
0x9DE98D: push    eax
0x9DE98E: mov     eax, ___security_cookie
0x9DE993: xor     eax, esp
0x9DE995: push    eax
0x9DE996: lea     eax, [esp+10h+var_C]
0x9DE99A: mov     large fs:0, eax
0x9DE9A0: push    offset flt_B06EE4
0x9DE9A5: mov     ecx, offset INISettingCollection
0x9DE9AA: mov     [esp+14h+var_4], 0
0x9DE9B2: call    SettingCollectionList_AddSetting
0x9DE9B7: push    offset sub_A19A70; void (__cdecl *)()
0x9DE9BC: call    _atexit
0x9DE9C1: add     esp, 4
0x9DE9C4: mov     ecx, [esp+10h+var_C]
0x9DE9C8: mov     large fs:0, ecx
0x9DE9CF: pop     ecx
0x9DE9D0: add     esp, 0Ch
0x9DE9D3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B13C0: mov     ecx, offset flt_B06EE4
0x9B13C5: jmp     loc_403BC0
0x9B13CA: mov     edx, [esp+arg_4]
0x9B13CE: lea     eax, [edx]
0x9B13D0: mov     ecx, [edx-4]
0x9B13D3: xor     ecx, eax
0x9B13D5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B13DA: mov     eax, offset stru_ADD5A8
0x9B13DF: jmp     ___CxxFrameHandler3
