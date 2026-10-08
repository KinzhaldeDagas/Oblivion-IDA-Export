0x9DB450: push    0FFFFFFFFh
0x9DB452: push    offset SEH_9DB450
0x9DB457: mov     eax, large fs:0
0x9DB45D: push    eax
0x9DB45E: mov     eax, ___security_cookie
0x9DB463: xor     eax, esp
0x9DB465: push    eax
0x9DB466: lea     eax, [esp+10h+var_C]
0x9DB46A: mov     large fs:0, eax
0x9DB470: push    offset unk_B0523C
0x9DB475: mov     ecx, offset INISettingCollection
0x9DB47A: mov     [esp+14h+var_4], 0
0x9DB482: call    SettingCollectionList_AddSetting
0x9DB487: push    offset sub_A17F80; void (__cdecl *)()
0x9DB48C: call    _atexit
0x9DB491: add     esp, 4
0x9DB494: mov     ecx, [esp+10h+var_C]
0x9DB498: mov     large fs:0, ecx
0x9DB49F: pop     ecx
0x9DB4A0: add     esp, 0Ch
0x9DB4A3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AD510: mov     ecx, offset unk_B0523C
0x9AD515: jmp     loc_403BC0
0x9AD51A: mov     edx, [esp+arg_4]
0x9AD51E: lea     eax, [edx]
0x9AD520: mov     ecx, [edx-4]
0x9AD523: xor     ecx, eax
0x9AD525: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AD52A: mov     eax, offset stru_ADA098
0x9AD52F: jmp     ___CxxFrameHandler3
