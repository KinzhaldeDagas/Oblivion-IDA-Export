0x9DC0A0: push    0FFFFFFFFh
0x9DC0A2: push    offset SEH_9DC0A0
0x9DC0A7: mov     eax, large fs:0
0x9DC0AD: push    eax
0x9DC0AE: mov     eax, ___security_cookie
0x9DC0B3: xor     eax, esp
0x9DC0B5: push    eax
0x9DC0B6: lea     eax, [esp+10h+var_C]
0x9DC0BA: mov     large fs:0, eax
0x9DC0C0: push    offset flt_B06538
0x9DC0C5: mov     ecx, offset INISettingCollection
0x9DC0CA: mov     [esp+14h+var_4], 0
0x9DC0D2: call    SettingCollectionList_AddSetting
0x9DC0D7: push    offset sub_A185B0; void (__cdecl *)()
0x9DC0DC: call    _atexit
0x9DC0E1: add     esp, 4
0x9DC0E4: mov     ecx, [esp+10h+var_C]
0x9DC0E8: mov     large fs:0, ecx
0x9DC0EF: pop     ecx
0x9DC0F0: add     esp, 0Ch
0x9DC0F3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AEF10: mov     ecx, offset flt_B06538
0x9AEF15: jmp     loc_403BC0
0x9AEF1A: mov     edx, [esp+arg_4]
0x9AEF1E: lea     eax, [edx]
0x9AEF20: mov     ecx, [edx-4]
0x9AEF23: xor     ecx, eax
0x9AEF25: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AEF2A: mov     eax, offset stru_ADB5CC
0x9AEF2F: jmp     ___CxxFrameHandler3
