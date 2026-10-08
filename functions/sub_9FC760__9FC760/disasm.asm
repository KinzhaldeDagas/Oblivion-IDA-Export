0x9FC760: push    0FFFFFFFFh
0x9FC762: push    offset SEH_9FC760
0x9FC767: mov     eax, large fs:0
0x9FC76D: push    eax
0x9FC76E: mov     eax, ___security_cookie
0x9FC773: xor     eax, esp
0x9FC775: push    eax
0x9FC776: lea     eax, [esp+10h+var_C]
0x9FC77A: mov     large fs:0, eax
0x9FC780: push    offset aGIJ
0x9FC785: mov     ecx, offset INISettingCollection
0x9FC78A: mov     [esp+14h+var_4], 0
0x9FC792: call    SettingCollectionList_AddSetting
0x9FC797: push    offset sub_A24ED0; void (__cdecl *)()
0x9FC79C: call    _atexit
0x9FC7A1: add     esp, 4
0x9FC7A4: mov     ecx, [esp+10h+var_C]
0x9FC7A8: mov     large fs:0, ecx
0x9FC7AF: pop     ecx
0x9FC7B0: add     esp, 0Ch
0x9FC7B3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C21D0: mov     ecx, offset aGIJ
0x9C21D5: jmp     loc_403BC0
0x9C21DA: mov     edx, [esp+arg_4]
0x9C21DE: lea     eax, [edx]
0x9C21E0: mov     ecx, [edx-4]
0x9C21E3: xor     ecx, eax
0x9C21E5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C21EA: mov     eax, offset stru_AEB0F0
0x9C21EF: jmp     ___CxxFrameHandler3
