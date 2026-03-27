0x8C09E0: push    0FFFFFFFFh
0x8C09E2: push    offset SEH_8C62B0
0x8C09E7: mov     eax, large fs:0
0x8C09ED: push    eax
0x8C09EE: push    ecx
0x8C09EF: push    esi
0x8C09F0: mov     eax, ds:0B30AACh
0x8C09F5: xor     eax, esp
0x8C09F7: push    eax
0x8C09F8: lea     eax, [esp+18h+var_C]
0x8C09FC: mov     large fs:0, eax
0x8C0A02: push    10h; Size
0x8C0A04: call    FormHeapAlloc
0x8C0A09: mov     esi, eax
0x8C0A0B: add     esp, 4
0x8C0A0E: mov     [esp+18h+var_10], esi
0x8C0A12: test    esi, esi
0x8C0A14: mov     [esp+18h+var_4], 0
0x8C0A1C: jz      short loc_8C0A5C
0x8C0A1E: mov     ecx, esi; this
0x8C0A20: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x8C0A25: mov     eax, 1
0x8C0A2A: mov     dword ptr [esi], offset ??_7bhkConstraint@@6B@; const bhkConstraint::`vftable'
0x8C0A30: mov     dword ptr [esi+0Ch], 0
0x8C0A37: add     ds:0BA7D4Ch, eax
0x8C0A3D: mov     dword ptr [esi], offset ??_7bhkRagdollConstraint@@6B@; const bhkRagdollConstraint::`vftable'
0x8C0A43: add     ds:0BA80B8h, eax
0x8C0A49: mov     eax, esi
0x8C0A4B: mov     ecx, [esp+18h+var_C]
0x8C0A4F: mov     large fs:0, ecx
0x8C0A56: pop     ecx
0x8C0A57: pop     esi
0x8C0A58: add     esp, 10h
0x8C0A5B: retn
0x8C0A5C: xor     eax, eax
0x8C0A5E: mov     ecx, [esp+18h+var_C]
0x8C0A62: mov     large fs:0, ecx
0x8C0A69: pop     ecx
0x8C0A6A: pop     esi
0x8C0A6B: add     esp, 10h
0x8C0A6E: retn
