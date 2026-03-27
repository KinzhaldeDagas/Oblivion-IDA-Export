0x47DE90: push    0FFFFFFFFh
0x47DE92: push    offset ??1bhkMouseSpringAction@@UAE@XZ_SEH
0x47DE97: mov     eax, large fs:0
0x47DE9D: push    eax
0x47DE9E: push    ecx
0x47DE9F: push    esi
0x47DEA0: mov     eax, ds:0B30AACh
0x47DEA5: xor     eax, esp
0x47DEA7: push    eax
0x47DEA8: lea     eax, [esp+18h+var_C]
0x47DEAC: mov     large fs:0, eax
0x47DEB2: mov     esi, ecx
0x47DEB4: mov     [esp+18h+var_10], esi
0x47DEB8: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x47DEBD: xor     eax, eax
0x47DEBF: mov     dword ptr [esi], offset ??_7bhkAction@@6B@; const bhkAction::`vftable'
0x47DEC5: mov     [esi+0Ch], eax
0x47DEC8: add     dword ptr ds:0BA7D00h, 1
0x47DECF: mov     dword ptr [esi], offset ??_7bhkUnaryAction@@6B@; const bhkUnaryAction::`vftable'
0x47DED5: add     dword ptr ds:0BA7D0Ch, 1
0x47DEDC: mov     [esp+18h+var_4], eax
0x47DEE0: mov     eax, [esp+18h+arg_0]
0x47DEE4: push    eax
0x47DEE5: mov     ecx, esi
0x47DEE7: mov     dword ptr [esi], offset ??_7bhkMouseSpringAction@@6B@; const bhkMouseSpringAction::`vftable'
0x47DEED: call    sub_89E620
0x47DEF2: add     dword ptr ds:0BA7D18h, 1
0x47DEF9: mov     eax, esi
0x47DEFB: mov     ecx, [esp+18h+var_C]
0x47DEFF: mov     large fs:0, ecx
0x47DF06: pop     ecx
0x47DF07: pop     esi
0x47DF08: add     esp, 10h
0x47DF0B: retn    4
