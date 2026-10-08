0x9DE080: push    0FFFFFFFFh
0x9DE082: push    offset SEH_9DE080
0x9DE087: mov     eax, large fs:0
0x9DE08D: push    eax
0x9DE08E: mov     eax, ___security_cookie
0x9DE093: xor     eax, esp
0x9DE095: push    eax
0x9DE096: lea     eax, [esp+10h+var_C]
0x9DE09A: mov     large fs:0, eax
0x9DE0A0: push    offset flt_B06E24
0x9DE0A5: mov     ecx, offset INISettingCollection
0x9DE0AA: mov     [esp+14h+var_4], 0
0x9DE0B2: call    SettingCollectionList_AddSetting
0x9DE0B7: push    offset sub_A195F0; void (__cdecl *)()
0x9DE0BC: call    _atexit
0x9DE0C1: add     esp, 4
0x9DE0C4: mov     ecx, [esp+10h+var_C]
0x9DE0C8: mov     large fs:0, ecx
0x9DE0CF: pop     ecx
0x9DE0D0: add     esp, 0Ch
0x9DE0D3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B0F40: mov     ecx, offset flt_B06E24
0x9B0F45: jmp     loc_403BC0
0x9B0F4A: mov     edx, [esp+arg_4]
0x9B0F4E: lea     eax, [edx]
0x9B0F50: mov     ecx, [edx-4]
0x9B0F53: xor     ecx, eax
0x9B0F55: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B0F5A: mov     eax, offset stru_ADD188
0x9B0F5F: jmp     ___CxxFrameHandler3
