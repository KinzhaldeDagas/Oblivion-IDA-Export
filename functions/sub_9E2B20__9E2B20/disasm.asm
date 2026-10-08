0x9E2B20: push    0FFFFFFFFh
0x9E2B22: push    offset SEH_9E2B20
0x9E2B27: mov     eax, large fs:0
0x9E2B2D: push    eax
0x9E2B2E: mov     eax, ___security_cookie
0x9E2B33: xor     eax, esp
0x9E2B35: push    eax
0x9E2B36: lea     eax, [esp+10h+var_C]
0x9E2B3A: mov     large fs:0, eax
0x9E2B40: push    offset unk_B08B4C
0x9E2B45: mov     ecx, offset INISettingCollection
0x9E2B4A: mov     [esp+14h+var_4], 0
0x9E2B52: call    SettingCollectionList_AddSetting
0x9E2B57: push    offset sub_A1B870; void (__cdecl *)()
0x9E2B5C: call    _atexit
0x9E2B61: add     esp, 4
0x9E2B64: mov     ecx, [esp+10h+var_C]
0x9E2B68: mov     large fs:0, ecx
0x9E2B6F: pop     ecx
0x9E2B70: add     esp, 0Ch
0x9E2B73: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B4E10: mov     ecx, offset unk_B08B4C
0x9B4E15: jmp     loc_403BC0
0x9B4E1A: mov     edx, [esp+arg_4]
0x9B4E1E: lea     eax, [edx]
0x9B4E20: mov     ecx, [edx-4]
0x9B4E23: xor     ecx, eax
0x9B4E25: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B4E2A: mov     eax, offset stru_AE0058
0x9B4E2F: jmp     ___CxxFrameHandler3
