0x789EC0: push    ebp
0x789EC1: mov     ebp, esp
0x789EC3: push    0FFFFFFFFh
0x789EC5: push    offset SEH_789EC0
0x789ECA: mov     eax, large fs:0
0x789ED0: push    eax
0x789ED1: sub     esp, 40h
0x789ED4: push    ebx
0x789ED5: push    esi
0x789ED6: push    edi
0x789ED7: mov     eax, ds:0B30AACh
0x789EDC: xor     eax, ebp
0x789EDE: push    eax
0x789EDF: lea     eax, [ebp+var_C]
0x789EE2: mov     large fs:0, eax
0x789EE8: mov     [ebp+var_10], esp
0x789EEB: mov     esi, ecx
0x789EED: xor     ebx, ebx
0x789EEF: cmp     [esi+45h], bl
0x789EF2: mov     [ebp+var_4], ebx
0x789EF5: jz      short loc_789F22
0x789EF7: mov     edi, [esi+60h]
0x789EFA: cmp     edi, ebx
0x789EFC: jz      short loc_789F22
0x789EFE: cmp     [esi+34h], ebx
0x789F01: jnz     short loc_789F22
0x789F03: mov     eax, [esi+30h]
0x789F06: cmp     eax, ebx
0x789F08: jz      short loc_789F22
0x789F0A: cmp     dword ptr [eax], 1
0x789F0D: jnz     short loc_789F22
0x789F0F: mov     ecx, edi
0x789F11: call    sub_797270
0x789F16: push    edi
0x789F17: call    FormHeapFree
0x789F1C: add     esp, 4
0x789F1F: mov     [esi+60h], ebx
0x789F22: mov     ecx, [ebp+var_C]
0x789F25: mov     large fs:0, ecx
0x789F2C: pop     ecx
0x789F2D: pop     edi
0x789F2E: pop     esi
0x789F2F: pop     ebx
0x789F30: mov     esp, ebp
0x789F32: pop     ebp
0x789F33: retn
0x789F34: mov     ecx, [ebp+var_14]
0x789F37: mov     eax, [ecx]
0x789F39: mov     edx, [eax+4]
0x789F3C: call    edx
0x789F3E: push    eax
0x789F3F: push    offset aCspeedtreertDe; "CSpeedTreeRT::DeleteFrondGeometry"
0x789F44: push    offset aSFailedS; "%s - failed [%s]"
0x789F49: lea     esi, [ebp+var_30]
0x789F4C: call    sub_7A54A0
0x789F51: add     esp, 0Ch
0x789F54: cmp     dword ptr [eax+18h], 10h
0x789F58: mov     byte ptr [ebp+var_4], 2
0x789F5C: jb      short loc_789F63
0x789F5E: mov     eax, [eax+4]
0x789F61: jmp     short loc_789F66
0x789F63: add     eax, 4
0x789F66: push    eax; Src
0x789F67: call    sub_7895E0
0x789F6C: add     esp, 4
0x789F6F: lea     ecx, [ebp+var_30]
0x789F72: call    sub_79AB00
0x789F77: mov     eax, offset loc_789F7D
0x789F7C: retn
0x789F7D: mov     ecx, [ebp+var_C]
0x789F80: mov     large fs:0, ecx
0x789F87: pop     ecx
0x789F88: pop     edi
0x789F89: pop     esi
0x789F8A: pop     ebx
0x789F8B: mov     esp, ebp
0x789F8D: pop     ebp
0x789F8E: retn
0x789F8F: push    offset aCspeedtreertDe; "CSpeedTreeRT::DeleteFrondGeometry"
0x789F94: push    offset aSThrewAnUnknow; "%s - threw an unknown system exception"
0x789F99: lea     esi, [ebp+var_4C]
0x789F9C: call    sub_7A54A0
0x789FA1: add     esp, 8
0x789FA4: cmp     dword ptr [eax+18h], 10h
0x789FA8: mov     byte ptr [ebp+var_4], 3
0x789FAC: jb      short loc_789FB3
0x789FAE: mov     eax, [eax+4]
0x789FB1: jmp     short loc_789FB6
0x789FB3: add     eax, 4
0x789FB6: push    eax; Src
0x789FB7: call    sub_7895E0
0x789FBC: add     esp, 4
0x789FBF: lea     ecx, [ebp+var_4C]
0x789FC2: call    sub_79AB00
0x789FC7: mov     eax, offset loc_789FCD
0x789FCC: retn
0x789FCD: mov     ecx, [ebp+var_C]
0x789FD0: mov     large fs:0, ecx
0x789FD7: pop     ecx
0x789FD8: pop     edi
0x789FD9: pop     esi
0x789FDA: pop     ebx
0x789FDB: mov     esp, ebp
0x789FDD: pop     ebp
0x789FDE: retn
