0x8AE9F0: push    0FFFFFFFFh
0x8AE9F2: push    offset ??1bhkConvexShape@@UAE@XZ_SEH
0x8AE9F7: mov     eax, large fs:0
0x8AE9FD: push    eax
0x8AE9FE: push    ecx
0x8AE9FF: push    esi
0x8AEA00: mov     eax, ds:0B30AACh
0x8AEA05: xor     eax, esp
0x8AEA07: push    eax
0x8AEA08: lea     eax, [esp+18h+var_C]
0x8AEA0C: mov     large fs:0, eax
0x8AEA12: mov     esi, ecx
0x8AEA14: mov     [esp+18h+var_10], esi
0x8AEA18: mov     dword ptr [esi], offset ??_7bhkConvexShape@@6B@; const bhkConvexShape::`vftable'
0x8AEA1E: mov     [esp+18h+var_4], 0
0x8AEA26: call    sub_89D700
0x8AEA2B: sub     dword ptr ds:0BA7F50h, 1
0x8AEA32: mov     ecx, esi; this
0x8AEA34: mov     [esp+18h+var_4], 0FFFFFFFFh
0x8AEA3C: call    ??1bhkSphereRepShape@@UAE@XZ; bhkSphereRepShape::~bhkSphereRepShape(void)
0x8AEA41: mov     ecx, [esp+18h+var_C]
0x8AEA45: mov     large fs:0, ecx
0x8AEA4C: pop     ecx
0x8AEA4D: pop     esi
0x8AEA4E: add     esp, 10h
0x8AEA51: retn
0x9BD420: mov     ecx, [ebp-10h]; this
0x9BD423: jmp     ??1bhkSphereRepShape@@UAE@XZ; bhkSphereRepShape::~bhkSphereRepShape(void)
0x9BD428: mov     edx, [esp+arg_4]
0x9BD42C: lea     eax, [edx-8]
0x9BD42F: mov     ecx, [edx-0Ch]
0x9BD432: xor     ecx, eax
0x9BD434: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BD439: mov     eax, offset stru_AE6DF8
0x9BD43E: jmp     ___CxxFrameHandler3
