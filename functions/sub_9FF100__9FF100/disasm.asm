0x9FF100: push    0FFFFFFFFh
0x9FF102: push    offset SEH_9FF100
0x9FF107: mov     eax, large fs:0
0x9FF10D: push    eax
0x9FF10E: mov     eax, ___security_cookie
0x9FF113: xor     eax, esp
0x9FF115: push    eax
0x9FF116: lea     eax, [esp+10h+var_C]
0x9FF11A: mov     large fs:0, eax
0x9FF120: push    offset flt_B161B8
0x9FF125: mov     ecx, offset INISettingCollection
0x9FF12A: mov     [esp+14h+var_4], 0
0x9FF132: call    SettingCollectionList_AddSetting
0x9FF137: push    offset sub_A26150; void (__cdecl *)()
0x9FF13C: call    _atexit
0x9FF141: add     esp, 4
0x9FF144: mov     ecx, [esp+10h+var_C]
0x9FF148: mov     large fs:0, ecx
0x9FF14F: pop     ecx
0x9FF150: add     esp, 0Ch
0x9FF153: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C67A0: mov     ecx, offset flt_B161B8
0x9C67A5: jmp     loc_403BC0
0x9C67AA: mov     edx, [esp+arg_4]
0x9C67AE: lea     eax, [edx]
0x9C67B0: mov     ecx, [edx-4]
0x9C67B3: xor     ecx, eax
0x9C67B5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C67BA: mov     eax, offset stru_AEECC0
0x9C67BF: jmp     ___CxxFrameHandler3
