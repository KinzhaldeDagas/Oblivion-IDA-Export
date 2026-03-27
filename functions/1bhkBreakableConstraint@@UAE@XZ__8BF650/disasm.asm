0x8BF650: push    0FFFFFFFFh
0x8BF652: push    offset ??1bhkBallAndSocketConstraint@@UAE@XZ_SEH
0x8BF657: mov     eax, large fs:0
0x8BF65D: push    eax
0x8BF65E: push    ecx
0x8BF65F: push    esi
0x8BF660: mov     eax, ds:0B30AACh
0x8BF665: xor     eax, esp
0x8BF667: push    eax
0x8BF668: lea     eax, [esp+18h+var_C]
0x8BF66C: mov     large fs:0, eax
0x8BF672: mov     esi, ecx
0x8BF674: mov     [esp+18h+var_10], esi
0x8BF678: mov     dword ptr [esi], offset ??_7bhkBreakableConstraint@@6B@; const bhkBreakableConstraint::`vftable'
0x8BF67E: mov     [esp+18h+var_4], 0
0x8BF686: call    sub_89D700
0x8BF68B: sub     dword ptr ds:0BA8094h, 1
0x8BF692: mov     ecx, esi; this
0x8BF694: mov     [esp+18h+var_4], 0FFFFFFFFh
0x8BF69C: call    ??1bhkConstraint@@UAE@XZ; bhkConstraint::~bhkConstraint(void)
0x8BF6A1: mov     ecx, [esp+18h+var_C]
0x8BF6A5: mov     large fs:0, ecx
0x8BF6AC: pop     ecx
0x8BF6AD: pop     esi
0x8BF6AE: add     esp, 10h
0x8BF6B1: retn
