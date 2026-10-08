0x9D9980: push    0FFFFFFFFh
0x9D9982: push    offset SEH_9D9980
0x9D9987: mov     eax, large fs:0
0x9D998D: push    eax
0x9D998E: mov     eax, ___security_cookie
0x9D9993: xor     eax, esp
0x9D9995: push    eax
0x9D9996: lea     eax, [esp+10h+var_C]
0x9D999A: mov     large fs:0, eax
0x9D99A0: push    offset flt_B0312C
0x9D99A5: mov     ecx, offset INISettingCollection
0x9D99AA: mov     [esp+14h+var_4], 0
0x9D99B2: call    SettingCollectionList_AddSetting
0x9D99B7: push    offset sub_A17270; void (__cdecl *)()
0x9D99BC: call    _atexit
0x9D99C1: add     esp, 4
0x9D99C4: mov     ecx, [esp+10h+var_C]
0x9D99C8: mov     large fs:0, ecx
0x9D99CF: pop     ecx
0x9D99D0: add     esp, 0Ch
0x9D99D3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AADC0: mov     ecx, offset flt_B0312C
0x9AADC5: jmp     loc_403BC0
0x9AADCA: mov     edx, [esp+arg_4]
0x9AADCE: lea     eax, [edx]
0x9AADD0: mov     ecx, [edx-4]
0x9AADD3: xor     ecx, eax
0x9AADD5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AADDA: mov     eax, offset stru_AD7CCC
0x9AADDF: jmp     ___CxxFrameHandler3
