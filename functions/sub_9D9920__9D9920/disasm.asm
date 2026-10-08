0x9D9920: push    0FFFFFFFFh
0x9D9922: push    offset SEH_9D9920
0x9D9927: mov     eax, large fs:0
0x9D992D: push    eax
0x9D992E: mov     eax, ___security_cookie
0x9D9933: xor     eax, esp
0x9D9935: push    eax
0x9D9936: lea     eax, [esp+10h+var_C]
0x9D993A: mov     large fs:0, eax
0x9D9940: push    offset flt_B03124
0x9D9945: mov     ecx, offset INISettingCollection
0x9D994A: mov     [esp+14h+var_4], 0
0x9D9952: call    SettingCollectionList_AddSetting
0x9D9957: push    offset sub_A17240; void (__cdecl *)()
0x9D995C: call    _atexit
0x9D9961: add     esp, 4
0x9D9964: mov     ecx, [esp+10h+var_C]
0x9D9968: mov     large fs:0, ecx
0x9D996F: pop     ecx
0x9D9970: add     esp, 0Ch
0x9D9973: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AAD90: mov     ecx, offset flt_B03124
0x9AAD95: jmp     loc_403BC0
0x9AAD9A: mov     edx, [esp+arg_4]
0x9AAD9E: lea     eax, [edx]
0x9AADA0: mov     ecx, [edx-4]
0x9AADA3: xor     ecx, eax
0x9AADA5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AADAA: mov     eax, offset stru_AD7CA0
0x9AADAF: jmp     ___CxxFrameHandler3
