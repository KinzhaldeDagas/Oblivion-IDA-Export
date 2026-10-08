0x9FE180: push    0FFFFFFFFh
0x9FE182: push    offset SEH_9FE180
0x9FE187: mov     eax, large fs:0
0x9FE18D: push    eax
0x9FE18E: mov     eax, ___security_cookie
0x9FE193: xor     eax, esp
0x9FE195: push    eax
0x9FE196: lea     eax, [esp+10h+var_C]
0x9FE19A: mov     large fs:0, eax
0x9FE1A0: push    offset flt_B14F18
0x9FE1A5: mov     ecx, offset INISettingCollection
0x9FE1AA: mov     [esp+14h+var_4], 0
0x9FE1B2: call    SettingCollectionList_AddSetting
0x9FE1B7: push    offset sub_A25BC0; void (__cdecl *)()
0x9FE1BC: call    _atexit
0x9FE1C1: add     esp, 4
0x9FE1C4: mov     ecx, [esp+10h+var_C]
0x9FE1C8: mov     large fs:0, ecx
0x9FE1CF: pop     ecx
0x9FE1D0: add     esp, 0Ch
0x9FE1D3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C4630: mov     ecx, offset flt_B14F18
0x9C4635: jmp     loc_403BC0
0x9C463A: mov     edx, [esp+arg_4]
0x9C463E: lea     eax, [edx]
0x9C4640: mov     ecx, [edx-4]
0x9C4643: xor     ecx, eax
0x9C4645: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C464A: mov     eax, offset stru_AECFCC
0x9C464F: jmp     ___CxxFrameHandler3
