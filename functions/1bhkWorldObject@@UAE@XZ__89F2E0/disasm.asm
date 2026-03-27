0x89F2E0: push    0FFFFFFFFh
0x89F2E2: push    offset ??1bhkConstraint@@UAE@XZ_SEH
0x89F2E7: mov     eax, large fs:0
0x89F2ED: push    eax
0x89F2EE: push    ecx
0x89F2EF: push    esi
0x89F2F0: mov     eax, ds:0B30AACh
0x89F2F5: xor     eax, esp
0x89F2F7: push    eax
0x89F2F8: lea     eax, [esp+18h+var_C]
0x89F2FC: mov     large fs:0, eax
0x89F302: mov     esi, ecx
0x89F304: mov     [esp+18h+var_10], esi
0x89F308: mov     dword ptr [esi], offset ??_7bhkWorldObject@@6B@; const bhkWorldObject::`vftable'
0x89F30E: mov     [esp+18h+var_4], 0
0x89F316: call    sub_89D700
0x89F31B: sub     dword ptr ds:0BA7D34h, 1
0x89F322: mov     ecx, esi; this
0x89F324: mov     [esp+18h+var_4], 0FFFFFFFFh
0x89F32C: call    ??1bhkSerializable@@UAE@XZ; bhkSerializable::~bhkSerializable(void)
0x89F331: mov     ecx, [esp+18h+var_C]
0x89F335: mov     large fs:0, ecx
0x89F33C: pop     ecx
0x89F33D: pop     esi
0x89F33E: add     esp, 10h
0x89F341: retn
