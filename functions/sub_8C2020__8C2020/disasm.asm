0x8C2020: push    0FFFFFFFFh
0x8C2022: push    offset SEH_8C62B0
0x8C2027: mov     eax, large fs:0
0x8C202D: push    eax
0x8C202E: push    ecx
0x8C202F: push    esi
0x8C2030: mov     eax, ds:0B30AACh
0x8C2035: xor     eax, esp
0x8C2037: push    eax
0x8C2038: lea     eax, [esp+18h+var_C]
0x8C203C: mov     large fs:0, eax
0x8C2042: push    10h; Size
0x8C2044: call    FormHeapAlloc
0x8C2049: mov     esi, eax
0x8C204B: add     esp, 4
0x8C204E: mov     [esp+18h+var_10], esi
0x8C2052: test    esi, esi
0x8C2054: mov     [esp+18h+var_4], 0
0x8C205C: jz      short loc_8C20A8
0x8C205E: mov     ecx, esi; this
0x8C2060: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x8C2065: mov     dword ptr [esi], offset ??_7bhkConstraint@@6B@; const bhkConstraint::`vftable'
0x8C206B: mov     eax, 1
0x8C2070: mov     dword ptr [esi+0Ch], 0
0x8C2077: add     ds:0BA7D4Ch, eax
0x8C207D: mov     dword ptr [esi], offset ??_7bhkGenericConstraint@@6B@; const bhkGenericConstraint::`vftable'
0x8C2083: add     ds:0BA8354h, eax
0x8C2089: mov     dword ptr [esi], offset ??_7bhkFixedConstraint@@6B@; const bhkFixedConstraint::`vftable'
0x8C208F: add     ds:0BA80D0h, eax
0x8C2095: mov     eax, esi
0x8C2097: mov     ecx, [esp+18h+var_C]
0x8C209B: mov     large fs:0, ecx
0x8C20A2: pop     ecx
0x8C20A3: pop     esi
0x8C20A4: add     esp, 10h
0x8C20A7: retn
0x8C20A8: xor     eax, eax
0x8C20AA: mov     ecx, [esp+18h+var_C]
0x8C20AE: mov     large fs:0, ecx
0x8C20B5: pop     ecx
0x8C20B6: pop     esi
0x8C20B7: add     esp, 10h
0x8C20BA: retn
