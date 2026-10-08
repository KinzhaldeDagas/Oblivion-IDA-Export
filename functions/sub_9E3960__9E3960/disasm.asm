0x9E3960: push    0FFFFFFFFh
0x9E3962: push    offset SEH_9E3960
0x9E3967: mov     eax, large fs:0
0x9E396D: push    eax
0x9E396E: mov     eax, ___security_cookie
0x9E3973: xor     eax, esp
0x9E3975: push    eax
0x9E3976: lea     eax, [esp+10h+var_C]
0x9E397A: mov     large fs:0, eax
0x9E3980: push    offset bCheckOffsetOnLoad
0x9E3985: mov     ecx, offset INISettingCollection
0x9E398A: mov     [esp+14h+var_4], 0
0x9E3992: call    SettingCollectionList_AddSetting
0x9E3997: push    offset sub_A1C040; void (__cdecl *)()
0x9E399C: call    _atexit
0x9E39A1: add     esp, 4
0x9E39A4: mov     ecx, [esp+10h+var_C]
0x9E39A8: mov     large fs:0, ecx
0x9E39AF: pop     ecx
0x9E39B0: add     esp, 0Ch
0x9E39B3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B6A60: mov     ecx, offset bCheckOffsetOnLoad
0x9B6A65: jmp     loc_403BC0
0x9B6A6A: mov     edx, [esp+arg_4]
0x9B6A6E: lea     eax, [edx]
0x9B6A70: mov     ecx, [edx-4]
0x9B6A73: xor     ecx, eax
0x9B6A75: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B6A7A: mov     eax, offset stru_AE1820
0x9B6A7F: jmp     ___CxxFrameHandler3
