0x9DE500: push    0FFFFFFFFh
0x9DE502: push    offset SEH_9DE500
0x9DE507: mov     eax, large fs:0
0x9DE50D: push    eax
0x9DE50E: mov     eax, ___security_cookie
0x9DE513: xor     eax, esp
0x9DE515: push    eax
0x9DE516: lea     eax, [esp+10h+var_C]
0x9DE51A: mov     large fs:0, eax
0x9DE520: push    offset flt_B06E84
0x9DE525: mov     ecx, offset INISettingCollection
0x9DE52A: mov     [esp+14h+var_4], 0
0x9DE532: call    SettingCollectionList_AddSetting
0x9DE537: push    offset sub_A19830; void (__cdecl *)()
0x9DE53C: call    _atexit
0x9DE541: add     esp, 4
0x9DE544: mov     ecx, [esp+10h+var_C]
0x9DE548: mov     large fs:0, ecx
0x9DE54F: pop     ecx
0x9DE550: add     esp, 0Ch
0x9DE553: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B1180: mov     ecx, offset flt_B06E84
0x9B1185: jmp     loc_403BC0
0x9B118A: mov     edx, [esp+arg_4]
0x9B118E: lea     eax, [edx]
0x9B1190: mov     ecx, [edx-4]
0x9B1193: xor     ecx, eax
0x9B1195: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B119A: mov     eax, offset stru_ADD398
0x9B119F: jmp     ___CxxFrameHandler3
