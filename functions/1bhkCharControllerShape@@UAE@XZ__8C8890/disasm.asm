0x8C8890: push    0FFFFFFFFh
0x8C8892: push    offset ??1bhkConvexTransformShape@@UAE@XZ_SEH
0x8C8897: mov     eax, large fs:0
0x8C889D: push    eax
0x8C889E: push    ecx
0x8C889F: push    esi
0x8C88A0: mov     eax, ds:0B30AACh
0x8C88A5: xor     eax, esp
0x8C88A7: push    eax
0x8C88A8: lea     eax, [esp+18h+var_C]
0x8C88AC: mov     large fs:0, eax
0x8C88B2: mov     esi, ecx
0x8C88B4: mov     [esp+18h+var_10], esi
0x8C88B8: mov     dword ptr [esi], offset ??_7bhkConvexVerticesShape@@6B@; const bhkConvexVerticesShape::`vftable'
0x8C88BE: mov     [esp+18h+var_4], 0
0x8C88C6: call    sub_89D700
0x8C88CB: sub     dword ptr ds:0BA814Ch, 1
0x8C88D2: mov     ecx, esi; this
0x8C88D4: mov     [esp+18h+var_4], 0FFFFFFFFh
0x8C88DC: call    ??1bhkConvexShape@@UAE@XZ; bhkConvexShape::~bhkConvexShape(void)
0x8C88E1: mov     ecx, [esp+18h+var_C]
0x8C88E5: mov     large fs:0, ecx
0x8C88EC: pop     ecx
0x8C88ED: pop     esi
0x8C88EE: add     esp, 10h
0x8C88F1: retn
