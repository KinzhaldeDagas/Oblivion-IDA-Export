0x8BFE90: push    0FFFFFFFFh
0x8BFE92: push    offset SEH_8C62B0
0x8BFE97: mov     eax, large fs:0
0x8BFE9D: push    eax
0x8BFE9E: push    ecx
0x8BFE9F: push    esi
0x8BFEA0: mov     eax, ds:0B30AACh
0x8BFEA5: xor     eax, esp
0x8BFEA7: push    eax
0x8BFEA8: lea     eax, [esp+18h+var_C]
0x8BFEAC: mov     large fs:0, eax
0x8BFEB2: push    10h; Size
0x8BFEB4: call    FormHeapAlloc
0x8BFEB9: mov     esi, eax
0x8BFEBB: add     esp, 4
0x8BFEBE: mov     [esp+18h+var_10], esi
0x8BFEC2: test    esi, esi
0x8BFEC4: mov     [esp+18h+var_4], 0
0x8BFECC: jz      short loc_8BFF0C
0x8BFECE: mov     ecx, esi; this
0x8BFED0: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x8BFED5: mov     eax, 1
0x8BFEDA: mov     dword ptr [esi], offset ??_7bhkConstraint@@6B@; const bhkConstraint::`vftable'
0x8BFEE0: mov     dword ptr [esi+0Ch], 0
0x8BFEE7: add     ds:0BA7D4Ch, eax
0x8BFEED: mov     dword ptr [esi], offset ??_7bhkWheelConstraint@@6B@; const bhkWheelConstraint::`vftable'
0x8BFEF3: add     ds:0BA80A0h, eax
0x8BFEF9: mov     eax, esi
0x8BFEFB: mov     ecx, [esp+18h+var_C]
0x8BFEFF: mov     large fs:0, ecx
0x8BFF06: pop     ecx
0x8BFF07: pop     esi
0x8BFF08: add     esp, 10h
0x8BFF0B: retn
0x8BFF0C: xor     eax, eax
0x8BFF0E: mov     ecx, [esp+18h+var_C]
0x8BFF12: mov     large fs:0, ecx
0x8BFF19: pop     ecx
0x8BFF1A: pop     esi
0x8BFF1B: add     esp, 10h
0x8BFF1E: retn
