0x46AD70: push    0FFFFFFFFh
0x46AD72: push    offset TESForm_CompareAllComponentsTo_SEH
0x46AD77: mov     eax, large fs:0
0x46AD7D: push    eax
0x46AD7E: sub     esp, 0D0h
0x46AD84: push    ebx
0x46AD85: push    esi
0x46AD86: push    edi
0x46AD87: mov     eax, ds:0B30AACh
0x46AD8C: xor     eax, esp
0x46AD8E: push    eax
0x46AD8F: lea     eax, [esp+0ECh+var_C]
0x46AD96: mov     large fs:0, eax
0x46AD9C: mov     esi, ecx
0x46AD9E: mov     edi, [esp+0ECh+a2]
0x46ADA5: test    edi, edi
0x46ADA7: jnz     short loc_46ADAD
0x46ADA9: mov     al, 1
0x46ADAB: jmp     short loc_46AE1D
0x46ADAD: lea     ecx, [esp+0ECh+var_74]
0x46ADB1: call    FormComponentList_ZeroInit
0x46ADB6: lea     ecx, [esp+0ECh+var_DC]
0x46ADBA: mov     [esp+0ECh+var_4], 0
0x46ADC5: call    FormComponentList_ZeroInit
0x46ADCA: push    esi
0x46ADCB: lea     ecx, [esp+0F0h+var_74]
0x46ADCF: mov     byte ptr [esp+0F0h+var_4], 1
0x46ADD7: call    FormComponentList_Build
0x46ADDC: push    edi
0x46ADDD: lea     ecx, [esp+0F0h+var_DC]
0x46ADE1: call    FormComponentList_Build
0x46ADE6: lea     eax, [esp+0ECh+var_DC]
0x46ADEA: push    eax
0x46ADEB: lea     ecx, [esp+0F0h+var_74]
0x46ADEF: call    FormComponentList_CompareTo
0x46ADF4: lea     ecx, [esp+0ECh+var_DC]; this
0x46ADF8: mov     bl, al
0x46ADFA: mov     byte ptr [esp+0ECh+var_4], 0
0x46AE02: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x46AE07: lea     ecx, [esp+0ECh+var_74]; this
0x46AE0B: mov     [esp+0ECh+var_4], 0FFFFFFFFh
0x46AE16: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x46AE1B: mov     al, bl
0x46AE1D: mov     ecx, [esp+0ECh+var_C]
0x46AE24: mov     large fs:0, ecx
0x46AE2B: pop     ecx
0x46AE2C: pop     edi
0x46AE2D: pop     esi
0x46AE2E: pop     ebx
0x46AE2F: add     esp, 0DCh
0x46AE35: retn    4
0x9AEA20: lea     ecx, [ebp-74h]; this
0x9AEA23: jmp     Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x9AEA28: lea     ecx, [ebp-0DCh]; this
0x9AEA2E: jmp     Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x9AEA33: mov     edx, [esp+arg_4]
0x9AEA37: lea     eax, [edx-0DCh]
0x9AEA3D: mov     ecx, [edx-0E0h]
0x9AEA43: xor     ecx, eax
0x9AEA45: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AEA4A: mov     eax, offset stru_ADB15C
0x9AEA4F: jmp     ___CxxFrameHandler3
