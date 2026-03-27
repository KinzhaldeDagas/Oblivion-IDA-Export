0x8F7E20: push    ebp
0x8F7E21: mov     ebp, esp
0x8F7E23: and     esp, 0FFFFFFF0h
0x8F7E26: sub     esp, 98h
0x8F7E2C: mov     eax, [ebp+arg_8]
0x8F7E2F: movaps  xmm0, xmmword ptr ds:0A965C0h
0x8F7E36: movaps  xmm1, xmmword ptr [eax+10h]
0x8F7E3A: mov     edx, ecx
0x8F7E3C: push    esi
0x8F7E3D: push    edi
0x8F7E3E: mov     esi, eax
0x8F7E40: add     eax, 10h
0x8F7E43: mov     ecx, 0Ch
0x8F7E48: lea     edi, [esp+0A0h+var_30]
0x8F7E4C: rep movsd
0x8F7E4E: mov     ecx, eax
0x8F7E50: mov     edi, [ecx]
0x8F7E52: mov     [esp+0A0h+var_80], edi
0x8F7E56: mov     edi, [ecx+4]
0x8F7E59: mov     [esp+0A0h+var_7C], edi
0x8F7E5D: mov     edi, [ecx+8]
0x8F7E60: mov     ecx, [ecx+0Ch]
0x8F7E63: mov     [esp+0A0h+var_74], ecx
0x8F7E67: mov     ecx, [ebp+arg_C]
0x8F7E6A: mov     [esp+0A0h+var_70], ecx
0x8F7E6E: mov     ecx, [ebp+arg_10]
0x8F7E71: test    ecx, ecx
0x8F7E73: mov     esi, offset off_A9B4E8
0x8F7E78: xorps   xmm1, xmm0
0x8F7E7B: movaps  [esp+0A0h+var_20], xmm1
0x8F7E83: mov     [esp+0A0h+var_8C], 7F7FFFFFh
0x8F7E8B: mov     [esp+0A0h+var_90], esi
0x8F7E8F: mov     [esp+0A0h+var_78], edi
0x8F7E93: jz      short loc_8F7EC7
0x8F7E95: mov     [esp+0A0h+var_60], esi
0x8F7E99: mov     esi, [eax]
0x8F7E9B: mov     [esp+0A0h+var_50], esi
0x8F7E9F: mov     esi, [eax+4]
0x8F7EA2: mov     [esp+0A0h+var_4C], esi
0x8F7EA6: mov     esi, [eax+8]
0x8F7EA9: mov     eax, [eax+0Ch]
0x8F7EAC: mov     [esp+0A0h+var_40], ecx
0x8F7EB0: lea     ecx, [esp+0A0h+var_60]
0x8F7EB4: mov     [esp+0A0h+var_5C], 7F7FFFFFh
0x8F7EBC: mov     [esp+0A0h+var_48], esi
0x8F7EC0: mov     [esp+0A0h+var_44], eax
0x8F7EC4: push    ecx
0x8F7EC5: jmp     short loc_8F7EC9
0x8F7EC7: push    0
0x8F7EC9: lea     eax, [esp+0A4h+var_90]
0x8F7ECD: push    eax
0x8F7ECE: mov     eax, [ebp+arg_0]
0x8F7ED1: lea     ecx, [esp+0A8h+var_30]
0x8F7ED5: push    ecx
0x8F7ED6: mov     ecx, [ebp+arg_4]
0x8F7ED9: push    eax
0x8F7EDA: push    ecx
0x8F7EDB: mov     ecx, edx
0x8F7EDD: call    sub_936050
0x8F7EE2: pop     edi
0x8F7EE3: pop     esi
0x8F7EE4: mov     esp, ebp
0x8F7EE6: pop     ebp
0x8F7EE7: retn    14h
