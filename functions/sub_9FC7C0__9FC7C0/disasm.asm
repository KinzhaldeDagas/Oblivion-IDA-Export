0x9FC7C0: push    0FFFFFFFFh
0x9FC7C2: push    offset SEH_9FC7C0
0x9FC7C7: mov     eax, large fs:0
0x9FC7CD: push    eax
0x9FC7CE: mov     eax, ___security_cookie
0x9FC7D3: xor     eax, esp
0x9FC7D5: push    eax
0x9FC7D6: lea     eax, [esp+10h+var_C]
0x9FC7DA: mov     large fs:0, eax
0x9FC7E0: push    offset flt_B1480C
0x9FC7E5: mov     ecx, offset INISettingCollection
0x9FC7EA: mov     [esp+14h+var_4], 0
0x9FC7F2: call    SettingCollectionList_AddSetting
0x9FC7F7: push    offset sub_A24F00; void (__cdecl *)()
0x9FC7FC: call    _atexit
0x9FC801: add     esp, 4
0x9FC804: mov     ecx, [esp+10h+var_C]
0x9FC808: mov     large fs:0, ecx
0x9FC80F: pop     ecx
0x9FC810: add     esp, 0Ch
0x9FC813: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C2200: mov     ecx, offset flt_B1480C
0x9C2205: jmp     loc_403BC0
0x9C220A: mov     edx, [esp+arg_4]
0x9C220E: lea     eax, [edx]
0x9C2210: mov     ecx, [edx-4]
0x9C2213: xor     ecx, eax
0x9C2215: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C221A: mov     eax, offset stru_AEB11C
0x9C221F: jmp     ___CxxFrameHandler3
