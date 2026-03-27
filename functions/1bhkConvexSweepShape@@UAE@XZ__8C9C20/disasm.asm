0x8C9C20: push    0FFFFFFFFh
0x8C9C22: push    offset ??1bhkConvexTransformShape@@UAE@XZ_SEH
0x8C9C27: mov     eax, large fs:0
0x8C9C2D: push    eax
0x8C9C2E: push    ecx
0x8C9C2F: push    esi
0x8C9C30: mov     eax, ds:0B30AACh
0x8C9C35: xor     eax, esp
0x8C9C37: push    eax
0x8C9C38: lea     eax, [esp+18h+var_C]
0x8C9C3C: mov     large fs:0, eax
0x8C9C42: mov     esi, ecx
0x8C9C44: mov     [esp+18h+var_10], esi
0x8C9C48: mov     dword ptr [esi], offset ??_7bhkConvexSweepShape@@6B@; const bhkConvexSweepShape::`vftable'
0x8C9C4E: mov     [esp+18h+var_4], 0
0x8C9C56: call    sub_89D700
0x8C9C5B: mov     ecx, esi; this
0x8C9C5D: mov     [esp+18h+var_4], 0FFFFFFFFh
0x8C9C65: call    ??1bhkConvexShape@@UAE@XZ; bhkConvexShape::~bhkConvexShape(void)
0x8C9C6A: mov     ecx, [esp+18h+var_C]
0x8C9C6E: mov     large fs:0, ecx
0x8C9C75: pop     ecx
0x8C9C76: pop     esi
0x8C9C77: add     esp, 10h
0x8C9C7A: retn
