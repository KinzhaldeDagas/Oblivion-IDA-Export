0x9FD120: push    0FFFFFFFFh
0x9FD122: push    offset SEH_9FD120
0x9FD127: mov     eax, large fs:0
0x9FD12D: push    eax
0x9FD12E: mov     eax, ___security_cookie
0x9FD133: xor     eax, esp
0x9FD135: push    eax
0x9FD136: lea     eax, [esp+10h+var_C]
0x9FD13A: mov     large fs:0, eax
0x9FD140: push    offset dword_B148EC
0x9FD145: mov     ecx, offset INISettingCollection
0x9FD14A: mov     [esp+14h+var_4], 0
0x9FD152: call    SettingCollectionList_AddSetting
0x9FD157: push    offset sub_A253B0; void (__cdecl *)()
0x9FD15C: call    _atexit
0x9FD161: add     esp, 4
0x9FD164: mov     ecx, [esp+10h+var_C]
0x9FD168: mov     large fs:0, ecx
0x9FD16F: pop     ecx
0x9FD170: add     esp, 0Ch
0x9FD173: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C2D80: mov     ecx, offset dword_B148EC
0x9C2D85: jmp     loc_403BC0
0x9C2D8A: mov     edx, [esp+arg_4]
0x9C2D8E: lea     eax, [edx]
0x9C2D90: mov     ecx, [edx-4]
0x9C2D93: xor     ecx, eax
0x9C2D95: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C2D9A: mov     eax, offset stru_AEBAB8
0x9C2D9F: jmp     ___CxxFrameHandler3
