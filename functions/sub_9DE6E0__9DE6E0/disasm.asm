0x9DE6E0: push    0FFFFFFFFh
0x9DE6E2: push    offset SEH_9DE6E0
0x9DE6E7: mov     eax, large fs:0
0x9DE6ED: push    eax
0x9DE6EE: mov     eax, ___security_cookie
0x9DE6F3: xor     eax, esp
0x9DE6F5: push    eax
0x9DE6F6: lea     eax, [esp+10h+var_C]
0x9DE6FA: mov     large fs:0, eax
0x9DE700: push    offset flt_B06EAC
0x9DE705: mov     ecx, offset INISettingCollection
0x9DE70A: mov     [esp+14h+var_4], 0
0x9DE712: call    SettingCollectionList_AddSetting
0x9DE717: push    offset sub_A19920; void (__cdecl *)()
0x9DE71C: call    _atexit
0x9DE721: add     esp, 4
0x9DE724: mov     ecx, [esp+10h+var_C]
0x9DE728: mov     large fs:0, ecx
0x9DE72F: pop     ecx
0x9DE730: add     esp, 0Ch
0x9DE733: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B1270: mov     ecx, offset flt_B06EAC
0x9B1275: jmp     loc_403BC0
0x9B127A: mov     edx, [esp+arg_4]
0x9B127E: lea     eax, [edx]
0x9B1280: mov     ecx, [edx-4]
0x9B1283: xor     ecx, eax
0x9B1285: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B128A: mov     eax, offset stru_ADD474
0x9B128F: jmp     ___CxxFrameHandler3
