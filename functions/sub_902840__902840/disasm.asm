0x902840: push    ebp
0x902841: mov     ebp, esp
0x902843: and     esp, 0FFFFFFF0h
0x902846: sub     esp, 98h
0x90284C: mov     eax, [ebp+arg_8]
0x90284F: movaps  xmm0, xmmword ptr ds:0A965C0h
0x902856: movaps  xmm1, xmmword ptr [eax+10h]
0x90285A: push    esi
0x90285B: push    edi
0x90285C: mov     esi, eax
0x90285E: add     eax, 10h
0x902861: mov     ecx, 0Ch
0x902866: lea     edi, [esp+0A0h+var_30]
0x90286A: rep movsd
0x90286C: mov     ecx, eax
0x90286E: mov     esi, [ecx]
0x902870: mov     [esp+0A0h+var_80], esi
0x902874: mov     esi, [ecx+4]
0x902877: mov     [esp+0A0h+var_7C], esi
0x90287B: mov     esi, [ecx+8]
0x90287E: mov     ecx, [ecx+0Ch]
0x902881: mov     [esp+0A0h+var_74], ecx
0x902885: mov     ecx, [ebp+arg_C]
0x902888: mov     [esp+0A0h+var_70], ecx
0x90288C: mov     ecx, [ebp+arg_10]
0x90288F: test    ecx, ecx
0x902891: mov     edx, offset off_A9B4E8
0x902896: xorps   xmm1, xmm0
0x902899: movaps  [esp+0A0h+var_20], xmm1
0x9028A1: mov     [esp+0A0h+var_8C], 7F7FFFFFh
0x9028A9: mov     [esp+0A0h+var_90], edx
0x9028AD: mov     [esp+0A0h+var_78], esi
0x9028B1: jz      short loc_902903
0x9028B3: mov     [esp+0A0h+var_60], edx
0x9028B7: mov     edx, [eax]
0x9028B9: mov     [esp+0A0h+var_50], edx
0x9028BD: mov     edx, [eax+4]
0x9028C0: mov     [esp+0A0h+var_4C], edx
0x9028C4: mov     edx, [eax+8]
0x9028C7: mov     eax, [eax+0Ch]
0x9028CA: mov     [esp+0A0h+var_40], ecx
0x9028CE: mov     [esp+0A0h+var_48], edx
0x9028D2: lea     ecx, [esp+0A0h+var_60]
0x9028D6: push    ecx
0x9028D7: mov     ecx, [ebp+arg_0]
0x9028DA: lea     edx, [esp+0A4h+var_90]
0x9028DE: push    edx
0x9028DF: mov     edx, [ebp+arg_4]
0x9028E2: mov     [esp+0A8h+var_44], eax
0x9028E6: lea     eax, [esp+0A8h+var_30]
0x9028EA: push    eax
0x9028EB: push    ecx
0x9028EC: push    edx
0x9028ED: mov     [esp+0B4h+var_5C], 7F7FFFFFh
0x9028F5: call    sub_902590
0x9028FA: add     esp, 14h
0x9028FD: pop     edi
0x9028FE: pop     esi
0x9028FF: mov     esp, ebp
0x902901: pop     ebp
0x902902: retn
0x902903: mov     edx, [ebp+arg_0]
0x902906: push    0
0x902908: lea     eax, [esp+0A4h+var_90]
0x90290C: push    eax
0x90290D: mov     eax, [ebp+arg_4]
0x902910: lea     ecx, [esp+0A8h+var_30]
0x902914: push    ecx
0x902915: push    edx
0x902916: push    eax
0x902917: call    sub_902590
0x90291C: add     esp, 14h
0x90291F: pop     edi
0x902920: pop     esi
0x902921: mov     esp, ebp
0x902923: pop     ebp
0x902924: retn
