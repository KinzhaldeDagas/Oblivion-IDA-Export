0x9E4510: push    0FFFFFFFFh
0x9E4512: push    offset SEH_9E4510
0x9E4517: mov     eax, large fs:0
0x9E451D: push    eax
0x9E451E: mov     eax, ___security_cookie
0x9E4523: xor     eax, esp
0x9E4525: push    eax
0x9E4526: lea     eax, [esp+10h+var_C]
0x9E452A: mov     large fs:0, eax
0x9E4530: push    offset flt_B11A2C
0x9E4535: mov     ecx, offset BlendSettingCollection
0x9E453A: mov     [esp+14h+var_4], 0
0x9E4542: call    SettingCollectionList_AddSetting
0x9E4547: push    offset sub_A1C6D0; void (__cdecl *)()
0x9E454C: call    _atexit
0x9E4551: add     esp, 4
0x9E4554: mov     ecx, [esp+10h+var_C]
0x9E4558: mov     large fs:0, ecx
0x9E455F: pop     ecx
0x9E4560: add     esp, 0Ch
0x9E4563: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B9680: mov     ecx, offset flt_B11A2C
0x9B9685: jmp     loc_403BC0
0x9B968A: mov     edx, [esp+arg_4]
0x9B968E: lea     eax, [edx]
0x9B9690: mov     ecx, [edx-4]
0x9B9693: xor     ecx, eax
0x9B9695: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B969A: mov     eax, offset stru_AE3994
0x9B969F: jmp     ___CxxFrameHandler3
