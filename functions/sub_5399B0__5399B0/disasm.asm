0x5399B0: push    0FFFFFFFFh
0x5399B2: push    offset ??1bhkBallAndSocketConstraint@@UAE@XZ_SEH
0x5399B7: mov     eax, large fs:0
0x5399BD: push    eax
0x5399BE: push    ecx
0x5399BF: push    esi
0x5399C0: mov     eax, ds:0B30AACh
0x5399C5: xor     eax, esp
0x5399C7: push    eax
0x5399C8: lea     eax, [esp+18h+var_C]
0x5399CC: mov     large fs:0, eax
0x5399D2: mov     esi, ecx
0x5399D4: mov     [esp+18h+var_10], esi
0x5399D8: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x5399DD: xor     eax, eax
0x5399DF: mov     [esi+0Ch], eax
0x5399E2: mov     dword ptr [esi], offset ??_7bhkConstraint@@6B@; const bhkConstraint::`vftable'
0x5399E8: add     dword ptr ds:0BA7D4Ch, 1
0x5399EF: mov     ecx, [esp+18h+arg_0]
0x5399F3: cmp     ecx, eax
0x5399F5: mov     [esp+18h+var_4], eax
0x5399F9: mov     dword ptr [esi], offset ??_7bhkLimitedHingeConstraint@@6B@; const bhkLimitedHingeConstraint::`vftable'
0x5399FF: jz      short loc_539A04
0x539A01: lea     eax, [ecx+4]
0x539A04: push    eax
0x539A05: mov     ecx, esi
0x539A07: call    sub_8A0610
0x539A0C: add     dword ptr ds:0BA7FC8h, 1
0x539A13: mov     eax, esi
0x539A15: mov     ecx, [esp+18h+var_C]
0x539A19: mov     large fs:0, ecx
0x539A20: pop     ecx
0x539A21: pop     esi
0x539A22: add     esp, 10h
0x539A25: retn    4
0x9D7410: mov     ecx, [ebp-10h]; this
0x9D7413: jmp     ??1bhkConstraint@@UAE@XZ; bhkConstraint::~bhkConstraint(void)
0x9D7418: mov     edx, [esp+arg_4]
0x9D741C: lea     eax, [edx-8]
0x9D741F: mov     ecx, [edx-0Ch]
0x9D7422: xor     ecx, eax
0x9D7424: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D7429: mov     eax, offset stru_AFF040
0x9D742E: jmp     ___CxxFrameHandler3
