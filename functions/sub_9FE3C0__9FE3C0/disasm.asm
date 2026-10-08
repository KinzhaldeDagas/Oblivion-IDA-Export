0x9FE3C0: push    0FFFFFFFFh
0x9FE3C2: push    offset SEH_9FE3C0
0x9FE3C7: mov     eax, large fs:0
0x9FE3CD: push    eax
0x9FE3CE: mov     eax, ___security_cookie
0x9FE3D3: xor     eax, esp
0x9FE3D5: push    eax
0x9FE3D6: lea     eax, [esp+10h+var_C]
0x9FE3DA: mov     large fs:0, eax
0x9FE3E0: push    offset byte_B14F48
0x9FE3E5: mov     ecx, offset INISettingCollection
0x9FE3EA: mov     [esp+14h+var_4], 0
0x9FE3F2: call    SettingCollectionList_AddSetting
0x9FE3F7: push    offset sub_A25CE0; void (__cdecl *)()
0x9FE3FC: call    _atexit
0x9FE401: add     esp, 4
0x9FE404: mov     ecx, [esp+10h+var_C]
0x9FE408: mov     large fs:0, ecx
0x9FE40F: pop     ecx
0x9FE410: add     esp, 0Ch
0x9FE413: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C4750: mov     ecx, offset byte_B14F48
0x9C4755: jmp     loc_403BC0
0x9C475A: mov     edx, [esp+arg_4]
0x9C475E: lea     eax, [edx]
0x9C4760: mov     ecx, [edx-4]
0x9C4763: xor     ecx, eax
0x9C4765: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C476A: mov     eax, offset stru_AED0D4
0x9C476F: jmp     ___CxxFrameHandler3
