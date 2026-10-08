0x9DE7A0: push    0FFFFFFFFh
0x9DE7A2: push    offset SEH_9DE7A0
0x9DE7A7: mov     eax, large fs:0
0x9DE7AD: push    eax
0x9DE7AE: mov     eax, ___security_cookie
0x9DE7B3: xor     eax, esp
0x9DE7B5: push    eax
0x9DE7B6: lea     eax, [esp+10h+var_C]
0x9DE7BA: mov     large fs:0, eax
0x9DE7C0: push    offset flt_B06EBC
0x9DE7C5: mov     ecx, offset INISettingCollection
0x9DE7CA: mov     [esp+14h+var_4], 0
0x9DE7D2: call    SettingCollectionList_AddSetting
0x9DE7D7: push    offset sub_A19980; void (__cdecl *)()
0x9DE7DC: call    _atexit
0x9DE7E1: add     esp, 4
0x9DE7E4: mov     ecx, [esp+10h+var_C]
0x9DE7E8: mov     large fs:0, ecx
0x9DE7EF: pop     ecx
0x9DE7F0: add     esp, 0Ch
0x9DE7F3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B12D0: mov     ecx, offset flt_B06EBC
0x9B12D5: jmp     loc_403BC0
0x9B12DA: mov     edx, [esp+arg_4]
0x9B12DE: lea     eax, [edx]
0x9B12E0: mov     ecx, [edx-4]
0x9B12E3: xor     ecx, eax
0x9B12E5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B12EA: mov     eax, offset stru_ADD4CC
0x9B12EF: jmp     ___CxxFrameHandler3
