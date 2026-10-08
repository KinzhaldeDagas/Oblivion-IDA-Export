0x8AFFA0: push    0FFFFFFFFh
0x8AFFA2: push    offset ??1bhkEntity@@UAE@XZ_SEH
0x8AFFA7: mov     eax, large fs:0
0x8AFFAD: push    eax
0x8AFFAE: push    ecx
0x8AFFAF: push    esi
0x8AFFB0: mov     eax, ds:0B30AACh
0x8AFFB5: xor     eax, esp
0x8AFFB7: push    eax
0x8AFFB8: lea     eax, [esp+18h+var_C]
0x8AFFBC: mov     large fs:0, eax
0x8AFFC2: mov     esi, ecx
0x8AFFC4: mov     [esp+18h+var_10], esi
0x8AFFC8: mov     dword ptr [esi], offset ??_7bhkEntity@@6B@; const bhkEntity::`vftable'
0x8AFFCE: mov     [esp+18h+var_4], 0
0x8AFFD6: call    sub_89D700
0x8AFFDB: sub     dword ptr ds:0BA7F8Ch, 1
0x8AFFE2: mov     ecx, esi; this
0x8AFFE4: mov     [esp+18h+var_4], 0FFFFFFFFh
0x8AFFEC: call    ??1bhkWorldObject@@UAE@XZ; bhkWorldObject::~bhkWorldObject(void)
0x8AFFF1: mov     ecx, [esp+18h+var_C]
0x8AFFF5: mov     large fs:0, ecx
0x8AFFFC: pop     ecx
0x8AFFFD: pop     esi
0x8AFFFE: add     esp, 10h
0x8B0001: retn
0x9D6DA0: mov     ecx, [ebp-10h]; this
0x9D6DA3: jmp     ??1bhkWorldObject@@UAE@XZ; bhkWorldObject::~bhkWorldObject(void)
0x9D6DA8: mov     edx, [esp+arg_4]
0x9D6DAC: lea     eax, [edx-8]
0x9D6DAF: mov     ecx, [edx-0Ch]
0x9D6DB2: xor     ecx, eax
0x9D6DB4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D6DB9: mov     eax, offset stru_AFEA9C
0x9D6DBE: jmp     ___CxxFrameHandler3
