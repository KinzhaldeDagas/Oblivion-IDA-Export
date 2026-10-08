0x9D90D0: push    0FFFFFFFFh
0x9D90D2: push    offset SEH_9D90D0
0x9D90D7: mov     eax, large fs:0
0x9D90DD: push    eax
0x9D90DE: mov     eax, ___security_cookie
0x9D90E3: xor     eax, esp
0x9D90E5: push    eax
0x9D90E6: lea     eax, [esp+10h+var_C]
0x9D90EA: mov     large fs:0, eax
0x9D90F0: push    offset flt_B02DC0
0x9D90F5: mov     ecx, offset INISettingCollection
0x9D90FA: mov     [esp+14h+var_4], 0
0x9D9102: call    SettingCollectionList_AddSetting
0x9D9107: push    offset sub_A16E20; void (__cdecl *)()
0x9D910C: call    _atexit
0x9D9111: add     esp, 4
0x9D9114: mov     ecx, [esp+10h+var_C]
0x9D9118: mov     large fs:0, ecx
0x9D911F: pop     ecx
0x9D9120: add     esp, 0Ch
0x9D9123: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AA8A0: mov     ecx, offset flt_B02DC0
0x9AA8A5: jmp     loc_403BC0
0x9AA8AA: mov     edx, [esp+arg_4]
0x9AA8AE: lea     eax, [edx]
0x9AA8B0: mov     ecx, [edx-4]
0x9AA8B3: xor     ecx, eax
0x9AA8B5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AA8BA: mov     eax, offset stru_AD782C
0x9AA8BF: jmp     ___CxxFrameHandler3
