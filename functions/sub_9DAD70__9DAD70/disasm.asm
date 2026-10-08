0x9DAD70: push    0FFFFFFFFh
0x9DAD72: push    offset SEH_9DAD70
0x9DAD77: mov     eax, large fs:0
0x9DAD7D: push    eax
0x9DAD7E: mov     eax, ___security_cookie
0x9DAD83: xor     eax, esp
0x9DAD85: push    eax
0x9DAD86: lea     eax, [esp+10h+var_C]
0x9DAD8A: mov     large fs:0, eax
0x9DAD90: push    offset unk_B048F4
0x9DAD95: mov     ecx, offset INISettingCollection
0x9DAD9A: mov     [esp+14h+var_4], 0
0x9DADA2: call    SettingCollectionList_AddSetting
0x9DADA7: push    offset sub_A17C00; void (__cdecl *)()
0x9DADAC: call    _atexit
0x9DADB1: add     esp, 4
0x9DADB4: mov     ecx, [esp+10h+var_C]
0x9DADB8: mov     large fs:0, ecx
0x9DADBF: pop     ecx
0x9DADC0: add     esp, 0Ch
0x9DADC3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AC190: mov     ecx, offset unk_B048F4
0x9AC195: jmp     loc_403BC0
0x9AC19A: mov     edx, [esp+arg_4]
0x9AC19E: lea     eax, [edx]
0x9AC1A0: mov     ecx, [edx-4]
0x9AC1A3: xor     ecx, eax
0x9AC1A5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AC1AA: mov     eax, offset stru_AD8EAC
0x9AC1AF: jmp     ___CxxFrameHandler3
