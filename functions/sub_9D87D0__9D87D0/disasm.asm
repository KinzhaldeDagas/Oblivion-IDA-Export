0x9D87D0: push    0FFFFFFFFh
0x9D87D2: push    offset SEH_9D87D0
0x9D87D7: mov     eax, large fs:0
0x9D87DD: push    eax
0x9D87DE: mov     eax, ___security_cookie
0x9D87E3: xor     eax, esp
0x9D87E5: push    eax
0x9D87E6: lea     eax, [esp+10h+var_C]
0x9D87EA: mov     large fs:0, eax
0x9D87F0: push    offset off_B02D00
0x9D87F5: mov     ecx, offset INISettingCollection
0x9D87FA: mov     [esp+14h+var_4], 0
0x9D8802: call    SettingCollectionList_AddSetting
0x9D8807: push    offset sub_A169A0; void (__cdecl *)()
0x9D880C: call    _atexit
0x9D8811: add     esp, 4
0x9D8814: mov     ecx, [esp+10h+var_C]
0x9D8818: mov     large fs:0, ecx
0x9D881F: pop     ecx
0x9D8820: add     esp, 0Ch
0x9D8823: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AA420: mov     ecx, offset off_B02D00
0x9AA425: jmp     loc_403BC0
0x9AA42A: mov     edx, [esp+arg_4]
0x9AA42E: lea     eax, [edx]
0x9AA430: mov     ecx, [edx-4]
0x9AA433: xor     ecx, eax
0x9AA435: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AA43A: mov     eax, offset stru_AD740C
0x9AA43F: jmp     ___CxxFrameHandler3
