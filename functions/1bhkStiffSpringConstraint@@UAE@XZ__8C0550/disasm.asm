0x8C0550: push    0FFFFFFFFh
0x8C0552: push    offset ??1bhkBallAndSocketConstraint@@UAE@XZ_SEH
0x8C0557: mov     eax, large fs:0
0x8C055D: push    eax
0x8C055E: push    ecx
0x8C055F: push    esi
0x8C0560: mov     eax, ds:0B30AACh
0x8C0565: xor     eax, esp
0x8C0567: push    eax
0x8C0568: lea     eax, [esp+18h+var_C]
0x8C056C: mov     large fs:0, eax
0x8C0572: mov     esi, ecx
0x8C0574: mov     [esp+18h+var_10], esi
0x8C0578: mov     dword ptr [esi], offset ??_7bhkStiffSpringConstraint@@6B@; const bhkStiffSpringConstraint::`vftable'
0x8C057E: mov     [esp+18h+var_4], 0
0x8C0586: call    sub_89D700
0x8C058B: sub     dword ptr ds:0BA80ACh, 1
0x8C0592: mov     ecx, esi; this
0x8C0594: mov     [esp+18h+var_4], 0FFFFFFFFh
0x8C059C: call    ??1bhkConstraint@@UAE@XZ; bhkConstraint::~bhkConstraint(void)
0x8C05A1: mov     ecx, [esp+18h+var_C]
0x8C05A5: mov     large fs:0, ecx
0x8C05AC: pop     ecx
0x8C05AD: pop     esi
0x8C05AE: add     esp, 10h
0x8C05B1: retn
