0x6E5160: push    0FFFFFFFFh
0x6E5162: push    offset SEH_8C62B0
0x6E5167: mov     eax, large fs:0
0x6E516D: push    eax
0x6E516E: push    ecx
0x6E516F: push    esi
0x6E5170: mov     eax, ds:0B30AACh
0x6E5175: xor     eax, esp
0x6E5177: push    eax
0x6E5178: lea     eax, [esp+18h+var_C]
0x6E517C: mov     large fs:0, eax
0x6E5182: push    2Ch ; ','; Size
0x6E5184: call    FormHeapAlloc
0x6E5189: mov     esi, eax
0x6E518B: add     esp, 4
0x6E518E: mov     [esp+18h+var_10], esi
0x6E5192: xor     eax, eax
0x6E5194: cmp     esi, eax
0x6E5196: mov     [esp+18h+var_4], eax
0x6E519A: jz      short loc_6E51B4
0x6E519C: push    eax
0x6E519D: push    eax
0x6E519E: mov     ecx, esi; this
0x6E51A0: call    ??0NiBSplineInterpolator@@QAE@XZ; NiBSplineInterpolator::NiBSplineInterpolator(void)
0x6E51A5: mov     dword ptr [esi], offset ??_7NiBSplinePoint3Interpolator@@6B@; const NiBSplinePoint3Interpolator::`vftable'
0x6E51AB: mov     dword ptr [esi+28h], 0FFFFh
0x6E51B2: mov     eax, esi
0x6E51B4: mov     ecx, [esp+18h+var_C]
0x6E51B8: mov     large fs:0, ecx
0x6E51BF: pop     ecx
0x6E51C0: pop     esi
0x6E51C1: add     esp, 10h
0x6E51C4: retn
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
