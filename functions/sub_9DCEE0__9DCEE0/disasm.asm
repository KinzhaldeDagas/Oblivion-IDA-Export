0x9DCEE0: push    0FFFFFFFFh
0x9DCEE2: push    offset SEH_9DCEE0
0x9DCEE7: mov     eax, large fs:0
0x9DCEED: push    eax
0x9DCEEE: mov     eax, ___security_cookie
0x9DCEF3: xor     eax, esp
0x9DCEF5: push    eax
0x9DCEF6: lea     eax, [esp+10h+var_C]
0x9DCEFA: mov     large fs:0, eax
0x9DCF00: push    offset byte_B06CAC
0x9DCF05: mov     ecx, offset INISettingCollection
0x9DCF0A: mov     [esp+14h+var_4], 0
0x9DCF12: call    SettingCollectionList_AddSetting
0x9DCF17: push    offset sub_A18D20; void (__cdecl *)()
0x9DCF1C: call    _atexit
0x9DCF21: add     esp, 4
0x9DCF24: mov     ecx, [esp+10h+var_C]
0x9DCF28: mov     large fs:0, ecx
0x9DCF2F: pop     ecx
0x9DCF30: add     esp, 0Ch
0x9DCF33: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B0670: mov     ecx, offset byte_B06CAC
0x9B0675: jmp     loc_403BC0
0x9B067A: mov     edx, [esp+arg_4]
0x9B067E: lea     eax, [edx]
0x9B0680: mov     ecx, [edx-4]
0x9B0683: xor     ecx, eax
0x9B0685: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B068A: mov     eax, offset stru_ADC974
0x9B068F: jmp     ___CxxFrameHandler3
