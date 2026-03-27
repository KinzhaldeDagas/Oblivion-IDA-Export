0x8C2F40: push    0FFFFFFFFh
0x8C2F42: push    offset ??1bhkBallAndSocketConstraint@@UAE@XZ_SEH
0x8C2F47: mov     eax, large fs:0
0x8C2F4D: push    eax
0x8C2F4E: push    ecx
0x8C2F4F: push    esi
0x8C2F50: mov     eax, ds:0B30AACh
0x8C2F55: xor     eax, esp
0x8C2F57: push    eax
0x8C2F58: lea     eax, [esp+18h+var_C]
0x8C2F5C: mov     large fs:0, eax
0x8C2F62: mov     esi, ecx
0x8C2F64: mov     [esp+18h+var_10], esi
0x8C2F68: mov     dword ptr [esi], offset ??_7bhkBallAndSocketConstraint@@6B@; const bhkBallAndSocketConstraint::`vftable'
0x8C2F6E: mov     [esp+18h+var_4], 0
0x8C2F76: call    sub_89D700
0x8C2F7B: sub     dword ptr ds:0BA80E8h, 1
0x8C2F82: mov     ecx, esi; this
0x8C2F84: mov     [esp+18h+var_4], 0FFFFFFFFh
0x8C2F8C: call    ??1bhkConstraint@@UAE@XZ; bhkConstraint::~bhkConstraint(void)
0x8C2F91: mov     ecx, [esp+18h+var_C]
0x8C2F95: mov     large fs:0, ecx
0x8C2F9C: pop     ecx
0x8C2F9D: pop     esi
0x8C2F9E: add     esp, 10h
0x8C2FA1: retn
