0x8BA5E0: push    0FFFFFFFFh
0x8BA5E2: push    offset ??1bhkAabbPhantom@@UAE@XZ_SEH
0x8BA5E7: mov     eax, large fs:0
0x8BA5ED: push    eax
0x8BA5EE: push    ecx
0x8BA5EF: push    esi
0x8BA5F0: mov     eax, ds:0B30AACh
0x8BA5F5: xor     eax, esp
0x8BA5F7: push    eax
0x8BA5F8: lea     eax, [esp+18h+var_C]
0x8BA5FC: mov     large fs:0, eax
0x8BA602: mov     esi, ecx
0x8BA604: mov     [esp+18h+var_10], esi
0x8BA608: mov     dword ptr [esi], offset ??_7bhkAabbPhantom@@6B@; const bhkAabbPhantom::`vftable'
0x8BA60E: mov     [esp+18h+var_4], 0
0x8BA616: call    sub_89D700
0x8BA61B: sub     dword ptr ds:0BA802Ch, 1
0x8BA622: mov     ecx, esi; this
0x8BA624: mov     [esp+18h+var_4], 0FFFFFFFFh
0x8BA62C: call    ??1bhkPhantom@@UAE@XZ; bhkPhantom::~bhkPhantom(void)
0x8BA631: mov     ecx, [esp+18h+var_C]
0x8BA635: mov     large fs:0, ecx
0x8BA63C: pop     ecx
0x8BA63D: pop     esi
0x8BA63E: add     esp, 10h
0x8BA641: retn
