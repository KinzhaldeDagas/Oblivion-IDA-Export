0x685EA0: push    esi
0x685EA1: mov     esi, ecx
0x685EA3: cmp     dword ptr [esi+28h], 0
0x685EA7: jz      short loc_685EAE
0x685EA9: call    sub_684830
0x685EAE: push    ebp
0x685EAF: mov     ebp, [esp+8+arg_0]
0x685EB3: test    ebp, ebp
0x685EB5: push    edi
0x685EB6: jz      short loc_685ED0
0x685EB8: mov     eax, [ebp+0]
0x685EBB: mov     edx, [eax+174h]
0x685EC1: push    0
0x685EC3: mov     ecx, ebp
0x685EC5: call    edx
0x685EC7: push    eax
0x685EC8: lea     ecx, [esi+14h]
0x685ECB: call    sub_68C280
0x685ED0: push    ebx
0x685ED1: lea     ecx, [esi+14h]
0x685ED4: call    sub_68C740
0x685ED9: mov     edi, [esi+28h]
0x685EDC: mov     ebx, eax
0x685EDE: cmp     edi, ebx
0x685EE0: jz      short loc_685F13
0x685EE2: test    edi, edi
0x685EE4: jz      short loc_685F02
0x685EE6: lea     eax, [edi+4]
0x685EE9: push    eax; lpAddend
0x685EEA: call    dword ptr ds:0A2807Ch
0x685EF0: test    eax, eax
0x685EF2: jnz     short loc_685F02
0x685EF4: test    edi, edi
0x685EF6: jz      short loc_685F02
0x685EF8: mov     edx, [edi]
0x685EFA: mov     eax, [edx]
0x685EFC: push    1
0x685EFE: mov     ecx, edi
0x685F00: call    eax
0x685F02: test    ebx, ebx
0x685F04: mov     [esi+28h], ebx
0x685F07: jz      short loc_685F13
0x685F09: add     ebx, 4
0x685F0C: push    ebx; lpAddend
0x685F0D: call    dword ptr ds:0A28078h
0x685F13: cmp     dword ptr [esi+28h], 0
0x685F17: pop     ebx
0x685F18: jz      short loc_685F7F
0x685F1A: push    ebp
0x685F1B: mov     ecx, esi
0x685F1D: call    sub_689F00
0x685F22: test    eax, eax
0x685F24: jz      short loc_685F36
0x685F26: mov     ecx, [esi+28h]
0x685F29: mov     edx, [ecx]
0x685F2B: push    1
0x685F2D: push    eax
0x685F2E: mov     eax, [edx+84h]
0x685F34: call    eax
0x685F36: mov     edi, [esi+28h]
0x685F39: call    sub_4E70B0
0x685F3E: push    eax; a2
0x685F3F: mov     ecx, edi; this
0x685F41: call    sub_405680
0x685F46: mov     ecx, ds:0B333A0h
0x685F4C: mov     ecx, [ecx+0Ch]
0x685F4F: mov     edx, [ecx]
0x685F51: mov     eax, [esi+28h]
0x685F54: mov     edx, [edx+84h]
0x685F5A: push    1
0x685F5C: push    eax
0x685F5D: call    edx
0x685F5F: mov     ecx, [esi+28h]; this
0x685F62: call    NiAVObject_InitializePropertyState
0x685F67: mov     ecx, [esi+28h]
0x685F6A: call    NiNode_UpdateDynamicEffectState
0x685F6F: fldz
0x685F71: push    0; a3
0x685F73: push    ecx
0x685F74: mov     ecx, [esi+28h]; this
0x685F77: fstp    [esp+14h+a2]; a2
0x685F7A: call    NiAVObject_UpdateNiAVObject
0x685F7F: test    ebp, ebp
0x685F81: jz      short loc_685F97
0x685F83: lea     edi, [esi+14h]
0x685F86: push    0
0x685F88: mov     ecx, edi
0x685F8A: call    sub_42B410
0x685F8F: push    eax
0x685F90: mov     ecx, edi
0x685F92: call    sub_68BE80
0x685F97: mov     ecx, [esi+30h]
0x685F9A: test    ecx, ecx
0x685F9C: pop     edi
0x685F9D: pop     ebp
0x685F9E: jz      short loc_685FAD
0x685FA0: mov     eax, [esi+28h]
0x685FA3: pop     esi
0x685FA4: mov     [esp+arg_0], eax
0x685FA8: jmp     sub_680E20
0x685FAD: pop     esi
0x685FAE: retn    4
