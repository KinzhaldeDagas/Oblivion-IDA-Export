0x9DCBE0: push    0FFFFFFFFh
0x9DCBE2: push    offset SEH_9DCBE0
0x9DCBE7: mov     eax, large fs:0
0x9DCBED: push    eax
0x9DCBEE: mov     eax, ___security_cookie
0x9DCBF3: xor     eax, esp
0x9DCBF5: push    eax
0x9DCBF6: lea     eax, [esp+10h+var_C]
0x9DCBFA: mov     large fs:0, eax
0x9DCC00: push    offset unk_B06C6C
0x9DCC05: mov     ecx, offset INISettingCollection
0x9DCC0A: mov     [esp+14h+var_4], 0
0x9DCC12: call    SettingCollectionList_AddSetting
0x9DCC17: push    offset sub_A18BA0; void (__cdecl *)()
0x9DCC1C: call    _atexit
0x9DCC21: add     esp, 4
0x9DCC24: mov     ecx, [esp+10h+var_C]
0x9DCC28: mov     large fs:0, ecx
0x9DCC2F: pop     ecx
0x9DCC30: add     esp, 0Ch
0x9DCC33: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B04F0: mov     ecx, offset unk_B06C6C
0x9B04F5: jmp     loc_403BC0
0x9B04FA: mov     edx, [esp+arg_4]
0x9B04FE: lea     eax, [edx]
0x9B0500: mov     ecx, [edx-4]
0x9B0503: xor     ecx, eax
0x9B0505: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B050A: mov     eax, offset stru_ADC814
0x9B050F: jmp     ___CxxFrameHandler3
