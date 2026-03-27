0x6159C0: push    ebp
0x6159C1: mov     ebp, esp
0x6159C3: and     esp, 0FFFFFFF8h
0x6159C6: sub     esp, 84h
0x6159CC: push    ebx; int
0x6159CD: push    esi; int
0x6159CE: mov     esi, [ebp+arg_10]
0x6159D1: test    esi, esi
0x6159D3: push    edi
0x6159D4: jnz     short loc_6159FA
0x6159D6: mov     eax, [ebp+arg_0]
0x6159D9: mov     ecx, ds:0B3F9A8h
0x6159DF: mov     edx, ds:0B3F9ACh
0x6159E5: mov     [eax], ecx
0x6159E7: mov     ecx, ds:0B3F9B0h
0x6159ED: mov     [eax+4], edx
0x6159F0: mov     [eax+8], ecx
0x6159F3: pop     edi
0x6159F4: pop     esi
0x6159F5: pop     ebx
0x6159F6: mov     esp, ebp
0x6159F8: pop     ebp
0x6159F9: retn
0x6159FA: mov     edx, ds:0B3F9A8h
0x615A00: mov     eax, ds:0B3F9ACh
0x615A05: mov     ecx, ds:0B3F9B0h
0x615A0B: push    0; int
0x615A0D: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x615A12: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x615A17: push    0; int
0x615A19: push    esi; void *
0x615A1A: mov     dword ptr [esp+0A4h+var_3C], edx; float
0x615A1E: mov     dword ptr [esp+0A4h+var_3C+4], eax; float
0x615A22: mov     [esp+0A4h+var_34], ecx; float
0x615A26: call    OblivionDynamicCast
0x615A2B: mov     edi, eax
0x615A2D: add     esp, 14h
0x615A30: test    edi, edi
0x615A32: jz      short loc_615AAC
0x615A34: mov     edx, [edi]
0x615A36: mov     eax, [edx+380h]
0x615A3C: mov     ecx, edi
0x615A3E: call    eax
0x615A40: test    eax, eax
0x615A42: jz      short loc_615A7A
0x615A44: mov     edx, [edi]
0x615A46: mov     eax, [edx+380h]
0x615A4C: mov     ecx, edi
0x615A4E: call    eax
0x615A50: mov     ecx, eax; this
0x615A52: call    MobileObject_GetCharProxy
0x615A57: test    eax, eax
0x615A59: jz      short loc_615A7A
0x615A5B: mov     edx, [edi]
0x615A5D: mov     eax, [edx+380h]
0x615A63: lea     ecx, [esp+90h+var_3C]
0x615A67: push    ecx
0x615A68: mov     ecx, edi
0x615A6A: call    eax
0x615A6C: mov     ecx, eax; this
0x615A6E: call    MobileObject_GetCharProxy
0x615A73: mov     ecx, eax
0x615A75: call    sub_5639D0
0x615A7A: mov     ecx, edi; this
0x615A7C: call    MobileObject_GetCharProxy
0x615A81: test    eax, eax
0x615A83: jz      short loc_615AAC
0x615A85: mov     ecx, edi; this
0x615A87: call    MobileObject_GetCharProxy
0x615A8C: test    eax, eax
0x615A8E: jz      short loc_615AAC
0x615A90: mov     eax, [eax+8]
0x615A93: test    eax, eax
0x615A95: jz      short loc_615AAC
0x615A97: mov     ecx, eax
0x615A99: call    sub_8AC0A0
0x615A9E: push    eax
0x615A9F: lea     ecx, [esp+94h+var_3C]
0x615AA3: push    ecx
0x615AA4: call    sub_43F3E0
0x615AA9: add     esp, 8
0x615AAC: test    edi, edi
0x615AAE: fldz
0x615AB0: mov     edx, [esi+2Ch]
0x615AB3: fstp    [esp+90h+var_84]; float
0x615AB7: mov     eax, [esi+30h]
0x615ABA: mov     ecx, [esi+34h]
0x615ABD: mov     ebx, ds:0B370C0h
0x615AC3: mov     [esp+90h+var_54], edx; int
0x615AC7: mov     [esp+90h+var_50], eax; int
0x615ACB: mov     [esp+90h+var_4C], ecx; int
0x615ACF: jz      short loc_615B0B
0x615AD1: mov     eax, [ebp+arg_1C]
0x615AD4: cmp     eax, 3; switch 4 cases
0x615AD7: ja      def_615ADD
0x615ADD: jmp     ds:jpt_615ADD[eax*4]; switch jump
0x615AE4: mov     ecx, edi; jumptable 00615ADD case 2
0x615AE6: call    sub_5E0660
0x615AEB: fmul    qword ptr ds:0A31C70h
0x615AF1: jmp     short loc_615B58
0x615AF3: mov     ecx, edi; jumptable 00615ADD cases 1,3
0x615AF5: call    sub_5E0660
0x615AFA: jmp     short loc_615B52
0x615AFC: mov     ecx, edi; jumptable 00615ADD case 0
0x615AFE: call    sub_5E0660
0x615B03: fmul    qword ptr ds:0A3C770h
0x615B09: jmp     short loc_615B58
0x615B0B: mov     edx, [esi]
0x615B0D: mov     edx, [edx+15Ch]
0x615B13: lea     eax, [esp+90h+var_C]
0x615B1A: push    eax
0x615B1B: mov     ecx, esi
0x615B1D: call    edx
0x615B1F: fld     dword ptr [eax+8]
0x615B22: mov     eax, [esi]
0x615B24: fstp    qword ptr [esp+94h+var_84]
0x615B28: mov     edx, [eax+158h]
0x615B2E: lea     ecx, [esp+94h+var_1C]
0x615B32: push    ecx
0x615B33: mov     ecx, esi
0x615B35: call    edx
0x615B37: fld     dword ptr [eax+8]
0x615B3A: fsubr   qword ptr [esp+10h]
0x615B3E: mov     eax, [esi]
0x615B40: mov     edx, [eax+0ECh]
0x615B46: mov     ecx, esi
0x615B48: fstp    qword ptr [esp+10h]
0x615B4C: call    edx
0x615B4E: fmul    qword ptr [esp+10h]
0x615B52: fmul    qword ptr ds:0A2FAA0h
0x615B58: fadd    [esp+90h+var_4C]
0x615B5C: fstp    [esp+90h+var_4C]
