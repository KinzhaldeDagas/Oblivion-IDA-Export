0x9D9440: push    0FFFFFFFFh
0x9D9442: push    offset SEH_9D9440
0x9D9447: mov     eax, large fs:0
0x9D944D: push    eax
0x9D944E: mov     eax, ___security_cookie
0x9D9453: xor     eax, esp
0x9D9455: push    eax
0x9D9456: lea     eax, [esp+10h+var_C]
0x9D945A: mov     large fs:0, eax
0x9D9460: push    offset bShowMenuTextureUse
0x9D9465: mov     ecx, offset INISettingCollection
0x9D946A: mov     [esp+14h+var_4], 0
0x9D9472: call    SettingCollectionList_AddSetting
0x9D9477: push    offset sub_A16FD0; void (__cdecl *)()
0x9D947C: call    _atexit
0x9D9481: add     esp, 4
0x9D9484: mov     ecx, [esp+10h+var_C]
0x9D9488: mov     large fs:0, ecx
0x9D948F: pop     ecx
0x9D9490: add     esp, 0Ch
0x9D9493: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AAA50: mov     ecx, offset bShowMenuTextureUse
0x9AAA55: jmp     loc_403BC0
0x9AAA5A: mov     edx, [esp+arg_4]
0x9AAA5E: lea     eax, [edx]
0x9AAA60: mov     ecx, [edx-4]
0x9AAA63: xor     ecx, eax
0x9AAA65: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AAA6A: mov     eax, offset stru_AD79B8
0x9AAA6F: jmp     ___CxxFrameHandler3
