0x61C6E0: push    0FFFFFFFFh
0x61C6E2: push    offset SEH_6E16A0
0x61C6E7: mov     eax, large fs:0
0x61C6ED: push    eax
0x61C6EE: sub     esp, 10h
0x61C6F1: push    ebx
0x61C6F2: push    ebp
0x61C6F3: push    esi
0x61C6F4: push    edi
0x61C6F5: mov     eax, ds:0B30AACh
0x61C6FA: xor     eax, esp
0x61C6FC: push    eax
0x61C6FD: lea     eax, [esp+30h+var_C]
0x61C701: mov     large fs:0, eax
0x61C707: mov     ebx, ecx
0x61C709: xor     al, al
0x61C70B: cmp     [ebx+115h], al
0x61C711: jz      loc_61C985
0x61C717: cmp     dword ptr [ebx+118h], 0
0x61C71E: jnz     loc_61C936
0x61C724: mov     ecx, [ebx+3Ch]
0x61C727: mov     eax, [ecx]
0x61C729: mov     edx, [eax+174h]
0x61C72F: push    0
0x61C731: push    1
0x61C733: push    ecx
0x61C734: call    edx
0x61C736: push    eax
0x61C737: call    sub_67D820
0x61C73C: mov     ebp, eax
0x61C73E: add     esp, 10h
0x61C741: test    ebp, ebp
0x61C743: jz      loc_61C907
0x61C749: mov     edi, [ebx+3Ch]
0x61C74C: mov     ecx, ebp
0x61C74E: call    sub_4BEF40
0x61C753: mov     esi, eax
0x61C755: mov     eax, [edi]
0x61C757: mov     edx, [eax+174h]
0x61C75D: mov     ecx, edi
0x61C75F: call    edx
0x61C761: fld     dword ptr [eax]
0x61C763: fsub    dword ptr [esi]
0x61C765: fstp    [esp+30h+var_18]
0x61C769: fld     dword ptr [eax+4]
0x61C76C: fsub    dword ptr [esi+4]
0x61C76F: fstp    [esp+30h+var_1C]
0x61C773: fld     dword ptr [eax+8]
0x61C776: fsub    dword ptr [esi+8]
0x61C779: fstp    [esp+30h+var_14]
0x61C77D: fld     [esp+30h+var_1C]
0x61C781: fld     [esp+30h+var_18]
0x61C785: fld     [esp+30h+var_14]
0x61C789: fld     st(1)
0x61C78B: fmulp   st(2), st
0x61C78D: fld     st(2)
0x61C78F: fmulp   st(3), st
0x61C791: fxch    st(1)
0x61C793: faddp   st(2), st
0x61C795: fmul    st, st
0x61C797: faddp   st(1), st
0x61C799: fstp    [esp+30h+var_14]
0x61C79D: fld     [esp+30h+var_14]
0x61C7A1: call    __CIsqrt
0x61C7A6: fstp    [esp+30h+var_14]
0x61C7AA: fld     [esp+30h+var_14]
0x61C7AE: fcomp   qword ptr ds:0A2FC70h
0x61C7B4: fnstsw  ax
0x61C7B6: test    ah, 41h
0x61C7B9: jp      loc_61C907
0x61C7BF: mov     esi, [ebx+3Ch]
0x61C7C2: mov     ecx, ebp
0x61C7C4: call    sub_4BEF40
0x61C7C9: push    eax
0x61C7CA: mov     eax, [esi]
0x61C7CC: mov     edx, [eax+174h]
0x61C7D2: mov     ecx, esi
0x61C7D4: call    edx
0x61C7D6: push    eax
0x61C7D7: push    esi
0x61C7D8: call    sub_687C30
0x61C7DD: add     esp, 0Ch
0x61C7E0: test    al, al
0x61C7E2: jz      loc_61C907
0x61C7E8: push    8; Size
0x61C7EA: call    FormHeapAlloc
0x61C7EF: xor     esi, esi
0x61C7F1: add     esp, 4
0x61C7F4: cmp     eax, esi
0x61C7F6: jz      short loc_61C805
0x61C7F8: mov     edi, eax
0x61C7FA: mov     [eax], esi
0x61C7FC: mov     [eax+4], esi
0x61C7FF: mov     [esp+30h+var_1C], edi
0x61C803: jmp     short loc_61C80B
0x61C805: mov     [esp+30h+var_1C], esi
0x61C809: mov     edi, esi
0x61C80B: fld     dword ptr ds:0A342A4h
0x61C811: push    edi; int
0x61C812: push    ecx
0x61C813: mov     ecx, ebp
0x61C815: fstp    [esp+38h+var_38]; float
0x61C818: call    sub_4E80B0
0x61C81D: cmp     edi, esi
0x61C81F: jz      loc_61C907
0x61C825: mov     ecx, edi
0x61C827: call    BSSimpleList_IsEmpty
0x61C82C: test    al, al
0x61C82E: jnz     short loc_61C84D
0x61C830: push    8; Size
0x61C832: call    FormHeapAlloc
0x61C837: add     esp, 4
0x61C83A: test    eax, eax
0x61C83C: jz      short loc_61C845
0x61C83E: mov     [eax], esi
0x61C840: mov     [eax+4], esi
0x61C843: jmp     short loc_61C847
0x61C845: xor     eax, eax
0x61C847: mov     [ebx+118h], eax
0x61C84D: mov     ebp, edi
0x61C84F: nop
0x61C850: cmp     dword ptr [ebp+4], 0
0x61C854: jnz     short loc_61C860
0x61C856: cmp     dword ptr [ebp+0], 0
0x61C85A: jz      loc_61C8F7
0x61C860: mov     ecx, [ebp+0]
0x61C863: test    ecx, ecx
0x61C865: jz      loc_61C8EC
0x61C86B: call    sub_67ED70
0x61C870: test    al, al
0x61C872: jnz     short loc_61C8EC
0x61C874: push    0Ch; Size
0x61C876: call    FormHeapAlloc
0x61C87B: mov     esi, eax
0x61C87D: add     esp, 4
0x61C880: mov     [esp+30h+var_10], esi
0x61C884: test    esi, esi
0x61C886: mov     [esp+30h+var_4], 0
0x61C88E: jz      short loc_61C8D6
0x61C890: mov     edi, [ebp+0]
0x61C893: mov     ecx, edi
0x61C895: call    sub_4BEF40
0x61C89A: fld     dword ptr [eax]
0x61C89C: mov     ecx, edi
0x61C89E: fstp    [esp+30h+var_14]
0x61C8A2: call    sub_4BEF40
0x61C8A7: fld     dword ptr [eax+4]
0x61C8AA: mov     ecx, edi
0x61C8AC: fstp    [esp+30h+var_18]
0x61C8B0: call    sub_4BEF40
0x61C8B5: fld     dword ptr [eax+8]
0x61C8B8: mov     edi, [esp+30h+var_1C]
0x61C8BC: fstp    [esp+30h+var_10]
0x61C8C0: fld     [esp+30h+var_14]
0x61C8C4: fstp    dword ptr [esi]
0x61C8C6: fld     [esp+30h+var_18]
0x61C8CA: fstp    dword ptr [esi+4]
0x61C8CD: fld     [esp+30h+var_10]
0x61C8D1: fstp    dword ptr [esi+8]
0x61C8D4: jmp     short loc_61C8D8
0x61C8D6: xor     esi, esi
0x61C8D8: mov     ecx, [ebx+118h]
0x61C8DE: push    esi
0x61C8DF: mov     [esp+34h+var_4], 0FFFFFFFFh
0x61C8E7: call    BSSimpleList_PushFront
0x61C8EC: mov     ebp, [ebp+4]
0x61C8EF: test    ebp, ebp
0x61C8F1: jnz     loc_61C850
0x61C8F7: mov     ecx, edi
0x61C8F9: call    BSSimpleList_Clear
0x61C8FE: push    edi
0x61C8FF: call    FormHeapFree
0x61C904: add     esp, 4
0x61C907: cmp     dword ptr [ebx+118h], 0
0x61C90E: jnz     short loc_61C936
0x61C910: mov     ecx, [ebx+3Ch]
0x61C913: call    sub_5E1E90
0x61C918: test    al, al
0x61C91A: jnz     short loc_61C936
0x61C91C: mov     [ebx+115h], al
0x61C922: mov     ecx, [esp+30h+var_C]
0x61C926: mov     large fs:0, ecx
0x61C92D: pop     ecx
0x61C92E: pop     edi
0x61C92F: pop     esi
0x61C930: pop     ebp
0x61C931: pop     ebx
0x61C932: add     esp, 1Ch
0x61C935: retn
0x61C936: mov     ecx, ebx
0x61C938: call    sub_6160B0
0x61C93D: push    0Bh
0x61C93F: mov     ecx, ebx
0x61C941: call    sub_619920
0x61C946: mov     ecx, [ebx+3Ch]
0x61C949: call    sub_5E1E90
0x61C94E: test    al, al
0x61C950: jz      short loc_61C95A
0x61C952: fld     dword ptr ds:0A31E2Ch
0x61C958: jmp     short loc_61C960
0x61C95A: fld     dword ptr ds:0A46C30h
0x61C960: fstp    [esp+30h+var_1C]
0x61C964: mov     al, 1
0x61C966: fld     dword ptr [ebx+44h]
0x61C969: fstp    dword ptr [ebx+0D4h]
0x61C96F: fld     [esp+30h+var_1C]
0x61C973: fstp    dword ptr [ebx+0D8h]
0x61C979: fld     dword ptr ds:0A30634h
0x61C97F: fstp    dword ptr [ebx+0DCh]
0x61C985: mov     ecx, [esp+30h+var_C]
0x61C989: mov     large fs:0, ecx
0x61C990: pop     ecx
0x61C991: pop     edi
0x61C992: pop     esi
0x61C993: pop     ebp
0x61C994: pop     ebx
0x61C995: add     esp, 1Ch
0x61C998: retn
