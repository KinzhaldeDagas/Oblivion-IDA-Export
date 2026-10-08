0x568E10: push    0FFFFFFFFh
0x568E12: push    offset ??0TESPackage@@QAE@XZ_SEH
0x568E17: mov     eax, large fs:0
0x568E1D: push    eax
0x568E1E: push    ecx
0x568E1F: push    esi
0x568E20: mov     eax, ds:0B30AACh
0x568E25: xor     eax, esp
0x568E27: push    eax
0x568E28: lea     eax, [esp+18h+var_C]
0x568E2C: mov     large fs:0, eax
0x568E32: mov     esi, ecx
0x568E34: mov     [esp+18h+var_10], esi
0x568E38: call    TESForm_constr
0x568E3D: lea     ecx, [esi+2Ch]
0x568E40: mov     [esp+18h+var_4], 0
0x568E48: mov     dword ptr [esi], offset ??_7TESPackage@@6B@; Verified complete TESPackage persistence table extentEC; tail DC/E0/E4/E8 is no-argument size/save/load/init-load virtuals. Derived vtable identity from constructor stores and RTTI names. Prior incompleteDC type corrected.
0x568E4E: call    sub_569D60
0x568E53: lea     ecx, [esi+34h]; this
0x568E56: mov     byte ptr [esp+18h+var_4], 1
0x568E5B: call    ??0DNameNode@@IAE@XZ; DNameNode::DNameNode(void)
0x568E60: mov     ecx, esi
0x568E62: mov     byte ptr [esp+18h+var_4], 2
0x568E67: mov     byte ptr [esi+4], 3Dh ; '='
0x568E6B: call    sub_568730
0x568E70: mov     eax, esi
0x568E72: mov     ecx, [esp+18h+var_C]
0x568E76: mov     large fs:0, ecx
0x568E7D: pop     ecx
0x568E7E: pop     esi
0x568E7F: add     esp, 10h
0x568E82: retn
0x9BD830: mov     ecx, [ebp-10h]; this
0x9BD833: jmp     TESForm_destr
0x9BD838: mov     ecx, [ebp-10h]
0x9BD83B: add     ecx, 2Ch ; ','; this
0x9BD83E: jmp     Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x9BD843: mov     ecx, [ebp-10h]
0x9BD846: add     ecx, 34h ; '4'
0x9BD849: jmp     sub_56A7A0
0x9BD84E: mov     edx, [esp+arg_4]
0x9BD852: lea     eax, [edx-8]
0x9BD855: mov     ecx, [edx-0Ch]
0x9BD858: xor     ecx, eax
0x9BD85A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BD85F: mov     eax, offset stru_AE7188
0x9BD864: jmp     ___CxxFrameHandler3
