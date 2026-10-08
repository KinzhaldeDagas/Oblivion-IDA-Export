0x9FB0A0: push    0FFFFFFFFh
0x9FB0A2: push    offset SEH_9FB0A0
0x9FB0A7: mov     eax, large fs:0
0x9FB0AD: push    eax
0x9FB0AE: mov     eax, ___security_cookie
0x9FB0B3: xor     eax, esp
0x9FB0B5: push    eax
0x9FB0B6: lea     eax, [esp+10h+var_C]
0x9FB0BA: mov     large fs:0, eax
0x9FB0C0: push    offset byte_B13220
0x9FB0C5: mov     ecx, offset INISettingCollection
0x9FB0CA: mov     [esp+14h+var_4], 0
0x9FB0D2: call    SettingCollectionList_AddSetting
0x9FB0D7: push    offset sub_A24490; void (__cdecl *)()
0x9FB0DC: call    _atexit
0x9FB0E1: add     esp, 4
0x9FB0E4: mov     ecx, [esp+10h+var_C]
0x9FB0E8: mov     large fs:0, ecx
0x9FB0EF: pop     ecx
0x9FB0F0: add     esp, 0Ch
0x9FB0F3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9BE8E0: mov     ecx, offset byte_B13220
0x9BE8E5: jmp     loc_403BC0
0x9BE8EA: mov     edx, [esp+arg_4]
0x9BE8EE: lea     eax, [edx]
0x9BE8F0: mov     ecx, [edx-4]
0x9BE8F3: xor     ecx, eax
0x9BE8F5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BE8FA: mov     eax, offset stru_AE7FCC
0x9BE8FF: jmp     ___CxxFrameHandler3
