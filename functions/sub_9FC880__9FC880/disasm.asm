0x9FC880: push    0FFFFFFFFh
0x9FC882: push    offset SEH_9FC880
0x9FC887: mov     eax, large fs:0
0x9FC88D: push    eax
0x9FC88E: mov     eax, ___security_cookie
0x9FC893: xor     eax, esp
0x9FC895: push    eax
0x9FC896: lea     eax, [esp+10h+var_C]
0x9FC89A: mov     large fs:0, eax
0x9FC8A0: push    offset flt_B1481C
0x9FC8A5: mov     ecx, offset INISettingCollection
0x9FC8AA: mov     [esp+14h+var_4], 0
0x9FC8B2: call    SettingCollectionList_AddSetting
0x9FC8B7: push    offset sub_A24F60; void (__cdecl *)()
0x9FC8BC: call    _atexit
0x9FC8C1: add     esp, 4
0x9FC8C4: mov     ecx, [esp+10h+var_C]
0x9FC8C8: mov     large fs:0, ecx
0x9FC8CF: pop     ecx
0x9FC8D0: add     esp, 0Ch
0x9FC8D3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C2260: mov     ecx, offset flt_B1481C
0x9C2265: jmp     loc_403BC0
0x9C226A: mov     edx, [esp+arg_4]
0x9C226E: lea     eax, [edx]
0x9C2270: mov     ecx, [edx-4]
0x9C2273: xor     ecx, eax
0x9C2275: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C227A: mov     eax, offset stru_AEB174
0x9C227F: jmp     ___CxxFrameHandler3
