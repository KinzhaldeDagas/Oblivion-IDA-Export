0x9E0570: push    0FFFFFFFFh
0x9E0572: push    offset SEH_9E0570
0x9E0577: mov     eax, large fs:0
0x9E057D: push    eax
0x9E057E: mov     eax, ___security_cookie
0x9E0583: xor     eax, esp
0x9E0585: push    eax
0x9E0586: lea     eax, [esp+10h+var_C]
0x9E058A: mov     large fs:0, eax
0x9E0590: push    offset byte_B0763C
0x9E0595: mov     ecx, offset INISettingCollection
0x9E059A: mov     [esp+14h+var_4], 0
0x9E05A2: call    SettingCollectionList_AddSetting
0x9E05A7: push    offset sub_A1A910; void (__cdecl *)()
0x9E05AC: call    _atexit
0x9E05B1: add     esp, 4
0x9E05B4: mov     ecx, [esp+10h+var_C]
0x9E05B8: mov     large fs:0, ecx
0x9E05BF: pop     ecx
0x9E05C0: add     esp, 0Ch
0x9E05C3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B25C0: mov     ecx, offset byte_B0763C
0x9B25C5: jmp     loc_403BC0
0x9B25CA: mov     edx, [esp+arg_4]
0x9B25CE: lea     eax, [edx]
0x9B25D0: mov     ecx, [edx-4]
0x9B25D3: xor     ecx, eax
0x9B25D5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B25DA: mov     eax, offset stru_ADE574
0x9B25DF: jmp     ___CxxFrameHandler3
