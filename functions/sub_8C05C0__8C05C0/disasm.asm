0x8C05C0: push    0FFFFFFFFh
0x8C05C2: push    offset SEH_8C62B0
0x8C05C7: mov     eax, large fs:0
0x8C05CD: push    eax
0x8C05CE: push    ecx
0x8C05CF: push    esi
0x8C05D0: mov     eax, ds:0B30AACh
0x8C05D5: xor     eax, esp
0x8C05D7: push    eax
0x8C05D8: lea     eax, [esp+18h+var_C]
0x8C05DC: mov     large fs:0, eax
0x8C05E2: push    10h; Size
0x8C05E4: call    FormHeapAlloc
0x8C05E9: mov     esi, eax
0x8C05EB: add     esp, 4
0x8C05EE: mov     [esp+18h+var_10], esi
0x8C05F2: test    esi, esi
0x8C05F4: mov     [esp+18h+var_4], 0
0x8C05FC: jz      short loc_8C063C
0x8C05FE: mov     ecx, esi; this
0x8C0600: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x8C0605: mov     eax, 1
0x8C060A: mov     dword ptr [esi], offset ??_7bhkConstraint@@6B@; const bhkConstraint::`vftable'
0x8C0610: mov     dword ptr [esi+0Ch], 0
0x8C0617: add     ds:0BA7D4Ch, eax
0x8C061D: mov     dword ptr [esi], offset ??_7bhkStiffSpringConstraint@@6B@; const bhkStiffSpringConstraint::`vftable'
0x8C0623: add     ds:0BA80ACh, eax
0x8C0629: mov     eax, esi
0x8C062B: mov     ecx, [esp+18h+var_C]
0x8C062F: mov     large fs:0, ecx
0x8C0636: pop     ecx
0x8C0637: pop     esi
0x8C0638: add     esp, 10h
0x8C063B: retn
0x8C063C: xor     eax, eax
0x8C063E: mov     ecx, [esp+18h+var_C]
0x8C0642: mov     large fs:0, ecx
0x8C0649: pop     ecx
0x8C064A: pop     esi
0x8C064B: add     esp, 10h
0x8C064E: retn
