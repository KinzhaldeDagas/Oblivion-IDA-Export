0x46ACB0: push    0FFFFFFFFh
0x46ACB2: push    offset TESForm_CopyAllComponentsFrom_SEH
0x46ACB7: mov     eax, large fs:0
0x46ACBD: push    eax
0x46ACBE: sub     esp, 0D0h
0x46ACC4: push    esi
0x46ACC5: mov     eax, ds:0B30AACh
0x46ACCA: xor     eax, esp
0x46ACCC: push    eax
0x46ACCD: lea     eax, [esp+0E4h+var_C]
0x46ACD4: mov     large fs:0, eax
0x46ACDA: mov     esi, ecx
0x46ACDC: lea     ecx, [esp+0E4h+var_74]
0x46ACE0: call    FormComponentList_ZeroInit
0x46ACE5: lea     ecx, [esp+0E4h+var_DC]
0x46ACE9: mov     [esp+0E4h+var_4], 0
0x46ACF4: call    FormComponentList_ZeroInit
0x46ACF9: push    esi
0x46ACFA: lea     ecx, [esp+0E8h+var_74]
0x46ACFE: mov     byte ptr [esp+0E8h+var_4], 1
0x46AD06: call    FormComponentList_Build
0x46AD0B: mov     eax, [esp+0E4h+arg_0]
0x46AD12: push    eax
0x46AD13: lea     ecx, [esp+0E8h+var_DC]
0x46AD17: call    FormComponentList_Build
0x46AD1C: lea     ecx, [esp+0E4h+var_DC]
0x46AD20: push    ecx
0x46AD21: lea     ecx, [esp+0E8h+var_74]
0x46AD25: call    FormComponentList_CopyFrom
0x46AD2A: lea     ecx, [esp+0E4h+var_DC]; this
0x46AD2E: mov     byte ptr [esp+0E4h+var_4], 0
0x46AD36: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x46AD3B: lea     ecx, [esp+0E4h+var_74]; this
0x46AD3F: mov     [esp+0E4h+var_4], 0FFFFFFFFh
0x46AD4A: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x46AD4F: mov     ecx, [esp+0E4h+var_C]
0x46AD56: mov     large fs:0, ecx
0x46AD5D: pop     ecx
0x46AD5E: pop     esi
0x46AD5F: add     esp, 0DCh
0x46AD65: retn    4
0x9AE9E0: lea     ecx, [ebp-74h]; this
0x9AE9E3: jmp     Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x9AE9E8: lea     ecx, [ebp-0DCh]; this
0x9AE9EE: jmp     Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x9AE9F3: mov     edx, [esp+arg_4]
0x9AE9F7: lea     eax, [edx-0D4h]
0x9AE9FD: mov     ecx, [edx-0D8h]
0x9AEA03: xor     ecx, eax
0x9AEA05: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AEA0A: mov     eax, offset stru_ADB128
0x9AEA0F: jmp     ___CxxFrameHandler3
