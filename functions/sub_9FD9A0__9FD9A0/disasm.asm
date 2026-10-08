0x9FD9A0: push    0FFFFFFFFh
0x9FD9A2: push    offset SEH_9FD9A0
0x9FD9A7: mov     eax, large fs:0
0x9FD9AD: push    eax
0x9FD9AE: mov     eax, ___security_cookie
0x9FD9B3: xor     eax, esp
0x9FD9B5: push    eax
0x9FD9B6: lea     eax, [esp+10h+var_C]
0x9FD9BA: mov     large fs:0, eax
0x9FD9C0: push    offset flt_B14E34
0x9FD9C5: mov     ecx, offset INISettingCollection
0x9FD9CA: mov     [esp+14h+var_4], 0
0x9FD9D2: call    SettingCollectionList_AddSetting
0x9FD9D7: push    offset sub_A257B0; void (__cdecl *)()
0x9FD9DC: call    _atexit
0x9FD9E1: add     esp, 4
0x9FD9E4: mov     ecx, [esp+10h+var_C]
0x9FD9E8: mov     large fs:0, ecx
0x9FD9EF: pop     ecx
0x9FD9F0: add     esp, 0Ch
0x9FD9F3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C3C90: mov     ecx, offset flt_B14E34
0x9C3C95: jmp     loc_403BC0
0x9C3C9A: mov     edx, [esp+arg_4]
0x9C3C9E: lea     eax, [edx]
0x9C3CA0: mov     ecx, [edx-4]
0x9C3CA3: xor     ecx, eax
0x9C3CA5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C3CAA: mov     eax, offset stru_AEC7BC
0x9C3CAF: jmp     ___CxxFrameHandler3
