0x9E54D0: push    0FFFFFFFFh
0x9E54D2: push    offset SEH_9E54D0
0x9E54D7: mov     eax, large fs:0
0x9E54DD: push    eax
0x9E54DE: mov     eax, ___security_cookie
0x9E54E3: xor     eax, esp
0x9E54E5: push    eax
0x9E54E6: lea     eax, [esp+10h+var_C]
0x9E54EA: mov     large fs:0, eax
0x9E54F0: push    offset off_B11B7C; "1.0, 1.0"
0x9E54F5: mov     ecx, offset BlendSettingCollection
0x9E54FA: mov     [esp+14h+var_4], 0
0x9E5502: call    SettingCollectionList_AddSetting
0x9E5507: push    offset sub_A1CEB0; void (__cdecl *)()
0x9E550C: call    _atexit
0x9E5511: add     esp, 4
0x9E5514: mov     ecx, [esp+10h+var_C]
0x9E5518: mov     large fs:0, ecx
0x9E551F: pop     ecx
0x9E5520: add     esp, 0Ch
0x9E5523: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B9E60: mov     ecx, offset off_B11B7C; "1.0, 1.0"
0x9B9E65: jmp     loc_403BC0
0x9B9E6A: mov     edx, [esp+arg_4]
0x9B9E6E: lea     eax, [edx]
0x9B9E70: mov     ecx, [edx-4]
0x9B9E73: xor     ecx, eax
0x9B9E75: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B9E7A: mov     eax, offset stru_AE40CC
0x9B9E7F: jmp     ___CxxFrameHandler3
