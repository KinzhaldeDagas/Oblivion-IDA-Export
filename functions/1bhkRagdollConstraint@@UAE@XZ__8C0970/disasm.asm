0x8C0970: push    0FFFFFFFFh
0x8C0972: push    offset ??1bhkBallAndSocketConstraint@@UAE@XZ_SEH
0x8C0977: mov     eax, large fs:0
0x8C097D: push    eax
0x8C097E: push    ecx
0x8C097F: push    esi
0x8C0980: mov     eax, ds:0B30AACh
0x8C0985: xor     eax, esp
0x8C0987: push    eax
0x8C0988: lea     eax, [esp+18h+var_C]
0x8C098C: mov     large fs:0, eax
0x8C0992: mov     esi, ecx
0x8C0994: mov     [esp+18h+var_10], esi
0x8C0998: mov     dword ptr [esi], offset ??_7bhkRagdollConstraint@@6B@; const bhkRagdollConstraint::`vftable'
0x8C099E: mov     [esp+18h+var_4], 0
0x8C09A6: call    sub_89D700
0x8C09AB: sub     dword ptr ds:0BA80B8h, 1
0x8C09B2: mov     ecx, esi; this
0x8C09B4: mov     [esp+18h+var_4], 0FFFFFFFFh
0x8C09BC: call    ??1bhkConstraint@@UAE@XZ; bhkConstraint::~bhkConstraint(void)
0x8C09C1: mov     ecx, [esp+18h+var_C]
0x8C09C5: mov     large fs:0, ecx
0x8C09CC: pop     ecx
0x8C09CD: pop     esi
0x8C09CE: add     esp, 10h
0x8C09D1: retn
0x9D7410: mov     ecx, [ebp-10h]; this
0x9D7413: jmp     ??1bhkConstraint@@UAE@XZ; bhkConstraint::~bhkConstraint(void)
0x9D7418: mov     edx, [esp+arg_4]
0x9D741C: lea     eax, [edx-8]
0x9D741F: mov     ecx, [edx-0Ch]
0x9D7422: xor     ecx, eax
0x9D7424: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D7429: mov     eax, offset stru_AFF040
0x9D742E: jmp     ___CxxFrameHandler3
