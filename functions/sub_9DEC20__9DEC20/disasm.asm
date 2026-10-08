0x9DEC20: push    0FFFFFFFFh
0x9DEC22: push    offset SEH_9DEC20
0x9DEC27: mov     eax, large fs:0
0x9DEC2D: push    eax
0x9DEC2E: mov     eax, ___security_cookie
0x9DEC33: xor     eax, esp
0x9DEC35: push    eax
0x9DEC36: lea     eax, [esp+10h+var_C]
0x9DEC3A: mov     large fs:0, eax
0x9DEC40: push    offset word_B06F1C
0x9DEC45: mov     ecx, offset INISettingCollection
0x9DEC4A: mov     [esp+14h+var_4], 0
0x9DEC52: call    SettingCollectionList_AddSetting
0x9DEC57: push    offset sub_A19BC0; void (__cdecl *)()
0x9DEC5C: call    _atexit
0x9DEC61: add     esp, 4
0x9DEC64: mov     ecx, [esp+10h+var_C]
0x9DEC68: mov     large fs:0, ecx
0x9DEC6F: pop     ecx
0x9DEC70: add     esp, 0Ch
0x9DEC73: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B1510: mov     ecx, offset word_B06F1C
0x9B1515: jmp     loc_403BC0
0x9B151A: mov     edx, [esp+arg_4]
0x9B151E: lea     eax, [edx]
0x9B1520: mov     ecx, [edx-4]
0x9B1523: xor     ecx, eax
0x9B1525: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B152A: mov     eax, offset stru_ADD6DC
0x9B152F: jmp     ___CxxFrameHandler3
