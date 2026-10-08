0x9D9130: push    0FFFFFFFFh
0x9D9132: push    offset SEH_9D9130
0x9D9137: mov     eax, large fs:0
0x9D913D: push    eax
0x9D913E: mov     eax, ___security_cookie
0x9D9143: xor     eax, esp
0x9D9145: push    eax
0x9D9146: lea     eax, [esp+10h+var_C]
0x9D914A: mov     large fs:0, eax
0x9D9150: push    offset flt_B02DC8
0x9D9155: mov     ecx, offset INISettingCollection
0x9D915A: mov     [esp+14h+var_4], 0
0x9D9162: call    SettingCollectionList_AddSetting
0x9D9167: push    offset sub_A16E50; void (__cdecl *)()
0x9D916C: call    _atexit
0x9D9171: add     esp, 4
0x9D9174: mov     ecx, [esp+10h+var_C]
0x9D9178: mov     large fs:0, ecx
0x9D917F: pop     ecx
0x9D9180: add     esp, 0Ch
0x9D9183: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AA8D0: mov     ecx, offset flt_B02DC8
0x9AA8D5: jmp     loc_403BC0
0x9AA8DA: mov     edx, [esp+arg_4]
0x9AA8DE: lea     eax, [edx]
0x9AA8E0: mov     ecx, [edx-4]
0x9AA8E3: xor     ecx, eax
0x9AA8E5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AA8EA: mov     eax, offset stru_AD7858
0x9AA8EF: jmp     ___CxxFrameHandler3
