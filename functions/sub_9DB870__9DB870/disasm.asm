0x9DB870: push    0FFFFFFFFh
0x9DB872: push    offset SEH_9DB870
0x9DB877: mov     eax, large fs:0
0x9DB87D: push    eax
0x9DB87E: mov     eax, ___security_cookie
0x9DB883: xor     eax, esp
0x9DB885: push    eax
0x9DB886: lea     eax, [esp+10h+var_C]
0x9DB88A: mov     large fs:0, eax
0x9DB890: push    offset off_B0557C; "One or more plugins could not find the "...
0x9DB895: mov     ecx, offset INISettingCollection
0x9DB89A: mov     [esp+14h+var_4], 0
0x9DB8A2: call    SettingCollectionList_AddSetting
0x9DB8A7: push    offset sub_A18180; void (__cdecl *)()
0x9DB8AC: call    _atexit
0x9DB8B1: add     esp, 4
0x9DB8B4: mov     ecx, [esp+10h+var_C]
0x9DB8B8: mov     large fs:0, ecx
0x9DB8BF: pop     ecx
0x9DB8C0: add     esp, 0Ch
0x9DB8C3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9ADEA0: mov     ecx, offset off_B0557C; "One or more plugins could not find the "...
0x9ADEA5: jmp     loc_403BC0
0x9ADEAA: mov     edx, [esp+arg_4]
0x9ADEAE: lea     eax, [edx]
0x9ADEB0: mov     ecx, [edx-4]
0x9ADEB3: xor     ecx, eax
0x9ADEB5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9ADEBA: mov     eax, offset stru_ADA7BC
0x9ADEBF: jmp     ___CxxFrameHandler3
