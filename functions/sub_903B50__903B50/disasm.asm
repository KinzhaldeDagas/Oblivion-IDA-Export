0x903B50: push    ebp
0x903B51: mov     ebp, esp
0x903B53: and     esp, 0FFFFFFF0h
0x903B56: sub     esp, 98h
0x903B5C: mov     eax, [ebp+arg_8]
0x903B5F: movaps  xmm0, xmmword ptr ds:0A965C0h
0x903B66: movaps  xmm1, xmmword ptr [eax+10h]
0x903B6A: mov     edx, ecx
0x903B6C: push    esi
0x903B6D: push    edi
0x903B6E: mov     esi, eax
0x903B70: add     eax, 10h
0x903B73: mov     ecx, 0Ch
0x903B78: lea     edi, [esp+0A0h+var_30]
0x903B7C: rep movsd
0x903B7E: mov     ecx, eax
0x903B80: mov     edi, [ecx]
0x903B82: mov     [esp+0A0h+var_80], edi
0x903B86: mov     edi, [ecx+4]
0x903B89: mov     [esp+0A0h+var_7C], edi
0x903B8D: mov     edi, [ecx+8]
0x903B90: mov     ecx, [ecx+0Ch]
0x903B93: mov     [esp+0A0h+var_74], ecx
0x903B97: mov     ecx, [ebp+arg_C]
0x903B9A: mov     [esp+0A0h+var_70], ecx
0x903B9E: mov     ecx, [ebp+arg_10]
0x903BA1: test    ecx, ecx
0x903BA3: mov     esi, offset off_A9B4E8
0x903BA8: xorps   xmm1, xmm0
0x903BAB: movaps  [esp+0A0h+var_20], xmm1
0x903BB3: mov     [esp+0A0h+var_8C], 7F7FFFFFh
0x903BBB: mov     [esp+0A0h+var_90], esi
0x903BBF: mov     [esp+0A0h+var_78], edi
0x903BC3: jz      short loc_903BF7
0x903BC5: mov     [esp+0A0h+var_60], esi
0x903BC9: mov     esi, [eax]
0x903BCB: mov     [esp+0A0h+var_50], esi
0x903BCF: mov     esi, [eax+4]
0x903BD2: mov     [esp+0A0h+var_4C], esi
0x903BD6: mov     esi, [eax+8]
0x903BD9: mov     eax, [eax+0Ch]
0x903BDC: mov     [esp+0A0h+var_40], ecx
0x903BE0: lea     ecx, [esp+0A0h+var_60]
0x903BE4: mov     [esp+0A0h+var_5C], 7F7FFFFFh
0x903BEC: mov     [esp+0A0h+var_48], esi
0x903BF0: mov     [esp+0A0h+var_44], eax
0x903BF4: push    ecx
0x903BF5: jmp     short loc_903BF9
0x903BF7: push    0
0x903BF9: lea     eax, [esp+0A4h+var_90]
0x903BFD: push    eax
0x903BFE: mov     eax, [ebp+arg_0]
0x903C01: lea     ecx, [esp+0A8h+var_30]
0x903C05: push    ecx
0x903C06: mov     ecx, [ebp+arg_4]
0x903C09: push    eax
0x903C0A: push    ecx
0x903C0B: mov     ecx, edx
0x903C0D: call    sub_903450
0x903C12: pop     edi
0x903C13: pop     esi
0x903C14: mov     esp, ebp
0x903C16: pop     ebp
0x903C17: retn    14h
