0x9DF160: push    0FFFFFFFFh
0x9DF162: push    offset SEH_9DF160
0x9DF167: mov     eax, large fs:0
0x9DF16D: push    eax
0x9DF16E: mov     eax, ___security_cookie
0x9DF173: xor     eax, esp
0x9DF175: push    eax
0x9DF176: lea     eax, [esp+10h+var_C]
0x9DF17A: mov     large fs:0, eax
0x9DF180: push    offset dword_B06F8C
0x9DF185: mov     ecx, offset INISettingCollection
0x9DF18A: mov     [esp+14h+var_4], 0
0x9DF192: call    SettingCollectionList_AddSetting
0x9DF197: push    offset sub_A19E60; void (__cdecl *)()
0x9DF19C: call    _atexit
0x9DF1A1: add     esp, 4
0x9DF1A4: mov     ecx, [esp+10h+var_C]
0x9DF1A8: mov     large fs:0, ecx
0x9DF1AF: pop     ecx
0x9DF1B0: add     esp, 0Ch
0x9DF1B3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B17B0: mov     ecx, offset dword_B06F8C
0x9B17B5: jmp     loc_403BC0
0x9B17BA: mov     edx, [esp+arg_4]
0x9B17BE: lea     eax, [edx]
0x9B17C0: mov     ecx, [edx-4]
0x9B17C3: xor     ecx, eax
0x9B17C5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B17CA: mov     eax, offset stru_ADD944
0x9B17CF: jmp     ___CxxFrameHandler3
