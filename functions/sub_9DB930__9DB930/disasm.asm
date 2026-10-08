0x9DB930: push    0FFFFFFFFh
0x9DB932: push    offset SEH_9DB930
0x9DB937: mov     eax, large fs:0
0x9DB93D: push    eax
0x9DB93E: mov     eax, ___security_cookie
0x9DB943: xor     eax, esp
0x9DB945: push    eax
0x9DB946: lea     eax, [esp+10h+var_C]
0x9DB94A: mov     large fs:0, eax
0x9DB950: push    offset byte_B0558C
0x9DB955: mov     ecx, offset INISettingCollection
0x9DB95A: mov     [esp+14h+var_4], 0
0x9DB962: call    SettingCollectionList_AddSetting
0x9DB967: push    offset sub_A181E0; void (__cdecl *)()
0x9DB96C: call    _atexit
0x9DB971: add     esp, 4
0x9DB974: mov     ecx, [esp+10h+var_C]
0x9DB978: mov     large fs:0, ecx
0x9DB97F: pop     ecx
0x9DB980: add     esp, 0Ch
0x9DB983: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9ADF00: mov     ecx, offset byte_B0558C
0x9ADF05: jmp     loc_403BC0
0x9ADF0A: mov     edx, [esp+arg_4]
0x9ADF0E: lea     eax, [edx]
0x9ADF10: mov     ecx, [edx-4]
0x9ADF13: xor     ecx, eax
0x9ADF15: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9ADF1A: mov     eax, offset stru_ADA814
0x9ADF1F: jmp     ___CxxFrameHandler3
