0x8BFE20: push    0FFFFFFFFh
0x8BFE22: push    offset ??1bhkBallAndSocketConstraint@@UAE@XZ_SEH
0x8BFE27: mov     eax, large fs:0
0x8BFE2D: push    eax
0x8BFE2E: push    ecx
0x8BFE2F: push    esi
0x8BFE30: mov     eax, ds:0B30AACh
0x8BFE35: xor     eax, esp
0x8BFE37: push    eax
0x8BFE38: lea     eax, [esp+18h+var_C]
0x8BFE3C: mov     large fs:0, eax
0x8BFE42: mov     esi, ecx
0x8BFE44: mov     [esp+18h+var_10], esi
0x8BFE48: mov     dword ptr [esi], offset ??_7bhkWheelConstraint@@6B@; const bhkWheelConstraint::`vftable'
0x8BFE4E: mov     [esp+18h+var_4], 0
0x8BFE56: call    sub_89D700
0x8BFE5B: sub     dword ptr ds:0BA80A0h, 1
0x8BFE62: mov     ecx, esi; this
0x8BFE64: mov     [esp+18h+var_4], 0FFFFFFFFh
0x8BFE6C: call    ??1bhkConstraint@@UAE@XZ; bhkConstraint::~bhkConstraint(void)
0x8BFE71: mov     ecx, [esp+18h+var_C]
0x8BFE75: mov     large fs:0, ecx
0x8BFE7C: pop     ecx
0x8BFE7D: pop     esi
0x8BFE7E: add     esp, 10h
0x8BFE81: retn
