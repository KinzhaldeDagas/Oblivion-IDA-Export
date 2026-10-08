0x9E3520: push    0FFFFFFFFh
0x9E3522: push    offset SEH_9E3520
0x9E3527: mov     eax, large fs:0
0x9E352D: push    eax
0x9E352E: mov     eax, ___security_cookie
0x9E3533: xor     eax, esp
0x9E3535: push    eax
0x9E3536: lea     eax, [esp+10h+var_C]
0x9E353A: mov     large fs:0, eax
0x9E3540: push    offset bGrassPointLightening
0x9E3545: mov     ecx, offset INISettingCollection
0x9E354A: mov     [esp+14h+var_4], 0
0x9E3552: call    SettingCollectionList_AddSetting
0x9E3557: push    offset sub_A1BE20; void (__cdecl *)()
0x9E355C: call    _atexit
0x9E3561: add     esp, 4
0x9E3564: mov     ecx, [esp+10h+var_C]
0x9E3568: mov     large fs:0, ecx
0x9E356F: pop     ecx
0x9E3570: add     esp, 0Ch
0x9E3573: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B62B0: mov     ecx, offset bGrassPointLightening
0x9B62B5: jmp     loc_403BC0
0x9B62BA: mov     edx, [esp+arg_4]
0x9B62BE: lea     eax, [edx]
0x9B62C0: mov     ecx, [edx-4]
0x9B62C3: xor     ecx, eax
0x9B62C5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B62CA: mov     eax, offset stru_AE11D4
0x9B62CF: jmp     ___CxxFrameHandler3
