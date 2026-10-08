0x9D9070: push    0FFFFFFFFh
0x9D9072: push    offset SEH_9D9070
0x9D9077: mov     eax, large fs:0
0x9D907D: push    eax
0x9D907E: mov     eax, ___security_cookie
0x9D9083: xor     eax, esp
0x9D9085: push    eax
0x9D9086: lea     eax, [esp+10h+var_C]
0x9D908A: mov     large fs:0, eax
0x9D9090: push    offset flt_B02DB8
0x9D9095: mov     ecx, offset INISettingCollection
0x9D909A: mov     [esp+14h+var_4], 0
0x9D90A2: call    SettingCollectionList_AddSetting
0x9D90A7: push    offset sub_A16DF0; void (__cdecl *)()
0x9D90AC: call    _atexit
0x9D90B1: add     esp, 4
0x9D90B4: mov     ecx, [esp+10h+var_C]
0x9D90B8: mov     large fs:0, ecx
0x9D90BF: pop     ecx
0x9D90C0: add     esp, 0Ch
0x9D90C3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AA870: mov     ecx, offset flt_B02DB8
0x9AA875: jmp     loc_403BC0
0x9AA87A: mov     edx, [esp+arg_4]
0x9AA87E: lea     eax, [edx]
0x9AA880: mov     ecx, [edx-4]
0x9AA883: xor     ecx, eax
0x9AA885: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AA88A: mov     eax, offset stru_AD7800
0x9AA88F: jmp     ___CxxFrameHandler3
