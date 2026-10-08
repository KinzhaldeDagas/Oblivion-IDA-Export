0x9DB030: push    0FFFFFFFFh
0x9DB032: push    offset SEH_9DB030
0x9DB037: mov     eax, large fs:0
0x9DB03D: push    eax
0x9DB03E: mov     eax, ___security_cookie
0x9DB043: xor     eax, esp
0x9DB045: push    eax
0x9DB046: lea     eax, [esp+10h+var_C]
0x9DB04A: mov     large fs:0, eax
0x9DB050: push    offset off_B051EC; "255,255,255,255"
0x9DB055: mov     ecx, offset INISettingCollection
0x9DB05A: mov     [esp+14h+var_4], 0
0x9DB062: call    SettingCollectionList_AddSetting
0x9DB067: push    offset sub_A17D80; void (__cdecl *)()
0x9DB06C: call    _atexit
0x9DB071: add     esp, 4
0x9DB074: mov     ecx, [esp+10h+var_C]
0x9DB078: mov     large fs:0, ecx
0x9DB07F: pop     ecx
0x9DB080: add     esp, 0Ch
0x9DB083: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AD330: mov     ecx, offset off_B051EC; "255,255,255,255"
0x9AD335: jmp     loc_403BC0
0x9AD33A: mov     edx, [esp+arg_4]
0x9AD33E: lea     eax, [edx]
0x9AD340: mov     ecx, [edx-4]
0x9AD343: xor     ecx, eax
0x9AD345: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AD34A: mov     eax, offset stru_AD9EE0
0x9AD34F: jmp     ___CxxFrameHandler3
