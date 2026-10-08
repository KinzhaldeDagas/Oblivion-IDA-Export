0x9DB4B0: push    0FFFFFFFFh
0x9DB4B2: push    offset SEH_9DB4B0
0x9DB4B7: mov     eax, large fs:0
0x9DB4BD: push    eax
0x9DB4BE: mov     eax, ___security_cookie
0x9DB4C3: xor     eax, esp
0x9DB4C5: push    eax
0x9DB4C6: lea     eax, [esp+10h+var_C]
0x9DB4CA: mov     large fs:0, eax
0x9DB4D0: push    offset byte_B05244
0x9DB4D5: mov     ecx, offset INISettingCollection
0x9DB4DA: mov     [esp+14h+var_4], 0
0x9DB4E2: call    SettingCollectionList_AddSetting
0x9DB4E7: push    offset sub_A17FB0; void (__cdecl *)()
0x9DB4EC: call    _atexit
0x9DB4F1: add     esp, 4
0x9DB4F4: mov     ecx, [esp+10h+var_C]
0x9DB4F8: mov     large fs:0, ecx
0x9DB4FF: pop     ecx
0x9DB500: add     esp, 0Ch
0x9DB503: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AD540: mov     ecx, offset byte_B05244
0x9AD545: jmp     loc_403BC0
0x9AD54A: mov     edx, [esp+arg_4]
0x9AD54E: lea     eax, [edx]
0x9AD550: mov     ecx, [edx-4]
0x9AD553: xor     ecx, eax
0x9AD555: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AD55A: mov     eax, offset stru_ADA0C4
0x9AD55F: jmp     ___CxxFrameHandler3
