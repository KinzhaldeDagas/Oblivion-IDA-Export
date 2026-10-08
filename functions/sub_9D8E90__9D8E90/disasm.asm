0x9D8E90: push    0FFFFFFFFh
0x9D8E92: push    offset SEH_9D8E90
0x9D8E97: mov     eax, large fs:0
0x9D8E9D: push    eax
0x9D8E9E: mov     eax, ___security_cookie
0x9D8EA3: xor     eax, esp
0x9D8EA5: push    eax
0x9D8EA6: lea     eax, [esp+10h+var_C]
0x9D8EAA: mov     large fs:0, eax
0x9D8EB0: push    offset flt_B02D90
0x9D8EB5: mov     ecx, offset INISettingCollection
0x9D8EBA: mov     [esp+14h+var_4], 0
0x9D8EC2: call    SettingCollectionList_AddSetting
0x9D8EC7: push    offset sub_A16D00; void (__cdecl *)()
0x9D8ECC: call    _atexit
0x9D8ED1: add     esp, 4
0x9D8ED4: mov     ecx, [esp+10h+var_C]
0x9D8ED8: mov     large fs:0, ecx
0x9D8EDF: pop     ecx
0x9D8EE0: add     esp, 0Ch
0x9D8EE3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AA780: mov     ecx, offset flt_B02D90
0x9AA785: jmp     loc_403BC0
0x9AA78A: mov     edx, [esp+arg_4]
0x9AA78E: lea     eax, [edx]
0x9AA790: mov     ecx, [edx-4]
0x9AA793: xor     ecx, eax
0x9AA795: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AA79A: mov     eax, offset stru_AD7724
0x9AA79F: jmp     ___CxxFrameHandler3
