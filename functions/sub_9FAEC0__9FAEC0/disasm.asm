0x9FAEC0: push    0FFFFFFFFh
0x9FAEC2: push    offset SEH_9FAEC0
0x9FAEC7: mov     eax, large fs:0
0x9FAECD: push    eax
0x9FAECE: mov     eax, ___security_cookie
0x9FAED3: xor     eax, esp
0x9FAED5: push    eax
0x9FAED6: lea     eax, [esp+10h+var_C]
0x9FAEDA: mov     large fs:0, eax
0x9FAEE0: push    offset off_B12E3C; "Data\\Fonts\\Handwritten.fnt"
0x9FAEE5: mov     ecx, offset INISettingCollection
0x9FAEEA: mov     [esp+14h+var_4], 0
0x9FAEF2: call    SettingCollectionList_AddSetting
0x9FAEF7: push    offset sub_A243A0; void (__cdecl *)()
0x9FAEFC: call    _atexit
0x9FAF01: add     esp, 4
0x9FAF04: mov     ecx, [esp+10h+var_C]
0x9FAF08: mov     large fs:0, ecx
0x9FAF0F: pop     ecx
0x9FAF10: add     esp, 0Ch
0x9FAF13: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9BE7C0: mov     ecx, offset off_B12E3C; "Data\\Fonts\\Handwritten.fnt"
0x9BE7C5: jmp     loc_403BC0
0x9BE7CA: mov     edx, [esp+arg_4]
0x9BE7CE: lea     eax, [edx]
0x9BE7D0: mov     ecx, [edx-4]
0x9BE7D3: xor     ecx, eax
0x9BE7D5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BE7DA: mov     eax, offset stru_AE7EC4
0x9BE7DF: jmp     ___CxxFrameHandler3
