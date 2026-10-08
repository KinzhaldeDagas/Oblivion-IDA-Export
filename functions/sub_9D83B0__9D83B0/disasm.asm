0x9D83B0: push    0FFFFFFFFh
0x9D83B2: push    offset SEH_9D83B0
0x9D83B7: mov     eax, large fs:0
0x9D83BD: push    eax
0x9D83BE: mov     eax, ___security_cookie
0x9D83C3: xor     eax, esp
0x9D83C5: push    eax
0x9D83C6: lea     eax, [esp+10h+var_C]
0x9D83CA: mov     large fs:0, eax
0x9D83D0: push    offset off_B02CA8
0x9D83D5: mov     ecx, offset INISettingCollection
0x9D83DA: mov     [esp+14h+var_4], 0
0x9D83E2: call    SettingCollectionList_AddSetting
0x9D83E7: push    offset sub_A16790; void (__cdecl *)()
0x9D83EC: call    _atexit
0x9D83F1: add     esp, 4
0x9D83F4: mov     ecx, [esp+10h+var_C]
0x9D83F8: mov     large fs:0, ecx
0x9D83FF: pop     ecx
0x9D8400: add     esp, 0Ch
0x9D8403: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AA210: mov     ecx, offset off_B02CA8
0x9AA215: jmp     loc_403BC0
0x9AA21A: mov     edx, [esp+arg_4]
0x9AA21E: lea     eax, [edx]
0x9AA220: mov     ecx, [edx-4]
0x9AA223: xor     ecx, eax
0x9AA225: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AA22A: mov     eax, offset stru_AD7228
0x9AA22F: jmp     ___CxxFrameHandler3
