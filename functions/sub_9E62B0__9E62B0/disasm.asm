0x9E62B0: push    0FFFFFFFFh
0x9E62B2: push    offset SEH_9E62B0
0x9E62B7: mov     eax, large fs:0
0x9E62BD: push    eax
0x9E62BE: mov     eax, ___security_cookie
0x9E62C3: xor     eax, esp
0x9E62C5: push    eax
0x9E62C6: lea     eax, [esp+10h+var_C]
0x9E62CA: mov     large fs:0, eax
0x9E62D0: push    offset flt_B11E34
0x9E62D5: mov     ecx, offset INISettingCollection
0x9E62DA: mov     [esp+14h+var_4], 0
0x9E62E2: call    SettingCollectionList_AddSetting
0x9E62E7: push    offset sub_A1D4B0; void (__cdecl *)()
0x9E62EC: call    _atexit
0x9E62F1: add     esp, 4
0x9E62F4: mov     ecx, [esp+10h+var_C]
0x9E62F8: mov     large fs:0, ecx
0x9E62FF: pop     ecx
0x9E6300: add     esp, 0Ch
0x9E6303: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9BA960: mov     ecx, offset flt_B11E34
0x9BA965: jmp     loc_403BC0
0x9BA96A: mov     edx, [esp+arg_4]
0x9BA96E: lea     eax, [edx]
0x9BA970: mov     ecx, [edx-4]
0x9BA973: xor     ecx, eax
0x9BA975: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BA97A: mov     eax, offset stru_AE4A30
0x9BA97F: jmp     ___CxxFrameHandler3
