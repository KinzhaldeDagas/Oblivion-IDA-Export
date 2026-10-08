0x8C2690: push    0FFFFFFFFh
0x8C2692: push    offset SEH_8C62B0
0x8C2697: mov     eax, large fs:0
0x8C269D: push    eax
0x8C269E: push    ecx
0x8C269F: push    esi
0x8C26A0: mov     eax, ds:0B30AACh
0x8C26A5: xor     eax, esp
0x8C26A7: push    eax
0x8C26A8: lea     eax, [esp+18h+var_C]
0x8C26AC: mov     large fs:0, eax
0x8C26B2: push    10h; Size
0x8C26B4: call    FormHeapAlloc
0x8C26B9: mov     esi, eax
0x8C26BB: add     esp, 4
0x8C26BE: mov     [esp+18h+var_10], esi
0x8C26C2: test    esi, esi
0x8C26C4: mov     [esp+18h+var_4], 0
0x8C26CC: jz      short loc_8C270C
0x8C26CE: mov     ecx, esi; this
0x8C26D0: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x8C26D5: mov     eax, 1
0x8C26DA: mov     dword ptr [esi], offset ??_7bhkConstraint@@6B@; const bhkConstraint::`vftable'
0x8C26E0: mov     dword ptr [esi+0Ch], 0
0x8C26E7: add     ds:0BA7D4Ch, eax
0x8C26ED: mov     dword ptr [esi], offset ??_7bhkHingeConstraint@@6B@; const bhkHingeConstraint::`vftable'
0x8C26F3: add     ds:0BA80DCh, eax
0x8C26F9: mov     eax, esi
0x8C26FB: mov     ecx, [esp+18h+var_C]
0x8C26FF: mov     large fs:0, ecx
0x8C2706: pop     ecx
0x8C2707: pop     esi
0x8C2708: add     esp, 10h
0x8C270B: retn
0x8C270C: xor     eax, eax
0x8C270E: mov     ecx, [esp+18h+var_C]
0x8C2712: mov     large fs:0, ecx
0x8C2719: pop     ecx
0x8C271A: pop     esi
0x8C271B: add     esp, 10h
0x8C271E: retn
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
