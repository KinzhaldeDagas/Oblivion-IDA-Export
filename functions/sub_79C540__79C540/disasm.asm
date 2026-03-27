0x79C540: push    ebp
0x79C541: mov     ebp, esp
0x79C543: and     esp, 0FFFFFFF8h
0x79C546: push    0FFFFFFFFh
0x79C548: push    offset SEH_79C540
0x79C54D: mov     eax, large fs:0
0x79C553: push    eax
0x79C554: sub     esp, 188h
0x79C55A: push    ebx
0x79C55B: push    esi
0x79C55C: push    edi
0x79C55D: mov     eax, ds:0B30AACh
0x79C562: xor     eax, esp
0x79C564: push    eax
0x79C565: lea     eax, [esp+1A4h+var_C]
0x79C56C: mov     large fs:0, eax
0x79C572: mov     [esp+1A4h+var_180], ecx
0x79C576: mov     eax, [ecx]
0x79C578: test    eax, eax
0x79C57A: jz      loc_79D9F2
0x79C580: cmp     dword ptr [ecx+4], 0
0x79C584: jz      loc_79D9F2
0x79C58A: mov     edx, [ecx+2Ch]
0x79C58D: fild    dword ptr [ecx+2Ch]
0x79C590: test    edx, edx
0x79C592: jge     short loc_79C59A
0x79C594: fadd    dword ptr ds:0A2FC78h
0x79C59A: fdivr   qword ptr ds:0A3F418h
0x79C5A0: movzx   eax, word ptr [eax+22h]
0x79C5A4: mov     ebx, [ebp+arg_0]
0x79C5A7: movzx   eax, ax
0x79C5AA: mov     [ebx+28h], eax
0x79C5AD: mov     dword ptr [ebx+2Ch], 2
0x79C5B4: cmp     dword ptr [ecx+2Ch], 0
0x79C5B8: mov     [esp+1A4h+var_114], 0
0x79C5C3: fstp    [esp+1A4h+var_A0]
0x79C5CA: jbe     loc_79D9F2
0x79C5D0: mov     ecx, [esp+1A4h+var_180]
0x79C5D4: fldz
0x79C5D6: mov     edx, [ecx]
0x79C5D8: movzx   eax, word ptr [edx+22h]
0x79C5DC: movzx   eax, ax
0x79C5DF: mov     [esp+1A4h+var_EC], eax
0x79C5E6: xor     eax, eax
0x79C5E8: mov     [esp+1A4h+var_148], eax
0x79C5EC: mov     [esp+1A4h+var_144], eax
0x79C5F0: mov     [esp+1A4h+var_140], eax
0x79C5F4: mov     ecx, ebx
0x79C5F6: fst     [esp+1A4h+var_15C]
0x79C5FA: mov     [esp+1A4h+var_4], eax
0x79C601: fst     [esp+1A4h+var_160]
0x79C605: mov     [esp+1A4h+var_178], eax
0x79C609: fstp    [esp+1A4h+var_164]
0x79C60D: call    sub_799EE0
0x79C612: test    eax, eax
0x79C614: jbe     loc_79D5A3
0x79C61A: mov     ecx, [esp+1A4h+var_114]
0x79C621: fild    [esp+1A4h+var_114]
0x79C628: test    ecx, ecx
0x79C62A: jge     short loc_79C632
0x79C62C: fadd    dword ptr ds:0A2FC78h
0x79C632: fmul    [esp+1A4h+var_A0]
0x79C639: fstp    [esp+1A4h+var_F8]
0x79C640: mov     ecx, ebx
0x79C642: call    sub_799EE0
0x79C647: mov     esi, [esp+1A4h+var_178]
0x79C64B: sub     eax, 1
0x79C64E: cmp     esi, eax
0x79C650: mov     eax, [ebx+4]
0x79C653: jnb     short loc_79C690
0x79C655: test    eax, eax
0x79C657: jz      short loc_79C675
0x79C659: mov     ecx, [ebx+8]
0x79C65C: sub     ecx, eax
0x79C65E: mov     eax, 92492493h
0x79C663: imul    ecx
0x79C665: add     edx, ecx
0x79C667: sar     edx, 5
0x79C66A: mov     eax, edx
0x79C66C: shr     eax, 1Fh
0x79C66F: add     eax, edx
0x79C671: cmp     esi, eax
0x79C673: jb      short loc_79C67A
0x79C675: call    __invalid_parameter_noinfo
0x79C67A: mov     eax, [esp+1A4h+var_178]
0x79C67E: lea     edx, ds:0[eax*8]
0x79C685: sub     edx, eax
0x79C687: mov     eax, [ebx+4]
0x79C68A: lea     esi, [eax+edx*8+0Ch]
0x79C68E: jmp     short loc_79C6C8
0x79C690: add     esi, 0FFFFFFFFh
0x79C693: test    eax, eax
0x79C695: jz      short loc_79C6B3
0x79C697: mov     ecx, [ebx+8]
0x79C69A: sub     ecx, eax
0x79C69C: mov     eax, 92492493h
0x79C6A1: imul    ecx
0x79C6A3: add     edx, ecx
0x79C6A5: sar     edx, 5
0x79C6A8: mov     eax, edx
0x79C6AA: shr     eax, 1Fh
0x79C6AD: add     eax, edx
0x79C6AF: cmp     esi, eax
0x79C6B1: jb      short loc_79C6B8
0x79C6B3: call    __invalid_parameter_noinfo
0x79C6B8: mov     edx, [ebx+4]
0x79C6BB: lea     ecx, ds:0[esi*8]
0x79C6C2: sub     ecx, esi
0x79C6C4: lea     esi, [edx+ecx*8+0Ch]
0x79C6C8: fld     dword ptr [ebx+1Ch]
0x79C6CB: mov     ecx, 9
0x79C6D0: fadd    [esp+1A4h+var_F8]
0x79C6D7: lea     edi, [esp+1A4h+var_44]
0x79C6DE: rep movsd
0x79C6E0: fstp    [esp+1A4h+var_190]
0x79C6E4: fld     [esp+1A4h+var_190]
0x79C6E8: push    ecx
0x79C6E9: lea     ecx, [esp+1A8h+var_44]
0x79C6F0: fstp    [esp+1A8h+var_1A8]; float
0x79C6F3: call    sub_793A00
0x79C6F8: fld     [esp+1A4h+var_44]
0x79C6FF: lea     eax, [esp+1A4h+var_158]
0x79C703: fldz
0x79C705: push    eax
0x79C706: fmul    st(1), st
0x79C708: lea     ecx, [esp+1A8h+var_14C]
0x79C70C: fld     [esp+1A8h+var_38]
0x79C713: faddp   st(2), st
0x79C715: fld     [esp+1A8h+var_2C]
0x79C71C: fmul    st, st(1)
0x79C71E: faddp   st(2), st
0x79C720: fxch    st(1)
0x79C722: fstp    [esp+1A8h+var_190]
0x79C726: fld     [esp+1A8h+var_40]
0x79C72D: fmul    st, st(1)
0x79C72F: fadd    [esp+1A8h+var_34]
0x79C736: fld     [esp+1A8h+var_28]
0x79C73D: fmul    st, st(2)
0x79C73F: faddp   st(1), st
0x79C741: fstp    [esp+1A8h+var_18C]
0x79C745: fld     [esp+1A8h+var_3C]
0x79C74C: fmul    st, st(1)
0x79C74E: fadd    [esp+1A8h+var_30]
0x79C755: fld     [esp+1A8h+var_24]
0x79C75C: fmulp   st(2), st
0x79C75E: faddp   st(1), st
0x79C760: fstp    [esp+1A8h+var_184]
0x79C764: fld     [esp+1A8h+var_190]
0x79C768: fstp    [esp+1A8h+var_158]
0x79C76C: fld     [esp+1A8h+var_18C]
0x79C770: fstp    [esp+1A8h+var_154]
0x79C774: fld     [esp+1A8h+var_184]
0x79C778: fstp    [esp+1A8h+var_150]
0x79C77C: call    sub_791630
0x79C781: fldz
0x79C783: mov     esi, [esp+1A4h+var_178]
0x79C787: test    esi, esi
0x79C789: fst     [esp+1A4h+var_16C]
0x79C78D: mov     eax, [ebx+4]
0x79C790: fst     [esp+1A4h+var_170]
0x79C794: fstp    [esp+1A4h+var_174]
0x79C798: jnz     loc_79C84D
0x79C79E: test    eax, eax
0x79C7A0: jz      short loc_79C7BC
0x79C7A2: mov     ecx, [ebx+8]
0x79C7A5: sub     ecx, eax
0x79C7A7: mov     eax, 92492493h
0x79C7AC: imul    ecx
0x79C7AE: add     edx, ecx
0x79C7B0: sar     edx, 5
0x79C7B3: mov     ecx, edx
0x79C7B5: shr     ecx, 1Fh
0x79C7B8: add     ecx, edx
0x79C7BA: jnz     short loc_79C7C1
0x79C7BC: call    __invalid_parameter_noinfo
0x79C7C1: mov     eax, [ebx+4]
0x79C7C4: test    eax, eax
0x79C7C6: mov     [esp+1A4h+var_190], eax
0x79C7CA: jz      short loc_79C7E9
0x79C7CC: mov     ecx, [ebx+8]
0x79C7CF: sub     ecx, eax
0x79C7D1: mov     eax, 92492493h
0x79C7D6: imul    ecx
0x79C7D8: add     edx, ecx
0x79C7DA: sar     edx, 5
0x79C7DD: mov     eax, edx
0x79C7DF: shr     eax, 1Fh
0x79C7E2: add     eax, edx
0x79C7E4: cmp     eax, 1
0x79C7E7: ja      short loc_79C7EE
0x79C7E9: call    __invalid_parameter_noinfo
0x79C7EE: mov     edi, [ebx+4]
0x79C7F1: mov     eax, [esp+1A4h+var_190]
0x79C7F5: fld     dword ptr [edi+38h]
0x79C7F8: fsub    dword ptr [eax]
0x79C7FA: fstp    [esp+1A4h+var_190]
0x79C7FE: fld     dword ptr [edi+3Ch]
0x79C801: fsub    dword ptr [eax+4]
0x79C804: fstp    [esp+1A4h+var_18C]
0x79C808: fld     dword ptr [edi+40h]
0x79C80B: fsub    dword ptr [eax+8]
0x79C80E: fstp    [esp+1A4h+var_184]
0x79C812: fld     [esp+1A4h+var_190]
0x79C816: fstp    [esp+1A4h+var_B8]
0x79C81D: mov     edx, [esp+1A4h+var_B8]
0x79C824: fld     [esp+1A4h+var_18C]
0x79C828: fstp    [esp+1A4h+var_B4]
0x79C82F: mov     eax, [esp+1A4h+var_B4]
0x79C836: fld     [esp+1A4h+var_184]
0x79C83A: fstp    [esp+1A4h+var_B0]
0x79C841: mov     ecx, [esp+1A4h+var_B0]
0x79C848: jmp     loc_79C902
0x79C84D: test    eax, eax
0x79C84F: jz      short loc_79C86B
0x79C851: mov     ecx, [ebx+8]
0x79C854: sub     ecx, eax
0x79C856: mov     eax, 92492493h
0x79C85B: imul    ecx
0x79C85D: add     edx, ecx
0x79C85F: sar     edx, 5
0x79C862: mov     eax, edx
0x79C864: shr     eax, 1Fh
0x79C867: add     eax, edx
0x79C869: jnz     short loc_79C870
0x79C86B: call    __invalid_parameter_noinfo
0x79C870: mov     eax, [ebx+4]
0x79C873: test    eax, eax
0x79C875: mov     [esp+1A4h+var_190], eax
0x79C879: jz      short loc_79C897
0x79C87B: mov     ecx, [ebx+8]
0x79C87E: sub     ecx, eax
0x79C880: mov     eax, 92492493h
0x79C885: imul    ecx
0x79C887: add     edx, ecx
0x79C889: sar     edx, 5
0x79C88C: mov     eax, edx
0x79C88E: shr     eax, 1Fh
0x79C891: add     eax, edx
0x79C893: cmp     esi, eax
0x79C895: jb      short loc_79C89C
0x79C897: call    __invalid_parameter_noinfo
0x79C89C: mov     edi, [ebx+4]
0x79C89F: lea     ecx, ds:0[esi*8]
0x79C8A6: sub     ecx, esi
0x79C8A8: fld     dword ptr [edi+ecx*8]
0x79C8AB: lea     eax, [edi+ecx*8]
0x79C8AE: mov     ecx, [esp+1A4h+var_190]
0x79C8B2: fsub    dword ptr [ecx]
0x79C8B4: fstp    [esp+1A4h+var_190]
0x79C8B8: fld     dword ptr [eax+4]
0x79C8BB: fsub    dword ptr [ecx+4]
0x79C8BE: fstp    [esp+1A4h+var_18C]
0x79C8C2: fld     dword ptr [eax+8]
0x79C8C5: fsub    dword ptr [ecx+8]
0x79C8C8: fstp    [esp+1A4h+var_184]
0x79C8CC: fld     [esp+1A4h+var_190]
0x79C8D0: fstp    [esp+1A4h+var_84]
0x79C8D7: mov     edx, [esp+1A4h+var_84]
0x79C8DE: fld     [esp+1A4h+var_18C]
0x79C8E2: fstp    [esp+1A4h+var_80]
0x79C8E9: mov     eax, [esp+1A4h+var_80]
0x79C8F0: fld     [esp+1A4h+var_184]
0x79C8F4: fstp    [esp+1A4h+var_7C]
0x79C8FB: mov     ecx, [esp+1A4h+var_7C]
0x79C902: mov     [esp+1A4h+var_174], edx
0x79C906: fld     [esp+1A4h+var_174]
0x79C90A: mov     [esp+1A4h+var_170], eax
0x79C90E: fld     [esp+1A4h+var_170]
0x79C912: mov     [esp+1A4h+var_16C], ecx
0x79C916: fld     [esp+1A4h+var_16C]
0x79C91A: fld     st(1)
0x79C91C: fmulp   st(2), st
0x79C91E: fld     st(2)
0x79C920: fmulp   st(3), st
0x79C922: fxch    st(1)
0x79C924: faddp   st(2), st
0x79C926: fmul    st, st
0x79C928: faddp   st(1), st
0x79C92A: fstp    [esp+1A4h+var_190]
0x79C92E: fld     [esp+1A4h+var_190]
0x79C932: call    __CIsqrt
0x79C937: fstp    [esp+1A4h+var_190]
0x79C93B: fld     [esp+1A4h+var_190]
0x79C93F: mov     ecx, ebx
0x79C941: fld1
0x79C943: fdivrp  st(1), st
0x79C945: fstp    [esp+1A4h+var_190]
0x79C949: fld     [esp+1A4h+var_190]
0x79C94D: fld     st
0x79C94F: fmul    [esp+1A4h+var_174]
0x79C953: fstp    [esp+1A4h+var_174]
0x79C957: fld     st
0x79C959: fmul    [esp+1A4h+var_170]
0x79C95D: fstp    [esp+1A4h+var_170]
0x79C961: fmul    [esp+1A4h+var_16C]
0x79C965: fstp    [esp+1A4h+var_16C]
0x79C969: fldz
0x79C96B: fst     [esp+1A4h+var_118]
0x79C972: fst     [esp+1A4h+var_11C]
0x79C979: fst     [esp+1A4h+var_120]
0x79C980: fst     [esp+1A4h+var_124]
0x79C987: fst     [esp+1A4h+var_128]
0x79C98B: fstp    [esp+1A4h+var_12C]
0x79C98F: call    sub_799EE0
0x79C994: sub     eax, 1
0x79C997: cmp     esi, eax
0x79C999: jnz     loc_79CBAA
0x79C99F: mov     ecx, ebx
0x79C9A1: call    sub_799EE0
0x79C9A6: test    eax, eax
0x79C9A8: jbe     loc_79CBAA
0x79C9AE: mov     ecx, [esp+1A4h+var_148]
0x79C9B2: test    ecx, ecx
0x79C9B4: lea     edi, [esi-1]
0x79C9B7: jz      short loc_79C9D3
0x79C9B9: mov     edx, [esp+1A4h+var_144]
0x79C9BD: sub     edx, ecx
0x79C9BF: mov     eax, 2AAAAAABh
0x79C9C4: imul    edx
0x79C9C6: sar     edx, 1
0x79C9C8: mov     eax, edx
0x79C9CA: shr     eax, 1Fh
0x79C9CD: add     eax, edx
0x79C9CF: cmp     edi, eax
0x79C9D1: jb      short loc_79C9DC
0x79C9D3: call    __invalid_parameter_noinfo
0x79C9D8: mov     ecx, [esp+1A4h+var_148]
0x79C9DC: fld     dword ptr [ebx+14h]
0x79C9DF: lea     edx, [edi+edi*2]
0x79C9E2: fstp    [esp+1A4h+var_190]
0x79C9E6: lea     eax, [ecx+edx*4]
0x79C9E9: fld     dword ptr [eax]
0x79C9EB: fld     [esp+1A4h+var_190]
0x79C9EF: fld     st
0x79C9F1: fmulp   st(2), st
0x79C9F3: fxch    st(1)
0x79C9F5: fstp    [esp+1A4h+var_190]
0x79C9F9: fld     dword ptr [eax+4]
0x79C9FC: fmul    st, st(1)
0x79C9FE: fstp    [esp+1A4h+var_18C]
0x79CA02: fmul    dword ptr [eax+8]
0x79CA05: mov     eax, [ebx+4]
0x79CA08: test    eax, eax
0x79CA0A: fstp    [esp+1A4h+var_184]
0x79CA0E: jz      short loc_79CA2C
0x79CA10: mov     edi, [ebx+8]
0x79CA13: sub     edi, eax
0x79CA15: mov     eax, 92492493h
0x79CA1A: imul    edi
0x79CA1C: add     edx, edi
0x79CA1E: sar     edx, 5
0x79CA21: mov     eax, edx
0x79CA23: shr     eax, 1Fh
0x79CA26: add     eax, edx
0x79CA28: cmp     esi, eax
0x79CA2A: jb      short loc_79CA35
0x79CA2C: call    __invalid_parameter_noinfo
0x79CA31: mov     ecx, [esp+1A4h+var_148]
0x79CA35: mov     eax, [ebx+4]
0x79CA38: fld     [esp+1A4h+var_190]
0x79CA3C: lea     edi, ds:0[esi*8]
0x79CA43: sub     edi, esi
0x79CA45: add     edi, edi
0x79CA47: add     edi, edi
0x79CA49: add     edi, edi
0x79CA4B: fadd    dword ptr [eax+edi]
0x79CA4E: add     eax, edi
0x79CA50: test    ecx, ecx
0x79CA52: fstp    [esp+1A4h+var_190]
0x79CA56: fld     dword ptr [eax+4]
0x79CA59: fadd    [esp+1A4h+var_18C]
0x79CA5D: fstp    [esp+1A4h+var_18C]
0x79CA61: fld     dword ptr [eax+8]
0x79CA64: fadd    [esp+1A4h+var_184]
0x79CA68: fstp    [esp+1A4h+var_184]
0x79CA6C: fld     [esp+1A4h+var_190]
0x79CA70: fstp    [esp+1A4h+var_D0]
0x79CA77: mov     eax, [esp+1A4h+var_D0]
0x79CA7E: fld     [esp+1A4h+var_18C]
0x79CA82: mov     [esp+1A4h+var_120], eax
0x79CA89: fstp    [esp+1A4h+var_CC]
0x79CA90: mov     edx, [esp+1A4h+var_CC]
0x79CA97: fld     [esp+1A4h+var_184]
0x79CA9B: mov     [esp+1A4h+var_11C], edx
0x79CAA2: fstp    [esp+1A4h+var_C8]
0x79CAA9: mov     eax, [esp+1A4h+var_C8]
0x79CAB0: mov     [esp+1A4h+var_118], eax
0x79CAB7: jz      short loc_79CAD8
0x79CAB9: mov     eax, [esp+1A4h+var_144]
0x79CABD: sub     eax, ecx
0x79CABF: mov     edx, eax
0x79CAC1: mov     eax, 2AAAAAABh
0x79CAC6: imul    edx
0x79CAC8: sar     edx, 1
0x79CACA: mov     eax, edx
0x79CACC: shr     eax, 1Fh
0x79CACF: add     eax, edx
0x79CAD1: lea     edx, [esi-1]
0x79CAD4: cmp     edx, eax
0x79CAD6: jb      short loc_79CAE1
0x79CAD8: call    __invalid_parameter_noinfo
0x79CADD: mov     ecx, [esp+1A4h+var_148]
0x79CAE1: fld     dword ptr [ebx+14h]
0x79CAE4: lea     eax, [esi-1]
0x79CAE7: fstp    [esp+1A4h+var_190]
0x79CAEB: lea     edx, [eax+eax*2]
0x79CAEE: fld     dword ptr [ecx+edx*4]
0x79CAF1: lea     eax, [ecx+edx*4]
0x79CAF4: fld     [esp+1A4h+var_190]
0x79CAF8: fld     st
0x79CAFA: fmulp   st(2), st
0x79CAFC: fxch    st(1)
0x79CAFE: fstp    [esp+1A4h+var_190]
0x79CB02: fld     dword ptr [eax+4]
0x79CB05: fmul    st, st(1)
0x79CB07: fstp    [esp+1A4h+var_18C]
0x79CB0B: fmul    dword ptr [eax+8]
0x79CB0E: mov     eax, [ebx+4]
0x79CB11: test    eax, eax
0x79CB13: fstp    [esp+1A4h+var_184]
0x79CB17: jz      short loc_79CB35
0x79CB19: mov     ecx, [ebx+8]
0x79CB1C: sub     ecx, eax
0x79CB1E: mov     eax, 92492493h
0x79CB23: imul    ecx
0x79CB25: add     edx, ecx
0x79CB27: sar     edx, 5
0x79CB2A: mov     eax, edx
0x79CB2C: shr     eax, 1Fh
0x79CB2F: add     eax, edx
0x79CB31: cmp     esi, eax
0x79CB33: jb      short loc_79CB3A
0x79CB35: call    __invalid_parameter_noinfo
0x79CB3A: mov     eax, [ebx+4]
0x79CB3D: fld     dword ptr [eax+edi]
0x79CB40: add     eax, edi
0x79CB42: fsub    [esp+1A4h+var_190]
0x79CB46: fstp    [esp+1A4h+var_190]
0x79CB4A: fld     dword ptr [eax+4]
0x79CB4D: fsub    [esp+1A4h+var_18C]
0x79CB51: fstp    [esp+1A4h+var_18C]
0x79CB55: fld     dword ptr [eax+8]
0x79CB58: fsub    [esp+1A4h+var_184]
0x79CB5C: fstp    [esp+1A4h+var_184]
0x79CB60: fld     [esp+1A4h+var_190]
0x79CB64: fstp    [esp+1A4h+var_78]
0x79CB6B: mov     eax, [esp+1A4h+var_78]
0x79CB72: fld     [esp+1A4h+var_18C]
0x79CB76: mov     [esp+1A4h+var_12C], eax
0x79CB7A: fstp    [esp+1A4h+var_74]
0x79CB81: mov     ecx, [esp+1A4h+var_74]
0x79CB88: fld     [esp+1A4h+var_184]
0x79CB8C: mov     [esp+1A4h+var_128], ecx
0x79CB90: fstp    [esp+1A4h+var_70]
0x79CB97: mov     edx, [esp+1A4h+var_70]
0x79CB9E: mov     [esp+1A4h+var_124], edx
0x79CBA5: jmp     loc_79D0C5
0x79CBAA: test    esi, esi
0x79CBAC: jbe     loc_79CF42
0x79CBB2: mov     ecx, ebx
0x79CBB4: call    sub_799EE0
0x79CBB9: sub     eax, 1
0x79CBBC: cmp     esi, eax
0x79CBBE: jnb     loc_79CF42
0x79CBC4: mov     eax, [esp+1A4h+var_148]
0x79CBC8: test    eax, eax
0x79CBCA: lea     edi, [esi-1]
0x79CBCD: jz      short loc_79CBE9
0x79CBCF: mov     ecx, [esp+1A4h+var_144]
0x79CBD3: sub     ecx, eax
0x79CBD5: mov     eax, 2AAAAAABh
0x79CBDA: imul    ecx
0x79CBDC: sar     edx, 1
0x79CBDE: mov     eax, edx
0x79CBE0: shr     eax, 1Fh
0x79CBE3: add     eax, edx
0x79CBE5: cmp     edi, eax
0x79CBE7: jb      short loc_79CBEE
0x79CBE9: call    __invalid_parameter_noinfo
0x79CBEE: fld     dword ptr [ebx+14h]
0x79CBF1: mov     ecx, [esp+1A4h+var_148]
0x79CBF5: fstp    [esp+1A4h+var_190]
0x79CBF9: lea     eax, [edi+edi*2]
0x79CBFC: fld     [esp+1A4h+var_190]
0x79CC00: lea     eax, [ecx+eax*4]
0x79CC03: fld     st
0x79CC05: fmul    dword ptr [eax]
0x79CC07: fstp    [esp+1A4h+var_190]
0x79CC0B: fld     dword ptr [eax+4]
0x79CC0E: fmul    st, st(1)
0x79CC10: fstp    [esp+1A4h+var_18C]
0x79CC14: fmul    dword ptr [eax+8]
0x79CC17: mov     eax, [ebx+4]
0x79CC1A: test    eax, eax
0x79CC1C: fstp    [esp+1A4h+var_184]
0x79CC20: jz      short loc_79CC3E
0x79CC22: mov     ecx, [ebx+8]
0x79CC25: sub     ecx, eax
0x79CC27: mov     eax, 92492493h
0x79CC2C: imul    ecx
0x79CC2E: add     edx, ecx
0x79CC30: sar     edx, 5
0x79CC33: mov     eax, edx
0x79CC35: shr     eax, 1Fh
0x79CC38: add     eax, edx
0x79CC3A: cmp     esi, eax
0x79CC3C: jb      short loc_79CC43
0x79CC3E: call    __invalid_parameter_noinfo
0x79CC43: mov     eax, [ebx+4]
0x79CC46: fld     [esp+1A4h+var_190]
0x79CC4A: lea     edi, ds:0[esi*8]
0x79CC51: sub     edi, esi
0x79CC53: add     edi, edi
0x79CC55: add     edi, edi
0x79CC57: add     edi, edi
0x79CC59: test    eax, eax
0x79CC5B: fadd    dword ptr [edi+eax]
0x79CC5E: fstp    [esp+1A4h+var_168]
0x79CC62: fld     dword ptr [edi+eax+4]
0x79CC66: fadd    [esp+1A4h+var_18C]
0x79CC6A: fstp    [esp+1A4h+var_178]
0x79CC6E: fld     dword ptr [edi+eax+8]
0x79CC72: fadd    [esp+1A4h+var_184]
0x79CC76: fstp    [esp+1A4h+var_188]
0x79CC7A: fld     dword ptr [ebx+14h]
0x79CC7D: fstp    [esp+1A4h+var_190]
0x79CC81: fld     [esp+1A4h+var_190]
0x79CC85: fld     st
0x79CC87: fmul    [esp+1A4h+var_158]
0x79CC8B: fstp    [esp+1A4h+var_190]
0x79CC8F: fld     st
0x79CC91: fmul    [esp+1A4h+var_154]
0x79CC95: fstp    [esp+1A4h+var_18C]
0x79CC99: fmul    [esp+1A4h+var_150]
0x79CC9D: fstp    [esp+1A4h+var_184]
0x79CCA1: jz      short loc_79CCBF
0x79CCA3: mov     ecx, [ebx+8]
0x79CCA6: sub     ecx, eax
0x79CCA8: mov     eax, 92492493h
0x79CCAD: imul    ecx
0x79CCAF: add     edx, ecx
0x79CCB1: sar     edx, 5
0x79CCB4: mov     eax, edx
0x79CCB6: shr     eax, 1Fh
0x79CCB9: add     eax, edx
0x79CCBB: cmp     esi, eax
0x79CCBD: jb      short loc_79CCC4
0x79CCBF: call    __invalid_parameter_noinfo
0x79CCC4: mov     eax, [ebx+4]
0x79CCC7: fld     dword ptr [eax+edi]
0x79CCCA: add     eax, edi
0x79CCCC: fadd    [esp+1A4h+var_190]
0x79CCD0: fstp    [esp+1A4h+var_190]
0x79CCD4: fld     dword ptr [eax+4]
0x79CCD7: fadd    [esp+1A4h+var_18C]
0x79CCDB: fstp    [esp+1A4h+var_18C]
0x79CCDF: fld     dword ptr [eax+8]
0x79CCE2: fadd    [esp+1A4h+var_184]
0x79CCE6: fstp    [esp+1A4h+var_184]
0x79CCEA: fld     [esp+1A4h+var_190]
0x79CCEE: fadd    [esp+1A4h+var_168]
0x79CCF2: fstp    [esp+1A4h+var_190]
0x79CCF6: fld     [esp+1A4h+var_18C]
0x79CCFA: fadd    [esp+1A4h+var_178]
0x79CCFE: fstp    [esp+1A4h+var_18C]
0x79CD02: fld     [esp+1A4h+var_184]
0x79CD06: fadd    [esp+1A4h+var_188]
0x79CD0A: fstp    [esp+1A4h+var_188]
0x79CD0E: fld     [esp+1A4h+var_190]
0x79CD12: fld     qword ptr ds:0A2FAA0h
0x79CD18: fmul    st(1), st
0x79CD1A: fxch    st(1)
0x79CD1C: fstp    [esp+1A4h+var_190]
0x79CD20: fld     [esp+1A4h+var_18C]
0x79CD24: fmul    st, st(1)
0x79CD26: fstp    [esp+1A4h+var_18C]
0x79CD2A: fld     [esp+1A4h+var_188]
0x79CD2E: fmul    st, st(1)
0x79CD30: fstp    [esp+1A4h+var_188]
0x79CD34: fld     [esp+1A4h+var_190]
0x79CD38: fstp    [esp+1A4h+var_90]
0x79CD3F: mov     edx, [esp+1A4h+var_90]
0x79CD46: fld     [esp+1A4h+var_18C]
0x79CD4A: mov     [esp+1A4h+var_120], edx
0x79CD51: fstp    [esp+1A4h+var_8C]
0x79CD58: mov     eax, [esp+1A4h+var_8C]
0x79CD5F: fld     [esp+1A4h+var_188]
0x79CD63: mov     [esp+1A4h+var_11C], eax
0x79CD6A: fstp    [esp+1A4h+var_88]
0x79CD71: mov     ecx, [esp+1A4h+var_88]
0x79CD78: mov     [esp+1A4h+var_118], ecx
0x79CD7F: mov     ecx, [esp+1A4h+var_148]
0x79CD83: test    ecx, ecx
0x79CD85: jz      short loc_79CDA6
0x79CD87: mov     eax, [esp+1A4h+var_144]
0x79CD8B: sub     eax, ecx
0x79CD8D: mov     edx, eax
0x79CD8F: mov     eax, 2AAAAAABh
0x79CD94: imul    edx
0x79CD96: sar     edx, 1
0x79CD98: mov     eax, edx
0x79CD9A: shr     eax, 1Fh
0x79CD9D: add     eax, edx
0x79CD9F: lea     edx, [esi-1]
0x79CDA2: cmp     edx, eax
0x79CDA4: jb      short loc_79CDB7
0x79CDA6: fstp    st
0x79CDA8: call    __invalid_parameter_noinfo
0x79CDAD: fld     qword ptr ds:0A2FAA0h
0x79CDB3: mov     ecx, [esp+1A4h+var_148]
0x79CDB7: fld     dword ptr [ebx+14h]
0x79CDBA: lea     eax, [esi-1]
0x79CDBD: fstp    [esp+1A4h+var_188]
0x79CDC1: lea     edx, [eax+eax*2]
0x79CDC4: fld     dword ptr [ecx+edx*4]
0x79CDC7: lea     eax, [ecx+edx*4]
0x79CDCA: fld     [esp+1A4h+var_188]
0x79CDCE: fld     st
0x79CDD0: fmulp   st(2), st
0x79CDD2: fxch    st(1)
0x79CDD4: fstp    [esp+1A4h+var_188]
0x79CDD8: fld     dword ptr [eax+4]
0x79CDDB: fmul    st, st(1)
0x79CDDD: fstp    [esp+1A4h+var_190]
0x79CDE1: fmul    dword ptr [eax+8]
0x79CDE4: mov     eax, [ebx+4]
0x79CDE7: test    eax, eax
0x79CDE9: fstp    [esp+1A4h+var_18C]
0x79CDED: jz      short loc_79CE0B
0x79CDEF: mov     ecx, [ebx+8]
0x79CDF2: sub     ecx, eax
0x79CDF4: mov     eax, 92492493h
0x79CDF9: imul    ecx
0x79CDFB: add     edx, ecx
0x79CDFD: sar     edx, 5
0x79CE00: mov     eax, edx
0x79CE02: shr     eax, 1Fh
0x79CE05: add     eax, edx
0x79CE07: cmp     esi, eax
0x79CE09: jb      short loc_79CE18
0x79CE0B: fstp    st
0x79CE0D: call    __invalid_parameter_noinfo
0x79CE12: fld     qword ptr ds:0A2FAA0h
0x79CE18: mov     eax, [ebx+4]
0x79CE1B: test    eax, eax
0x79CE1D: fld     dword ptr [edi+eax]
0x79CE20: fsub    [esp+1A4h+var_188]
0x79CE24: fstp    [esp+1A4h+var_184]
0x79CE28: fld     dword ptr [edi+eax+4]
0x79CE2C: fsub    [esp+1A4h+var_190]
0x79CE30: fstp    [esp+1A4h+var_168]
0x79CE34: fld     dword ptr [edi+eax+8]
0x79CE38: fsub    [esp+1A4h+var_18C]
0x79CE3C: fstp    [esp+1A4h+var_178]
0x79CE40: fld     dword ptr [ebx+14h]
0x79CE43: fstp    [esp+1A4h+var_188]
0x79CE47: fld     [esp+1A4h+var_188]
0x79CE4B: fld     st
0x79CE4D: fmul    [esp+1A4h+var_158]
0x79CE51: fstp    [esp+1A4h+var_188]
0x79CE55: fld     st
0x79CE57: fmul    [esp+1A4h+var_154]
0x79CE5B: fstp    [esp+1A4h+var_190]
0x79CE5F: fmul    [esp+1A4h+var_150]
0x79CE63: fstp    [esp+1A4h+var_18C]
0x79CE67: jz      short loc_79CE85
0x79CE69: mov     ecx, [ebx+8]
0x79CE6C: sub     ecx, eax
0x79CE6E: mov     eax, 92492493h
0x79CE73: imul    ecx
0x79CE75: add     edx, ecx
0x79CE77: sar     edx, 5
0x79CE7A: mov     eax, edx
0x79CE7C: shr     eax, 1Fh
0x79CE7F: add     eax, edx
0x79CE81: cmp     esi, eax
0x79CE83: jb      short loc_79CE92
0x79CE85: fstp    st
0x79CE87: call    __invalid_parameter_noinfo
0x79CE8C: fld     qword ptr ds:0A2FAA0h
0x79CE92: mov     eax, [ebx+4]
0x79CE95: fld     dword ptr [eax+edi]
0x79CE98: add     eax, edi
0x79CE9A: fsub    [esp+1A4h+var_188]
0x79CE9E: fstp    [esp+1A4h+var_188]
0x79CEA2: fld     dword ptr [eax+4]
0x79CEA5: fsub    [esp+1A4h+var_190]
0x79CEA9: fstp    [esp+1A4h+var_190]
0x79CEAD: fld     dword ptr [eax+8]
0x79CEB0: fsub    [esp+1A4h+var_18C]
0x79CEB4: fstp    [esp+1A4h+var_18C]
0x79CEB8: fld     [esp+1A4h+var_188]
0x79CEBC: fadd    [esp+1A4h+var_184]
0x79CEC0: fstp    [esp+1A4h+var_188]
0x79CEC4: fld     [esp+1A4h+var_190]
0x79CEC8: fadd    [esp+1A4h+var_168]
0x79CECC: fstp    [esp+1A4h+var_190]
0x79CED0: fld     [esp+1A4h+var_18C]
0x79CED4: fadd    [esp+1A4h+var_178]
0x79CED8: fstp    [esp+1A4h+var_18C]
0x79CEDC: fld     [esp+1A4h+var_188]
0x79CEE0: fmul    st, st(1)
0x79CEE2: fstp    [esp+1A4h+var_188]
0x79CEE6: fld     [esp+1A4h+var_190]
0x79CEEA: fmul    st, st(1)
0x79CEEC: fstp    [esp+1A4h+var_190]
0x79CEF0: fmul    [esp+1A4h+var_18C]
0x79CEF4: fstp    [esp+1A4h+var_18C]
0x79CEF8: fld     [esp+1A4h+var_188]
0x79CEFC: fstp    [esp+1A4h+var_60]
0x79CF03: mov     eax, [esp+1A4h+var_60]
0x79CF0A: fld     [esp+1A4h+var_190]
0x79CF0E: mov     [esp+1A4h+var_12C], eax
0x79CF12: fstp    [esp+1A4h+var_5C]
0x79CF19: mov     ecx, [esp+1A4h+var_5C]
0x79CF20: fld     [esp+1A4h+var_18C]
0x79CF24: mov     [esp+1A4h+var_128], ecx
0x79CF28: fstp    [esp+1A4h+var_58]
0x79CF2F: mov     edx, [esp+1A4h+var_58]
0x79CF36: mov     [esp+1A4h+var_124], edx
0x79CF3D: jmp     loc_79D0C5
0x79CF42: test    edi, edi
0x79CF44: fld     dword ptr [ebx+14h]
0x79CF47: fstp    [esp+1A4h+var_188]
0x79CF4B: fld     [esp+1A4h+var_188]
0x79CF4F: fld     st
0x79CF51: fmul    [esp+1A4h+var_158]
0x79CF55: fstp    [esp+1A4h+var_188]
0x79CF59: fld     st
0x79CF5B: fmul    [esp+1A4h+var_154]
0x79CF5F: fstp    [esp+1A4h+var_190]
0x79CF63: fmul    [esp+1A4h+var_150]
0x79CF67: fstp    [esp+1A4h+var_18C]
0x79CF6B: jz      short loc_79CF89
0x79CF6D: mov     ecx, [ebx+8]
0x79CF70: sub     ecx, edi
0x79CF72: mov     eax, 92492493h
0x79CF77: imul    ecx
0x79CF79: add     edx, ecx
0x79CF7B: sar     edx, 5
0x79CF7E: mov     eax, edx
0x79CF80: shr     eax, 1Fh
0x79CF83: add     eax, edx
0x79CF85: cmp     esi, eax
0x79CF87: jb      short loc_79CF8E
0x79CF89: call    __invalid_parameter_noinfo
0x79CF8E: mov     eax, [ebx+4]
0x79CF91: fld     [esp+1A4h+var_188]
0x79CF95: lea     edi, ds:0[esi*8]
0x79CF9C: sub     edi, esi
0x79CF9E: add     edi, edi
0x79CFA0: add     edi, edi
0x79CFA2: add     edi, edi
0x79CFA4: test    eax, eax
0x79CFA6: fadd    dword ptr [edi+eax]
0x79CFA9: fstp    [esp+1A4h+var_188]
0x79CFAD: fld     dword ptr [edi+eax+4]
0x79CFB1: fadd    [esp+1A4h+var_190]
0x79CFB5: fstp    [esp+1A4h+var_190]
0x79CFB9: fld     dword ptr [edi+eax+8]
0x79CFBD: fadd    [esp+1A4h+var_18C]
0x79CFC1: fstp    [esp+1A4h+var_18C]
0x79CFC5: fld     [esp+1A4h+var_188]
0x79CFC9: fstp    [esp+1A4h+var_6C]
0x79CFD0: mov     ecx, [esp+1A4h+var_6C]
0x79CFD7: fld     [esp+1A4h+var_190]
0x79CFDB: mov     [esp+1A4h+var_120], ecx
0x79CFE2: fstp    [esp+1A4h+var_68]
0x79CFE9: mov     edx, [esp+1A4h+var_68]
0x79CFF0: fld     [esp+1A4h+var_18C]
0x79CFF4: mov     [esp+1A4h+var_11C], edx
0x79CFFB: fstp    [esp+1A4h+var_64]
0x79D002: mov     ecx, [esp+1A4h+var_64]
0x79D009: fld     dword ptr [ebx+14h]
0x79D00C: mov     [esp+1A4h+var_118], ecx
0x79D013: fstp    [esp+1A4h+var_188]
0x79D017: fld     [esp+1A4h+var_188]
0x79D01B: fld     st
0x79D01D: fmul    [esp+1A4h+var_158]
0x79D021: fstp    [esp+1A4h+var_188]
0x79D025: fld     st
0x79D027: fmul    [esp+1A4h+var_154]
0x79D02B: fstp    [esp+1A4h+var_190]
0x79D02F: fmul    [esp+1A4h+var_150]
0x79D033: fstp    [esp+1A4h+var_18C]
0x79D037: jz      short loc_79D055
0x79D039: mov     ecx, [ebx+8]
0x79D03C: sub     ecx, eax
0x79D03E: mov     eax, 92492493h
0x79D043: imul    ecx
0x79D045: add     edx, ecx
0x79D047: sar     edx, 5
0x79D04A: mov     eax, edx
0x79D04C: shr     eax, 1Fh
0x79D04F: add     eax, edx
0x79D051: cmp     esi, eax
0x79D053: jb      short loc_79D05A
0x79D055: call    __invalid_parameter_noinfo
0x79D05A: mov     eax, [ebx+4]
0x79D05D: fld     dword ptr [eax+edi]
0x79D060: add     eax, edi
0x79D062: fsub    [esp+1A4h+var_188]
0x79D066: fstp    [esp+1A4h+var_188]
0x79D06A: fld     dword ptr [eax+4]
0x79D06D: fsub    [esp+1A4h+var_190]
0x79D071: fstp    [esp+1A4h+var_190]
0x79D075: fld     dword ptr [eax+8]
0x79D078: fsub    [esp+1A4h+var_18C]
0x79D07C: fstp    [esp+1A4h+var_18C]
0x79D080: fld     [esp+1A4h+var_188]
0x79D084: fstp    [esp+1A4h+var_C4]
0x79D08B: mov     edx, [esp+1A4h+var_C4]
0x79D092: fld     [esp+1A4h+var_190]
0x79D096: mov     [esp+1A4h+var_12C], edx
0x79D09A: fstp    [esp+1A4h+var_C0]
0x79D0A1: mov     eax, [esp+1A4h+var_C0]
0x79D0A8: fld     [esp+1A4h+var_18C]
0x79D0AC: mov     [esp+1A4h+var_128], eax
0x79D0B0: fstp    [esp+1A4h+var_BC]
0x79D0B7: mov     ecx, [esp+1A4h+var_BC]
0x79D0BE: mov     [esp+1A4h+var_124], ecx
0x79D0C5: mov     edx, esi
0x79D0C7: test    edx, edx
0x79D0C9: mov     [esp+1A4h+Src], edx
0x79D0CD: fild    [esp+1A4h+Src]
0x79D0D1: jge     short loc_79D0D9
0x79D0D3: fadd    dword ptr ds:0A2FC78h
0x79D0D9: mov     ecx, ebx
0x79D0DB: fstp    [esp+1A4h+var_188]
0x79D0DF: call    sub_799EE0
0x79D0E4: test    eax, eax
0x79D0E6: mov     [esp+1A4h+Src], eax
0x79D0EA: fild    [esp+1A4h+Src]
0x79D0EE: jge     short loc_79D0F6
0x79D0F0: fadd    dword ptr ds:0A2FC78h
0x79D0F6: fsub    qword ptr ds:0A2F928h
0x79D0FC: mov     ecx, [esp+1A4h+var_180]
0x79D100: mov     ecx, [ecx]
0x79D102: lea     eax, [esp+1A4h+var_120]
0x79D109: fdivr   [esp+1A4h+var_188]
0x79D10D: push    eax
0x79D10E: fstp    [esp+1A8h+var_188]
0x79D112: call    sub_796260
0x79D117: fld1
0x79D119: movzx   dx, byte ptr [ebx+18h]
0x79D11E: fstp    [esp+1A4h+var_E8]
0x79D125: mov     ecx, [esp+1A4h+var_180]
0x79D129: fld     [esp+1A4h+var_188]
0x79D12D: mov     ecx, [ecx]
0x79D12F: fstp    [esp+1A4h+var_E4]
0x79D136: lea     eax, [esp+1A4h+var_E8]
0x79D13D: push    edx; float
0x79D13E: push    eax; int
0x79D13F: call    sub_796320
0x79D144: fld1
0x79D146: mov     eax, [esp+1A4h+var_180]
0x79D14A: fst     [esp+1A4h+var_D4]
0x79D151: mov     ecx, [eax]
0x79D153: fst     [esp+1A4h+var_D8]
0x79D15A: lea     edx, [esp+1A4h+var_E0]
0x79D161: fst     [esp+1A4h+var_DC]
0x79D168: push    edx
0x79D169: fstp    [esp+1A8h+var_E0]
0x79D170: call    sub_796230
0x79D175: mov     edx, [esp+1A4h+var_180]
0x79D179: lea     ecx, [esp+1A4h+var_174]
0x79D17D: push    ecx
0x79D17E: mov     ecx, [edx]
0x79D180: call    sub_7962F0
0x79D185: mov     ecx, [esp+1A4h+var_180]
0x79D189: mov     ecx, [ecx]
0x79D18B: lea     eax, [esp+1A4h+var_158]
0x79D18F: push    eax
0x79D190: call    sub_796590
0x79D195: fld     [esp+1A4h+var_16C]
0x79D199: fld     st
0x79D19B: fld     [esp+1A4h+var_154]
0x79D19F: fld     st
0x79D1A1: fmulp   st(2), st
0x79D1A3: fld     [esp+1A4h+var_170]
0x79D1A7: fld     st
0x79D1A9: fld     [esp+1A4h+var_150]
0x79D1AD: fld     st
0x79D1AF: fmulp   st(2), st
0x79D1B1: fxch    st(4)
0x79D1B3: fsubrp  st(1), st
0x79D1B5: fstp    [esp+1A4h+var_18C]
0x79D1B9: fld     [esp+1A4h+var_174]
0x79D1BD: fld     st
0x79D1BF: fmulp   st(4), st
0x79D1C1: fld     [esp+1A4h+var_158]
0x79D1C5: fld     st
0x79D1C7: fmulp   st(6), st
0x79D1C9: fxch    st(4)
0x79D1CB: fsubrp  st(5), st
0x79D1CD: fxch    st(4)
0x79D1CF: fstp    [esp+1A4h+var_188]
0x79D1D3: fmulp   st(2), st
0x79D1D5: fmulp   st(2), st
0x79D1D7: fsubrp  st(1), st
0x79D1D9: fstp    [esp+1A4h+var_190]
0x79D1DD: fld     [esp+1A4h+var_18C]
0x79D1E1: fst     [esp+1A4h+var_AC]
0x79D1E8: mov     edx, [esp+1A4h+var_AC]
0x79D1EF: fld     [esp+1A4h+var_188]
0x79D1F3: mov     [esp+1A4h+var_164], edx
0x79D1F7: fst     [esp+1A4h+var_A8]
0x79D1FE: mov     eax, [esp+1A4h+var_A8]
0x79D205: fld     [esp+1A4h+var_190]
0x79D209: mov     [esp+1A4h+var_160], eax
0x79D20D: fst     [esp+1A4h+var_A4]
0x79D214: mov     ecx, [esp+1A4h+var_A4]
0x79D21B: fld     st(1)
0x79D21D: mov     [esp+1A4h+var_15C], ecx
0x79D221: fmulp   st(2), st
0x79D223: fld     st(2)
0x79D225: fmulp   st(3), st
0x79D227: fmul    st, st
0x79D229: fld     st(2)
0x79D22B: fadd    st, st(2)
0x79D22D: fadd    st, st(1)
0x79D22F: fstp    [esp+1A4h+var_188]
0x79D233: mov     edx, [esp+1A4h+var_188]
0x79D237: sar     edx, 1
0x79D239: add     edx, 1FC00000h
0x79D23F: mov     [esp+1A4h+var_188], edx
0x79D243: fld     [esp+1A4h+var_188]
0x79D247: fcomp   qword ptr ds:0A2FC80h
0x79D24D: fnstsw  ax
0x79D24F: test    ah, 5
0x79D252: jp      short loc_79D274
0x79D254: mov     eax, [esp+1A4h+var_174]
0x79D258: fstp    st
0x79D25A: mov     ecx, [esp+1A4h+var_170]
0x79D25E: fstp    st
0x79D260: mov     edx, [esp+1A4h+var_16C]
0x79D264: fstp    st
0x79D266: mov     [esp+1A4h+var_164], eax
0x79D26A: mov     [esp+1A4h+var_160], ecx
0x79D26E: mov     [esp+1A4h+var_15C], edx
0x79D272: jmp     short loc_79D2B7
0x79D274: fxch    st(2)
0x79D276: faddp   st(1), st
0x79D278: faddp   st(1), st
0x79D27A: fstp    [esp+1A4h+var_188]
0x79D27E: fld     [esp+1A4h+var_188]
0x79D282: call    __CIsqrt
0x79D287: fstp    [esp+1A4h+var_188]
0x79D28B: fld     [esp+1A4h+var_188]
0x79D28F: fld1
0x79D291: fdivrp  st(1), st
0x79D293: fstp    [esp+1A4h+var_188]
0x79D297: fld     [esp+1A4h+var_188]
0x79D29B: fld     st
0x79D29D: fmul    [esp+1A4h+var_18C]
0x79D2A1: fstp    [esp+1A4h+var_164]
0x79D2A5: fld     [esp+1A4h+var_160]
0x79D2A9: fmul    st, st(1)
0x79D2AB: fstp    [esp+1A4h+var_160]
0x79D2AF: fmul    [esp+1A4h+var_15C]
0x79D2B3: fstp    [esp+1A4h+var_15C]
0x79D2B7: mov     ecx, [esp+1A4h+var_180]
0x79D2BB: mov     ecx, [ecx]
0x79D2BD: lea     eax, [esp+1A4h+var_164]
0x79D2C1: push    eax
0x79D2C2: call    sub_7965E0
0x79D2C7: mov     edx, [esp+1A4h+var_180]
0x79D2CB: mov     eax, [edx]
0x79D2CD: cmp     byte ptr [eax+8], 0
0x79D2D1: jz      short loc_79D347
0x79D2D3: mov     eax, [ebx+4]
0x79D2D6: test    eax, eax
0x79D2D8: jz      short loc_79D2F6
0x79D2DA: mov     ecx, [ebx+8]
0x79D2DD: sub     ecx, eax
0x79D2DF: mov     eax, 92492493h
0x79D2E4: imul    ecx
0x79D2E6: add     edx, ecx
0x79D2E8: sar     edx, 5
0x79D2EB: mov     eax, edx
0x79D2ED: shr     eax, 1Fh
0x79D2F0: add     eax, edx
0x79D2F2: cmp     esi, eax
0x79D2F4: jb      short loc_79D2FB
0x79D2F6: call    __invalid_parameter_noinfo
0x79D2FB: mov     eax, [ebx+4]
0x79D2FE: test    eax, eax
0x79D300: mov     [esp+1A4h+var_18C], eax
0x79D304: jz      short loc_79D322
0x79D306: mov     ecx, [ebx+8]
0x79D309: sub     ecx, eax
0x79D30B: mov     eax, 92492493h
0x79D310: imul    ecx
0x79D312: add     edx, ecx
0x79D314: sar     edx, 5
0x79D317: mov     eax, edx
0x79D319: shr     eax, 1Fh
0x79D31C: add     eax, edx
0x79D31E: cmp     esi, eax
0x79D320: jb      short loc_79D327
0x79D322: call    __invalid_parameter_noinfo
0x79D327: mov     ecx, [esp+1A4h+var_18C]
0x79D32B: movzx   edx, byte ptr [edi+ecx+34h]
0x79D330: mov     eax, [ebx+4]
0x79D333: push    edx
0x79D334: push    ecx
0x79D335: fld     dword ptr [edi+eax+30h]
0x79D339: mov     ecx, [esp+1ACh+var_180]
0x79D33D: mov     ecx, [ecx]
0x79D33F: fstp    [esp+1ACh+var_1AC]
0x79D342: call    sub_796540
0x79D347: mov     ecx, [esp+1A4h+var_180]
0x79D34B: mov     eax, [ecx]
0x79D34D: add     word ptr [eax+22h], 1
0x79D352: mov     ecx, [ecx]
0x79D354: lea     edx, [esp+1A4h+var_12C]
0x79D358: push    edx
0x79D359: call    sub_796260
0x79D35E: fldz
0x79D360: movzx   ax, byte ptr [ebx+18h]
0x79D365: fstp    [esp+1A4h+var_E8]
0x79D36C: mov     edx, [esp+1A4h+var_180]
0x79D370: lea     ecx, [esp+1A4h+var_E8]
0x79D377: push    eax; float
0x79D378: push    ecx; int
0x79D379: mov     ecx, [edx]
0x79D37B: call    sub_796320
0x79D380: fld1
0x79D382: mov     ecx, [esp+1A4h+var_180]
0x79D386: fst     [esp+1A4h+var_D4]
0x79D38D: mov     ecx, [ecx]
0x79D38F: fst     [esp+1A4h+var_D8]
0x79D396: lea     eax, [esp+1A4h+var_E0]
0x79D39D: fst     [esp+1A4h+var_DC]
0x79D3A4: push    eax
0x79D3A5: fstp    [esp+1A8h+var_E0]
0x79D3AC: call    sub_796230
0x79D3B1: mov     eax, [esp+1A4h+var_180]
0x79D3B5: mov     ecx, [eax]
0x79D3B7: lea     edx, [esp+1A4h+var_174]
0x79D3BB: push    edx
0x79D3BC: call    sub_7962F0
0x79D3C1: mov     edx, [esp+1A4h+var_180]
0x79D3C5: lea     ecx, [esp+1A4h+var_158]
0x79D3C9: push    ecx
0x79D3CA: mov     ecx, [edx]
0x79D3CC: call    sub_796590
0x79D3D1: fld     [esp+1A4h+var_16C]
0x79D3D5: fld     st
0x79D3D7: fld     [esp+1A4h+var_154]
0x79D3DB: fld     st
0x79D3DD: fmulp   st(2), st
0x79D3DF: fld     [esp+1A4h+var_170]
0x79D3E3: fld     st
0x79D3E5: fld     [esp+1A4h+var_150]
0x79D3E9: fld     st
0x79D3EB: fmulp   st(2), st
0x79D3ED: fxch    st(4)
0x79D3EF: fsubrp  st(1), st
0x79D3F1: fstp    [esp+1A4h+var_18C]
0x79D3F5: fld     [esp+1A4h+var_174]
0x79D3F9: fld     st
0x79D3FB: fmulp   st(4), st
0x79D3FD: fld     [esp+1A4h+var_158]
0x79D401: fld     st
0x79D403: fmulp   st(6), st
0x79D405: fxch    st(4)
0x79D407: fsubrp  st(5), st
0x79D409: fxch    st(4)
0x79D40B: fstp    [esp+1A4h+var_188]
0x79D40F: fmulp   st(2), st
0x79D411: fmulp   st(2), st
0x79D413: fsubrp  st(1), st
0x79D415: fstp    [esp+1A4h+var_190]
0x79D419: fld     [esp+1A4h+var_18C]
0x79D41D: fst     [esp+1A4h+var_9C]
0x79D424: mov     eax, [esp+1A4h+var_9C]
0x79D42B: fld     [esp+1A4h+var_188]
0x79D42F: mov     [esp+1A4h+var_164], eax
0x79D433: fst     [esp+1A4h+var_98]
0x79D43A: mov     ecx, [esp+1A4h+var_98]
0x79D441: fld     [esp+1A4h+var_190]
0x79D445: mov     [esp+1A4h+var_160], ecx
0x79D449: fst     [esp+1A4h+var_94]
0x79D450: mov     edx, [esp+1A4h+var_94]
0x79D457: fld     st(1)
0x79D459: mov     [esp+1A4h+var_15C], edx
0x79D45D: fmulp   st(2), st
0x79D45F: fld     st(2)
0x79D461: fmulp   st(3), st
0x79D463: fmul    st, st
0x79D465: fld     st(2)
0x79D467: fadd    st, st(2)
0x79D469: fadd    st, st(1)
0x79D46B: fstp    [esp+1A4h+var_188]
0x79D46F: mov     eax, [esp+1A4h+var_188]
0x79D473: sar     eax, 1
0x79D475: add     eax, 1FC00000h
0x79D47A: mov     [esp+1A4h+var_188], eax
0x79D47E: fld     [esp+1A4h+var_188]
0x79D482: fcomp   qword ptr ds:0A2FC80h
0x79D488: fnstsw  ax
0x79D48A: test    ah, 5
0x79D48D: jp      short loc_79D4AF
0x79D48F: mov     ecx, [esp+1A4h+var_174]
0x79D493: fstp    st
0x79D495: mov     edx, [esp+1A4h+var_170]
0x79D499: fstp    st
0x79D49B: mov     eax, [esp+1A4h+var_16C]
0x79D49F: fstp    st
0x79D4A1: mov     [esp+1A4h+var_164], ecx
0x79D4A5: mov     [esp+1A4h+var_160], edx
0x79D4A9: mov     [esp+1A4h+var_15C], eax
0x79D4AD: jmp     short loc_79D4F2
0x79D4AF: fxch    st(2)
0x79D4B1: faddp   st(1), st
0x79D4B3: faddp   st(1), st
0x79D4B5: fstp    [esp+1A4h+var_188]
0x79D4B9: fld     [esp+1A4h+var_188]
0x79D4BD: call    __CIsqrt
0x79D4C2: fstp    [esp+1A4h+var_188]
0x79D4C6: fld     [esp+1A4h+var_188]
0x79D4CA: fld1
0x79D4CC: fdivrp  st(1), st
0x79D4CE: fstp    [esp+1A4h+var_188]
0x79D4D2: fld     [esp+1A4h+var_188]
0x79D4D6: fld     st
0x79D4D8: fmul    [esp+1A4h+var_18C]
0x79D4DC: fstp    [esp+1A4h+var_164]
0x79D4E0: fld     [esp+1A4h+var_160]
0x79D4E4: fmul    st, st(1)
0x79D4E6: fstp    [esp+1A4h+var_160]
0x79D4EA: fmul    [esp+1A4h+var_15C]
0x79D4EE: fstp    [esp+1A4h+var_15C]
0x79D4F2: mov     edx, [esp+1A4h+var_180]
0x79D4F6: lea     ecx, [esp+1A4h+var_164]
0x79D4FA: push    ecx
0x79D4FB: mov     ecx, [edx]
0x79D4FD: call    sub_7965E0
0x79D502: mov     eax, [esp+1A4h+var_180]
0x79D506: mov     ecx, [eax]
0x79D508: cmp     byte ptr [ecx+8], 0
0x79D50C: jz      short loc_79D582
0x79D50E: mov     eax, [ebx+4]
0x79D511: test    eax, eax
0x79D513: jz      short loc_79D531
0x79D515: mov     ecx, [ebx+8]
0x79D518: sub     ecx, eax
0x79D51A: mov     eax, 92492493h
0x79D51F: imul    ecx
0x79D521: add     edx, ecx
0x79D523: sar     edx, 5
0x79D526: mov     eax, edx
0x79D528: shr     eax, 1Fh
0x79D52B: add     eax, edx
0x79D52D: cmp     esi, eax
0x79D52F: jb      short loc_79D536
0x79D531: call    __invalid_parameter_noinfo
0x79D536: mov     eax, [ebx+4]
0x79D539: test    eax, eax
0x79D53B: mov     [esp+1A4h+var_18C], eax
0x79D53F: jz      short loc_79D55D
0x79D541: mov     ecx, [ebx+8]
0x79D544: sub     ecx, eax
0x79D546: mov     eax, 92492493h
0x79D54B: imul    ecx
0x79D54D: add     edx, ecx
0x79D54F: sar     edx, 5
0x79D552: mov     eax, edx
0x79D554: shr     eax, 1Fh
0x79D557: add     eax, edx
0x79D559: cmp     esi, eax
0x79D55B: jb      short loc_79D562
0x79D55D: call    __invalid_parameter_noinfo
0x79D562: mov     edx, [esp+1A4h+var_18C]
0x79D566: movzx   eax, byte ptr [edi+edx+34h]
0x79D56B: mov     ecx, [ebx+4]
0x79D56E: mov     edx, [esp+1A4h+var_180]
0x79D572: push    eax
0x79D573: fld     dword ptr [edi+ecx+30h]
0x79D577: push    ecx
0x79D578: mov     ecx, [edx]
0x79D57A: fstp    [esp+1ACh+var_1AC]
0x79D57D: call    sub_796540
0x79D582: mov     eax, [esp+1A4h+var_180]
0x79D586: mov     eax, [eax]
0x79D588: add     word ptr [eax+22h], 1
0x79D58D: add     esi, 1
0x79D590: mov     ecx, ebx
0x79D592: mov     [esp+1A4h+var_178], esi
0x79D596: call    sub_799EE0
0x79D59B: cmp     esi, eax
0x79D59D: jb      loc_79C640
0x79D5A3: fldz
0x79D5A5: xor     esi, esi
0x79D5A7: fst     [esp+1A4h+var_168]
0x79D5AB: mov     [esp+1A4h+var_138], esi
0x79D5AF: fstp    [esp+1A4h+var_184]
0x79D5B3: mov     [esp+1A4h+var_134], esi
0x79D5B7: mov     [esp+1A4h+var_130], esi
0x79D5BB: mov     [esp+1A4h+var_104], esi
0x79D5C2: mov     [esp+1A4h+var_100], esi
0x79D5C9: mov     [esp+1A4h+var_FC], esi
0x79D5D0: mov     ecx, ebx
0x79D5D2: mov     byte ptr [esp+1A4h+var_4], 2
0x79D5DA: call    sub_799EE0
0x79D5DF: add     eax, 0FFFFFFFFh
0x79D5E2: mov     [esp+1A4h+var_178], esi
0x79D5E6: cmp     eax, esi
0x79D5E8: mov     esi, [esp+1A4h+var_180]
0x79D5EC: mov     [esp+1A4h+var_190], eax
0x79D5F0: jbe     loc_79D82B
0x79D5F6: mov     edi, [esp+1A4h+var_178]
0x79D5FA: mov     ecx, [ebx+28h]
0x79D5FD: add     edi, edi
0x79D5FF: add     ecx, edi
0x79D601: push    ecx
0x79D602: mov     ecx, [esi]
0x79D604: call    sub_794730
0x79D609: mov     edx, [ebx+28h]
0x79D60C: mov     ecx, [esi]
0x79D60E: mov     [esp+1A4h+var_18C], eax
0x79D612: lea     eax, [edx+edi+2]
0x79D616: push    eax
0x79D617: call    sub_794730
0x79D61C: mov     ecx, [esp+1A4h+var_18C]
0x79D620: fld     dword ptr [ecx]
0x79D622: fstp    [esp+1A4h+var_18C]
0x79D626: fld     dword ptr [ecx+4]
0x79D629: fstp    [esp+1A4h+var_110]
0x79D630: fld     dword ptr [ecx+8]
0x79D633: fstp    [esp+1A4h+Src]
0x79D637: fld     dword ptr [eax]
0x79D639: fstp    [esp+1A4h+var_188]
0x79D63D: fld     dword ptr [eax+4]
0x79D640: fstp    [esp+1A4h+var_10C]
0x79D647: fld     dword ptr [eax+8]
0x79D64A: mov     eax, [esp+1A4h+var_138]
0x79D64E: fstp    dword ptr [esp+1A4h+var_F8]
0x79D655: fld     [esp+1A4h+var_188]
0x79D659: fsub    [esp+1A4h+var_18C]
0x79D65D: fld     [esp+1A4h+var_10C]
0x79D664: fsub    [esp+1A4h+var_110]
0x79D66B: fld     dword ptr [esp+1A4h+var_F8]
0x79D672: fsub    [esp+1A4h+Src]
0x79D676: fld     st(1)
0x79D678: fmulp   st(2), st
0x79D67A: fld     st(2)
0x79D67C: fmulp   st(3), st
0x79D67E: fxch    st(1)
0x79D680: faddp   st(2), st
0x79D682: fmul    st, st
0x79D684: faddp   st(1), st
0x79D686: fstp    [esp+1A4h+Src]
0x79D68A: mov     ecx, [esp+1A4h+Src]
0x79D68E: sar     ecx, 1
0x79D690: add     ecx, 1FC00000h
0x79D696: test    eax, eax
0x79D698: mov     [esp+1A4h+Src], ecx
0x79D69C: fld     [esp+1A4h+Src]
0x79D6A0: mov     ecx, [esp+1A4h+var_134]
0x79D6A4: fadd    [esp+1A4h+var_168]
0x79D6A8: fstp    [esp+1A4h+var_168]
0x79D6AC: jz      short loc_79D6D7
0x79D6AE: mov     edx, [esp+1A4h+var_130]
0x79D6B2: sub     ecx, eax
0x79D6B4: sub     edx, eax
0x79D6B6: sar     ecx, 2
0x79D6B9: sar     edx, 2
0x79D6BC: cmp     ecx, edx
0x79D6BE: jnb     short loc_79D6D3
0x79D6C0: mov     eax, [esp+1A4h+var_134]
0x79D6C4: fld     [esp+1A4h+var_168]
0x79D6C8: fstp    dword ptr [eax]
0x79D6CA: add     eax, 4
0x79D6CD: mov     [esp+1A4h+var_134], eax
0x79D6D1: jmp     short loc_79D702
0x79D6D3: mov     ecx, [esp+1A4h+var_134]
0x79D6D7: cmp     eax, ecx
0x79D6D9: mov     [esp+1A4h+Src], ecx
0x79D6DD: jbe     short loc_79D6E4
0x79D6DF: call    __invalid_parameter_noinfo
0x79D6E4: mov     ecx, [esp+1A4h+Src]
0x79D6E8: lea     edx, [esp+1A4h+var_168]
0x79D6EC: push    edx; int
0x79D6ED: push    ecx; Src
0x79D6EE: lea     eax, [esp+1ACh+var_13C]
0x79D6F2: push    eax; int
0x79D6F3: lea     edx, [esp+1B0h+var_20]
0x79D6FA: push    edx; int
0x79D6FB: mov     ecx, eax
0x79D6FD: call    sub_7996F0
0x79D702: mov     eax, [ebx+28h]
0x79D705: lea     ecx, [eax+edi+1]
0x79D709: push    ecx
0x79D70A: mov     ecx, [esi]
0x79D70C: call    sub_794730
0x79D711: mov     edx, [ebx+28h]
0x79D714: mov     ecx, [esi]
0x79D716: mov     [esp+1A4h+var_18C], eax
0x79D71A: lea     eax, [edx+edi+3]
0x79D71E: push    eax
0x79D71F: call    sub_794730
0x79D724: mov     ecx, [esp+1A4h+var_18C]
0x79D728: fld     dword ptr [ecx]
0x79D72A: mov     edx, [esp+1A4h+var_104]
0x79D731: fstp    dword ptr [esp+1A4h+var_F8]
0x79D738: mov     edi, [esp+1A4h+var_100]
0x79D73F: fld     dword ptr [ecx+4]
0x79D742: fstp    [esp+1A4h+var_10C]
0x79D749: fld     dword ptr [ecx+8]
0x79D74C: fstp    [esp+1A4h+var_18C]
0x79D750: fld     dword ptr [eax]
0x79D752: fstp    [esp+1A4h+Src]
0x79D756: fld     dword ptr [eax+4]
0x79D759: fstp    [esp+1A4h+var_110]
0x79D760: fld     dword ptr [eax+8]
0x79D763: fstp    [esp+1A4h+var_188]
0x79D767: fld     [esp+1A4h+Src]
0x79D76B: fsub    dword ptr [esp+1A4h+var_F8]
0x79D772: fld     [esp+1A4h+var_110]
0x79D779: fsub    [esp+1A4h+var_10C]
0x79D780: fld     [esp+1A4h+var_188]
0x79D784: fsub    [esp+1A4h+var_18C]
0x79D788: fld     st(1)
0x79D78A: fmulp   st(2), st
0x79D78C: fld     st(2)
0x79D78E: fmulp   st(3), st
0x79D790: fxch    st(1)
0x79D792: faddp   st(2), st
0x79D794: fmul    st, st
0x79D796: faddp   st(1), st
0x79D798: fstp    [esp+1A4h+Src]
0x79D79C: mov     ecx, [esp+1A4h+Src]
0x79D7A0: sar     ecx, 1
0x79D7A2: add     ecx, 1FC00000h
0x79D7A8: test    edx, edx
0x79D7AA: mov     [esp+1A4h+Src], ecx
0x79D7AE: fld     [esp+1A4h+Src]
0x79D7B2: fadd    [esp+1A4h+var_184]
0x79D7B6: fstp    [esp+1A4h+var_184]
0x79D7BA: jz      short loc_79D7E7
0x79D7BC: mov     ecx, [esp+1A4h+var_FC]
0x79D7C3: mov     eax, edi
0x79D7C5: sub     eax, edx
0x79D7C7: sub     ecx, edx
0x79D7C9: sar     eax, 2
0x79D7CC: sar     ecx, 2
0x79D7CF: cmp     eax, ecx
0x79D7D1: jnb     short loc_79D7E7
0x79D7D3: fld     [esp+1A4h+var_184]
0x79D7D7: mov     eax, edi
0x79D7D9: add     eax, 4
0x79D7DC: fstp    dword ptr [edi]
0x79D7DE: mov     [esp+1A4h+var_100], eax
0x79D7E5: jmp     short loc_79D812
0x79D7E7: cmp     edx, edi
0x79D7E9: jbe     short loc_79D7F0
0x79D7EB: call    __invalid_parameter_noinfo
0x79D7F0: lea     edx, [esp+1A4h+var_184]
0x79D7F4: push    edx; int
0x79D7F5: push    edi; Src
0x79D7F6: lea     eax, [esp+1ACh+var_108]
0x79D7FD: push    eax; int
0x79D7FE: lea     eax, [esp+1B0h+var_18]
0x79D805: push    eax; int
0x79D806: lea     ecx, [esp+1B4h+var_108]
0x79D80D: call    sub_7996F0
0x79D812: mov     eax, [esp+1A4h+var_178]
0x79D816: add     eax, 1
0x79D819: cmp     eax, [esp+1A4h+var_190]
0x79D81D: mov     [esp+1A4h+var_178], eax
0x79D821: jb      loc_79D5F6
0x79D827: mov     eax, [esp+1A4h+var_190]
0x79D82B: mov     edx, [esp+1A4h+var_EC]
0x79D832: mov     ecx, [esi]
0x79D834: add     edx, 2
0x79D837: cmp     eax, 1
0x79D83A: mov     [ecx+22h], dx
0x79D83E: jbe     loc_79D957
0x79D844: xor     edi, edi
0x79D846: add     eax, 0FFFFFFFFh
0x79D849: mov     [esp+1A4h+var_18C], edi
0x79D84D: mov     [esp+1A4h+var_178], 2
0x79D855: mov     [esp+1A4h+var_190], eax
0x79D859: lea     esp, [esp+0]
0x79D860: mov     eax, [ebx+28h]
0x79D863: add     eax, [esp+1A4h+var_178]
0x79D867: mov     ecx, [esi]
0x79D869: push    eax
0x79D86A: call    sub_794760
0x79D86F: fld     dword ptr [eax]
0x79D871: mov     eax, [esp+1A4h+var_138]
0x79D875: fstp    [esp+1A4h+var_54]
0x79D87C: test    eax, eax
0x79D87E: jz      short loc_79D88F
0x79D880: mov     ecx, [esp+1A4h+var_134]
0x79D884: sub     ecx, eax
0x79D886: sar     ecx, 2
0x79D889: cmp     [esp+1A4h+var_18C], ecx
0x79D88D: jb      short loc_79D898
0x79D88F: call    __invalid_parameter_noinfo
0x79D894: mov     eax, [esp+1A4h+var_138]
0x79D898: fld     dword ptr [edi+eax]
0x79D89B: movzx   cx, byte ptr [ebx+18h]
0x79D8A0: fdiv    [esp+1A4h+var_168]
0x79D8A4: lea     edx, [esp+1A4h+var_54]
0x79D8AB: push    ecx; float
0x79D8AC: mov     ecx, [esi]
0x79D8AE: push    edx; int
0x79D8AF: fmul    qword ptr ds:0A3F460h
0x79D8B5: fstp    [esp+1ACh+var_50]
0x79D8BC: call    sub_796320
0x79D8C1: mov     eax, [esi]
0x79D8C3: add     word ptr [eax+22h], 1
0x79D8C8: mov     eax, [ebx+28h]
0x79D8CB: mov     ecx, [esp+1A4h+var_178]
0x79D8CF: lea     edx, [eax+ecx+1]
0x79D8D3: mov     ecx, [esi]
0x79D8D5: push    edx
0x79D8D6: call    sub_794760
0x79D8DB: fld     dword ptr [eax]
0x79D8DD: mov     eax, [esp+1A4h+var_104]
0x79D8E4: fstp    [esp+1A4h+var_4C]
0x79D8EB: test    eax, eax
0x79D8ED: jz      short loc_79D901
0x79D8EF: mov     ecx, [esp+1A4h+var_100]
0x79D8F6: sub     ecx, eax
0x79D8F8: sar     ecx, 2
0x79D8FB: cmp     [esp+1A4h+var_18C], ecx
0x79D8FF: jb      short loc_79D90D
0x79D901: call    __invalid_parameter_noinfo
0x79D906: mov     eax, [esp+1A4h+var_104]
0x79D90D: fld     dword ptr [edi+eax]
0x79D910: movzx   ax, byte ptr [ebx+18h]
0x79D915: fdiv    [esp+1A4h+var_184]
0x79D919: lea     ecx, [esp+1A4h+var_4C]
0x79D920: push    eax; float
0x79D921: push    ecx; int
0x79D922: mov     ecx, [esi]
0x79D924: fmul    qword ptr ds:0A3F460h
0x79D92A: fstp    [esp+1ACh+var_48]
0x79D931: call    sub_796320
0x79D936: mov     eax, [esi]
0x79D938: add     [esp+1A4h+var_178], 2
0x79D93D: mov     ecx, 1
0x79D942: add     [eax+22h], cx
0x79D946: add     [esp+1A4h+var_18C], ecx
0x79D94A: add     edi, 4
0x79D94D: sub     [esp+1A4h+var_190], ecx
0x79D951: jnz     loc_79D860
0x79D957: mov     eax, [esi]
0x79D959: mov     ecx, 1
0x79D95E: add     [eax+22h], cx
0x79D962: mov     eax, [esi]
0x79D964: add     [eax+22h], cx
0x79D968: mov     eax, [esp+1A4h+var_104]
0x79D96F: xor     edi, edi
0x79D971: cmp     eax, edi
0x79D973: jz      short loc_79D97E
0x79D975: push    eax
0x79D976: call    FormHeapFree
0x79D97B: add     esp, 4
0x79D97E: mov     eax, [esp+1A4h+var_138]
0x79D982: cmp     eax, edi
0x79D984: mov     [esp+1A4h+var_104], edi
0x79D98B: mov     [esp+1A4h+var_100], edi
0x79D992: mov     [esp+1A4h+var_FC], edi
0x79D999: jz      short loc_79D9A4
0x79D99B: push    eax
0x79D99C: call    FormHeapFree
0x79D9A1: add     esp, 4
0x79D9A4: mov     eax, [esp+1A4h+var_148]
0x79D9A8: cmp     eax, edi
0x79D9AA: mov     [esp+1A4h+var_138], edi
0x79D9AE: mov     [esp+1A4h+var_134], edi
0x79D9B2: mov     [esp+1A4h+var_130], edi
0x79D9B6: mov     [esp+1A4h+var_4], 0FFFFFFFFh
0x79D9C1: jz      short loc_79D9CC
0x79D9C3: push    eax
0x79D9C4: call    FormHeapFree
0x79D9C9: add     esp, 4
0x79D9CC: mov     eax, [esp+1A4h+var_114]
0x79D9D3: add     eax, 1
0x79D9D6: cmp     eax, [esi+2Ch]
0x79D9D9: mov     [esp+1A4h+var_148], edi
0x79D9DD: mov     [esp+1A4h+var_144], edi
0x79D9E1: mov     [esp+1A4h+var_140], edi
0x79D9E5: mov     [esp+1A4h+var_114], eax
0x79D9EC: jb      loc_79C5D0
0x79D9F2: mov     ecx, [esp+1A4h+var_C]
0x79D9F9: mov     large fs:0, ecx
0x79DA00: pop     ecx
0x79DA01: pop     edi
0x79DA02: pop     esi
0x79DA03: pop     ebx
0x79DA04: mov     esp, ebp
0x79DA06: pop     ebp
0x79DA07: retn    4
