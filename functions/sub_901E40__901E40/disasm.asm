0x901E40: push    ebp
0x901E41: mov     ebp, esp
0x901E43: and     esp, 0FFFFFFF0h
0x901E46: sub     esp, 98h
0x901E4C: mov     eax, [ebp+arg_8]
0x901E4F: movaps  xmm0, xmmword ptr ds:0A965C0h
0x901E56: movaps  xmm1, xmmword ptr [eax+10h]
0x901E5A: push    esi
0x901E5B: push    edi
0x901E5C: mov     esi, eax
0x901E5E: add     eax, 10h
0x901E61: mov     ecx, 0Ch
0x901E66: lea     edi, [esp+0A0h+var_30]
0x901E6A: rep movsd
0x901E6C: mov     ecx, eax
0x901E6E: mov     esi, [ecx]
0x901E70: mov     [esp+0A0h+var_80], esi
0x901E74: mov     esi, [ecx+4]
0x901E77: mov     [esp+0A0h+var_7C], esi
0x901E7B: mov     esi, [ecx+8]
0x901E7E: mov     ecx, [ecx+0Ch]
0x901E81: mov     [esp+0A0h+var_74], ecx
0x901E85: mov     ecx, [ebp+arg_C]
0x901E88: mov     [esp+0A0h+var_70], ecx
0x901E8C: mov     ecx, [ebp+arg_10]
0x901E8F: test    ecx, ecx
0x901E91: mov     edx, offset off_A9B4E8
0x901E96: xorps   xmm1, xmm0
0x901E99: movaps  [esp+0A0h+var_20], xmm1
0x901EA1: mov     [esp+0A0h+var_8C], 7F7FFFFFh
0x901EA9: mov     [esp+0A0h+var_90], edx
0x901EAD: mov     [esp+0A0h+var_78], esi
0x901EB1: jz      short loc_901F03
0x901EB3: mov     [esp+0A0h+var_60], edx
0x901EB7: mov     edx, [eax]
0x901EB9: mov     [esp+0A0h+var_50], edx
0x901EBD: mov     edx, [eax+4]
0x901EC0: mov     [esp+0A0h+var_4C], edx
0x901EC4: mov     edx, [eax+8]
0x901EC7: mov     eax, [eax+0Ch]
0x901ECA: mov     [esp+0A0h+var_40], ecx
0x901ECE: mov     [esp+0A0h+var_48], edx
0x901ED2: lea     ecx, [esp+0A0h+var_60]
0x901ED6: push    ecx
0x901ED7: mov     ecx, [ebp+arg_0]
0x901EDA: lea     edx, [esp+0A4h+var_90]
0x901EDE: push    edx
0x901EDF: mov     edx, [ebp+arg_4]
0x901EE2: mov     [esp+0A8h+var_44], eax
0x901EE6: lea     eax, [esp+0A8h+var_30]
0x901EEA: push    eax
0x901EEB: push    ecx
0x901EEC: push    edx
0x901EED: mov     [esp+0B4h+var_5C], 7F7FFFFFh
0x901EF5: call    sub_905370
0x901EFA: add     esp, 14h
0x901EFD: pop     edi
0x901EFE: pop     esi
0x901EFF: mov     esp, ebp
0x901F01: pop     ebp
0x901F02: retn
0x901F03: mov     edx, [ebp+arg_0]
0x901F06: push    0
0x901F08: lea     eax, [esp+0A4h+var_90]
0x901F0C: push    eax
0x901F0D: mov     eax, [ebp+arg_4]
0x901F10: lea     ecx, [esp+0A8h+var_30]
0x901F14: push    ecx
0x901F15: push    edx
0x901F16: push    eax
0x901F17: call    sub_905370
0x901F1C: add     esp, 14h
0x901F1F: pop     edi
0x901F20: pop     esi
0x901F21: mov     esp, ebp
0x901F23: pop     ebp
0x901F24: retn
