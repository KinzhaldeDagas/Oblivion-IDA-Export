0x9F9530: push    0FFFFFFFFh
0x9F9532: push    offset SEH_9F9530
0x9F9537: mov     eax, large fs:0
0x9F953D: push    eax
0x9F953E: mov     eax, ___security_cookie
0x9F9543: xor     eax, esp
0x9F9545: push    eax
0x9F9546: lea     eax, [esp+10h+var_C]
0x9F954A: mov     large fs:0, eax
0x9F9550: push    offset bTreetops
0x9F9555: mov     ecx, offset INISettingCollection
0x9F955A: mov     [esp+14h+var_4], 0
0x9F9562: call    SettingCollectionList_AddSetting
0x9F9567: push    offset sub_A23820; void (__cdecl *)()
0x9F956C: call    _atexit
0x9F9571: add     esp, 4
0x9F9574: mov     ecx, [esp+10h+var_C]
0x9F9578: mov     large fs:0, ecx
0x9F957F: pop     ecx
0x9F9580: add     esp, 0Ch
0x9F9583: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9BD680: mov     ecx, offset bTreetops
0x9BD685: jmp     loc_403BC0
0x9BD68A: mov     edx, [esp+arg_4]
0x9BD68E: lea     eax, [edx]
0x9BD690: mov     ecx, [edx-4]
0x9BD693: xor     ecx, eax
0x9BD695: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BD69A: mov     eax, offset stru_AE6FC4
0x9BD69F: jmp     ___CxxFrameHandler3
