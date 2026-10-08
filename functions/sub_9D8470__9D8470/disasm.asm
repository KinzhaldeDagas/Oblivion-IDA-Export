0x9D8470: push    0FFFFFFFFh
0x9D8472: push    offset SEH_9D8470
0x9D8477: mov     eax, large fs:0
0x9D847D: push    eax
0x9D847E: mov     eax, ___security_cookie
0x9D8483: xor     eax, esp
0x9D8485: push    eax
0x9D8486: lea     eax, [esp+10h+var_C]
0x9D848A: mov     large fs:0, eax
0x9D8490: push    offset off_B02CB8
0x9D8495: mov     ecx, offset INISettingCollection
0x9D849A: mov     [esp+14h+var_4], 0
0x9D84A2: call    SettingCollectionList_AddSetting
0x9D84A7: push    offset sub_A167F0; void (__cdecl *)()
0x9D84AC: call    _atexit
0x9D84B1: add     esp, 4
0x9D84B4: mov     ecx, [esp+10h+var_C]
0x9D84B8: mov     large fs:0, ecx
0x9D84BF: pop     ecx
0x9D84C0: add     esp, 0Ch
0x9D84C3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AA270: mov     ecx, offset off_B02CB8
0x9AA275: jmp     loc_403BC0
0x9AA27A: mov     edx, [esp+arg_4]
0x9AA27E: lea     eax, [edx]
0x9AA280: mov     ecx, [edx-4]
0x9AA283: xor     ecx, eax
0x9AA285: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AA28A: mov     eax, offset stru_AD7280
0x9AA28F: jmp     ___CxxFrameHandler3
