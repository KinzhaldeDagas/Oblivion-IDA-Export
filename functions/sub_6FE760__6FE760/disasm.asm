0x6FE760: push    0FFFFFFFFh
0x6FE762: push    offset SEH_6FE760
0x6FE767: mov     eax, large fs:0
0x6FE76D: push    eax
0x6FE76E: push    ecx
0x6FE76F: push    esi
0x6FE770: mov     eax, ds:0B30AACh
0x6FE775: xor     eax, esp
0x6FE777: push    eax
0x6FE778: lea     eax, [esp+18h+var_C]
0x6FE77C: mov     large fs:0, eax
0x6FE782: mov     esi, ecx
0x6FE784: call    sub_752FD0
0x6FE789: mov     dword ptr [esi], offset ??_7BSPSysArrayEmitter@@6B@; const BSPSysArrayEmitter::`vftable'
0x6FE78F: mov     dword ptr [esi+54h], 2
0x6FE796: xor     eax, eax
0x6FE798: mov     [esi+60h], ax
0x6FE79C: mov     [esi+62h], ax
0x6FE7A0: mov     [esi+64h], ax
0x6FE7A4: mov     [esi+5Ch], eax
0x6FE7A7: mov     dword ptr [esi+58h], offset ??_7?$NiTArray@V?$NiPointer@VNiAVObject@@@@@@6B@; const NiTArray<NiPointer<NiAVObject>>::`vftable'
0x6FE7AE: mov     word ptr [esi+66h], 1
0x6FE7B4: mov     eax, esi
0x6FE7B6: mov     ecx, [esp+18h+var_C]
0x6FE7BA: mov     large fs:0, ecx
0x6FE7C1: pop     ecx
0x6FE7C2: pop     esi
0x6FE7C3: add     esp, 10h
0x6FE7C6: retn
0x9C9290: mov     ecx, [ebp-10h]; this
0x9C9293: jmp     j_??1NiPSysFieldModifier@@UAE@XZ; NiPSysFieldModifier::~NiPSysFieldModifier(void)
0x9C9298: mov     edx, [esp+arg_4]
0x9C929C: lea     eax, [edx-8]
0x9C929F: mov     ecx, [edx-0Ch]
0x9C92A2: xor     ecx, eax
0x9C92A4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C92A9: mov     eax, offset stru_AF1B9C
0x9C92AE: jmp     ___CxxFrameHandler3
