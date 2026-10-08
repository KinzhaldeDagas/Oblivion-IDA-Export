0x9FDFA0: push    0FFFFFFFFh
0x9FDFA2: push    offset SEH_9FDFA0
0x9FDFA7: mov     eax, large fs:0
0x9FDFAD: push    eax
0x9FDFAE: mov     eax, ___security_cookie
0x9FDFB3: xor     eax, esp
0x9FDFB5: push    eax
0x9FDFB6: lea     eax, [esp+10h+var_C]
0x9FDFBA: mov     large fs:0, eax
0x9FDFC0: push    offset fJoystickMoveFBMult
0x9FDFC5: mov     ecx, offset INISettingCollection
0x9FDFCA: mov     [esp+14h+var_4], 0
0x9FDFD2: call    SettingCollectionList_AddSetting
0x9FDFD7: push    offset sub_A25AD0; void (__cdecl *)()
0x9FDFDC: call    _atexit
0x9FDFE1: add     esp, 4
0x9FDFE4: mov     ecx, [esp+10h+var_C]
0x9FDFE8: mov     large fs:0, ecx
0x9FDFEF: pop     ecx
0x9FDFF0: add     esp, 0Ch
0x9FDFF3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C4540: mov     ecx, offset fJoystickMoveFBMult
0x9C4545: jmp     loc_403BC0
0x9C454A: mov     edx, [esp+arg_4]
0x9C454E: lea     eax, [edx]
0x9C4550: mov     ecx, [edx-4]
0x9C4553: xor     ecx, eax
0x9C4555: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C455A: mov     eax, offset stru_AECEF0
0x9C455F: jmp     ___CxxFrameHandler3
