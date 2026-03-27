0x8C9310: push    0FFFFFFFFh
0x8C9312: push    offset ??1bhkConvexTransformShape@@UAE@XZ_SEH
0x8C9317: mov     eax, large fs:0
0x8C931D: push    eax
0x8C931E: push    ecx
0x8C931F: push    esi
0x8C9320: mov     eax, ds:0B30AACh
0x8C9325: xor     eax, esp
0x8C9327: push    eax
0x8C9328: lea     eax, [esp+18h+var_C]
0x8C932C: mov     large fs:0, eax
0x8C9332: mov     esi, ecx
0x8C9334: mov     [esp+18h+var_10], esi
0x8C9338: mov     dword ptr [esi], offset ??_7bhkConvexTransformShape@@6B@; const bhkConvexTransformShape::`vftable'
0x8C933E: mov     [esp+18h+var_4], 0
0x8C9346: call    sub_89D700
0x8C934B: sub     dword ptr ds:0BA8158h, 1
0x8C9352: mov     ecx, esi; this
0x8C9354: mov     [esp+18h+var_4], 0FFFFFFFFh
0x8C935C: call    ??1bhkConvexShape@@UAE@XZ; bhkConvexShape::~bhkConvexShape(void)
0x8C9361: mov     ecx, [esp+18h+var_C]
0x8C9365: mov     large fs:0, ecx
0x8C936C: pop     ecx
0x8C936D: pop     esi
0x8C936E: add     esp, 10h
0x8C9371: retn
