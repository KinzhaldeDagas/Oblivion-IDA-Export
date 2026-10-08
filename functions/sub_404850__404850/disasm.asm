0x404850: push    0FFFFFFFFh
0x404852: push    offset SEH_404850
0x404857: mov     eax, large fs:0
0x40485D: push    eax
0x40485E: push    ecx
0x40485F: push    esi
0x404860: mov     eax, ___security_cookie
0x404865: xor     eax, esp
0x404867: push    eax
0x404868: lea     eax, [esp+18h+var_C]
0x40486C: mov     large fs:0, eax
0x404872: mov     esi, ecx
0x404874: mov     [esp+18h+var_10], esi
0x404878: mov     eax, [esp+18h+arg_0]
0x40487C: fld     [esp+18h+arg_4]
0x404880: fstp    dword ptr [esi]
0x404882: mov     [esi+4], eax
0x404885: push    esi
0x404886: mov     ecx, offset INISettingCollection
0x40488B: mov     [esp+1Ch+var_4], 0
0x404893: call    SettingCollectionList_AddSetting
0x404898: mov     eax, esi
0x40489A: mov     ecx, [esp+18h+var_C]
0x40489E: mov     large fs:0, ecx
0x4048A5: pop     ecx
0x4048A6: pop     esi
0x4048A7: add     esp, 10h
0x4048AA: retn    8
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AB570: mov     ecx, [ebp-10h]
0x9AB573: jmp     loc_403BC0
0x9AB578: mov     edx, [esp+arg_4]
0x9AB57C: lea     eax, [edx-8]
0x9AB57F: mov     ecx, [edx-0Ch]
0x9AB582: xor     ecx, eax
0x9AB584: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AB589: mov     eax, offset stru_AD8444
0x9AB58E: jmp     ___CxxFrameHandler3
