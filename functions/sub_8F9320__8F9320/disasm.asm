0x8F9320: push    ebp
0x8F9321: mov     ebp, esp
0x8F9323: and     esp, 0FFFFFFF0h
0x8F9326: sub     esp, 98h
0x8F932C: mov     eax, [ebp+arg_8]
0x8F932F: movaps  xmm0, xmmword ptr ds:0A965C0h
0x8F9336: movaps  xmm1, xmmword ptr [eax+10h]
0x8F933A: push    esi
0x8F933B: push    edi
0x8F933C: mov     esi, eax
0x8F933E: add     eax, 10h
0x8F9341: mov     ecx, 0Ch
0x8F9346: lea     edi, [esp+0A0h+var_30]
0x8F934A: rep movsd
0x8F934C: mov     ecx, eax
0x8F934E: mov     esi, [ecx]
0x8F9350: mov     [esp+0A0h+var_80], esi
0x8F9354: mov     esi, [ecx+4]
0x8F9357: mov     [esp+0A0h+var_7C], esi
0x8F935B: mov     esi, [ecx+8]
0x8F935E: mov     ecx, [ecx+0Ch]
0x8F9361: mov     [esp+0A0h+var_74], ecx
0x8F9365: mov     ecx, [ebp+arg_C]
0x8F9368: mov     [esp+0A0h+var_70], ecx
0x8F936C: mov     ecx, [ebp+arg_10]
0x8F936F: test    ecx, ecx
0x8F9371: mov     edx, offset off_A9B4E8
0x8F9376: xorps   xmm1, xmm0
0x8F9379: movaps  [esp+0A0h+var_20], xmm1
0x8F9381: mov     [esp+0A0h+var_8C], 7F7FFFFFh
0x8F9389: mov     [esp+0A0h+var_90], edx
0x8F938D: mov     [esp+0A0h+var_78], esi
0x8F9391: jz      short loc_8F93E3
0x8F9393: mov     [esp+0A0h+var_60], edx
0x8F9397: mov     edx, [eax]
0x8F9399: mov     [esp+0A0h+var_50], edx
0x8F939D: mov     edx, [eax+4]
0x8F93A0: mov     [esp+0A0h+var_4C], edx
0x8F93A4: mov     edx, [eax+8]
0x8F93A7: mov     eax, [eax+0Ch]
0x8F93AA: mov     [esp+0A0h+var_40], ecx
0x8F93AE: mov     [esp+0A0h+var_48], edx
0x8F93B2: lea     ecx, [esp+0A0h+var_60]
0x8F93B6: push    ecx
0x8F93B7: mov     ecx, [ebp+arg_0]
0x8F93BA: lea     edx, [esp+0A4h+var_90]
0x8F93BE: push    edx
0x8F93BF: mov     edx, [ebp+arg_4]
0x8F93C2: mov     [esp+0A8h+var_44], eax
0x8F93C6: lea     eax, [esp+0A8h+var_30]
0x8F93CA: push    eax
0x8F93CB: push    ecx
0x8F93CC: push    edx
0x8F93CD: mov     [esp+0B4h+var_5C], 7F7FFFFFh
0x8F93D5: call    sub_935CC0
0x8F93DA: add     esp, 14h
0x8F93DD: pop     edi
0x8F93DE: pop     esi
0x8F93DF: mov     esp, ebp
0x8F93E1: pop     ebp
0x8F93E2: retn
0x8F93E3: mov     edx, [ebp+arg_0]
0x8F93E6: push    0
0x8F93E8: lea     eax, [esp+0A4h+var_90]
0x8F93EC: push    eax
0x8F93ED: mov     eax, [ebp+arg_4]
0x8F93F0: lea     ecx, [esp+0A8h+var_30]
0x8F93F4: push    ecx
0x8F93F5: push    edx
0x8F93F6: push    eax
0x8F93F7: call    sub_935CC0
0x8F93FC: add     esp, 14h
0x8F93FF: pop     edi
0x8F9400: pop     esi
0x8F9401: mov     esp, ebp
0x8F9403: pop     ebp
0x8F9404: retn
