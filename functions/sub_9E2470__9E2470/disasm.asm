0x9E2470: push    0FFFFFFFFh
0x9E2472: push    offset SEH_9E2470
0x9E2477: mov     eax, large fs:0
0x9E247D: push    eax
0x9E247E: mov     eax, ___security_cookie
0x9E2483: xor     eax, esp
0x9E2485: push    eax
0x9E2486: lea     eax, [esp+10h+var_C]
0x9E248A: mov     large fs:0, eax
0x9E2490: push    offset flt_B08168
0x9E2495: mov     ecx, offset INISettingCollection
0x9E249A: mov     [esp+14h+var_4], 0
0x9E24A2: call    SettingCollectionList_AddSetting
0x9E24A7: push    offset sub_A1B4E0; void (__cdecl *)()
0x9E24AC: call    _atexit
0x9E24B1: add     esp, 4
0x9E24B4: mov     ecx, [esp+10h+var_C]
0x9E24B8: mov     large fs:0, ecx
0x9E24BF: pop     ecx
0x9E24C0: add     esp, 0Ch
0x9E24C3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B31F0: mov     ecx, offset flt_B08168
0x9B31F5: jmp     loc_403BC0
0x9B31FA: mov     edx, [esp+arg_4]
0x9B31FE: lea     eax, [edx]
0x9B3200: mov     ecx, [edx-4]
0x9B3203: xor     ecx, eax
0x9B3205: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B320A: mov     eax, offset stru_ADEF4C
0x9B320F: jmp     ___CxxFrameHandler3
