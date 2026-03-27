0x8A2550: push    0FFFFFFFFh
0x8A2552: push    offset ??1bhkConstraint@@UAE@XZ_SEH
0x8A2557: mov     eax, large fs:0
0x8A255D: push    eax
0x8A255E: push    ecx
0x8A255F: push    esi
0x8A2560: mov     eax, ds:0B30AACh
0x8A2565: xor     eax, esp
0x8A2567: push    eax
0x8A2568: lea     eax, [esp+18h+var_C]
0x8A256C: mov     large fs:0, eax
0x8A2572: mov     esi, ecx
0x8A2574: mov     [esp+18h+var_10], esi
0x8A2578: mov     dword ptr [esi], offset ??_7bhkShape@@6B@; const bhkShape::`vftable'
0x8A257E: mov     [esp+18h+var_4], 0
0x8A2586: call    sub_89D700
0x8A258B: sub     dword ptr ds:0BA7D70h, 1
0x8A2592: mov     ecx, esi; this
0x8A2594: mov     [esp+18h+var_4], 0FFFFFFFFh
0x8A259C: call    ??1bhkSerializable@@UAE@XZ; bhkSerializable::~bhkSerializable(void)
0x8A25A1: mov     ecx, [esp+18h+var_C]
0x8A25A5: mov     large fs:0, ecx
0x8A25AC: pop     ecx
0x8A25AD: pop     esi
0x8A25AE: add     esp, 10h
0x8A25B1: retn
