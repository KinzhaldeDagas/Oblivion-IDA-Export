0x9DE2C0: push    0FFFFFFFFh
0x9DE2C2: push    offset SEH_9DE2C0
0x9DE2C7: mov     eax, large fs:0
0x9DE2CD: push    eax
0x9DE2CE: mov     eax, ___security_cookie
0x9DE2D3: xor     eax, esp
0x9DE2D5: push    eax
0x9DE2D6: lea     eax, [esp+10h+var_C]
0x9DE2DA: mov     large fs:0, eax
0x9DE2E0: push    offset flt_B06E54
0x9DE2E5: mov     ecx, offset INISettingCollection
0x9DE2EA: mov     [esp+14h+var_4], 0
0x9DE2F2: call    SettingCollectionList_AddSetting
0x9DE2F7: push    offset sub_A19710; void (__cdecl *)()
0x9DE2FC: call    _atexit
0x9DE301: add     esp, 4
0x9DE304: mov     ecx, [esp+10h+var_C]
0x9DE308: mov     large fs:0, ecx
0x9DE30F: pop     ecx
0x9DE310: add     esp, 0Ch
0x9DE313: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B1060: mov     ecx, offset flt_B06E54
0x9B1065: jmp     loc_403BC0
0x9B106A: mov     edx, [esp+arg_4]
0x9B106E: lea     eax, [edx]
0x9B1070: mov     ecx, [edx-4]
0x9B1073: xor     ecx, eax
0x9B1075: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B107A: mov     eax, offset stru_ADD290
0x9B107F: jmp     ___CxxFrameHandler3
