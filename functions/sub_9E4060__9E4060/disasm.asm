0x9E4060: push    0FFFFFFFFh
0x9E4062: push    offset SEH_9E4060
0x9E4067: mov     eax, large fs:0
0x9E406D: push    eax
0x9E406E: mov     eax, ___security_cookie
0x9E4073: xor     eax, esp
0x9E4075: push    eax
0x9E4076: lea     eax, [esp+10h+var_C]
0x9E407A: mov     large fs:0, eax
0x9E4080: push    offset off_B10D68
0x9E4085: mov     ecx, offset INISettingCollection
0x9E408A: mov     [esp+14h+var_4], 0
0x9E4092: call    SettingCollectionList_AddSetting
0x9E4097: push    offset sub_A1C410; void (__cdecl *)()
0x9E409C: call    _atexit
0x9E40A1: add     esp, 4
0x9E40A4: mov     ecx, [esp+10h+var_C]
0x9E40A8: mov     large fs:0, ecx
0x9E40AF: pop     ecx
0x9E40B0: add     esp, 0Ch
0x9E40B3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B89C0: mov     ecx, offset off_B10D68
0x9B89C5: jmp     loc_403BC0
0x9B89CA: mov     edx, [esp+arg_4]
0x9B89CE: lea     eax, [edx]
0x9B89D0: mov     ecx, [edx-4]
0x9B89D3: xor     ecx, eax
0x9B89D5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B89DA: mov     eax, offset stru_AE2EA0
0x9B89DF: jmp     ___CxxFrameHandler3
