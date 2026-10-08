0x9FEF80: push    0FFFFFFFFh
0x9FEF82: push    offset SEH_9FEF80
0x9FEF87: mov     eax, large fs:0
0x9FEF8D: push    eax
0x9FEF8E: mov     eax, ___security_cookie
0x9FEF93: xor     eax, esp
0x9FEF95: push    eax
0x9FEF96: lea     eax, [esp+10h+var_C]
0x9FEF9A: mov     large fs:0, eax
0x9FEFA0: push    offset flt_B16198
0x9FEFA5: mov     ecx, offset INISettingCollection
0x9FEFAA: mov     [esp+14h+var_4], 0
0x9FEFB2: call    SettingCollectionList_AddSetting
0x9FEFB7: push    offset sub_A26090; void (__cdecl *)()
0x9FEFBC: call    _atexit
0x9FEFC1: add     esp, 4
0x9FEFC4: mov     ecx, [esp+10h+var_C]
0x9FEFC8: mov     large fs:0, ecx
0x9FEFCF: pop     ecx
0x9FEFD0: add     esp, 0Ch
0x9FEFD3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C66E0: mov     ecx, offset flt_B16198
0x9C66E5: jmp     loc_403BC0
0x9C66EA: mov     edx, [esp+arg_4]
0x9C66EE: lea     eax, [edx]
0x9C66F0: mov     ecx, [edx-4]
0x9C66F3: xor     ecx, eax
0x9C66F5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C66FA: mov     eax, offset stru_AEEC10
0x9C66FF: jmp     ___CxxFrameHandler3
