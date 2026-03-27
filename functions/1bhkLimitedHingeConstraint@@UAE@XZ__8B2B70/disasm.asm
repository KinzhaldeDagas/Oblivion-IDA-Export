0x8B2B70: push    0FFFFFFFFh
0x8B2B72: push    offset ??1bhkBallAndSocketConstraint@@UAE@XZ_SEH
0x8B2B77: mov     eax, large fs:0
0x8B2B7D: push    eax
0x8B2B7E: push    ecx
0x8B2B7F: push    esi
0x8B2B80: mov     eax, ds:0B30AACh
0x8B2B85: xor     eax, esp
0x8B2B87: push    eax
0x8B2B88: lea     eax, [esp+18h+var_C]
0x8B2B8C: mov     large fs:0, eax
0x8B2B92: mov     esi, ecx
0x8B2B94: mov     [esp+18h+var_10], esi
0x8B2B98: mov     dword ptr [esi], offset ??_7bhkLimitedHingeConstraint@@6B@; const bhkLimitedHingeConstraint::`vftable'
0x8B2B9E: mov     [esp+18h+var_4], 0
0x8B2BA6: call    sub_89D700
0x8B2BAB: sub     dword ptr ds:0BA7FC8h, 1
0x8B2BB2: mov     ecx, esi; this
0x8B2BB4: mov     [esp+18h+var_4], 0FFFFFFFFh
0x8B2BBC: call    ??1bhkConstraint@@UAE@XZ; bhkConstraint::~bhkConstraint(void)
0x8B2BC1: mov     ecx, [esp+18h+var_C]
0x8B2BC5: mov     large fs:0, ecx
0x8B2BCC: pop     ecx
0x8B2BCD: pop     esi
0x8B2BCE: add     esp, 10h
0x8B2BD1: retn
