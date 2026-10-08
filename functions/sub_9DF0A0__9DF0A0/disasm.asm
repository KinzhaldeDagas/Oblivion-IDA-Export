0x9DF0A0: push    0FFFFFFFFh
0x9DF0A2: push    offset SEH_9DF0A0
0x9DF0A7: mov     eax, large fs:0
0x9DF0AD: push    eax
0x9DF0AE: mov     eax, ___security_cookie
0x9DF0B3: xor     eax, esp
0x9DF0B5: push    eax
0x9DF0B6: lea     eax, [esp+10h+var_C]
0x9DF0BA: mov     large fs:0, eax
0x9DF0C0: push    offset flt_B06F7C
0x9DF0C5: mov     ecx, offset INISettingCollection
0x9DF0CA: mov     [esp+14h+var_4], 0
0x9DF0D2: call    SettingCollectionList_AddSetting
0x9DF0D7: push    offset sub_A19E00; void (__cdecl *)()
0x9DF0DC: call    _atexit
0x9DF0E1: add     esp, 4
0x9DF0E4: mov     ecx, [esp+10h+var_C]
0x9DF0E8: mov     large fs:0, ecx
0x9DF0EF: pop     ecx
0x9DF0F0: add     esp, 0Ch
0x9DF0F3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B1750: mov     ecx, offset flt_B06F7C
0x9B1755: jmp     loc_403BC0
0x9B175A: mov     edx, [esp+arg_4]
0x9B175E: lea     eax, [edx]
0x9B1760: mov     ecx, [edx-4]
0x9B1763: xor     ecx, eax
0x9B1765: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B176A: mov     eax, offset stru_ADD8EC
0x9B176F: jmp     ___CxxFrameHandler3
