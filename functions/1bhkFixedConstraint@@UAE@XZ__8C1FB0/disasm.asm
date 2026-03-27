0x8C1FB0: push    0FFFFFFFFh
0x8C1FB2: push    offset ??1bhkFixedConstraint@@UAE@XZ_SEH
0x8C1FB7: mov     eax, large fs:0
0x8C1FBD: push    eax
0x8C1FBE: push    ecx
0x8C1FBF: push    esi
0x8C1FC0: mov     eax, ds:0B30AACh
0x8C1FC5: xor     eax, esp
0x8C1FC7: push    eax
0x8C1FC8: lea     eax, [esp+18h+var_C]
0x8C1FCC: mov     large fs:0, eax
0x8C1FD2: mov     esi, ecx
0x8C1FD4: mov     [esp+18h+var_10], esi
0x8C1FD8: mov     dword ptr [esi], offset ??_7bhkFixedConstraint@@6B@; const bhkFixedConstraint::`vftable'
0x8C1FDE: mov     [esp+18h+var_4], 0
0x8C1FE6: call    sub_89D700
0x8C1FEB: sub     dword ptr ds:0BA80D0h, 1
0x8C1FF2: mov     ecx, esi; this
0x8C1FF4: mov     [esp+18h+var_4], 0FFFFFFFFh
0x8C1FFC: call    ??1bhkGenericConstraint@@UAE@XZ; bhkGenericConstraint::~bhkGenericConstraint(void)
0x8C2001: mov     ecx, [esp+18h+var_C]
0x8C2005: mov     large fs:0, ecx
0x8C200C: pop     ecx
0x8C200D: pop     esi
0x8C200E: add     esp, 10h
0x8C2011: retn
