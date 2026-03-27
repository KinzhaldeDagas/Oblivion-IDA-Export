0x929E20: push    ebp
0x929E21: mov     ebp, esp
0x929E23: and     esp, 0FFFFFFF0h
0x929E26: sub     esp, 34h
0x929E29: mov     eax, [ebp+arg_0]
0x929E2C: push    ebx
0x929E2D: push    esi
0x929E2E: push    edi
0x929E2F: mov     edi, ecx
0x929E31: mov     esi, [edi+20h]
0x929E34: mov     ecx, esi
0x929E36: or      edx, 0FFFFFFFFh
0x929E39: shr     edx, cl
0x929E3B: mov     ecx, 20h ; ' '
0x929E40: sub     ecx, esi
0x929E42: mov     esi, [edi+24h]
0x929E45: and     edx, eax
0x929E47: shr     eax, cl
0x929E49: lea     eax, [eax+eax*2]
0x929E4C: shl     eax, 4
0x929E4F: mov     ebx, [eax+esi+0Ch]
0x929E53: mov     cl, [eax+esi+10h]
0x929E57: add     eax, esi
0x929E59: mov     esi, [eax+14h]
0x929E5C: imul    esi, edx
0x929E5F: add     esi, ebx
0x929E61: cmp     cl, 1
0x929E64: mov     ebx, [eax+4]
0x929E67: mov     eax, [eax]
0x929E69: jnz     short loc_929E78
0x929E6B: movzx   ecx, word ptr [esi]
0x929E6E: movzx   edx, word ptr [esi+2]
0x929E72: movzx   esi, word ptr [esi+4]
0x929E76: jmp     short loc_929E80
0x929E78: mov     ecx, [esi]
0x929E7A: mov     edx, [esi+4]
0x929E7D: mov     esi, [esi+8]
0x929E80: imul    ecx, ebx
0x929E83: imul    edx, ebx
0x929E86: imul    esi, ebx
0x929E89: fld     dword ptr [ecx+eax]
0x929E8C: fmul    dword ptr [edi+10h]
0x929E8F: fstp    dword ptr [esp+40h+var_30]
0x929E93: fld     dword ptr [ecx+eax+4]
0x929E97: fmul    dword ptr [edi+14h]
0x929E9A: fstp    dword ptr [esp+40h+var_30+4]
0x929E9E: fld     dword ptr [ecx+eax+8]
0x929EA2: fmul    dword ptr [edi+18h]
0x929EA5: fstp    dword ptr [esp+40h+var_30+8]
0x929EA9: fld     dword ptr [edi+10h]
0x929EAC: fmul    dword ptr [edx+eax]
0x929EAF: fstp    dword ptr [esp+40h+var_20]
0x929EB3: fld     dword ptr [edx+eax+4]
0x929EB7: fmul    dword ptr [edi+14h]
0x929EBA: fstp    dword ptr [esp+40h+var_20+4]
0x929EBE: fld     dword ptr [edx+eax+8]
0x929EC2: fmul    dword ptr [edi+18h]
0x929EC5: add     ecx, eax
0x929EC7: add     edx, eax
0x929EC9: fstp    dword ptr [esp+40h+var_20+8]
0x929ECD: add     esi, eax
0x929ECF: fld     dword ptr [edi+10h]
0x929ED2: mov     eax, [ebp+arg_4]
0x929ED5: test    eax, eax
0x929ED7: fmul    dword ptr [esi]
0x929ED9: mov     dword ptr [esp+40h+var_30+0Ch], 0
0x929EE1: mov     dword ptr [esp+40h+var_20+0Ch], 0
0x929EE9: mov     dword ptr [esp+40h+var_10+0Ch], 0
0x929EF1: fstp    dword ptr [esp+40h+var_10]
0x929EF5: fld     dword ptr [esi+4]
0x929EF8: fmul    dword ptr [edi+14h]
0x929EFB: fstp    dword ptr [esp+40h+var_10+4]
0x929EFF: fld     dword ptr [esi+8]
0x929F02: fmul    dword ptr [edi+18h]
0x929F05: fstp    dword ptr [esp+40h+var_10+8]
0x929F09: jz      short loc_929F26
0x929F0B: fld     dword ptr [edi+30h]
0x929F0E: mov     word ptr [eax+6], 1
0x929F14: fstp    dword ptr [eax+0Ch]
0x929F17: mov     dword ptr [eax+8], 0
0x929F1E: mov     dword ptr [eax], offset ??_7hkTriangleShape@@6B@; const hkTriangleShape::`vftable'
0x929F24: jmp     short loc_929F28
0x929F26: xor     eax, eax
0x929F28: movaps  xmm0, [esp+40h+var_30]
0x929F2D: movaps  xmmword ptr [eax+10h], xmm0
0x929F31: movaps  xmm0, [esp+40h+var_20]
0x929F36: pop     edi
0x929F37: movaps  xmmword ptr [eax+20h], xmm0
0x929F3B: movaps  xmm0, [esp+3Ch+var_10]
0x929F40: pop     esi
0x929F41: movaps  xmmword ptr [eax+30h], xmm0
0x929F45: pop     ebx
0x929F46: mov     esp, ebp
0x929F48: pop     ebp
0x929F49: retn    8
