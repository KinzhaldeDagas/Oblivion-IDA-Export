0x909490: push    ebp
0x909491: mov     ebp, esp
0x909493: and     esp, 0FFFFFFF0h
0x909496: sub     esp, 98h
0x90949C: mov     eax, [ebp+arg_8]
0x90949F: movaps  xmm0, xmmword ptr ds:0A965C0h
0x9094A6: movaps  xmm1, xmmword ptr [eax+10h]
0x9094AA: mov     edx, ecx
0x9094AC: push    esi
0x9094AD: push    edi
0x9094AE: mov     esi, eax
0x9094B0: add     eax, 10h
0x9094B3: mov     ecx, 0Ch
0x9094B8: lea     edi, [esp+0A0h+var_30]
0x9094BC: rep movsd
0x9094BE: mov     ecx, eax
0x9094C0: mov     edi, [ecx]
0x9094C2: mov     [esp+0A0h+var_80], edi
0x9094C6: mov     edi, [ecx+4]
0x9094C9: mov     [esp+0A0h+var_7C], edi
0x9094CD: mov     edi, [ecx+8]
0x9094D0: mov     ecx, [ecx+0Ch]
0x9094D3: mov     [esp+0A0h+var_74], ecx
0x9094D7: mov     ecx, [ebp+arg_C]
0x9094DA: mov     [esp+0A0h+var_70], ecx
0x9094DE: mov     ecx, [ebp+arg_10]
0x9094E1: test    ecx, ecx
0x9094E3: mov     esi, offset off_A9B4E8
0x9094E8: xorps   xmm1, xmm0
0x9094EB: movaps  [esp+0A0h+var_20], xmm1
0x9094F3: mov     [esp+0A0h+var_8C], 7F7FFFFFh
0x9094FB: mov     [esp+0A0h+var_90], esi
0x9094FF: mov     [esp+0A0h+var_78], edi
0x909503: jz      short loc_909537
0x909505: mov     [esp+0A0h+var_60], esi
0x909509: mov     esi, [eax]
0x90950B: mov     [esp+0A0h+var_50], esi
0x90950F: mov     esi, [eax+4]
0x909512: mov     [esp+0A0h+var_4C], esi
0x909516: mov     esi, [eax+8]
0x909519: mov     eax, [eax+0Ch]
0x90951C: mov     [esp+0A0h+var_40], ecx
0x909520: lea     ecx, [esp+0A0h+var_60]
0x909524: mov     [esp+0A0h+var_5C], 7F7FFFFFh
0x90952C: mov     [esp+0A0h+var_48], esi
0x909530: mov     [esp+0A0h+var_44], eax
0x909534: push    ecx
0x909535: jmp     short loc_909539
0x909537: push    0
0x909539: lea     eax, [esp+0A4h+var_90]
0x90953D: push    eax
0x90953E: mov     eax, [ebp+arg_0]
0x909541: lea     ecx, [esp+0A8h+var_30]
0x909545: push    ecx
0x909546: mov     ecx, [ebp+arg_4]
0x909549: push    eax
0x90954A: push    ecx
0x90954B: mov     ecx, edx
0x90954D: call    sub_9088D0
0x909552: pop     edi
0x909553: pop     esi
0x909554: mov     esp, ebp
0x909556: pop     ebp
0x909557: retn    14h
