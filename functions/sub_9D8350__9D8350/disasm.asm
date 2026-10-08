0x9D8350: push    0FFFFFFFFh
0x9D8352: push    offset SEH_9D8350
0x9D8357: mov     eax, large fs:0
0x9D835D: push    eax
0x9D835E: mov     eax, ___security_cookie
0x9D8363: xor     eax, esp
0x9D8365: push    eax
0x9D8366: lea     eax, [esp+10h+var_C]
0x9D836A: mov     large fs:0, eax
0x9D8370: push    offset off_B02CA0
0x9D8375: mov     ecx, offset INISettingCollection
0x9D837A: mov     [esp+14h+var_4], 0
0x9D8382: call    SettingCollectionList_AddSetting
0x9D8387: push    offset sub_A16760; void (__cdecl *)()
0x9D838C: call    _atexit
0x9D8391: add     esp, 4
0x9D8394: mov     ecx, [esp+10h+var_C]
0x9D8398: mov     large fs:0, ecx
0x9D839F: pop     ecx
0x9D83A0: add     esp, 0Ch
0x9D83A3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AA1E0: mov     ecx, offset off_B02CA0
0x9AA1E5: jmp     loc_403BC0
0x9AA1EA: mov     edx, [esp+arg_4]
0x9AA1EE: lea     eax, [edx]
0x9AA1F0: mov     ecx, [edx-4]
0x9AA1F3: xor     ecx, eax
0x9AA1F5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AA1FA: mov     eax, offset stru_AD71FC
0x9AA1FF: jmp     ___CxxFrameHandler3
