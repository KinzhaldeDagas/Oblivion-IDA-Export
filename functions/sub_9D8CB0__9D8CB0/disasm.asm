0x9D8CB0: push    0FFFFFFFFh
0x9D8CB2: push    offset SEH_9D8CB0
0x9D8CB7: mov     eax, large fs:0
0x9D8CBD: push    eax
0x9D8CBE: mov     eax, ___security_cookie
0x9D8CC3: xor     eax, esp
0x9D8CC5: push    eax
0x9D8CC6: lea     eax, [esp+10h+var_C]
0x9D8CCA: mov     large fs:0, eax
0x9D8CD0: push    offset flt_B02D68
0x9D8CD5: mov     ecx, offset INISettingCollection
0x9D8CDA: mov     [esp+14h+var_4], 0
0x9D8CE2: call    SettingCollectionList_AddSetting
0x9D8CE7: push    offset sub_A16C10; void (__cdecl *)()
0x9D8CEC: call    _atexit
0x9D8CF1: add     esp, 4
0x9D8CF4: mov     ecx, [esp+10h+var_C]
0x9D8CF8: mov     large fs:0, ecx
0x9D8CFF: pop     ecx
0x9D8D00: add     esp, 0Ch
0x9D8D03: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AA690: mov     ecx, offset flt_B02D68
0x9AA695: jmp     loc_403BC0
0x9AA69A: mov     edx, [esp+arg_4]
0x9AA69E: lea     eax, [edx]
0x9AA6A0: mov     ecx, [edx-4]
0x9AA6A3: xor     ecx, eax
0x9AA6A5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AA6AA: mov     eax, offset stru_AD7648
0x9AA6AF: jmp     ___CxxFrameHandler3
