0x8BEF50: push    0FFFFFFFFh
0x8BEF52: push    offset ??1bhkBallAndSocketConstraint@@UAE@XZ_SEH
0x8BEF57: mov     eax, large fs:0
0x8BEF5D: push    eax
0x8BEF5E: push    ecx
0x8BEF5F: push    esi
0x8BEF60: mov     eax, ds:0B30AACh
0x8BEF65: xor     eax, esp
0x8BEF67: push    eax
0x8BEF68: lea     eax, [esp+18h+var_C]
0x8BEF6C: mov     large fs:0, eax
0x8BEF72: mov     esi, ecx
0x8BEF74: mov     [esp+18h+var_10], esi
0x8BEF78: mov     dword ptr [esi], offset ??_7bhkMalleableConstraint@@6B@; const bhkMalleableConstraint::`vftable'
0x8BEF7E: mov     [esp+18h+var_4], 0
0x8BEF86: call    sub_89D700
0x8BEF8B: sub     dword ptr ds:0BA8088h, 1
0x8BEF92: mov     ecx, esi; this
0x8BEF94: mov     [esp+18h+var_4], 0FFFFFFFFh
0x8BEF9C: call    ??1bhkConstraint@@UAE@XZ; bhkConstraint::~bhkConstraint(void)
0x8BEFA1: mov     ecx, [esp+18h+var_C]
0x8BEFA5: mov     large fs:0, ecx
0x8BEFAC: pop     ecx
0x8BEFAD: pop     esi
0x8BEFAE: add     esp, 10h
0x8BEFB1: retn
