0x9E4930: push    0FFFFFFFFh
0x9E4932: push    offset SEH_9E4930
0x9E4937: mov     eax, large fs:0
0x9E493D: push    eax
0x9E493E: mov     eax, ___security_cookie
0x9E4943: xor     eax, esp
0x9E4945: push    eax
0x9E4946: lea     eax, [esp+10h+var_C]
0x9E494A: mov     large fs:0, eax
0x9E4950: push    offset off_B11A84; "0.2, 0.5"
0x9E4955: mov     ecx, offset BlendSettingCollection
0x9E495A: mov     [esp+14h+var_4], 0
0x9E4962: call    SettingCollectionList_AddSetting
0x9E4967: push    offset sub_A1C8E0; void (__cdecl *)()
0x9E496C: call    _atexit
0x9E4971: add     esp, 4
0x9E4974: mov     ecx, [esp+10h+var_C]
0x9E4978: mov     large fs:0, ecx
0x9E497F: pop     ecx
0x9E4980: add     esp, 0Ch
0x9E4983: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B9890: mov     ecx, offset off_B11A84; "0.2, 0.5"
0x9B9895: jmp     loc_403BC0
0x9B989A: mov     edx, [esp+arg_4]
0x9B989E: lea     eax, [edx]
0x9B98A0: mov     ecx, [edx-4]
0x9B98A3: xor     ecx, eax
0x9B98A5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B98AA: mov     eax, offset stru_AE3B78
0x9B98AF: jmp     ___CxxFrameHandler3
