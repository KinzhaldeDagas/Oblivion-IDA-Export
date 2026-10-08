0x9DB7B0: push    0FFFFFFFFh
0x9DB7B2: push    offset SEH_9DB7B0
0x9DB7B7: mov     eax, large fs:0
0x9DB7BD: push    eax
0x9DB7BE: mov     eax, ___security_cookie
0x9DB7C3: xor     eax, esp
0x9DB7C5: push    eax
0x9DB7C6: lea     eax, [esp+10h+var_C]
0x9DB7CA: mov     large fs:0, eax
0x9DB7D0: push    offset unk_B0556C
0x9DB7D5: mov     ecx, offset INISettingCollection
0x9DB7DA: mov     [esp+14h+var_4], 0
0x9DB7E2: call    SettingCollectionList_AddSetting
0x9DB7E7: push    offset sub_A18120; void (__cdecl *)()
0x9DB7EC: call    _atexit
0x9DB7F1: add     esp, 4
0x9DB7F4: mov     ecx, [esp+10h+var_C]
0x9DB7F8: mov     large fs:0, ecx
0x9DB7FF: pop     ecx
0x9DB800: add     esp, 0Ch
0x9DB803: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9ADE40: mov     ecx, offset unk_B0556C
0x9ADE45: jmp     loc_403BC0
0x9ADE4A: mov     edx, [esp+arg_4]
0x9ADE4E: lea     eax, [edx]
0x9ADE50: mov     ecx, [edx-4]
0x9ADE53: xor     ecx, eax
0x9ADE55: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9ADE5A: mov     eax, offset stru_ADA764
0x9ADE5F: jmp     ___CxxFrameHandler3
