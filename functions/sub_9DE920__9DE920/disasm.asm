0x9DE920: push    0FFFFFFFFh
0x9DE922: push    offset SEH_9DE920
0x9DE927: mov     eax, large fs:0
0x9DE92D: push    eax
0x9DE92E: mov     eax, ___security_cookie
0x9DE933: xor     eax, esp
0x9DE935: push    eax
0x9DE936: lea     eax, [esp+10h+var_C]
0x9DE93A: mov     large fs:0, eax
0x9DE940: push    offset flt_B06EDC
0x9DE945: mov     ecx, offset INISettingCollection
0x9DE94A: mov     [esp+14h+var_4], 0
0x9DE952: call    SettingCollectionList_AddSetting
0x9DE957: push    offset sub_A19A40; void (__cdecl *)()
0x9DE95C: call    _atexit
0x9DE961: add     esp, 4
0x9DE964: mov     ecx, [esp+10h+var_C]
0x9DE968: mov     large fs:0, ecx
0x9DE96F: pop     ecx
0x9DE970: add     esp, 0Ch
0x9DE973: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B1390: mov     ecx, offset flt_B06EDC
0x9B1395: jmp     loc_403BC0
0x9B139A: mov     edx, [esp+arg_4]
0x9B139E: lea     eax, [edx]
0x9B13A0: mov     ecx, [edx-4]
0x9B13A3: xor     ecx, eax
0x9B13A5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B13AA: mov     eax, offset stru_ADD57C
0x9B13AF: jmp     ___CxxFrameHandler3
