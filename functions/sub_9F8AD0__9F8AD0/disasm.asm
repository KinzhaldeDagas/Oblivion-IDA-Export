0x9F8AD0: push    0FFFFFFFFh
0x9F8AD2: push    offset SEH_9F8AD0
0x9F8AD7: mov     eax, large fs:0
0x9F8ADD: push    eax
0x9F8ADE: mov     eax, ___security_cookie
0x9F8AE3: xor     eax, esp
0x9F8AE5: push    eax
0x9F8AE6: lea     eax, [esp+10h+var_C]
0x9F8AEA: mov     large fs:0, eax
0x9F8AF0: push    offset flt_B120D4
0x9F8AF5: mov     ecx, offset INISettingCollection
0x9F8AFA: mov     [esp+14h+var_4], 0
0x9F8B02: call    SettingCollectionList_AddSetting
0x9F8B07: push    offset sub_A233D0; void (__cdecl *)()
0x9F8B0C: call    _atexit
0x9F8B11: add     esp, 4
0x9F8B14: mov     ecx, [esp+10h+var_C]
0x9F8B18: mov     large fs:0, ecx
0x9F8B1F: pop     ecx
0x9F8B20: add     esp, 0Ch
0x9F8B23: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9BC430: mov     ecx, offset flt_B120D4
0x9BC435: jmp     loc_403BC0
0x9BC43A: mov     edx, [esp+arg_4]
0x9BC43E: lea     eax, [edx]
0x9BC440: mov     ecx, [edx-4]
0x9BC443: xor     ecx, eax
0x9BC445: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BC44A: mov     eax, offset stru_AE6010
0x9BC44F: jmp     ___CxxFrameHandler3
