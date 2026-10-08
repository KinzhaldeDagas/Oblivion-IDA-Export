0x9DB990: push    0FFFFFFFFh
0x9DB992: push    offset SEH_9DB990
0x9DB997: mov     eax, large fs:0
0x9DB99D: push    eax
0x9DB99E: mov     eax, ___security_cookie
0x9DB9A3: xor     eax, esp
0x9DB9A5: push    eax
0x9DB9A6: lea     eax, [esp+10h+var_C]
0x9DB9AA: mov     large fs:0, eax
0x9DB9B0: push    offset byte_B05594
0x9DB9B5: mov     ecx, offset INISettingCollection
0x9DB9BA: mov     [esp+14h+var_4], 0
0x9DB9C2: call    SettingCollectionList_AddSetting
0x9DB9C7: push    offset sub_A18210; void (__cdecl *)()
0x9DB9CC: call    _atexit
0x9DB9D1: add     esp, 4
0x9DB9D4: mov     ecx, [esp+10h+var_C]
0x9DB9D8: mov     large fs:0, ecx
0x9DB9DF: pop     ecx
0x9DB9E0: add     esp, 0Ch
0x9DB9E3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9ADF30: mov     ecx, offset byte_B05594
0x9ADF35: jmp     loc_403BC0
0x9ADF3A: mov     edx, [esp+arg_4]
0x9ADF3E: lea     eax, [edx]
0x9ADF40: mov     ecx, [edx-4]
0x9ADF43: xor     ecx, eax
0x9ADF45: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9ADF4A: mov     eax, offset stru_ADA840
0x9ADF4F: jmp     ___CxxFrameHandler3
