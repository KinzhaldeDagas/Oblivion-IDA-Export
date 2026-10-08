0x9D89B0: push    0FFFFFFFFh
0x9D89B2: push    offset SEH_9D89B0
0x9D89B7: mov     eax, large fs:0
0x9D89BD: push    eax
0x9D89BE: mov     eax, ___security_cookie
0x9D89C3: xor     eax, esp
0x9D89C5: push    eax
0x9D89C6: lea     eax, [esp+10h+var_C]
0x9D89CA: mov     large fs:0, eax
0x9D89D0: push    offset dword_B02D28
0x9D89D5: mov     ecx, offset INISettingCollection
0x9D89DA: mov     [esp+14h+var_4], 0
0x9D89E2: call    SettingCollectionList_AddSetting
0x9D89E7: push    offset sub_A16A90; void (__cdecl *)()
0x9D89EC: call    _atexit
0x9D89F1: add     esp, 4
0x9D89F4: mov     ecx, [esp+10h+var_C]
0x9D89F8: mov     large fs:0, ecx
0x9D89FF: pop     ecx
0x9D8A00: add     esp, 0Ch
0x9D8A03: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AA510: mov     ecx, offset dword_B02D28
0x9AA515: jmp     loc_403BC0
0x9AA51A: mov     edx, [esp+arg_4]
0x9AA51E: lea     eax, [edx]
0x9AA520: mov     ecx, [edx-4]
0x9AA523: xor     ecx, eax
0x9AA525: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AA52A: mov     eax, offset stru_AD74E8
0x9AA52F: jmp     ___CxxFrameHandler3
