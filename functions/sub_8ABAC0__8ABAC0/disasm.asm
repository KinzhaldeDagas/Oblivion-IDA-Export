0x8ABAC0: push    ebp
0x8ABAC1: mov     ebp, esp
0x8ABAC3: and     esp, 0FFFFFFF0h
0x8ABAC6: sub     esp, 28h
0x8ABAC9: mov     eax, [ebp+arg_0]
0x8ABACC: movaps  xmm0, xmmword ptr [eax]
0x8ABACF: push    esi
0x8ABAD0: mov     esi, ecx
0x8ABAD2: mov     eax, [esi+8]
0x8ABAD5: test    eax, eax
0x8ABAD7: push    edi
0x8ABAD8: movaps  xmmword ptr [esi+0A0h], xmm0
0x8ABADF: jz      short loc_8ABB0F
0x8ABAE1: mov     eax, [eax+74h]
0x8ABAE4: fld     dword ptr [eax+8]
0x8ABAE7: mov     ecx, [esi+14h]
0x8ABAEA: fmul    dword ptr ds:0A3D65Ch
0x8ABAF0: mov     edx, [ecx]
0x8ABAF2: lea     edi, [esp+30h+var_20]
0x8ABAF6: push    edi
0x8ABAF7: fadd    [ebp+arg_4]
0x8ABAFA: push    ecx
0x8ABAFB: lea     eax, [esi+70h]
0x8ABAFE: fstp    [esp+38h+var_38]
0x8ABB01: push    eax
0x8ABB02: call    dword ptr [edx+0Ch]
0x8ABB05: mov     ecx, edi
0x8ABB07: push    ecx
0x8ABB08: mov     ecx, esi
0x8ABB0A: call    sub_8DE950
0x8ABB0F: pop     edi
0x8ABB10: pop     esi
0x8ABB11: mov     esp, ebp
0x8ABB13: pop     ebp
0x8ABB14: retn    8
