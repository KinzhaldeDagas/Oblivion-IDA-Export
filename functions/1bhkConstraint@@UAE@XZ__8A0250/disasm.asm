0x8A0250: push    0FFFFFFFFh
0x8A0252: push    offset ??1bhkConstraint@@UAE@XZ_SEH
0x8A0257: mov     eax, large fs:0
0x8A025D: push    eax
0x8A025E: push    ecx
0x8A025F: push    esi
0x8A0260: mov     eax, ds:0B30AACh
0x8A0265: xor     eax, esp
0x8A0267: push    eax
0x8A0268: lea     eax, [esp+18h+var_C]
0x8A026C: mov     large fs:0, eax
0x8A0272: mov     esi, ecx
0x8A0274: mov     [esp+18h+var_10], esi
0x8A0278: mov     dword ptr [esi], offset ??_7bhkConstraint@@6B@; const bhkConstraint::`vftable'
0x8A027E: mov     [esp+18h+var_4], 0
0x8A0286: call    sub_89D700
0x8A028B: sub     dword ptr ds:0BA7D4Ch, 1
0x8A0292: mov     ecx, esi; this
0x8A0294: mov     [esp+18h+var_4], 0FFFFFFFFh
0x8A029C: call    ??1bhkSerializable@@UAE@XZ; bhkSerializable::~bhkSerializable(void)
0x8A02A1: mov     ecx, [esp+18h+var_C]
0x8A02A5: mov     large fs:0, ecx
0x8A02AC: pop     ecx
0x8A02AD: pop     esi
0x8A02AE: add     esp, 10h
0x8A02B1: retn
0x9D68E0: mov     ecx, [ebp-10h]; this
0x9D68E3: jmp     ??1bhkSerializable@@UAE@XZ; bhkSerializable::~bhkSerializable(void)
0x9D68E8: mov     edx, [esp+arg_4]
0x9D68EC: lea     eax, [edx-8]
0x9D68EF: mov     ecx, [edx-0Ch]
0x9D68F2: xor     ecx, eax
0x9D68F4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D68F9: mov     eax, offset stru_AFE69C
0x9D68FE: jmp     ___CxxFrameHandler3
