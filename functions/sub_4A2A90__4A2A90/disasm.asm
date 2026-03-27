0x4A2A90: mov     ecx, [esp+arg_0]
0x4A2A94: test    ecx, ecx
0x4A2A96: jz      locret_4A2B9C
0x4A2A9C: movzx   eax, word ptr [ecx+0B6h]
0x4A2AA3: push    ebx
0x4A2AA4: xor     ebx, ebx
0x4A2AA6: test    eax, eax
0x4A2AA8: jbe     loc_4A2B9B
0x4A2AAE: cmp     eax, ebx
0x4A2AB0: push    ebp
0x4A2AB1: push    esi
0x4A2AB2: push    edi
0x4A2AB3: jbe     loc_4A2B86
0x4A2AB9: mov     eax, [ecx+0B0h]
0x4A2ABF: mov     ebp, [eax+ebx*4]
0x4A2AC2: test    ebp, ebp
0x4A2AC4: jz      loc_4A2B86
0x4A2ACA: push    2
0x4A2ACC: mov     ecx, ebp
0x4A2ACE: call    NiNode_GetNiPropertyByID
0x4A2AD3: mov     ecx, eax
0x4A2AD5: test    ecx, ecx
0x4A2AD7: jz      short loc_4A2AF8
0x4A2AD9: fld     dword ptr [ecx+50h]
0x4A2ADC: fld     [esp+10h+arg_4]
0x4A2AE0: fld     st
0x4A2AE2: fucomp  st(2)
0x4A2AE4: fnstsw  ax
0x4A2AE6: fstp    st(1)
0x4A2AE8: test    ah, 44h
0x4A2AEB: jnp     short loc_4A2AF6
0x4A2AED: add     dword ptr [ecx+54h], 1
0x4A2AF1: fstp    dword ptr [ecx+50h]
0x4A2AF4: jmp     short loc_4A2AF8
0x4A2AF6: fstp    st
0x4A2AF8: push    4
0x4A2AFA: mov     ecx, ebp
0x4A2AFC: call    NiNode_GetNiPropertyByID
0x4A2B01: mov     edi, eax
0x4A2B03: test    edi, edi
0x4A2B05: jnz     short loc_4A2B0B
0x4A2B07: xor     esi, esi
0x4A2B09: jmp     short loc_4A2B30
0x4A2B0B: mov     edx, [edi]
0x4A2B0D: mov     eax, [edx+54h]
0x4A2B10: mov     ecx, edi
0x4A2B12: call    eax
0x4A2B14: mov     esi, eax
0x4A2B16: sub     esi, 0FFFFFFFFh
0x4A2B19: neg     esi
0x4A2B1B: sbb     esi, esi
0x4A2B1D: and     esi, edi
0x4A2B1F: jz      short loc_4A2B30
0x4A2B21: fld     [esp+10h+arg_4]
0x4A2B25: push    ecx
0x4A2B26: mov     ecx, esi
0x4A2B28: fstp    [esp+14h+var_14]; float
0x4A2B2B: call    sub_7E2430
0x4A2B30: push    0
0x4A2B32: mov     ecx, ebp
0x4A2B34: call    NiNode_GetNiPropertyByID
0x4A2B39: fld1
0x4A2B3B: fld     [esp+10h+arg_4]
0x4A2B3F: mov     ecx, eax
0x4A2B41: fcom    st(1)
0x4A2B43: fnstsw  ax
0x4A2B45: fstp    st(1)
0x4A2B47: test    ah, 5
0x4A2B4A: jp      short loc_4A2B57
0x4A2B4C: test    ecx, ecx
0x4A2B4E: jz      short loc_4A2B6B
0x4A2B50: or      word ptr [ecx+18h], 1
0x4A2B55: jmp     short loc_4A2B6B
0x4A2B57: test    esi, esi
0x4A2B59: jz      short loc_4A2B6B
0x4A2B5B: test    byte ptr [esi+1Ch], 40h
0x4A2B5F: ja      short loc_4A2B6B
0x4A2B61: test    ecx, ecx
0x4A2B63: jz      short loc_4A2B6B
0x4A2B65: and     word ptr [ecx+18h], 0FFFEh
0x4A2B6B: mov     edx, [ebp+0]
0x4A2B6E: mov     eax, [edx+8]
0x4A2B71: push    ecx
0x4A2B72: mov     ecx, ebp
0x4A2B74: fstp    [esp+14h+var_14]; float
0x4A2B77: call    eax
0x4A2B79: push    eax; int
0x4A2B7A: call    sub_4A2A90
0x4A2B7F: mov     ecx, [esp+18h+arg_0]
0x4A2B83: add     esp, 8
0x4A2B86: movzx   eax, word ptr [ecx+0B6h]
0x4A2B8D: add     ebx, 1
0x4A2B90: cmp     eax, ebx
0x4A2B92: ja      loc_4A2AB9
0x4A2B98: pop     edi
0x4A2B99: pop     esi
0x4A2B9A: pop     ebp
0x4A2B9B: pop     ebx
0x4A2B9C: retn
