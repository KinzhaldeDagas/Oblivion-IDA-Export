0x89D870: push    0FFFFFFFFh
0x89D872: push    offset ??1bhkConstraint@@UAE@XZ_SEH
0x89D877: mov     eax, large fs:0
0x89D87D: push    eax
0x89D87E: push    ecx
0x89D87F: push    esi
0x89D880: mov     eax, ds:0B30AACh
0x89D885: xor     eax, esp
0x89D887: push    eax
0x89D888: lea     eax, [esp+18h+var_C]
0x89D88C: mov     large fs:0, eax
0x89D892: mov     esi, ecx
0x89D894: mov     [esp+18h+var_10], esi
0x89D898: mov     dword ptr [esi], offset ??_7bhkAction@@6B@; const bhkAction::`vftable'
0x89D89E: mov     [esp+18h+var_4], 0
0x89D8A6: call    sub_89D700
0x89D8AB: sub     dword ptr ds:0BA7D00h, 1
0x89D8B2: mov     ecx, esi; this
0x89D8B4: mov     [esp+18h+var_4], 0FFFFFFFFh
0x89D8BC: call    ??1bhkSerializable@@UAE@XZ; bhkSerializable::~bhkSerializable(void)
0x89D8C1: mov     ecx, [esp+18h+var_C]
0x89D8C5: mov     large fs:0, ecx
0x89D8CC: pop     ecx
0x89D8CD: pop     esi
0x89D8CE: add     esp, 10h
0x89D8D1: retn
0x9D68E0: mov     ecx, [ebp-10h]; this
0x9D68E3: jmp     ??1bhkSerializable@@UAE@XZ; bhkSerializable::~bhkSerializable(void)
0x9D68E8: mov     edx, [esp+arg_4]
0x9D68EC: lea     eax, [edx-8]
0x9D68EF: mov     ecx, [edx-0Ch]
0x9D68F2: xor     ecx, eax
0x9D68F4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D68F9: mov     eax, offset stru_AFE69C
0x9D68FE: jmp     ___CxxFrameHandler3
