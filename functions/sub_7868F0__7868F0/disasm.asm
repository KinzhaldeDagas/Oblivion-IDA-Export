0x7868F0: sub     esp, 0Ch
0x7868F3: push    esi
0x7868F4: mov     esi, ecx
0x7868F6: cmp     dword ptr [esi+8], 0
0x7868FA: push    edi
0x7868FB: jnz     short loc_78691E
0x7868FD: mov     eax, [esp+14h+arg_C]
0x786901: mov     ecx, [esi+4]
0x786904: mov     edi, [esp+14h+arg_0]
0x786908: push    eax
0x786909: push    ecx
0x78690A: push    1
0x78690C: push    edi
0x78690D: mov     ecx, esi
0x78690F: call    sub_7859E0
0x786914: mov     eax, edi
0x786916: pop     edi
0x786917: pop     esi
0x786918: add     esp, 0Ch
0x78691B: retn    10h
0x78691E: mov     edx, [esi+4]
0x786921: mov     edi, [edx]
0x786923: push    ebp
0x786924: mov     ebp, [esp+18h+arg_4]
0x786928: test    ebp, ebp
0x78692A: jz      short loc_786930
0x78692C: cmp     ebp, esi
0x78692E: jz      short loc_786935
0x786930: call    __invalid_parameter_noinfo
0x786935: push    ebx
0x786936: mov     ebx, [esp+1Ch+arg_8]
0x78693A: cmp     ebx, edi
0x78693C: jnz     short loc_786972
0x78693E: mov     edi, [esp+1Ch+arg_C]
0x786942: lea     eax, [ebx+0Ch]
0x786945: push    eax
0x786946: push    edi
0x786947: mov     ecx, esi
0x786949: call    sub_6F7620
0x78694E: test    al, al
0x786950: jz      loc_786AC5
0x786956: push    edi
0x786957: mov     edi, [esp+20h+arg_0]
0x78695B: push    ebx
0x78695C: push    1
0x78695E: push    edi
0x78695F: mov     ecx, esi
0x786961: call    sub_7859E0
0x786966: pop     ebx
0x786967: pop     ebp
0x786968: mov     eax, edi
0x78696A: pop     edi
0x78696B: pop     esi
0x78696C: add     esp, 0Ch
0x78696F: retn    10h
0x786972: test    ebp, ebp
0x786974: mov     edi, [esi+4]
0x786977: jz      short loc_78697D
0x786979: cmp     ebp, esi
0x78697B: jz      short loc_786982
0x78697D: call    __invalid_parameter_noinfo
0x786982: cmp     ebx, edi
0x786984: mov     edi, [esp+1Ch+arg_C]
0x786988: jnz     short loc_7869C6
0x78698A: mov     ecx, [esi+4]
0x78698D: mov     eax, [ecx+8]
0x786990: add     eax, 0Ch
0x786993: push    edi
0x786994: push    eax
0x786995: mov     ecx, esi
0x786997: call    sub_6F7620
0x78699C: test    al, al
0x78699E: jz      loc_786AC5
0x7869A4: mov     edx, [esi+4]
0x7869A7: mov     eax, [edx+8]
0x7869AA: push    edi
0x7869AB: mov     edi, [esp+20h+arg_0]
0x7869AF: push    eax
0x7869B0: push    0
0x7869B2: push    edi
0x7869B3: mov     ecx, esi
0x7869B5: call    sub_7859E0
0x7869BA: pop     ebx
0x7869BB: pop     ebp
0x7869BC: mov     eax, edi
0x7869BE: pop     edi
0x7869BF: pop     esi
0x7869C0: add     esp, 0Ch
0x7869C3: retn    10h
0x7869C6: lea     eax, [ebx+0Ch]
0x7869C9: push    eax
0x7869CA: push    edi
0x7869CB: mov     ecx, esi
0x7869CD: call    sub_6F7620
0x7869D2: test    al, al
0x7869D4: jz      short loc_786A39
0x7869D6: lea     ecx, [esp+1Ch+arg_4]
0x7869DA: mov     [esp+1Ch+arg_4], ebp
0x7869DE: mov     [esp+1Ch+arg_8], ebx
0x7869E2: call    sub_7840B0
0x7869E7: mov     ecx, [esp+1Ch+arg_8]
0x7869EB: add     ecx, 0Ch
0x7869EE: push    edi
0x7869EF: push    ecx
0x7869F0: mov     ecx, esi
0x7869F2: call    sub_6F7620
0x7869F7: test    al, al
0x7869F9: jz      short loc_786A39
0x7869FB: mov     eax, [esp+1Ch+arg_8]
0x7869FF: mov     edx, [eax+8]
0x786A02: cmp     byte ptr [edx+2Dh], 0
0x786A06: push    edi
0x786A07: mov     edi, [esp+20h+arg_0]
0x786A0B: mov     ecx, esi
0x786A0D: jz      short loc_786A24
0x786A0F: push    eax
0x786A10: push    0
0x786A12: push    edi
0x786A13: call    sub_7859E0
0x786A18: pop     ebx
0x786A19: pop     ebp
0x786A1A: mov     eax, edi
0x786A1C: pop     edi
0x786A1D: pop     esi
0x786A1E: add     esp, 0Ch
0x786A21: retn    10h
0x786A24: push    ebx
0x786A25: push    1
0x786A27: push    edi
0x786A28: call    sub_7859E0
0x786A2D: pop     ebx
0x786A2E: pop     ebp
0x786A2F: mov     eax, edi
0x786A31: pop     edi
0x786A32: pop     esi
0x786A33: add     esp, 0Ch
0x786A36: retn    10h
0x786A39: push    edi
0x786A3A: lea     eax, [ebx+0Ch]
0x786A3D: push    eax
0x786A3E: mov     ecx, esi
0x786A40: call    sub_6F7620
0x786A45: test    al, al
0x786A47: jz      short loc_786AC5
0x786A49: mov     eax, [esi+4]
0x786A4C: lea     ecx, [esp+1Ch+arg_4]
0x786A50: mov     [esp+1Ch+arg_4], ebp
0x786A54: mov     [esp+1Ch+arg_8], ebx
0x786A58: mov     [esp+1Ch+var_8], eax
0x786A5C: mov     [esp+1Ch+var_C], esi
0x786A60: call    sub_7846D0
0x786A65: lea     ecx, [esp+1Ch+var_C]
0x786A69: push    ecx
0x786A6A: lea     ecx, [esp+20h+arg_4]
0x786A6E: call    sub_784040
0x786A73: test    al, al
0x786A75: mov     ebp, [esp+1Ch+arg_8]
0x786A79: jnz     short loc_786A8B
0x786A7B: lea     edx, [ebp+0Ch]
0x786A7E: push    edx
0x786A7F: push    edi
0x786A80: mov     ecx, esi
0x786A82: call    sub_6F7620
0x786A87: test    al, al
0x786A89: jz      short loc_786AC5
0x786A8B: mov     eax, [ebx+8]
0x786A8E: cmp     byte ptr [eax+2Dh], 0
0x786A92: push    edi
0x786A93: mov     edi, [esp+20h+arg_0]
0x786A97: mov     ecx, esi
0x786A99: jz      short loc_786AB0
0x786A9B: push    ebx
0x786A9C: push    0
0x786A9E: push    edi
0x786A9F: call    sub_7859E0
0x786AA4: pop     ebx
0x786AA5: pop     ebp
0x786AA6: mov     eax, edi
0x786AA8: pop     edi
0x786AA9: pop     esi
0x786AAA: add     esp, 0Ch
0x786AAD: retn    10h
0x786AB0: push    ebp
0x786AB1: push    1
0x786AB3: push    edi
0x786AB4: call    sub_7859E0
0x786AB9: pop     ebx
0x786ABA: pop     ebp
0x786ABB: mov     eax, edi
0x786ABD: pop     edi
0x786ABE: pop     esi
0x786ABF: add     esp, 0Ch
0x786AC2: retn    10h
0x786AC5: push    edi
0x786AC6: lea     ecx, [esp+20h+var_C]
0x786ACA: push    ecx
0x786ACB: mov     ecx, esi
0x786ACD: call    sub_785FA0
0x786AD2: mov     edx, [eax]
0x786AD4: mov     ecx, [esp+1Ch+arg_0]
0x786AD8: pop     ebx
0x786AD9: pop     ebp
0x786ADA: mov     [ecx], edx
0x786ADC: mov     eax, [eax+4]
0x786ADF: pop     edi
0x786AE0: mov     [ecx+4], eax
0x786AE3: mov     eax, ecx
0x786AE5: pop     esi
0x786AE6: add     esp, 0Ch
0x786AE9: retn    10h
