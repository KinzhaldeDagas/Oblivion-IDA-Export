0x9DB270: push    0FFFFFFFFh
0x9DB272: push    offset SEH_9DB270
0x9DB277: mov     eax, large fs:0
0x9DB27D: push    eax
0x9DB27E: mov     eax, ___security_cookie
0x9DB283: xor     eax, esp
0x9DB285: push    eax
0x9DB286: lea     eax, [esp+10h+var_C]
0x9DB28A: mov     large fs:0, eax
0x9DB290: push    offset bBipedWhenKeyframed
0x9DB295: mov     ecx, offset INISettingCollection
0x9DB29A: mov     [esp+14h+var_4], 0
0x9DB2A2: call    SettingCollectionList_AddSetting
0x9DB2A7: push    offset sub_A17EA0; void (__cdecl *)()
0x9DB2AC: call    _atexit
0x9DB2B1: add     esp, 4
0x9DB2B4: mov     ecx, [esp+10h+var_C]
0x9DB2B8: mov     large fs:0, ecx
0x9DB2BF: pop     ecx
0x9DB2C0: add     esp, 0Ch
0x9DB2C3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AD450: mov     ecx, offset bBipedWhenKeyframed
0x9AD455: jmp     loc_403BC0
0x9AD45A: mov     edx, [esp+arg_4]
0x9AD45E: lea     eax, [edx]
0x9AD460: mov     ecx, [edx-4]
0x9AD463: xor     ecx, eax
0x9AD465: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AD46A: mov     eax, offset stru_AD9FE8
0x9AD46F: jmp     ___CxxFrameHandler3
