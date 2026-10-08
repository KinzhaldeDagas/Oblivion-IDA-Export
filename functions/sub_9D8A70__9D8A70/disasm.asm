0x9D8A70: push    0FFFFFFFFh
0x9D8A72: push    offset SEH_9D8A70
0x9D8A77: mov     eax, large fs:0
0x9D8A7D: push    eax
0x9D8A7E: mov     eax, ___security_cookie
0x9D8A83: xor     eax, esp
0x9D8A85: push    eax
0x9D8A86: lea     eax, [esp+10h+var_C]
0x9D8A8A: mov     large fs:0, eax
0x9D8A90: push    offset byte_B02D38
0x9D8A95: mov     ecx, offset INISettingCollection
0x9D8A9A: mov     [esp+14h+var_4], 0
0x9D8AA2: call    SettingCollectionList_AddSetting
0x9D8AA7: push    offset sub_A16AF0; void (__cdecl *)()
0x9D8AAC: call    _atexit
0x9D8AB1: add     esp, 4
0x9D8AB4: mov     ecx, [esp+10h+var_C]
0x9D8AB8: mov     large fs:0, ecx
0x9D8ABF: pop     ecx
0x9D8AC0: add     esp, 0Ch
0x9D8AC3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AA570: mov     ecx, offset byte_B02D38
0x9AA575: jmp     loc_403BC0
0x9AA57A: mov     edx, [esp+arg_4]
0x9AA57E: lea     eax, [edx]
0x9AA580: mov     ecx, [edx-4]
0x9AA583: xor     ecx, eax
0x9AA585: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AA58A: mov     eax, offset stru_AD7540
0x9AA58F: jmp     ___CxxFrameHandler3
