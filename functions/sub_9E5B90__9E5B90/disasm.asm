0x9E5B90: push    0FFFFFFFFh
0x9E5B92: push    offset SEH_9E5B90
0x9E5B97: mov     eax, large fs:0
0x9E5B9D: push    eax
0x9E5B9E: mov     eax, ___security_cookie
0x9E5BA3: xor     eax, esp
0x9E5BA5: push    eax
0x9E5BA6: lea     eax, [esp+10h+var_C]
0x9E5BAA: mov     large fs:0, eax
0x9E5BB0: push    offset flt_B11C0C
0x9E5BB5: mov     ecx, offset BlendSettingCollection
0x9E5BBA: mov     [esp+14h+var_4], 0
0x9E5BC2: call    SettingCollectionList_AddSetting
0x9E5BC7: push    offset sub_A1D210; void (__cdecl *)()
0x9E5BCC: call    _atexit
0x9E5BD1: add     esp, 4
0x9E5BD4: mov     ecx, [esp+10h+var_C]
0x9E5BD8: mov     large fs:0, ecx
0x9E5BDF: pop     ecx
0x9E5BE0: add     esp, 0Ch
0x9E5BE3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9BA1C0: mov     ecx, offset flt_B11C0C
0x9BA1C5: jmp     loc_403BC0
0x9BA1CA: mov     edx, [esp+arg_4]
0x9BA1CE: lea     eax, [edx]
0x9BA1D0: mov     ecx, [edx-4]
0x9BA1D3: xor     ecx, eax
0x9BA1D5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BA1DA: mov     eax, offset stru_AE43E4
0x9BA1DF: jmp     ___CxxFrameHandler3
