0x9DEEC0: push    0FFFFFFFFh
0x9DEEC2: push    offset SEH_9DEEC0
0x9DEEC7: mov     eax, large fs:0
0x9DEECD: push    eax
0x9DEECE: mov     eax, ___security_cookie
0x9DEED3: xor     eax, esp
0x9DEED5: push    eax
0x9DEED6: lea     eax, [esp+10h+var_C]
0x9DEEDA: mov     large fs:0, eax
0x9DEEE0: push    offset unk_B06F54
0x9DEEE5: mov     ecx, offset INISettingCollection
0x9DEEEA: mov     [esp+14h+var_4], 0
0x9DEEF2: call    SettingCollectionList_AddSetting
0x9DEEF7: push    offset sub_A19D10; void (__cdecl *)()
0x9DEEFC: call    _atexit
0x9DEF01: add     esp, 4
0x9DEF04: mov     ecx, [esp+10h+var_C]
0x9DEF08: mov     large fs:0, ecx
0x9DEF0F: pop     ecx
0x9DEF10: add     esp, 0Ch
0x9DEF13: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B1660: mov     ecx, offset unk_B06F54
0x9B1665: jmp     loc_403BC0
0x9B166A: mov     edx, [esp+arg_4]
0x9B166E: lea     eax, [edx]
0x9B1670: mov     ecx, [edx-4]
0x9B1673: xor     ecx, eax
0x9B1675: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B167A: mov     eax, offset stru_ADD810
0x9B167F: jmp     ___CxxFrameHandler3
