0x9049B0: push    ebp
0x9049B1: mov     ebp, esp
0x9049B3: and     esp, 0FFFFFFF0h
0x9049B6: sub     esp, 98h
0x9049BC: mov     eax, [ebp+arg_8]
0x9049BF: movaps  xmm0, xmmword ptr ds:0A965C0h
0x9049C6: movaps  xmm1, xmmword ptr [eax+10h]
0x9049CA: push    esi
0x9049CB: push    edi
0x9049CC: mov     esi, eax
0x9049CE: add     eax, 10h
0x9049D1: mov     ecx, 0Ch
0x9049D6: lea     edi, [esp+0A0h+var_30]
0x9049DA: rep movsd
0x9049DC: mov     ecx, eax
0x9049DE: mov     esi, [ecx]
0x9049E0: mov     [esp+0A0h+var_80], esi
0x9049E4: mov     esi, [ecx+4]
0x9049E7: mov     [esp+0A0h+var_7C], esi
0x9049EB: mov     esi, [ecx+8]
0x9049EE: mov     ecx, [ecx+0Ch]
0x9049F1: mov     [esp+0A0h+var_74], ecx
0x9049F5: mov     ecx, [ebp+arg_C]
0x9049F8: mov     [esp+0A0h+var_70], ecx
0x9049FC: mov     ecx, [ebp+arg_10]
0x9049FF: test    ecx, ecx
0x904A01: mov     edx, offset off_A9B4E8
0x904A06: xorps   xmm1, xmm0
0x904A09: movaps  [esp+0A0h+var_20], xmm1
0x904A11: mov     [esp+0A0h+var_8C], 7F7FFFFFh
0x904A19: mov     [esp+0A0h+var_90], edx
0x904A1D: mov     [esp+0A0h+var_78], esi
0x904A21: jz      short loc_904A73
0x904A23: mov     [esp+0A0h+var_60], edx
0x904A27: mov     edx, [eax]
0x904A29: mov     [esp+0A0h+var_50], edx
0x904A2D: mov     edx, [eax+4]
0x904A30: mov     [esp+0A0h+var_4C], edx
0x904A34: mov     edx, [eax+8]
0x904A37: mov     eax, [eax+0Ch]
0x904A3A: mov     [esp+0A0h+var_40], ecx
0x904A3E: mov     [esp+0A0h+var_48], edx
0x904A42: lea     ecx, [esp+0A0h+var_60]
0x904A46: push    ecx
0x904A47: mov     ecx, [ebp+arg_0]
0x904A4A: lea     edx, [esp+0A4h+var_90]
0x904A4E: push    edx
0x904A4F: mov     edx, [ebp+arg_4]
0x904A52: mov     [esp+0A8h+var_44], eax
0x904A56: lea     eax, [esp+0A8h+var_30]
0x904A5A: push    eax
0x904A5B: push    ecx
0x904A5C: push    edx
0x904A5D: mov     [esp+0B4h+var_5C], 7F7FFFFFh
0x904A65: call    sub_9043F0
0x904A6A: add     esp, 14h
0x904A6D: pop     edi
0x904A6E: pop     esi
0x904A6F: mov     esp, ebp
0x904A71: pop     ebp
0x904A72: retn
0x904A73: mov     edx, [ebp+arg_0]
0x904A76: push    0
0x904A78: lea     eax, [esp+0A4h+var_90]
0x904A7C: push    eax
0x904A7D: mov     eax, [ebp+arg_4]
0x904A80: lea     ecx, [esp+0A8h+var_30]
0x904A84: push    ecx
0x904A85: push    edx
0x904A86: push    eax
0x904A87: call    sub_9043F0
0x904A8C: add     esp, 14h
0x904A8F: pop     edi
0x904A90: pop     esi
0x904A91: mov     esp, ebp
0x904A93: pop     ebp
0x904A94: retn
