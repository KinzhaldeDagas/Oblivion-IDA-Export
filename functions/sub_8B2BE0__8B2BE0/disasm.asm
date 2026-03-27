0x8B2BE0: push    0FFFFFFFFh
0x8B2BE2: push    offset SEH_8C62B0
0x8B2BE7: mov     eax, large fs:0
0x8B2BED: push    eax
0x8B2BEE: push    ecx
0x8B2BEF: push    esi
0x8B2BF0: mov     eax, ds:0B30AACh
0x8B2BF5: xor     eax, esp
0x8B2BF7: push    eax
0x8B2BF8: lea     eax, [esp+18h+var_C]
0x8B2BFC: mov     large fs:0, eax
0x8B2C02: push    10h; Size
0x8B2C04: call    FormHeapAlloc
0x8B2C09: mov     esi, eax
0x8B2C0B: add     esp, 4
0x8B2C0E: mov     [esp+18h+var_10], esi
0x8B2C12: test    esi, esi
0x8B2C14: mov     [esp+18h+var_4], 0
0x8B2C1C: jz      short loc_8B2C5C
0x8B2C1E: mov     ecx, esi; this
0x8B2C20: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x8B2C25: mov     eax, 1
0x8B2C2A: mov     dword ptr [esi], offset ??_7bhkConstraint@@6B@; const bhkConstraint::`vftable'
0x8B2C30: mov     dword ptr [esi+0Ch], 0
0x8B2C37: add     ds:0BA7D4Ch, eax
0x8B2C3D: mov     dword ptr [esi], offset ??_7bhkLimitedHingeConstraint@@6B@; const bhkLimitedHingeConstraint::`vftable'
0x8B2C43: add     ds:0BA7FC8h, eax
0x8B2C49: mov     eax, esi
0x8B2C4B: mov     ecx, [esp+18h+var_C]
0x8B2C4F: mov     large fs:0, ecx
0x8B2C56: pop     ecx
0x8B2C57: pop     esi
0x8B2C58: add     esp, 10h
0x8B2C5B: retn
0x8B2C5C: xor     eax, eax
0x8B2C5E: mov     ecx, [esp+18h+var_C]
0x8B2C62: mov     large fs:0, ecx
0x8B2C69: pop     ecx
0x8B2C6A: pop     esi
0x8B2C6B: add     esp, 10h
0x8B2C6E: retn
