0x9FCE20: push    0FFFFFFFFh
0x9FCE22: push    offset SEH_9FCE20
0x9FCE27: mov     eax, large fs:0
0x9FCE2D: push    eax
0x9FCE2E: mov     eax, ___security_cookie
0x9FCE33: xor     eax, esp
0x9FCE35: push    eax
0x9FCE36: lea     eax, [esp+10h+var_C]
0x9FCE3A: mov     large fs:0, eax
0x9FCE40: push    offset flt_B14894
0x9FCE45: mov     ecx, offset INISettingCollection
0x9FCE4A: mov     [esp+14h+var_4], 0
0x9FCE52: call    SettingCollectionList_AddSetting
0x9FCE57: push    offset sub_A25230; void (__cdecl *)()
0x9FCE5C: call    _atexit
0x9FCE61: add     esp, 4
0x9FCE64: mov     ecx, [esp+10h+var_C]
0x9FCE68: mov     large fs:0, ecx
0x9FCE6F: pop     ecx
0x9FCE70: add     esp, 0Ch
0x9FCE73: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C2530: mov     ecx, offset flt_B14894
0x9C2535: jmp     loc_403BC0
0x9C253A: mov     edx, [esp+arg_4]
0x9C253E: lea     eax, [edx]
0x9C2540: mov     ecx, [edx-4]
0x9C2543: xor     ecx, eax
0x9C2545: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C254A: mov     eax, offset stru_AEB408
0x9C254F: jmp     ___CxxFrameHandler3
