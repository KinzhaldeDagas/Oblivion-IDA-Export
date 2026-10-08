0x6E6220: push    0FFFFFFFFh
0x6E6222: push    offset SEH_8C62B0
0x6E6227: mov     eax, large fs:0
0x6E622D: push    eax
0x6E622E: push    ecx
0x6E622F: push    esi
0x6E6230: mov     eax, ds:0B30AACh
0x6E6235: xor     eax, esp
0x6E6237: push    eax
0x6E6238: lea     eax, [esp+18h+var_C]
0x6E623C: mov     large fs:0, eax
0x6E6242: push    2Ch ; ','; Size
0x6E6244: call    FormHeapAlloc
0x6E6249: mov     esi, eax
0x6E624B: add     esp, 4
0x6E624E: mov     [esp+18h+var_10], esi
0x6E6252: xor     eax, eax
0x6E6254: cmp     esi, eax
0x6E6256: mov     [esp+18h+var_4], eax
0x6E625A: jz      short loc_6E6284
0x6E625C: push    eax; int
0x6E625D: push    0FFFFh; int
0x6E6262: push    eax; int
0x6E6263: mov     ecx, esi; this
0x6E6265: call    sub_6E5490
0x6E626A: mov     dword ptr [esi], offset ??_7NiBSplineCompFloatInterpolator@@6B@; const NiBSplineCompFloatInterpolator::`vftable'
0x6E6270: fld     dword ptr ds:0A7DEB4h
0x6E6276: fstp    dword ptr [esi+24h]
0x6E6279: mov     eax, esi
0x6E627B: fld     dword ptr ds:0A7DEB4h
0x6E6281: fstp    dword ptr [esi+28h]
0x6E6284: mov     ecx, [esp+18h+var_C]
0x6E6288: mov     large fs:0, ecx
0x6E628F: pop     ecx
0x6E6290: pop     esi
0x6E6291: add     esp, 10h
0x6E6294: retn
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
