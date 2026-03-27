0x8D4590: push    ebp
0x8D4591: mov     ebp, esp
0x8D4593: and     esp, 0FFFFFFF0h
0x8D4596: sub     esp, 54h
0x8D4599: push    ebx
0x8D459A: mov     ebx, ds:0BA9DE4h
0x8D45A0: push    esi
0x8D45A1: push    edi
0x8D45A2: mov     edi, large fs:2Ch
0x8D45A9: mov     eax, [edi+ebx*4]
0x8D45AC: mov     ecx, [eax+1A4h]
0x8D45B2: cmp     ecx, [eax+1A8h]
0x8D45B8: jnb     short loc_8D45E5
0x8D45BA: mov     esi, eax
0x8D45BC: mov     ecx, [esi+1A4h]
0x8D45C2: mov     dword ptr [ecx], offset aLtbroadphase; "LtBroadPhase"
0x8D45C8: mov     dword ptr [ecx+0Ch], offset aInitmem; "InitMem"
0x8D45CF: rdtsc
0x8D45D1: mov     [esp+60h+var_44], eax
0x8D45D5: mov     edx, [esp+60h+var_44]
0x8D45D9: mov     [ecx+4], edx
0x8D45DC: add     ecx, 10h
0x8D45DF: mov     [esi+1A4h], ecx
0x8D45E5: mov     eax, [ebp+arg_8]
0x8D45E8: mov     esi, [eax+2A8h]
0x8D45EE: mov     edi, [edi+ebx*4]
0x8D45F1: mov     ecx, [edi+19Ch]
0x8D45F7: xor     eax, eax
0x8D45F9: mov     [esp+60h+var_30], eax
0x8D45FD: mov     dword ptr [esp+60h+var_2C], eax
0x8D4601: mov     dword ptr [esp+60h+var_2C+4], 80000000h
0x8D4609: mov     edx, [ecx+20h]
0x8D460C: lea     eax, ds:10h[esi*8]
0x8D4613: and     eax, 0FFFFFFF0h
0x8D4616: lea     ebx, [edx+eax]
0x8D4619: cmp     ebx, [ecx+2Ch]
0x8D461C: mov     [esp+60h+var_34], edi
0x8D4620: ja      short loc_8D4629
0x8D4622: mov     [ecx+20h], ebx
0x8D4625: mov     eax, edx
0x8D4627: jmp     short loc_8D462F
0x8D4629: mov     edx, [ecx]
0x8D462B: push    eax
0x8D462C: call    dword ptr [edx+0Ch]
0x8D462F: mov     ecx, [edi+19Ch]
0x8D4635: mov     [esp+60h+var_30], eax
0x8D4639: mov     dword ptr [esp+60h+var_2C+8], eax
0x8D463D: mov     eax, [ebp+arg_8]
0x8D4640: or      esi, 80000000h
0x8D4646: mov     dword ptr [esp+60h+var_2C+4], esi
0x8D464A: mov     esi, [eax+2A8h]
0x8D4650: xor     eax, eax
0x8D4652: mov     dword ptr [esp+60h+var_2C+0Ch], eax
0x8D4656: mov     [esp+60h+var_1C], eax
0x8D465A: mov     [esp+60h+var_18], 80000000h
0x8D4662: mov     edx, [ecx+20h]
0x8D4665: lea     eax, ds:10h[esi*8]
0x8D466C: and     eax, 0FFFFFFF0h
0x8D466F: lea     ebx, [edx+eax]
0x8D4672: cmp     ebx, [ecx+2Ch]
0x8D4675: ja      short loc_8D467E
0x8D4677: mov     [ecx+20h], ebx
0x8D467A: mov     eax, edx
0x8D467C: jmp     short loc_8D4684
0x8D467E: mov     edx, [ecx]
0x8D4680: push    eax
0x8D4681: call    dword ptr [edx+0Ch]
0x8D4684: mov     ebx, [ebp+arg_4]
0x8D4687: mov     ecx, [edi+19Ch]
0x8D468D: mov     dword ptr [esp+60h+var_2C+0Ch], eax
0x8D4691: mov     [esp+60h+var_14], eax
0x8D4695: mov     eax, ebx
0x8D4697: shl     eax, 5
0x8D469A: or      esi, 80000000h
0x8D46A0: mov     [esp+60h+var_18], esi
0x8D46A4: mov     edx, [ecx+20h]
0x8D46A7: add     eax, 10h
0x8D46AA: and     eax, 0FFFFFFF0h
0x8D46AD: lea     esi, [edx+eax]
0x8D46B0: cmp     esi, [ecx+2Ch]
0x8D46B3: ja      short loc_8D46BC
0x8D46B5: mov     [ecx+20h], esi
0x8D46B8: mov     esi, edx
0x8D46BA: jmp     short loc_8D46C4
0x8D46BC: mov     edx, [ecx]
0x8D46BE: push    eax
0x8D46BF: call    dword ptr [edx+0Ch]
0x8D46C2: mov     esi, eax
0x8D46C4: mov     ecx, [edi+19Ch]
0x8D46CA: mov     edx, [ecx+20h]
0x8D46CD: lea     eax, ds:10h[ebx*4]
0x8D46D4: and     eax, 0FFFFFFF0h
0x8D46D7: lea     ebx, [edx+eax]
0x8D46DA: cmp     ebx, [ecx+2Ch]
0x8D46DD: mov     [esp+60h+var_44], esi
0x8D46E1: ja      short loc_8D46EC
0x8D46E3: mov     [ecx+20h], ebx
0x8D46E6: mov     [esp+60h+var_50], edx
0x8D46EA: jmp     short loc_8D46F6
0x8D46EC: mov     edx, [ecx]
0x8D46EE: push    eax
0x8D46EF: call    dword ptr [edx+0Ch]
0x8D46F2: mov     [esp+60h+var_50], eax
0x8D46F6: mov     eax, [ebp+arg_8]
0x8D46F9: mov     ecx, [eax+74h]
0x8D46FC: mov     edx, large fs:2Ch
0x8D4703: fld     dword ptr [ecx+8]
0x8D4706: mov     eax, ds:0BA9DE4h
0x8D470B: fmul    dword ptr ds:0A3D65Ch
0x8D4711: mov     eax, [edx+eax*4]
0x8D4714: mov     ecx, [eax+1A4h]
0x8D471A: mov     edx, [eax+1A8h]
0x8D4720: fstp    [esp+60h+var_4C]
0x8D4724: cmp     ecx, edx
0x8D4726: jnb     short loc_8D474A
0x8D4728: mov     ecx, [edi+1A4h]
0x8D472E: mov     dword ptr [ecx], offset aStcalcaabbs; "StCalcAabbs"
0x8D4734: rdtsc
0x8D4736: mov     [esp+60h+var_48], eax
0x8D473A: mov     edx, [esp+60h+var_48]
0x8D473E: mov     [ecx+4], edx
0x8D4741: add     ecx, 0Ch
0x8D4744: mov     [edi+1A4h], ecx
0x8D474A: mov     eax, [ebp+arg_4]
0x8D474D: dec     eax
0x8D474E: mov     ebx, [ebp+arg_0]
0x8D4751: js      loc_8D4836
0x8D4757: mov     ecx, [esp+60h+var_50]
0x8D475B: sub     ecx, ebx
0x8D475D: inc     eax
0x8D475E: xorps   xmm0, xmm0
0x8D4761: movaps  [esp+60h+var_10], xmm0
0x8D4766: mov     [esp+60h+var_40], ecx
0x8D476A: mov     [esp+60h+var_48], eax
0x8D476E: jmp     short loc_8D4774
0x8D4770: mov     ecx, [esp+60h+var_40]
0x8D4774: mov     eax, [ebx]
0x8D4776: mov     edi, [eax+1Ch]
0x8D4779: fld     dword ptr [edi+9Ch]
0x8D477F: add     eax, 14h
0x8D4782: fmul    dword ptr [edi+0A0h]
0x8D4788: lea     edx, [eax+14h]
0x8D478B: mov     [ecx+ebx], edx
0x8D478E: mov     ecx, [eax]
0x8D4790: fadd    [esp+60h+var_4C]
0x8D4794: mov     edx, [ecx]
0x8D4796: mov     eax, [eax+8]
0x8D4799: mov     [esp+60h+var_38], ecx
0x8D479D: fstp    dword ptr [esp+60h+var_3C]
0x8D47A1: push    esi
0x8D47A2: mov     ecx, dword ptr [esp+64h+var_3C]
0x8D47A6: push    ecx
0x8D47A7: mov     ecx, [esp+68h+var_38]
0x8D47AB: push    eax
0x8D47AC: call    dword ptr [edx+0Ch]
0x8D47AF: fld     [esp+60h+var_4C]
0x8D47B3: fadd    dword ptr [edi+0A0h]
0x8D47B9: movaps  xmm1, xmmword ptr [edi+50h]
0x8D47BD: mov     eax, [esp+60h+var_48]
0x8D47C1: movaps  xmm2, xmm1
0x8D47C4: fstp    [esp+60h+var_38]
0x8D47C8: add     esi, 20h ; ' '
0x8D47CB: movss   xmm0, [esp+60h+var_38]
0x8D47D1: shufps  xmm0, xmm0, 0
0x8D47D5: subps   xmm1, xmm0
0x8D47D8: addps   xmm2, xmm0
0x8D47DB: movaps  xmm0, xmmword ptr [esi-20h]
0x8D47DF: maxps   xmm0, xmm1
0x8D47E2: movaps  xmmword ptr [esi-20h], xmm0
0x8D47E6: movaps  xmm0, xmmword ptr [esi-10h]
0x8D47EA: movaps  xmm3, xmmword ptr [esi-20h]
0x8D47EE: minps   xmm0, xmm2
0x8D47F1: movaps  xmmword ptr [esi-10h], xmm0
0x8D47F5: movaps  xmm1, xmmword ptr [edi+50h]
0x8D47F9: movaps  xmm0, xmmword ptr [edi+40h]
0x8D47FD: subps   xmm0, xmm1
0x8D4800: movaps  xmm1, [esp+60h+var_10]
0x8D4805: movaps  xmm2, xmm1
0x8D4808: minps   xmm2, xmm0
0x8D480B: addps   xmm3, xmm2
0x8D480E: movaps  xmmword ptr [esi-20h], xmm3
0x8D4812: maxps   xmm1, xmm0
0x8D4815: movaps  xmm0, xmmword ptr [esi-10h]
0x8D4819: addps   xmm0, xmm1
0x8D481C: movaps  xmmword ptr [esi-10h], xmm0
0x8D4820: add     ebx, 4
0x8D4823: dec     eax
0x8D4824: mov     [esp+60h+var_48], eax
0x8D4828: jnz     loc_8D4770
0x8D482E: mov     edi, [esp+60h+var_34]
0x8D4832: mov     esi, [esp+60h+var_44]
0x8D4836: mov     ecx, large fs:2Ch
0x8D483D: mov     edx, ds:0BA9DE4h
0x8D4843: mov     eax, [ecx+edx*4]
0x8D4846: mov     ecx, [eax+1A4h]
0x8D484C: cmp     ecx, [eax+1A8h]
0x8D4852: jnb     short loc_8D4876
0x8D4854: mov     ecx, [edi+1A4h]
0x8D485A: mov     dword ptr [ecx], offset aSt3axissweep; "St3AxisSweep"
0x8D4860: rdtsc
0x8D4862: mov     [esp+60h+var_34], eax
0x8D4866: mov     edx, [esp+60h+var_34]
0x8D486A: mov     [ecx+4], edx
0x8D486D: add     ecx, 0Ch
0x8D4870: mov     [edi+1A4h], ecx
0x8D4876: mov     ecx, [ebp+lpCriticalSection]; lpCriticalSection
0x8D4879: test    ecx, ecx
0x8D487B: jz      short loc_8D4882
0x8D487D: call    sub_8A7720
0x8D4882: mov     ebx, [ebp+arg_8]
0x8D4885: mov     ecx, [ebx+64h]
0x8D4888: mov     eax, [ecx]
0x8D488A: lea     edx, [esp+60h+var_2C+0Ch]
0x8D488E: push    edx
0x8D488F: lea     edx, [esp+64h+var_30]
0x8D4893: push    edx
0x8D4894: mov     edx, [ebp+arg_4]
0x8D4897: push    edx
0x8D4898: mov     edx, [esp+6Ch+var_50]
0x8D489C: push    esi
0x8D489D: push    edx
0x8D489E: call    dword ptr [eax+18h]
0x8D48A1: mov     ecx, [edi+19Ch]
0x8D48A7: mov     eax, [esp+60h+var_50]
0x8D48AB: cmp     eax, [ecx+28h]
0x8D48AE: mov     [ecx+20h], eax
0x8D48B1: jnz     short loc_8D48B9
0x8D48B3: mov     edx, [ecx]
0x8D48B5: push    eax
0x8D48B6: call    dword ptr [edx+10h]
0x8D48B9: mov     ecx, [edi+19Ch]
0x8D48BF: cmp     esi, [ecx+28h]
0x8D48C2: mov     [ecx+20h], esi
0x8D48C5: jnz     short loc_8D48CD
0x8D48C7: mov     eax, [ecx]
0x8D48C9: push    esi
0x8D48CA: call    dword ptr [eax+10h]
0x8D48CD: mov     ecx, dword ptr [esp+60h+var_2C]
0x8D48D1: mov     edx, [esp+60h+var_1C]
0x8D48D5: mov     esi, large fs:2Ch
0x8D48DC: add     edx, ecx
0x8D48DE: test    edx, edx
0x8D48E0: jle     loc_8D4A09
0x8D48E6: mov     eax, ds:0BA9DE4h
0x8D48EB: mov     eax, [esi+eax*4]
0x8D48EE: mov     ecx, [eax+1A4h]
0x8D48F4: cmp     ecx, [eax+1A8h]
0x8D48FA: jnb     short loc_8D491E
0x8D48FC: mov     ecx, [edi+1A4h]
0x8D4902: mov     dword ptr [ecx], offset aStremovedup; "StRemoveDup"
0x8D4908: rdtsc
0x8D490A: mov     [esp+60h+var_34], eax
0x8D490E: mov     edx, [esp+60h+var_34]
0x8D4912: mov     [ecx+4], edx
0x8D4915: add     ecx, 0Ch
0x8D4918: mov     [edi+1A4h], ecx
0x8D491E: lea     eax, [esp+60h+var_2C+0Ch]
0x8D4922: push    eax
0x8D4923: lea     ecx, [esp+64h+var_30]
0x8D4927: push    ecx
0x8D4928: call    sub_8D84F0
0x8D492D: mov     edx, ds:0BA9DE4h
0x8D4933: mov     eax, [esi+edx*4]
0x8D4936: mov     ecx, [eax+1A4h]
0x8D493C: mov     edx, [eax+1A8h]
0x8D4942: add     esp, 8
0x8D4945: cmp     ecx, edx
0x8D4947: jnb     short loc_8D496B
0x8D4949: mov     ecx, [edi+1A4h]
0x8D494F: mov     dword ptr [ecx], offset aStremoveagt; "StRemoveAgt"
0x8D4955: rdtsc
0x8D4957: mov     [esp+60h+var_34], eax
0x8D495B: mov     edx, [esp+60h+var_34]
0x8D495F: mov     [ecx+4], edx
0x8D4962: add     ecx, 0Ch
0x8D4965: mov     [edi+1A4h], ecx
0x8D496B: mov     eax, [esp+60h+var_1C]
0x8D496F: mov     ecx, dword ptr [esp+60h+var_2C+0Ch]
0x8D4973: push    eax
0x8D4974: push    ecx
0x8D4975: mov     ecx, [ebx+68h]
0x8D4978: call    sub_8D83E0
0x8D497D: mov     edx, ds:0BA7D98h
0x8D4983: mov     ecx, [edx+14h]
0x8D4986: mov     eax, [edx+28h]
0x8D4989: add     eax, ecx
0x8D498B: mov     ecx, [edx+8]
0x8D498E: cmp     ecx, eax
0x8D4990: jg      short loc_8D4996
0x8D4992: xor     ecx, ecx
0x8D4994: jmp     short loc_8D4998
0x8D4996: sub     ecx, eax
0x8D4998: mov     eax, dword ptr [esp+60h+var_2C]
0x8D499C: imul    eax, 3E8h
0x8D49A2: cmp     eax, ecx
0x8D49A4: jbe     short loc_8D49AF
0x8D49A6: mov     dword ptr [edx+4], 1
0x8D49AD: jmp     short loc_8D4A09
0x8D49AF: mov     ecx, ds:0BA9DE4h
0x8D49B5: mov     eax, [esi+ecx*4]
0x8D49B8: mov     edx, [eax+1A4h]
0x8D49BE: cmp     edx, [eax+1A8h]
0x8D49C4: jnb     short loc_8D49E8
0x8D49C6: mov     ecx, [edi+1A4h]
0x8D49CC: mov     dword ptr [ecx], offset aStaddagt; "StAddAgt"
0x8D49D2: rdtsc
0x8D49D4: mov     [esp+60h+var_34], eax
0x8D49D8: mov     eax, [esp+60h+var_34]
0x8D49DC: mov     [ecx+4], eax
0x8D49DF: add     ecx, 0Ch
0x8D49E2: mov     [edi+1A4h], ecx
0x8D49E8: mov     eax, [ebx+78h]
0x8D49EB: test    eax, eax
0x8D49ED: jz      short loc_8D49F4
0x8D49EF: add     eax, 8
0x8D49F2: jmp     short loc_8D49F6
0x8D49F4: xor     eax, eax
0x8D49F6: mov     ecx, dword ptr [esp+60h+var_2C]
0x8D49FA: mov     edx, [esp+60h+var_30]
0x8D49FE: push    eax
0x8D49FF: push    ecx
0x8D4A00: mov     ecx, [ebx+68h]
0x8D4A03: push    edx
0x8D4A04: call    sub_8D8370
0x8D4A09: mov     eax, [ebp+lpCriticalSection]
0x8D4A0C: test    eax, eax
0x8D4A0E: jz      short loc_8D4A17
0x8D4A10: push    eax; lpCriticalSection
0x8D4A11: call    dword ptr ds:0A28074h
0x8D4A17: mov     eax, ds:0BA9DE4h
0x8D4A1C: mov     eax, [esi+eax*4]
0x8D4A1F: mov     ecx, [eax+1A4h]
0x8D4A25: cmp     ecx, [eax+1A8h]
0x8D4A2B: jnb     short loc_8D4A4F
0x8D4A2D: mov     ecx, [edi+1A4h]
0x8D4A33: mov     dword ptr [ecx], offset aLt_0; "lt"
0x8D4A39: rdtsc
0x8D4A3B: mov     [esp+60h+var_34], eax
0x8D4A3F: mov     edx, [esp+60h+var_34]
0x8D4A43: mov     [ecx+4], edx
0x8D4A46: add     ecx, 0Ch
0x8D4A49: mov     [edi+1A4h], ecx
0x8D4A4F: mov     ecx, [edi+19Ch]
0x8D4A55: mov     eax, [esp+60h+var_14]
0x8D4A59: cmp     eax, [ecx+28h]
0x8D4A5C: mov     [ecx+20h], eax
0x8D4A5F: jnz     short loc_8D4A67
0x8D4A61: mov     edx, [ecx]
0x8D4A63: push    eax
0x8D4A64: call    dword ptr [edx+10h]
0x8D4A67: mov     eax, [esp+60h+var_18]
0x8D4A6B: test    eax, eax
0x8D4A6D: js      short loc_8D4A8A
0x8D4A6F: mov     ecx, [edi+19Ch]
0x8D4A75: and     eax, 3FFFFFFFh
0x8D4A7A: push    14h
0x8D4A7C: shl     eax, 3
0x8D4A7F: push    eax
0x8D4A80: mov     eax, dword ptr [esp+68h+var_2C+0Ch]
0x8D4A84: push    eax
0x8D4A85: call    sub_8A75D0
0x8D4A8A: mov     ecx, [edi+19Ch]
0x8D4A90: mov     eax, dword ptr [esp+60h+var_2C+8]
0x8D4A94: cmp     eax, [ecx+28h]
0x8D4A97: mov     [ecx+20h], eax
0x8D4A9A: jnz     short loc_8D4AA2
0x8D4A9C: mov     edx, [ecx]
0x8D4A9E: push    eax
0x8D4A9F: call    dword ptr [edx+10h]
0x8D4AA2: mov     eax, dword ptr [esp+60h+var_2C+4]
0x8D4AA6: test    eax, eax
0x8D4AA8: js      short loc_8D4AC5
0x8D4AAA: mov     ecx, [edi+19Ch]
0x8D4AB0: and     eax, 3FFFFFFFh
0x8D4AB5: push    14h
0x8D4AB7: shl     eax, 3
0x8D4ABA: push    eax
0x8D4ABB: mov     eax, [esp+68h+var_30]
0x8D4ABF: push    eax
0x8D4AC0: call    sub_8A75D0
0x8D4AC5: pop     edi
0x8D4AC6: pop     esi
0x8D4AC7: pop     ebx
0x8D4AC8: mov     esp, ebp
0x8D4ACA: pop     ebp
0x8D4ACB: retn    10h
