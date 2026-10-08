0x9DD960: push    0FFFFFFFFh
0x9DD962: push    offset SEH_9DD960
0x9DD967: mov     eax, large fs:0
0x9DD96D: push    eax
0x9DD96E: mov     eax, ___security_cookie
0x9DD973: xor     eax, esp
0x9DD975: push    eax
0x9DD976: lea     eax, [esp+10h+var_C]
0x9DD97A: mov     large fs:0, eax
0x9DD980: push    offset flt_B06D8C
0x9DD985: mov     ecx, offset INISettingCollection
0x9DD98A: mov     [esp+14h+var_4], 0
0x9DD992: call    SettingCollectionList_AddSetting
0x9DD997: push    offset sub_A19260; void (__cdecl *)()
0x9DD99C: call    _atexit
0x9DD9A1: add     esp, 4
0x9DD9A4: mov     ecx, [esp+10h+var_C]
0x9DD9A8: mov     large fs:0, ecx
0x9DD9AF: pop     ecx
0x9DD9B0: add     esp, 0Ch
0x9DD9B3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B0BB0: mov     ecx, offset flt_B06D8C
0x9B0BB5: jmp     loc_403BC0
0x9B0BBA: mov     edx, [esp+arg_4]
0x9B0BBE: lea     eax, [edx]
0x9B0BC0: mov     ecx, [edx-4]
0x9B0BC3: xor     ecx, eax
0x9B0BC5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B0BCA: mov     eax, offset stru_ADCE44
0x9B0BCF: jmp     ___CxxFrameHandler3
