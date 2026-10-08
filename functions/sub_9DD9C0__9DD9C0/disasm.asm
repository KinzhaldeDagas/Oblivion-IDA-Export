0x9DD9C0: push    0FFFFFFFFh
0x9DD9C2: push    offset SEH_9DD9C0
0x9DD9C7: mov     eax, large fs:0
0x9DD9CD: push    eax
0x9DD9CE: mov     eax, ___security_cookie
0x9DD9D3: xor     eax, esp
0x9DD9D5: push    eax
0x9DD9D6: lea     eax, [esp+10h+var_C]
0x9DD9DA: mov     large fs:0, eax
0x9DD9E0: push    offset flt_B06D94
0x9DD9E5: mov     ecx, offset INISettingCollection
0x9DD9EA: mov     [esp+14h+var_4], 0
0x9DD9F2: call    SettingCollectionList_AddSetting
0x9DD9F7: push    offset sub_A19290; void (__cdecl *)()
0x9DD9FC: call    _atexit
0x9DDA01: add     esp, 4
0x9DDA04: mov     ecx, [esp+10h+var_C]
0x9DDA08: mov     large fs:0, ecx
0x9DDA0F: pop     ecx
0x9DDA10: add     esp, 0Ch
0x9DDA13: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B0BE0: mov     ecx, offset flt_B06D94
0x9B0BE5: jmp     loc_403BC0
0x9B0BEA: mov     edx, [esp+arg_4]
0x9B0BEE: lea     eax, [edx]
0x9B0BF0: mov     ecx, [edx-4]
0x9B0BF3: xor     ecx, eax
0x9B0BF5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B0BFA: mov     eax, offset stru_ADCE70
0x9B0BFF: jmp     ___CxxFrameHandler3
