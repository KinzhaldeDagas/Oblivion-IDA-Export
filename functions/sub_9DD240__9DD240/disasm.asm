0x9DD240: push    0FFFFFFFFh; Register bDoStaticAndArchShadows:Display setting at 0x00B06CF4.
0x9DD242: push    offset SEH_9DD240
0x9DD247: mov     eax, large fs:0
0x9DD24D: push    eax
0x9DD24E: mov     eax, ___security_cookie
0x9DD253: xor     eax, esp
0x9DD255: push    eax
0x9DD256: lea     eax, [esp+10h+var_C]
0x9DD25A: mov     large fs:0, eax
0x9DD260: push    offset g_bDoStaticAndArchShadowsSetting
0x9DD265: mov     ecx, offset INISettingCollection
0x9DD26A: mov     [esp+14h+var_4], 0
0x9DD272: call    SettingCollectionList_AddSetting
0x9DD277: push    offset sub_A18ED0; void (__cdecl *)()
0x9DD27C: call    _atexit
0x9DD281: add     esp, 4
0x9DD284: mov     ecx, [esp+10h+var_C]
0x9DD288: mov     large fs:0, ecx
0x9DD28F: pop     ecx
0x9DD290: add     esp, 0Ch
0x9DD293: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B0820: mov     ecx, offset g_bDoStaticAndArchShadowsSetting
0x9B0825: jmp     loc_403BC0
0x9B082A: mov     edx, [esp+arg_4]
0x9B082E: lea     eax, [edx]
0x9B0830: mov     ecx, [edx-4]
0x9B0833: xor     ecx, eax
0x9B0835: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B083A: mov     eax, offset stru_ADCB00
0x9B083F: jmp     ___CxxFrameHandler3
