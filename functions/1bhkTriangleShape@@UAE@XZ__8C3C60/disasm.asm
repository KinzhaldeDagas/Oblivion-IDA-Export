0x8C3C60: push    0FFFFFFFFh
0x8C3C62: push    offset ??1bhkConvexTransformShape@@UAE@XZ_SEH
0x8C3C67: mov     eax, large fs:0
0x8C3C6D: push    eax
0x8C3C6E: push    ecx
0x8C3C6F: push    esi
0x8C3C70: mov     eax, ds:0B30AACh
0x8C3C75: xor     eax, esp
0x8C3C77: push    eax
0x8C3C78: lea     eax, [esp+18h+var_C]
0x8C3C7C: mov     large fs:0, eax
0x8C3C82: mov     esi, ecx
0x8C3C84: mov     [esp+18h+var_10], esi
0x8C3C88: mov     dword ptr [esi], offset ??_7bhkTriangleShape@@6B@; const bhkTriangleShape::`vftable'
0x8C3C8E: mov     [esp+18h+var_4], 0
0x8C3C96: call    sub_89D700
0x8C3C9B: sub     dword ptr ds:0BA8100h, 1
0x8C3CA2: mov     ecx, esi; this
0x8C3CA4: mov     [esp+18h+var_4], 0FFFFFFFFh
0x8C3CAC: call    ??1bhkConvexShape@@UAE@XZ; bhkConvexShape::~bhkConvexShape(void)
0x8C3CB1: mov     ecx, [esp+18h+var_C]
0x8C3CB5: mov     large fs:0, ecx
0x8C3CBC: pop     ecx
0x8C3CBD: pop     esi
0x8C3CBE: add     esp, 10h
0x8C3CC1: retn
