0x9D8530: push    0FFFFFFFFh
0x9D8532: push    offset SEH_9D8530
0x9D8537: mov     eax, large fs:0
0x9D853D: push    eax
0x9D853E: mov     eax, ___security_cookie
0x9D8543: xor     eax, esp
0x9D8545: push    eax
0x9D8546: lea     eax, [esp+10h+var_C]
0x9D854A: mov     large fs:0, eax
0x9D8550: push    offset off_B02CC8
0x9D8555: mov     ecx, offset INISettingCollection
0x9D855A: mov     [esp+14h+var_4], 0
0x9D8562: call    SettingCollectionList_AddSetting
0x9D8567: push    offset sub_A16850; void (__cdecl *)()
0x9D856C: call    _atexit
0x9D8571: add     esp, 4
0x9D8574: mov     ecx, [esp+10h+var_C]
0x9D8578: mov     large fs:0, ecx
0x9D857F: pop     ecx
0x9D8580: add     esp, 0Ch
0x9D8583: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AA2D0: mov     ecx, offset off_B02CC8
0x9AA2D5: jmp     loc_403BC0
0x9AA2DA: mov     edx, [esp+arg_4]
0x9AA2DE: lea     eax, [edx]
0x9AA2E0: mov     ecx, [edx-4]
0x9AA2E3: xor     ecx, eax
0x9AA2E5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AA2EA: mov     eax, offset stru_AD72D8
0x9AA2EF: jmp     ___CxxFrameHandler3
