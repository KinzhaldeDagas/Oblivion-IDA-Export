0x8C50A0: push    0FFFFFFFFh
0x8C50A2: push    offset ??1bhkPackedNiTriStripsShape@@UAE@XZ_SEH
0x8C50A7: mov     eax, large fs:0
0x8C50AD: push    eax
0x8C50AE: push    ecx
0x8C50AF: push    esi
0x8C50B0: mov     eax, ds:0B30AACh
0x8C50B5: xor     eax, esp
0x8C50B7: push    eax
0x8C50B8: lea     eax, [esp+18h+var_C]
0x8C50BC: mov     large fs:0, eax
0x8C50C2: mov     esi, ecx
0x8C50C4: mov     [esp+18h+var_10], esi
0x8C50C8: mov     dword ptr [esi], offset ??_7bhkPackedNiTriStripsShape@@6B@; const bhkPackedNiTriStripsShape::`vftable'
0x8C50CE: mov     [esp+18h+var_4], 0
0x8C50D6: call    sub_89D700
0x8C50DB: sub     dword ptr ds:0BA8120h, 1
0x8C50E2: mov     ecx, esi; this
0x8C50E4: mov     [esp+18h+var_4], 0FFFFFFFFh
0x8C50EC: call    ??1bhkShapeCollection@@UAE@XZ; bhkShapeCollection::~bhkShapeCollection(void)
0x8C50F1: mov     ecx, [esp+18h+var_C]
0x8C50F5: mov     large fs:0, ecx
0x8C50FC: pop     ecx
0x8C50FD: pop     esi
0x8C50FE: add     esp, 10h
0x8C5101: retn
0x9D61E0: mov     ecx, [ebp-10h]; this
0x9D61E3: jmp     ??1bhkShapeCollection@@UAE@XZ; bhkShapeCollection::~bhkShapeCollection(void)
0x9D61E8: mov     edx, [esp+arg_4]
0x9D61EC: lea     eax, [edx-8]
0x9D61EF: mov     ecx, [edx-0Ch]
0x9D61F2: xor     ecx, eax
0x9D61F4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D61F9: mov     eax, offset stru_AFE13C
0x9D61FE: jmp     ___CxxFrameHandler3
