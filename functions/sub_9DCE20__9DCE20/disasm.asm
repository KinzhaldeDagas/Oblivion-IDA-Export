0x9DCE20: push    0FFFFFFFFh
0x9DCE22: push    offset SEH_9DCE20
0x9DCE27: mov     eax, large fs:0
0x9DCE2D: push    eax
0x9DCE2E: mov     eax, ___security_cookie
0x9DCE33: xor     eax, esp
0x9DCE35: push    eax
0x9DCE36: lea     eax, [esp+10h+var_C]
0x9DCE3A: mov     large fs:0, eax
0x9DCE40: push    offset unk_B06C9C
0x9DCE45: mov     ecx, offset INISettingCollection
0x9DCE4A: mov     [esp+14h+var_4], 0
0x9DCE52: call    SettingCollectionList_AddSetting
0x9DCE57: push    offset sub_A18CC0; void (__cdecl *)()
0x9DCE5C: call    _atexit
0x9DCE61: add     esp, 4
0x9DCE64: mov     ecx, [esp+10h+var_C]
0x9DCE68: mov     large fs:0, ecx
0x9DCE6F: pop     ecx
0x9DCE70: add     esp, 0Ch
0x9DCE73: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B0610: mov     ecx, offset unk_B06C9C
0x9B0615: jmp     loc_403BC0
0x9B061A: mov     edx, [esp+arg_4]
0x9B061E: lea     eax, [edx]
0x9B0620: mov     ecx, [edx-4]
0x9B0623: xor     ecx, eax
0x9B0625: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B062A: mov     eax, offset stru_ADC91C
0x9B062F: jmp     ___CxxFrameHandler3
