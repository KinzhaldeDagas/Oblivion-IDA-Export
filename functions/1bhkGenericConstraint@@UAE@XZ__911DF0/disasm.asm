0x911DF0: push    0FFFFFFFFh
0x911DF2: push    offset ??1bhkBallAndSocketConstraint@@UAE@XZ_SEH
0x911DF7: mov     eax, large fs:0
0x911DFD: push    eax
0x911DFE: push    ecx
0x911DFF: push    esi
0x911E00: mov     eax, ds:0B30AACh
0x911E05: xor     eax, esp
0x911E07: push    eax
0x911E08: lea     eax, [esp+18h+var_C]
0x911E0C: mov     large fs:0, eax
0x911E12: mov     esi, ecx
0x911E14: mov     [esp+18h+var_10], esi
0x911E18: mov     dword ptr [esi], offset ??_7bhkGenericConstraint@@6B@; const bhkGenericConstraint::`vftable'
0x911E1E: mov     [esp+18h+var_4], 0
0x911E26: call    sub_89D700
0x911E2B: sub     dword ptr ds:0BA8354h, 1
0x911E32: mov     ecx, esi; this
0x911E34: mov     [esp+18h+var_4], 0FFFFFFFFh
0x911E3C: call    ??1bhkConstraint@@UAE@XZ; bhkConstraint::~bhkConstraint(void)
0x911E41: mov     ecx, [esp+18h+var_C]
0x911E45: mov     large fs:0, ecx
0x911E4C: pop     ecx
0x911E4D: pop     esi
0x911E4E: add     esp, 10h
0x911E51: retn
