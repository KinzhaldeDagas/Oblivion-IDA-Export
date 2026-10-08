0x9D86B0: push    0FFFFFFFFh
0x9D86B2: push    offset SEH_9D86B0
0x9D86B7: mov     eax, large fs:0
0x9D86BD: push    eax
0x9D86BE: mov     eax, ___security_cookie
0x9D86C3: xor     eax, esp
0x9D86C5: push    eax
0x9D86C6: lea     eax, [esp+10h+var_C]
0x9D86CA: mov     large fs:0, eax
0x9D86D0: push    offset unk_B02CE8
0x9D86D5: mov     ecx, offset INISettingCollection
0x9D86DA: mov     [esp+14h+var_4], 0
0x9D86E2: call    SettingCollectionList_AddSetting
0x9D86E7: push    offset sub_A16910; void (__cdecl *)()
0x9D86EC: call    _atexit
0x9D86F1: add     esp, 4
0x9D86F4: mov     ecx, [esp+10h+var_C]
0x9D86F8: mov     large fs:0, ecx
0x9D86FF: pop     ecx
0x9D8700: add     esp, 0Ch
0x9D8703: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AA390: mov     ecx, offset unk_B02CE8
0x9AA395: jmp     loc_403BC0
0x9AA39A: mov     edx, [esp+arg_4]
0x9AA39E: lea     eax, [edx]
0x9AA3A0: mov     ecx, [edx-4]
0x9AA3A3: xor     ecx, eax
0x9AA3A5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AA3AA: mov     eax, offset stru_AD7388
0x9AA3AF: jmp     ___CxxFrameHandler3
