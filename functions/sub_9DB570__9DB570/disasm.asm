0x9DB570: push    0FFFFFFFFh
0x9DB572: push    offset SEH_9DB570
0x9DB577: mov     eax, large fs:0
0x9DB57D: push    eax
0x9DB57E: mov     eax, ___security_cookie
0x9DB583: xor     eax, esp
0x9DB585: push    eax
0x9DB586: lea     eax, [esp+10h+var_C]
0x9DB58A: mov     large fs:0, eax
0x9DB590: push    offset unk_B05254
0x9DB595: mov     ecx, offset INISettingCollection
0x9DB59A: mov     [esp+14h+var_4], 0
0x9DB5A2: call    SettingCollectionList_AddSetting
0x9DB5A7: push    offset sub_A18010; void (__cdecl *)()
0x9DB5AC: call    _atexit
0x9DB5B1: add     esp, 4
0x9DB5B4: mov     ecx, [esp+10h+var_C]
0x9DB5B8: mov     large fs:0, ecx
0x9DB5BF: pop     ecx
0x9DB5C0: add     esp, 0Ch
0x9DB5C3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AD5A0: mov     ecx, offset unk_B05254
0x9AD5A5: jmp     loc_403BC0
0x9AD5AA: mov     edx, [esp+arg_4]
0x9AD5AE: lea     eax, [edx]
0x9AD5B0: mov     ecx, [edx-4]
0x9AD5B3: xor     ecx, eax
0x9AD5B5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AD5BA: mov     eax, offset stru_ADA11C
0x9AD5BF: jmp     ___CxxFrameHandler3
