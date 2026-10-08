0x6E7990: push    0FFFFFFFFh
0x6E7992: push    offset SEH_8C62B0
0x6E7997: mov     eax, large fs:0
0x6E799D: push    eax
0x6E799E: push    ecx
0x6E799F: push    esi
0x6E79A0: mov     eax, ds:0B30AACh
0x6E79A5: xor     eax, esp
0x6E79A7: push    eax
0x6E79A8: lea     eax, [esp+18h+var_C]
0x6E79AC: mov     large fs:0, eax
0x6E79B2: push    28h ; '('; Size
0x6E79B4: call    FormHeapAlloc
0x6E79B9: mov     esi, eax
0x6E79BB: add     esp, 4
0x6E79BE: mov     [esp+18h+var_10], esi
0x6E79C2: test    esi, esi
0x6E79C4: mov     [esp+18h+var_4], 0
0x6E79CC: jz      short loc_6E7A0C
0x6E79CE: mov     ecx, esi
0x6E79D0: call    NiObject_constr
0x6E79D5: fld     dword ptr ds:0A30634h
0x6E79DB: mov     dword ptr [esi], offset ??_7NiBSplineBasisData@@6B@; const NiBSplineBasisData::`vftable'
0x6E79E1: fstp    dword ptr [esi+1Ch]
0x6E79E4: mov     dword ptr [esi+8], 0
0x6E79EB: mov     dword ptr [esi+20h], 0
0x6E79F2: mov     dword ptr [esi+24h], 3
0x6E79F9: mov     eax, esi
0x6E79FB: mov     ecx, [esp+18h+var_C]
0x6E79FF: mov     large fs:0, ecx
0x6E7A06: pop     ecx
0x6E7A07: pop     esi
0x6E7A08: add     esp, 10h
0x6E7A0B: retn
0x6E7A0C: xor     eax, eax
0x6E7A0E: mov     ecx, [esp+18h+var_C]
0x6E7A12: mov     large fs:0, ecx
0x6E7A19: pop     ecx
0x6E7A1A: pop     esi
0x6E7A1B: add     esp, 10h
0x6E7A1E: retn
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
