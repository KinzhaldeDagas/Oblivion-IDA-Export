0x6E5550: push    0FFFFFFFFh
0x6E5552: push    offset SEH_8C62B0
0x6E5557: mov     eax, large fs:0
0x6E555D: push    eax
0x6E555E: push    ecx
0x6E555F: push    esi
0x6E5560: mov     eax, ds:0B30AACh
0x6E5565: xor     eax, esp
0x6E5567: push    eax
0x6E5568: lea     eax, [esp+18h+var_C]
0x6E556C: mov     large fs:0, eax
0x6E5572: push    24h ; '$'; Size
0x6E5574: call    FormHeapAlloc
0x6E5579: mov     esi, eax
0x6E557B: add     esp, 4
0x6E557E: mov     [esp+18h+var_10], esi
0x6E5582: xor     eax, eax
0x6E5584: cmp     esi, eax
0x6E5586: mov     [esp+18h+var_4], eax
0x6E558A: jz      short loc_6E55A4
0x6E558C: push    eax
0x6E558D: push    eax
0x6E558E: mov     ecx, esi; this
0x6E5590: call    ??0NiBSplineInterpolator@@QAE@XZ; NiBSplineInterpolator::NiBSplineInterpolator(void)
0x6E5595: mov     dword ptr [esi], offset ??_7NiBSplineFloatInterpolator@@6B@; const NiBSplineFloatInterpolator::`vftable'
0x6E559B: mov     dword ptr [esi+20h], 0FFFFh
0x6E55A2: mov     eax, esi
0x6E55A4: mov     ecx, [esp+18h+var_C]
0x6E55A8: mov     large fs:0, ecx
0x6E55AF: pop     ecx
0x6E55B0: pop     esi
0x6E55B1: add     esp, 10h
0x6E55B4: retn
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
