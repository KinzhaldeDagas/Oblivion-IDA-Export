0x9DB1B0: push    0FFFFFFFFh
0x9DB1B2: push    offset SEH_9DB1B0
0x9DB1B7: mov     eax, large fs:0
0x9DB1BD: push    eax
0x9DB1BE: mov     eax, ___security_cookie
0x9DB1C3: xor     eax, esp
0x9DB1C5: push    eax
0x9DB1C6: lea     eax, [esp+10h+var_C]
0x9DB1CA: mov     large fs:0, eax
0x9DB1D0: push    offset iUpdateType
0x9DB1D5: mov     ecx, offset INISettingCollection
0x9DB1DA: mov     [esp+14h+var_4], 0
0x9DB1E2: call    SettingCollectionList_AddSetting
0x9DB1E7: push    offset sub_A17E40; void (__cdecl *)()
0x9DB1EC: call    _atexit
0x9DB1F1: add     esp, 4
0x9DB1F4: mov     ecx, [esp+10h+var_C]
0x9DB1F8: mov     large fs:0, ecx
0x9DB1FF: pop     ecx
0x9DB200: add     esp, 0Ch
0x9DB203: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AD3F0: mov     ecx, offset iUpdateType
0x9AD3F5: jmp     loc_403BC0
0x9AD3FA: mov     edx, [esp+arg_4]
0x9AD3FE: lea     eax, [edx]
0x9AD400: mov     ecx, [edx-4]
0x9AD403: xor     ecx, eax
0x9AD405: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AD40A: mov     eax, offset stru_AD9F90
0x9AD40F: jmp     ___CxxFrameHandler3
