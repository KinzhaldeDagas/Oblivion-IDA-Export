0x9DE4A0: push    0FFFFFFFFh
0x9DE4A2: push    offset SEH_9DE4A0
0x9DE4A7: mov     eax, large fs:0
0x9DE4AD: push    eax
0x9DE4AE: mov     eax, ___security_cookie
0x9DE4B3: xor     eax, esp
0x9DE4B5: push    eax
0x9DE4B6: lea     eax, [esp+10h+var_C]
0x9DE4BA: mov     large fs:0, eax
0x9DE4C0: push    offset flt_B06E7C
0x9DE4C5: mov     ecx, offset INISettingCollection
0x9DE4CA: mov     [esp+14h+var_4], 0
0x9DE4D2: call    SettingCollectionList_AddSetting
0x9DE4D7: push    offset sub_A19800; void (__cdecl *)()
0x9DE4DC: call    _atexit
0x9DE4E1: add     esp, 4
0x9DE4E4: mov     ecx, [esp+10h+var_C]
0x9DE4E8: mov     large fs:0, ecx
0x9DE4EF: pop     ecx
0x9DE4F0: add     esp, 0Ch
0x9DE4F3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B1150: mov     ecx, offset flt_B06E7C
0x9B1155: jmp     loc_403BC0
0x9B115A: mov     edx, [esp+arg_4]
0x9B115E: lea     eax, [edx]
0x9B1160: mov     ecx, [edx-4]
0x9B1163: xor     ecx, eax
0x9B1165: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B116A: mov     eax, offset stru_ADD36C
0x9B116F: jmp     ___CxxFrameHandler3
