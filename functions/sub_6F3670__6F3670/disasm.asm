0x6F3670: push    ebp
0x6F3671: mov     ebp, esp
0x6F3673: push    0FFFFFFFFh
0x6F3675: push    offset SEH_6F3670
0x6F367A: mov     eax, large fs:0
0x6F3680: push    eax
0x6F3681: sub     esp, 0Ch
0x6F3684: push    ebx
0x6F3685: push    esi
0x6F3686: push    edi
0x6F3687: mov     eax, ds:0B30AACh
0x6F368C: xor     eax, ebp
0x6F368E: push    eax
0x6F368F: lea     eax, [ebp+var_C]
0x6F3692: mov     large fs:0, eax
0x6F3698: mov     [ebp+var_10], esp
0x6F369B: mov     esi, [ebp+arg_0]
0x6F369E: mov     edi, [ebp+arg_4]
0x6F36A1: xor     ebx, ebx
0x6F36A3: mov     [ebp+var_14], esi
0x6F36A6: mov     [ebp+var_4], ebx
0x6F36A9: lea     esp, [esp+0]
0x6F36B0: cmp     edi, ebx
0x6F36B2: jbe     short loc_6F3700
0x6F36B4: mov     [ebp+arg_4], esi
0x6F36B7: mov     [ebp+var_18], esi
0x6F36BA: cmp     esi, ebx
0x6F36BC: mov     byte ptr [ebp+var_4], 1
0x6F36C0: jz      short loc_6F36CD
0x6F36C2: mov     eax, [ebp+arg_8]
0x6F36C5: push    eax
0x6F36C6: mov     ecx, esi
0x6F36C8: call    sub_6F2D30
0x6F36CD: sub     edi, 1
0x6F36D0: add     esi, 2Ch ; ','
0x6F36D3: mov     byte ptr [ebp+var_4], bl
0x6F36D6: mov     [ebp+arg_0], esi
0x6F36D9: jmp     short loc_6F36B0
0x6F36DB: mov     esi, [ebp+var_14]
0x6F36DE: mov     edi, [ebp+arg_0]
0x6F36E1: cmp     esi, edi
0x6F36E3: jz      short loc_6F36F7
0x6F36E5: mov     ebx, [ebp+arg_C]
0x6F36E8: push    esi
0x6F36E9: mov     ecx, ebx
0x6F36EB: call    sub_557130
0x6F36F0: add     esi, 2Ch ; ','
0x6F36F3: cmp     esi, edi
0x6F36F5: jnz     short loc_6F36E8
0x6F36F7: xor     ebx, ebx
0x6F36F9: push    ebx
0x6F36FA: push    ebx
0x6F36FB: call    ThrowException??
0x6F3700: mov     ecx, [ebp+var_C]
0x6F3703: mov     large fs:0, ecx
0x6F370A: pop     ecx
0x6F370B: pop     edi
0x6F370C: pop     esi
0x6F370D: pop     ebx
0x6F370E: mov     esp, ebp
0x6F3710: pop     ebp
0x6F3711: retn
0x9C8930: mov     eax, [ebp+arg_4]
0x9C8933: push    eax
0x9C8934: mov     ecx, [ebp+var_18]; this
0x9C8937: push    ecx
0x9C8938: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x9C893D: add     esp, 8
0x9C8940: retn
0x9C8941: mov     edx, [esp-4+arg_4]
0x9C8945: lea     eax, [edx+0Ch]
0x9C8948: mov     ecx, [edx-1Ch]
0x9C894B: xor     ecx, eax
0x9C894D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C8952: mov     eax, offset stru_AF10E4
0x9C8957: jmp     ___CxxFrameHandler3
