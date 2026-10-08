0x9DAF00: push    0FFFFFFFFh
0x9DAF02: push    offset SEH_9DAF00
0x9DAF07: mov     eax, large fs:0
0x9DAF0D: push    eax
0x9DAF0E: mov     eax, ___security_cookie
0x9DAF13: xor     eax, esp
0x9DAF15: push    eax
0x9DAF16: lea     eax, [esp+10h+var_C]
0x9DAF1A: mov     large fs:0, eax
0x9DAF20: push    offset uInteriorCellBuffer
0x9DAF25: mov     ecx, offset INISettingCollection
0x9DAF2A: mov     [esp+14h+var_4], 0
0x9DAF32: call    SettingCollectionList_AddSetting
0x9DAF37: push    offset sub_A17CF0; void (__cdecl *)()
0x9DAF3C: call    _atexit
0x9DAF41: add     esp, 4
0x9DAF44: mov     ecx, [esp+10h+var_C]
0x9DAF48: mov     large fs:0, ecx
0x9DAF4F: pop     ecx
0x9DAF50: add     esp, 0Ch
0x9DAF53: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AD2A0: mov     ecx, offset uInteriorCellBuffer
0x9AD2A5: jmp     loc_403BC0
0x9AD2AA: mov     edx, [esp+arg_4]
0x9AD2AE: lea     eax, [edx]
0x9AD2B0: mov     ecx, [edx-4]
0x9AD2B3: xor     ecx, eax
0x9AD2B5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AD2BA: mov     eax, offset stru_AD9E5C
0x9AD2BF: jmp     ___CxxFrameHandler3
