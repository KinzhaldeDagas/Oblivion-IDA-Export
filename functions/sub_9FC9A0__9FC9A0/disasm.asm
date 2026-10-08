0x9FC9A0: push    0FFFFFFFFh
0x9FC9A2: push    offset SEH_9FC9A0
0x9FC9A7: mov     eax, large fs:0
0x9FC9AD: push    eax
0x9FC9AE: mov     eax, ___security_cookie
0x9FC9B3: xor     eax, esp
0x9FC9B5: push    eax
0x9FC9B6: lea     eax, [esp+10h+var_C]
0x9FC9BA: mov     large fs:0, eax
0x9FC9C0: push    offset flt_B14834
0x9FC9C5: mov     ecx, offset INISettingCollection
0x9FC9CA: mov     [esp+14h+var_4], 0
0x9FC9D2: call    SettingCollectionList_AddSetting
0x9FC9D7: push    offset sub_A24FF0; void (__cdecl *)()
0x9FC9DC: call    _atexit
0x9FC9E1: add     esp, 4
0x9FC9E4: mov     ecx, [esp+10h+var_C]
0x9FC9E8: mov     large fs:0, ecx
0x9FC9EF: pop     ecx
0x9FC9F0: add     esp, 0Ch
0x9FC9F3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C22F0: mov     ecx, offset flt_B14834
0x9C22F5: jmp     loc_403BC0
0x9C22FA: mov     edx, [esp+arg_4]
0x9C22FE: lea     eax, [edx]
0x9C2300: mov     ecx, [edx-4]
0x9C2303: xor     ecx, eax
0x9C2305: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C230A: mov     eax, offset stru_AEB1F8
0x9C230F: jmp     ___CxxFrameHandler3
