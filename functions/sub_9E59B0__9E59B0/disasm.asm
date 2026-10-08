0x9E59B0: push    0FFFFFFFFh
0x9E59B2: push    offset SEH_9E59B0
0x9E59B7: mov     eax, large fs:0
0x9E59BD: push    eax
0x9E59BE: mov     eax, ___security_cookie
0x9E59C3: xor     eax, esp
0x9E59C5: push    eax
0x9E59C6: lea     eax, [esp+10h+var_C]
0x9E59CA: mov     large fs:0, eax
0x9E59D0: push    offset flt_B11BE4
0x9E59D5: mov     ecx, offset BlendSettingCollection
0x9E59DA: mov     [esp+14h+var_4], 0
0x9E59E2: call    SettingCollectionList_AddSetting
0x9E59E7: push    offset sub_A1D120; void (__cdecl *)()
0x9E59EC: call    _atexit
0x9E59F1: add     esp, 4
0x9E59F4: mov     ecx, [esp+10h+var_C]
0x9E59F8: mov     large fs:0, ecx
0x9E59FF: pop     ecx
0x9E5A00: add     esp, 0Ch
0x9E5A03: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9BA0D0: mov     ecx, offset flt_B11BE4
0x9BA0D5: jmp     loc_403BC0
0x9BA0DA: mov     edx, [esp+arg_4]
0x9BA0DE: lea     eax, [edx]
0x9BA0E0: mov     ecx, [edx-4]
0x9BA0E3: xor     ecx, eax
0x9BA0E5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BA0EA: mov     eax, offset stru_AE4308
0x9BA0EF: jmp     ___CxxFrameHandler3
