0x9FDCA0: push    0FFFFFFFFh
0x9FDCA2: push    offset SEH_9FDCA0
0x9FDCA7: mov     eax, large fs:0
0x9FDCAD: push    eax
0x9FDCAE: mov     eax, ___security_cookie
0x9FDCB3: xor     eax, esp
0x9FDCB5: push    eax
0x9FDCB6: lea     eax, [esp+10h+var_C]
0x9FDCBA: mov     large fs:0, eax
0x9FDCC0: push    offset flt_B14EB0
0x9FDCC5: mov     ecx, offset INISettingCollection
0x9FDCCA: mov     [esp+14h+var_4], 0
0x9FDCD2: call    SettingCollectionList_AddSetting
0x9FDCD7: push    offset sub_A25950; void (__cdecl *)()
0x9FDCDC: call    _atexit
0x9FDCE1: add     esp, 4
0x9FDCE4: mov     ecx, [esp+10h+var_C]
0x9FDCE8: mov     large fs:0, ecx
0x9FDCEF: pop     ecx
0x9FDCF0: add     esp, 0Ch
0x9FDCF3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C43C0: mov     ecx, offset flt_B14EB0
0x9C43C5: jmp     loc_403BC0
0x9C43CA: mov     edx, [esp+arg_4]
0x9C43CE: lea     eax, [edx]
0x9C43D0: mov     ecx, [edx-4]
0x9C43D3: xor     ecx, eax
0x9C43D5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C43DA: mov     eax, offset stru_AECD90
0x9C43DF: jmp     ___CxxFrameHandler3
