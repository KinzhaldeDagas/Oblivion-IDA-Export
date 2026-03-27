0x8BD6B0: push    0FFFFFFFFh
0x8BD6B2: push    offset ??1bhkAngularDashpotAction@@UAE@XZ_SEH
0x8BD6B7: mov     eax, large fs:0
0x8BD6BD: push    eax
0x8BD6BE: push    ecx
0x8BD6BF: push    esi
0x8BD6C0: mov     eax, ds:0B30AACh
0x8BD6C5: xor     eax, esp
0x8BD6C7: push    eax
0x8BD6C8: lea     eax, [esp+18h+var_C]
0x8BD6CC: mov     large fs:0, eax
0x8BD6D2: mov     esi, ecx
0x8BD6D4: mov     [esp+18h+var_10], esi
0x8BD6D8: mov     dword ptr [esi], offset ??_7bhkSpringAction@@6B@; const bhkSpringAction::`vftable'
0x8BD6DE: mov     [esp+18h+var_4], 0
0x8BD6E6: call    sub_89D700
0x8BD6EB: sub     dword ptr ds:0BA8058h, 1
0x8BD6F2: mov     ecx, esi; this
0x8BD6F4: mov     [esp+18h+var_4], 0FFFFFFFFh
0x8BD6FC: call    ??1bhkBinaryAction@@UAE@XZ; bhkBinaryAction::~bhkBinaryAction(void)
0x8BD701: mov     ecx, [esp+18h+var_C]
0x8BD705: mov     large fs:0, ecx
0x8BD70C: pop     ecx
0x8BD70D: pop     esi
0x8BD70E: add     esp, 10h
0x8BD711: retn
