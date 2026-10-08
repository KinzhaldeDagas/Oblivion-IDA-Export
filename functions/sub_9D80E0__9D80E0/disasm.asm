0x9D80E0: push    0FFFFFFFFh
0x9D80E2: push    offset SEH_9D80E0
0x9D80E7: mov     eax, large fs:0
0x9D80ED: push    eax
0x9D80EE: mov     eax, ___security_cookie
0x9D80F3: xor     eax, esp
0x9D80F5: push    eax
0x9D80F6: lea     eax, [esp+10h+var_C]
0x9D80FA: mov     large fs:0, eax
0x9D8100: push    offset bBackgroundMouse
0x9D8105: mov     ecx, offset INISettingCollection
0x9D810A: mov     [esp+14h+var_4], 0
0x9D8112: call    SettingCollectionList_AddSetting
0x9D8117: push    offset sub_A16490; void (__cdecl *)()
0x9D811C: call    _atexit
0x9D8121: add     esp, 4
0x9D8124: mov     ecx, [esp+10h+var_C]
0x9D8128: mov     large fs:0, ecx
0x9D812F: pop     ecx
0x9D8130: add     esp, 0Ch
0x9D8133: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9A9E50: mov     ecx, offset bBackgroundMouse
0x9A9E55: jmp     loc_403BC0
0x9A9E5A: mov     edx, [esp+arg_4]
0x9A9E5E: lea     eax, [edx]
0x9A9E60: mov     ecx, [edx-4]
0x9A9E63: xor     ecx, eax
0x9A9E65: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9A9E6A: mov     eax, offset stru_AD6EF4
0x9A9E6F: jmp     ___CxxFrameHandler3
