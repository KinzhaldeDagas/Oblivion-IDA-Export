0x905D40: push    ebp
0x905D41: mov     ebp, esp
0x905D43: and     esp, 0FFFFFFF0h
0x905D46: sub     esp, 98h
0x905D4C: mov     eax, [ebp+arg_8]
0x905D4F: movaps  xmm0, xmmword ptr ds:0A965C0h
0x905D56: movaps  xmm1, xmmword ptr [eax+10h]
0x905D5A: mov     edx, ecx
0x905D5C: push    esi
0x905D5D: push    edi
0x905D5E: mov     esi, eax
0x905D60: add     eax, 10h
0x905D63: mov     ecx, 0Ch
0x905D68: lea     edi, [esp+0A0h+var_30]
0x905D6C: rep movsd
0x905D6E: mov     ecx, eax
0x905D70: mov     edi, [ecx]
0x905D72: mov     [esp+0A0h+var_80], edi
0x905D76: mov     edi, [ecx+4]
0x905D79: mov     [esp+0A0h+var_7C], edi
0x905D7D: mov     edi, [ecx+8]
0x905D80: mov     ecx, [ecx+0Ch]
0x905D83: mov     [esp+0A0h+var_74], ecx
0x905D87: mov     ecx, [ebp+arg_C]
0x905D8A: mov     [esp+0A0h+var_70], ecx
0x905D8E: mov     ecx, [ebp+arg_10]
0x905D91: test    ecx, ecx
0x905D93: mov     esi, offset off_A9B4E8
0x905D98: xorps   xmm1, xmm0
0x905D9B: movaps  [esp+0A0h+var_20], xmm1
0x905DA3: mov     [esp+0A0h+var_8C], 7F7FFFFFh
0x905DAB: mov     [esp+0A0h+var_90], esi
0x905DAF: mov     [esp+0A0h+var_78], edi
0x905DB3: jz      short loc_905DE7
0x905DB5: mov     [esp+0A0h+var_60], esi
0x905DB9: mov     esi, [eax]
0x905DBB: mov     [esp+0A0h+var_50], esi
0x905DBF: mov     esi, [eax+4]
0x905DC2: mov     [esp+0A0h+var_4C], esi
0x905DC6: mov     esi, [eax+8]
0x905DC9: mov     eax, [eax+0Ch]
0x905DCC: mov     [esp+0A0h+var_40], ecx
0x905DD0: lea     ecx, [esp+0A0h+var_60]
0x905DD4: mov     [esp+0A0h+var_5C], 7F7FFFFFh
0x905DDC: mov     [esp+0A0h+var_48], esi
0x905DE0: mov     [esp+0A0h+var_44], eax
0x905DE4: push    ecx
0x905DE5: jmp     short loc_905DE9
0x905DE7: push    0
0x905DE9: lea     eax, [esp+0A4h+var_90]
0x905DED: push    eax
0x905DEE: mov     eax, [ebp+arg_0]
0x905DF1: lea     ecx, [esp+0A8h+var_30]
0x905DF5: push    ecx
0x905DF6: mov     ecx, [ebp+arg_4]
0x905DF9: push    eax
0x905DFA: push    ecx
0x905DFB: mov     ecx, edx
0x905DFD: call    sub_905250
0x905E02: pop     edi
0x905E03: pop     esi
0x905E04: mov     esp, ebp
0x905E06: pop     ebp
0x905E07: retn    14h
