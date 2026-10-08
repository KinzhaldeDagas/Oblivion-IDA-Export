0x9E23B0: push    0FFFFFFFFh
0x9E23B2: push    offset SEH_9E23B0
0x9E23B7: mov     eax, large fs:0
0x9E23BD: push    eax
0x9E23BE: mov     eax, ___security_cookie
0x9E23C3: xor     eax, esp
0x9E23C5: push    eax
0x9E23C6: lea     eax, [esp+10h+var_C]
0x9E23CA: mov     large fs:0, eax
0x9E23D0: push    offset dword_B08158
0x9E23D5: mov     ecx, offset INISettingCollection
0x9E23DA: mov     [esp+14h+var_4], 0
0x9E23E2: call    SettingCollectionList_AddSetting
0x9E23E7: push    offset sub_A1B480; void (__cdecl *)()
0x9E23EC: call    _atexit
0x9E23F1: add     esp, 4
0x9E23F4: mov     ecx, [esp+10h+var_C]
0x9E23F8: mov     large fs:0, ecx
0x9E23FF: pop     ecx
0x9E2400: add     esp, 0Ch
0x9E2403: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B3190: mov     ecx, offset dword_B08158
0x9B3195: jmp     loc_403BC0
0x9B319A: mov     edx, [esp+arg_4]
0x9B319E: lea     eax, [edx]
0x9B31A0: mov     ecx, [edx-4]
0x9B31A3: xor     ecx, eax
0x9B31A5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B31AA: mov     eax, offset stru_ADEEF4
0x9B31AF: jmp     ___CxxFrameHandler3
