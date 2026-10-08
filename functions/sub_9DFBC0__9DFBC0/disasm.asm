0x9DFBC0: push    0FFFFFFFFh
0x9DFBC2: push    offset SEH_9DFBC0
0x9DFBC7: mov     eax, large fs:0
0x9DFBCD: push    eax
0x9DFBCE: mov     eax, ___security_cookie
0x9DFBD3: xor     eax, esp
0x9DFBD5: push    eax
0x9DFBD6: lea     eax, [esp+10h+var_C]
0x9DFBDA: mov     large fs:0, eax
0x9DFBE0: push    offset useWaterLOD
0x9DFBE5: mov     ecx, offset INISettingCollection
0x9DFBEA: mov     [esp+14h+var_4], 0
0x9DFBF2: call    SettingCollectionList_AddSetting
0x9DFBF7: push    offset sub_A1A3F0; void (__cdecl *)()
0x9DFBFC: call    _atexit
0x9DFC01: add     esp, 4
0x9DFC04: mov     ecx, [esp+10h+var_C]
0x9DFC08: mov     large fs:0, ecx
0x9DFC0F: pop     ecx
0x9DFC10: add     esp, 0Ch
0x9DFC13: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B1EE0: mov     ecx, offset useWaterLOD
0x9B1EE5: jmp     loc_403BC0
0x9B1EEA: mov     edx, [esp+arg_4]
0x9B1EEE: lea     eax, [edx]
0x9B1EF0: mov     ecx, [edx-4]
0x9B1EF3: xor     ecx, eax
0x9B1EF5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B1EFA: mov     eax, offset stru_ADDF5C
0x9B1EFF: jmp     ___CxxFrameHandler3
