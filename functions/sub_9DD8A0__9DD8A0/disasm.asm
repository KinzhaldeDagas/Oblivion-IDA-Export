0x9DD8A0: push    0FFFFFFFFh
0x9DD8A2: push    offset SEH_9DD8A0
0x9DD8A7: mov     eax, large fs:0
0x9DD8AD: push    eax
0x9DD8AE: mov     eax, ___security_cookie
0x9DD8B3: xor     eax, esp
0x9DD8B5: push    eax
0x9DD8B6: lea     eax, [esp+10h+var_C]
0x9DD8BA: mov     large fs:0, eax
0x9DD8C0: push    offset flt_B06D7C
0x9DD8C5: mov     ecx, offset INISettingCollection
0x9DD8CA: mov     [esp+14h+var_4], 0
0x9DD8D2: call    SettingCollectionList_AddSetting
0x9DD8D7: push    offset sub_A19200; void (__cdecl *)()
0x9DD8DC: call    _atexit
0x9DD8E1: add     esp, 4
0x9DD8E4: mov     ecx, [esp+10h+var_C]
0x9DD8E8: mov     large fs:0, ecx
0x9DD8EF: pop     ecx
0x9DD8F0: add     esp, 0Ch
0x9DD8F3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B0B50: mov     ecx, offset flt_B06D7C
0x9B0B55: jmp     loc_403BC0
0x9B0B5A: mov     edx, [esp+arg_4]
0x9B0B5E: lea     eax, [edx]
0x9B0B60: mov     ecx, [edx-4]
0x9B0B63: xor     ecx, eax
0x9B0B65: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B0B6A: mov     eax, offset stru_ADCDEC
0x9B0B6F: jmp     ___CxxFrameHandler3
