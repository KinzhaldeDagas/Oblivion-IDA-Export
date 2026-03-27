0x4C4790: sub     esp, 0ECh
0x4C4796: push    esi
0x4C4797: push    edi
0x4C4798: mov     edi, [esp+0F4h+arg_0]
0x4C479F: push    0
0x4C47A1: push    edi
0x4C47A2: lea     eax, [esp+0FCh+var_50]
0x4C47A9: push    eax
0x4C47AA: mov     esi, ecx
0x4C47AC: call    sub_4C3030
0x4C47B1: test    al, al
0x4C47B3: jnz     short loc_4C47C0
0x4C47B5: pop     edi
0x4C47B6: pop     esi
0x4C47B7: add     esp, 0ECh
0x4C47BD: retn    8
0x4C47C0: fldz
0x4C47C2: fst     [esp+0F4h+var_C0]
0x4C47C6: fst     [esp+0F4h+var_BC]
0x4C47CA: fst     [esp+0F4h+var_B8]
0x4C47CE: fst     [esp+0F4h+var_B4]
0x4C47D2: fst     [esp+0F4h+var_D0]
0x4C47D6: fst     [esp+0F4h+var_CC]
0x4C47DA: fst     [esp+0F4h+var_C8]
0x4C47DE: fst     [esp+0F4h+var_C4]
0x4C47E2: fst     [esp+0F4h+var_E0]
0x4C47E6: fst     [esp+0F4h+var_DC]
0x4C47EA: fst     [esp+0F4h+var_D8]
0x4C47EE: fstp    [esp+0F4h+var_D4]
0x4C47F2: fld     dword ptr [edi]
0x4C47F4: fld     qword ptr ds:0A3F428h
0x4C47FA: call    unknown_libname_14
0x4C47FF: fstp    [esp+0F4h+var_E8]
0x4C4803: fld     [esp+0F4h+var_E8]
0x4C4807: fmul    qword ptr ds:0A46050h
0x4C480D: fstp    [esp+0F4h+var_E8]
0x4C4811: fld     dword ptr [edi+4]
0x4C4814: fld     qword ptr ds:0A3F428h
0x4C481A: call    unknown_libname_14
0x4C481F: fstp    [esp+0F4h+var_EC]
0x4C4823: fld     [esp+0F4h+var_EC]
0x4C4827: mov     edx, [esp+0F4h+var_10]
0x4C482E: fmul    qword ptr ds:0A46050h
0x4C4834: mov     eax, [esp+0F4h+var_38]
0x4C483B: lea     ecx, [esp+0F4h+var_C0]
0x4C483F: push    ecx
0x4C4840: push    edx
0x4C4841: fstp    [esp+0FCh+var_EC]
0x4C4845: push    eax
0x4C4846: mov     ecx, esi
0x4C4848: call    sub_4C2000
0x4C484D: mov     edx, [esp+0F4h+var_C]
0x4C4854: mov     eax, [esp+0F4h+var_38]
0x4C485B: lea     ecx, [esp+0F4h+var_D0]
0x4C485F: push    ecx
0x4C4860: push    edx
0x4C4861: push    eax
0x4C4862: mov     ecx, esi
0x4C4864: call    sub_4C2000
0x4C4869: mov     edx, [esp+0F4h+var_8]
0x4C4870: mov     eax, [esp+0F4h+var_38]
0x4C4877: lea     ecx, [esp+0F4h+var_E0]
0x4C487B: push    ecx
0x4C487C: push    edx
0x4C487D: push    eax
0x4C487E: mov     ecx, esi
0x4C4880: call    sub_4C2000
0x4C4885: cmp     [esp+0F4h+var_4], 0
0x4C488D: jnz     loc_4C49D7
0x4C4893: cmp     [esp+0F4h+var_3], 0
0x4C489B: jnz     loc_4C495F
0x4C48A1: fld     [esp+0F4h+var_EC]
0x4C48A5: lea     ecx, [esp+0F4h+var_E0]
0x4C48A9: push    ecx; int
0x4C48AA: push    ecx
0x4C48AB: lea     edx, [esp+0FCh+var_B0]
0x4C48AF: fstp    [esp+0FCh+var_FC]; float
0x4C48B2: push    edx; int
0x4C48B3: call    sub_4BFBD0
0x4C48B8: fld     [esp+100h+var_EC]
0x4C48BC: fld1
0x4C48BE: add     esp, 0Ch
0x4C48C1: push    eax
0x4C48C2: fsubrp  st(1), st
0x4C48C4: lea     eax, [esp+0F8h+var_E0]
0x4C48C8: push    eax
0x4C48C9: push    ecx
0x4C48CA: fstp    [esp+100h+var_EC]
0x4C48CE: lea     ecx, [esp+100h+var_C0]
0x4C48D2: fld     [esp+100h+var_EC]
0x4C48D6: lea     edx, [esp+100h+var_C0]
0x4C48DA: fstp    [esp+100h+var_100]; float
0x4C48DD: push    ecx; int
0x4C48DE: fld     [esp+104h+var_E8]
0x4C48E2: push    edx; int
0x4C48E3: push    ecx
0x4C48E4: lea     eax, [esp+10Ch+var_A0]
0x4C48E8: fstp    [esp+10Ch+var_10C]; float
0x4C48EB: push    eax; int
0x4C48EC: call    sub_4BFBD0
0x4C48F1: fld     [esp+110h+var_E8]
0x4C48F5: fld1
0x4C48F7: add     esp, 0Ch
0x4C48FA: fsubrp  st(1), st
0x4C48FC: push    eax
0x4C48FD: lea     ecx, [esp+108h+var_D0]
0x4C4901: lea     edx, [esp+108h+var_D0]
0x4C4905: lea     eax, [esp+108h+var_90]
0x4C4909: fstp    [esp+108h+var_E8]
0x4C490D: fld     [esp+108h+var_E8]
0x4C4911: push    ecx
0x4C4912: push    edx; int
0x4C4913: push    ecx
0x4C4914: fstp    [esp+114h+var_114]; float
0x4C4917: push    eax; int
0x4C4918: call    sub_4BFBD0
0x4C491D: add     esp, 0Ch
0x4C4920: mov     ecx, eax
0x4C4922: call    sub_4BFB30
0x4C4927: mov     ecx, eax
0x4C4929: call    sub_4BFB80
0x4C492E: mov     ecx, eax
0x4C4930: call    sub_4BFB30
0x4C4935: mov     edx, [eax]
0x4C4937: mov     ecx, [esp+0F4h+arg_4]
0x4C493E: mov     [ecx], edx
0x4C4940: mov     edx, [eax+4]
0x4C4943: mov     [ecx+4], edx
0x4C4946: mov     edx, [eax+8]
0x4C4949: mov     [ecx+8], edx
0x4C494C: mov     eax, [eax+0Ch]
0x4C494F: pop     edi
0x4C4950: mov     [ecx+0Ch], eax
0x4C4953: mov     al, 1
0x4C4955: pop     esi
0x4C4956: add     esp, 0ECh
0x4C495C: retn    8
0x4C495F: fld     [esp+0F4h+var_EC]
0x4C4963: lea     ecx, [esp+0F4h+var_D0]
0x4C4967: fld1
0x4C4969: push    ecx; int
0x4C496A: fsubrp  st(1), st
0x4C496C: push    ecx
0x4C496D: lea     edx, [esp+0FCh+var_90]
0x4C4971: fstp    [esp+0FCh+var_E4]
0x4C4975: fld     [esp+0FCh+var_E4]
0x4C4979: fstp    [esp+0FCh+var_FC]; float
0x4C497C: push    edx; int
0x4C497D: call    sub_4BFBD0
0x4C4982: fld     [esp+100h+var_EC]
0x4C4986: add     esp, 0Ch
0x4C4989: push    eax
0x4C498A: lea     eax, [esp+0F8h+var_A0]
0x4C498E: push    eax
0x4C498F: push    ecx
0x4C4990: fstp    [esp+100h+var_100]
0x4C4993: lea     ecx, [esp+100h+var_B0]
0x4C4997: fld     [esp+100h+var_E8]
0x4C499B: push    ecx
0x4C499C: lea     edx, [esp+104h+var_E0]
0x4C49A0: push    edx; int
0x4C49A1: push    ecx
0x4C49A2: lea     eax, [esp+10Ch+var_D0]
0x4C49A6: fstp    [esp+10Ch+var_10C]; float
0x4C49A9: push    eax; int
0x4C49AA: call    sub_4BFBD0
0x4C49AF: fld     [esp+110h+var_E8]
0x4C49B3: fld1
0x4C49B5: add     esp, 0Ch
0x4C49B8: fsubrp  st(1), st
0x4C49BA: push    eax
0x4C49BB: lea     ecx, [esp+108h+var_E0]
0x4C49BF: lea     edx, [esp+108h+var_C0]
0x4C49C3: lea     eax, [esp+108h+var_80]
0x4C49CA: fstp    [esp+108h+var_E4]
0x4C49CE: fld     [esp+108h+var_E4]
0x4C49D2: jmp     loc_4C4911
0x4C49D7: mov     esi, [esp+0F4h+arg_4]
0x4C49DE: push    ebx
0x4C49DF: mov     bl, [esp+0F8h+var_3]
0x4C49E6: test    bl, bl
0x4C49E8: jnz     loc_4C4AA3
0x4C49EE: fld     [esp+0F8h+var_EC]
0x4C49F2: lea     ecx, [esp+0F8h+var_E0]
0x4C49F6: push    ecx; int
0x4C49F7: push    ecx
0x4C49F8: lea     edx, [esp+100h+var_80]
0x4C49FF: fstp    [esp+100h+var_100]; float
0x4C4A02: push    edx; int
0x4C4A03: call    sub_4BFBD0
0x4C4A08: fld     [esp+104h+var_EC]
0x4C4A0C: fld1
0x4C4A0E: add     esp, 0Ch
0x4C4A11: push    eax
0x4C4A12: fsubrp  st(1), st
0x4C4A14: lea     eax, [esp+0FCh+var_90]
0x4C4A18: push    eax
0x4C4A19: push    ecx
0x4C4A1A: fstp    [esp+104h+var_E4]
0x4C4A1E: lea     ecx, [esp+104h+var_A0]
0x4C4A22: fld     [esp+104h+var_E4]
0x4C4A26: lea     edx, [esp+104h+var_D0]
0x4C4A2A: fstp    [esp+104h+var_104]; float
0x4C4A2D: push    ecx; int
0x4C4A2E: fld     [esp+108h+var_E8]
0x4C4A32: push    edx; int
0x4C4A33: push    ecx
0x4C4A34: lea     eax, [esp+110h+var_B0]
0x4C4A38: fstp    [esp+110h+var_110]; float
0x4C4A3B: push    eax; int
0x4C4A3C: call    sub_4BFBD0
0x4C4A41: fld     [esp+114h+var_E8]
0x4C4A45: fld1
0x4C4A47: add     esp, 0Ch
0x4C4A4A: push    eax
0x4C4A4B: fsubrp  st(1), st
0x4C4A4D: lea     ecx, [esp+10Ch+var_60]
0x4C4A54: push    ecx
0x4C4A55: lea     edx, [esp+110h+var_C0]
0x4C4A59: push    edx; int
0x4C4A5A: fstp    [esp+114h+var_E4]
0x4C4A5E: fld     [esp+114h+var_E4]
0x4C4A62: push    ecx
0x4C4A63: lea     eax, [esp+118h+var_70]
0x4C4A6A: fstp    [esp+118h+var_118]; float
0x4C4A6D: push    eax; int
0x4C4A6E: call    sub_4BFBD0
0x4C4A73: add     esp, 0Ch
0x4C4A76: mov     ecx, eax
0x4C4A78: call    sub_4BFB30
0x4C4A7D: mov     ecx, eax
0x4C4A7F: call    sub_4BFB80
0x4C4A84: mov     ecx, eax
0x4C4A86: call    sub_4BFB30
0x4C4A8B: mov     ecx, [eax]
0x4C4A8D: mov     [esi], ecx
0x4C4A8F: mov     edx, [eax+4]
0x4C4A92: mov     [esi+4], edx
0x4C4A95: mov     ecx, [eax+8]
0x4C4A98: mov     [esi+8], ecx
0x4C4A9B: mov     edx, [eax+0Ch]
0x4C4A9E: mov     [esi+0Ch], edx
0x4C4AA1: test    bl, bl
0x4C4AA3: pop     ebx
0x4C4AA4: jz      loc_4C4B5D
0x4C4AAA: fld     [esp+0F4h+var_EC]
0x4C4AAE: lea     eax, [esp+0F4h+var_D0]
0x4C4AB2: fld1
0x4C4AB4: push    eax; int
0x4C4AB5: fsubrp  st(1), st
0x4C4AB7: push    ecx
0x4C4AB8: lea     ecx, [esp+0FCh+var_70]
0x4C4ABF: fstp    [esp+0FCh+var_E4]
0x4C4AC3: fld     [esp+0FCh+var_E4]
0x4C4AC7: fstp    [esp+0FCh+var_FC]; float
0x4C4ACA: push    ecx; int
0x4C4ACB: call    sub_4BFBD0
0x4C4AD0: fld     [esp+100h+var_EC]
0x4C4AD4: add     esp, 0Ch
0x4C4AD7: push    eax
0x4C4AD8: lea     edx, [esp+0F8h+var_60]
0x4C4ADF: push    edx
0x4C4AE0: push    ecx
0x4C4AE1: fstp    [esp+100h+var_100]; float
0x4C4AE4: lea     eax, [esp+100h+var_80]
0x4C4AEB: fld     [esp+100h+var_E8]
0x4C4AEF: push    eax; int
0x4C4AF0: lea     ecx, [esp+104h+var_C0]
0x4C4AF4: push    ecx; int
0x4C4AF5: push    ecx
0x4C4AF6: lea     edx, [esp+10Ch+var_90]
0x4C4AFA: fstp    [esp+10Ch+var_10C]; float
0x4C4AFD: push    edx; int
0x4C4AFE: call    sub_4BFBD0
0x4C4B03: fld     [esp+110h+var_E8]
0x4C4B07: fld1
0x4C4B09: add     esp, 0Ch
0x4C4B0C: push    eax
0x4C4B0D: fsubrp  st(1), st
0x4C4B0F: lea     eax, [esp+108h+var_A0]
0x4C4B13: push    eax
0x4C4B14: lea     ecx, [esp+10Ch+var_E0]
0x4C4B18: push    ecx; int
0x4C4B19: fstp    [esp+110h+var_E4]
0x4C4B1D: fld     [esp+110h+var_E4]
0x4C4B21: push    ecx
0x4C4B22: lea     edx, [esp+114h+var_B0]
0x4C4B26: fstp    [esp+114h+var_114]; float
0x4C4B29: push    edx; int
0x4C4B2A: call    sub_4BFBD0
0x4C4B2F: add     esp, 0Ch
0x4C4B32: mov     ecx, eax
0x4C4B34: call    sub_4BFB30
0x4C4B39: mov     ecx, eax
0x4C4B3B: call    sub_4BFB80
0x4C4B40: mov     ecx, eax
0x4C4B42: call    sub_4BFB30
0x4C4B47: mov     ecx, [eax]
0x4C4B49: mov     [esi], ecx
0x4C4B4B: mov     edx, [eax+4]
0x4C4B4E: mov     [esi+4], edx
0x4C4B51: mov     ecx, [eax+8]
0x4C4B54: mov     [esi+8], ecx
0x4C4B57: mov     edx, [eax+0Ch]
0x4C4B5A: mov     [esi+0Ch], edx
0x4C4B5D: pop     edi
0x4C4B5E: mov     al, 1
0x4C4B60: pop     esi
0x4C4B61: add     esp, 0ECh
0x4C4B67: retn    8
