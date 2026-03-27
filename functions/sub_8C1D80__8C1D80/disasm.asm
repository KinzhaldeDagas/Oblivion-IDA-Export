0x8C1D80: push    0FFFFFFFFh
0x8C1D82: push    offset ??1bhkFixedConstraint@@UAE@XZ_SEH
0x8C1D87: mov     eax, large fs:0
0x8C1D8D: push    eax
0x8C1D8E: push    ecx
0x8C1D8F: push    esi
0x8C1D90: mov     eax, ds:0B30AACh
0x8C1D95: xor     eax, esp
0x8C1D97: push    eax
0x8C1D98: lea     eax, [esp+18h+var_C]
0x8C1D9C: mov     large fs:0, eax
0x8C1DA2: mov     esi, ecx
0x8C1DA4: mov     [esp+18h+var_10], esi
0x8C1DA8: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x8C1DAD: xor     eax, eax
0x8C1DAF: mov     dword ptr [esi], offset ??_7bhkConstraint@@6B@; const bhkConstraint::`vftable'
0x8C1DB5: mov     [esi+0Ch], eax
0x8C1DB8: add     dword ptr ds:0BA7D4Ch, 1
0x8C1DBF: mov     dword ptr [esi], offset ??_7bhkGenericConstraint@@6B@; const bhkGenericConstraint::`vftable'
0x8C1DC5: add     dword ptr ds:0BA8354h, 1
0x8C1DCC: mov     ecx, [esp+18h+arg_0]
0x8C1DD0: cmp     ecx, eax
0x8C1DD2: mov     [esp+18h+var_4], eax
0x8C1DD6: mov     dword ptr [esi], offset ??_7bhkFixedConstraint@@6B@; const bhkFixedConstraint::`vftable'
0x8C1DDC: jz      short loc_8C1DE1
0x8C1DDE: lea     eax, [ecx+4]
0x8C1DE1: push    eax
0x8C1DE2: mov     ecx, esi
0x8C1DE4: call    sub_8A0610
0x8C1DE9: add     dword ptr ds:0BA80D0h, 1
0x8C1DF0: mov     eax, esi
0x8C1DF2: mov     ecx, [esp+18h+var_C]
0x8C1DF6: mov     large fs:0, ecx
0x8C1DFD: pop     ecx
0x8C1DFE: pop     esi
0x8C1DFF: add     esp, 10h
0x8C1E02: retn    4
