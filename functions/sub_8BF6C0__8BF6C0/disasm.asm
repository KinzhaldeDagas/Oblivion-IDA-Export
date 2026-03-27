0x8BF6C0: push    0FFFFFFFFh
0x8BF6C2: push    offset SEH_8C62B0
0x8BF6C7: mov     eax, large fs:0
0x8BF6CD: push    eax
0x8BF6CE: push    ecx
0x8BF6CF: push    esi
0x8BF6D0: mov     eax, ds:0B30AACh
0x8BF6D5: xor     eax, esp
0x8BF6D7: push    eax
0x8BF6D8: lea     eax, [esp+18h+var_C]
0x8BF6DC: mov     large fs:0, eax
0x8BF6E2: push    10h; Size
0x8BF6E4: call    FormHeapAlloc
0x8BF6E9: mov     esi, eax
0x8BF6EB: add     esp, 4
0x8BF6EE: mov     [esp+18h+var_10], esi
0x8BF6F2: test    esi, esi
0x8BF6F4: mov     [esp+18h+var_4], 0
0x8BF6FC: jz      short loc_8BF73C
0x8BF6FE: mov     ecx, esi; this
0x8BF700: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x8BF705: mov     eax, 1
0x8BF70A: mov     dword ptr [esi], offset ??_7bhkConstraint@@6B@; const bhkConstraint::`vftable'
0x8BF710: mov     dword ptr [esi+0Ch], 0
0x8BF717: add     ds:0BA7D4Ch, eax
0x8BF71D: mov     dword ptr [esi], offset ??_7bhkBreakableConstraint@@6B@; const bhkBreakableConstraint::`vftable'
0x8BF723: add     ds:0BA8094h, eax
0x8BF729: mov     eax, esi
0x8BF72B: mov     ecx, [esp+18h+var_C]
0x8BF72F: mov     large fs:0, ecx
0x8BF736: pop     ecx
0x8BF737: pop     esi
0x8BF738: add     esp, 10h
0x8BF73B: retn
0x8BF73C: xor     eax, eax
0x8BF73E: mov     ecx, [esp+18h+var_C]
0x8BF742: mov     large fs:0, ecx
0x8BF749: pop     ecx
0x8BF74A: pop     esi
0x8BF74B: add     esp, 10h
0x8BF74E: retn
