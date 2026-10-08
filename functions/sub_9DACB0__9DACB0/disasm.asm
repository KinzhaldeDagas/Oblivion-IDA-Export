0x9DACB0: push    0FFFFFFFFh
0x9DACB2: push    offset SEH_9DACB0
0x9DACB7: mov     eax, large fs:0
0x9DACBD: push    eax
0x9DACBE: mov     eax, ___security_cookie
0x9DACC3: xor     eax, esp
0x9DACC5: push    eax
0x9DACC6: lea     eax, [esp+10h+var_C]
0x9DACCA: mov     large fs:0, eax
0x9DACD0: push    offset dword_B048E4
0x9DACD5: mov     ecx, offset INISettingCollection
0x9DACDA: mov     [esp+14h+var_4], 0
0x9DACE2: call    SettingCollectionList_AddSetting
0x9DACE7: push    offset sub_A17BA0; void (__cdecl *)()
0x9DACEC: call    _atexit
0x9DACF1: add     esp, 4
0x9DACF4: mov     ecx, [esp+10h+var_C]
0x9DACF8: mov     large fs:0, ecx
0x9DACFF: pop     ecx
0x9DAD00: add     esp, 0Ch
0x9DAD03: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AC130: mov     ecx, offset dword_B048E4
0x9AC135: jmp     loc_403BC0
0x9AC13A: mov     edx, [esp+arg_4]
0x9AC13E: lea     eax, [edx]
0x9AC140: mov     ecx, [edx-4]
0x9AC143: xor     ecx, eax
0x9AC145: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AC14A: mov     eax, offset stru_AD8E54
0x9AC14F: jmp     ___CxxFrameHandler3
