0x9FD3F0: push    0FFFFFFFFh
0x9FD3F2: push    offset SEH_9FD3F0
0x9FD3F7: mov     eax, large fs:0
0x9FD3FD: push    eax
0x9FD3FE: mov     eax, ___security_cookie
0x9FD403: xor     eax, esp
0x9FD405: push    eax
0x9FD406: lea     eax, [esp+10h+var_C]
0x9FD40A: mov     large fs:0, eax
0x9FD410: push    offset dword_B14B94
0x9FD415: mov     ecx, offset INISettingCollection
0x9FD41A: mov     [esp+14h+var_4], 0
0x9FD422: call    SettingCollectionList_AddSetting
0x9FD427: push    offset sub_A254F0; void (__cdecl *)()
0x9FD42C: call    _atexit
0x9FD431: add     esp, 4
0x9FD434: mov     ecx, [esp+10h+var_C]
0x9FD438: mov     large fs:0, ecx
0x9FD43F: pop     ecx
0x9FD440: add     esp, 0Ch
0x9FD443: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C3450: mov     ecx, offset dword_B14B94
0x9C3455: jmp     loc_403BC0
0x9C345A: mov     edx, [esp+arg_4]
0x9C345E: lea     eax, [edx]
0x9C3460: mov     ecx, [edx-4]
0x9C3463: xor     ecx, eax
0x9C3465: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C346A: mov     eax, offset stru_AEC058
0x9C346F: jmp     ___CxxFrameHandler3
