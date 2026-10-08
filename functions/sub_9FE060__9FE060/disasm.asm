0x9FE060: push    0FFFFFFFFh
0x9FE062: push    offset SEH_9FE060
0x9FE067: mov     eax, large fs:0
0x9FE06D: push    eax
0x9FE06E: mov     eax, ___security_cookie
0x9FE073: xor     eax, esp
0x9FE075: push    eax
0x9FE076: lea     eax, [esp+10h+var_C]
0x9FE07A: mov     large fs:0, eax
0x9FE080: push    offset fJoystickLookUDMult
0x9FE085: mov     ecx, offset INISettingCollection
0x9FE08A: mov     [esp+14h+var_4], 0
0x9FE092: call    SettingCollectionList_AddSetting
0x9FE097: push    offset sub_A25B30; void (__cdecl *)()
0x9FE09C: call    _atexit
0x9FE0A1: add     esp, 4
0x9FE0A4: mov     ecx, [esp+10h+var_C]
0x9FE0A8: mov     large fs:0, ecx
0x9FE0AF: pop     ecx
0x9FE0B0: add     esp, 0Ch
0x9FE0B3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C45A0: mov     ecx, offset fJoystickLookUDMult
0x9C45A5: jmp     loc_403BC0
0x9C45AA: mov     edx, [esp+arg_4]
0x9C45AE: lea     eax, [edx]
0x9C45B0: mov     ecx, [edx-4]
0x9C45B3: xor     ecx, eax
0x9C45B5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C45BA: mov     eax, offset stru_AECF48
0x9C45BF: jmp     ___CxxFrameHandler3
