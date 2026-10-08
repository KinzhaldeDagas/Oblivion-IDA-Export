0x9DE200: push    0FFFFFFFFh
0x9DE202: push    offset SEH_9DE200
0x9DE207: mov     eax, large fs:0
0x9DE20D: push    eax
0x9DE20E: mov     eax, ___security_cookie
0x9DE213: xor     eax, esp
0x9DE215: push    eax
0x9DE216: lea     eax, [esp+10h+var_C]
0x9DE21A: mov     large fs:0, eax
0x9DE220: push    offset flt_B06E44
0x9DE225: mov     ecx, offset INISettingCollection
0x9DE22A: mov     [esp+14h+var_4], 0
0x9DE232: call    SettingCollectionList_AddSetting
0x9DE237: push    offset sub_A196B0; void (__cdecl *)()
0x9DE23C: call    _atexit
0x9DE241: add     esp, 4
0x9DE244: mov     ecx, [esp+10h+var_C]
0x9DE248: mov     large fs:0, ecx
0x9DE24F: pop     ecx
0x9DE250: add     esp, 0Ch
0x9DE253: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B1000: mov     ecx, offset flt_B06E44
0x9B1005: jmp     loc_403BC0
0x9B100A: mov     edx, [esp+arg_4]
0x9B100E: lea     eax, [edx]
0x9B1010: mov     ecx, [edx-4]
0x9B1013: xor     ecx, eax
0x9B1015: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B101A: mov     eax, offset stru_ADD238
0x9B101F: jmp     ___CxxFrameHandler3
