0x9DCCA0: push    0FFFFFFFFh
0x9DCCA2: push    offset SEH_9DCCA0
0x9DCCA7: mov     eax, large fs:0
0x9DCCAD: push    eax
0x9DCCAE: mov     eax, ___security_cookie
0x9DCCB3: xor     eax, esp
0x9DCCB5: push    eax
0x9DCCB6: lea     eax, [esp+10h+var_C]
0x9DCCBA: mov     large fs:0, eax
0x9DCCC0: push    offset X
0x9DCCC5: mov     ecx, offset INISettingCollection
0x9DCCCA: mov     [esp+14h+var_4], 0
0x9DCCD2: call    SettingCollectionList_AddSetting
0x9DCCD7: push    offset sub_A18C00; void (__cdecl *)()
0x9DCCDC: call    _atexit
0x9DCCE1: add     esp, 4
0x9DCCE4: mov     ecx, [esp+10h+var_C]
0x9DCCE8: mov     large fs:0, ecx
0x9DCCEF: pop     ecx
0x9DCCF0: add     esp, 0Ch
0x9DCCF3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B0550: mov     ecx, offset X
0x9B0555: jmp     loc_403BC0
0x9B055A: mov     edx, [esp+arg_4]
0x9B055E: lea     eax, [edx]
0x9B0560: mov     ecx, [edx-4]
0x9B0563: xor     ecx, eax
0x9B0565: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B056A: mov     eax, offset stru_ADC86C
0x9B056F: jmp     ___CxxFrameHandler3
