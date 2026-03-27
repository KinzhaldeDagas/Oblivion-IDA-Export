0x8C17B0: push    0FFFFFFFFh
0x8C17B2: push    offset SEH_8C62B0
0x8C17B7: mov     eax, large fs:0
0x8C17BD: push    eax
0x8C17BE: push    ecx
0x8C17BF: push    esi
0x8C17C0: mov     eax, ds:0B30AACh
0x8C17C5: xor     eax, esp
0x8C17C7: push    eax
0x8C17C8: lea     eax, [esp+18h+var_C]
0x8C17CC: mov     large fs:0, eax
0x8C17D2: push    10h; Size
0x8C17D4: call    FormHeapAlloc
0x8C17D9: mov     esi, eax
0x8C17DB: add     esp, 4
0x8C17DE: mov     [esp+18h+var_10], esi
0x8C17E2: test    esi, esi
0x8C17E4: mov     [esp+18h+var_4], 0
0x8C17EC: jz      short loc_8C182C
0x8C17EE: mov     ecx, esi; this
0x8C17F0: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x8C17F5: mov     eax, 1
0x8C17FA: mov     dword ptr [esi], offset ??_7bhkConstraint@@6B@; const bhkConstraint::`vftable'
0x8C1800: mov     dword ptr [esi+0Ch], 0
0x8C1807: add     ds:0BA7D4Ch, eax
0x8C180D: mov     dword ptr [esi], offset ??_7bhkPrismaticConstraint@@6B@; const bhkPrismaticConstraint::`vftable'
0x8C1813: add     ds:0BA80C4h, eax
0x8C1819: mov     eax, esi
0x8C181B: mov     ecx, [esp+18h+var_C]
0x8C181F: mov     large fs:0, ecx
0x8C1826: pop     ecx
0x8C1827: pop     esi
0x8C1828: add     esp, 10h
0x8C182B: retn
0x8C182C: xor     eax, eax
0x8C182E: mov     ecx, [esp+18h+var_C]
0x8C1832: mov     large fs:0, ecx
0x8C1839: pop     ecx
0x8C183A: pop     esi
0x8C183B: add     esp, 10h
0x8C183E: retn
