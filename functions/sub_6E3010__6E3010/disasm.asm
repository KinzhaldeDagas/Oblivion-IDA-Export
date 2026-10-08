0x6E3010: push    0FFFFFFFFh
0x6E3012: push    offset SEH_8C62B0
0x6E3017: mov     eax, large fs:0
0x6E301D: push    eax
0x6E301E: push    ecx
0x6E301F: push    esi
0x6E3020: mov     eax, ds:0B30AACh
0x6E3025: xor     eax, esp
0x6E3027: push    eax
0x6E3028: lea     eax, [esp+18h+var_C]
0x6E302C: mov     large fs:0, eax
0x6E3032: push    48h ; 'H'; Size
0x6E3034: call    FormHeapAlloc
0x6E3039: mov     esi, eax
0x6E303B: add     esp, 4
0x6E303E: mov     [esp+18h+var_10], esi
0x6E3042: xor     eax, eax
0x6E3044: cmp     esi, eax
0x6E3046: mov     [esp+18h+var_4], eax
0x6E304A: jz      short loc_6E305B
0x6E304C: mov     ecx, esi; this
0x6E304E: call    ??0NiExtraDataController@@QAE@XZ; NiExtraDataController::NiExtraDataController(void)
0x6E3053: mov     dword ptr [esi], offset ??_7NiFloatExtraDataController@@6B@; const NiFloatExtraDataController::`vftable'
0x6E3059: mov     eax, esi
0x6E305B: mov     ecx, [esp+18h+var_C]
0x6E305F: mov     large fs:0, ecx
0x6E3066: pop     ecx
0x6E3067: pop     esi
0x6E3068: add     esp, 10h
0x6E306B: retn
0x9D62E0: mov     eax, [ebp-10h]
0x9D62E3: push    eax
0x9D62E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D62E9: pop     ecx
0x9D62EA: retn
0x9D62EB: mov     edx, [esp+arg_4]
0x9D62EF: lea     eax, [edx-8]
0x9D62F2: mov     ecx, [edx-0Ch]
0x9D62F5: xor     ecx, eax
0x9D62F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D62FC: mov     eax, offset stru_AFE21C
0x9D6301: jmp     ___CxxFrameHandler3
