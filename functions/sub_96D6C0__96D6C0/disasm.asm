0x96D6C0: push    ebx
0x96D6C1: mov     ebx, dword ptr [esp+4+ArgList]
0x96D6C5: push    ebp
0x96D6C6: push    esi
0x96D6C7: mov     eax, ebx
0x96D6C9: push    edi
0x96D6CA: mov     ebp, ecx
0x96D6CC: lea     edx, [eax+1]
0x96D6CF: nop
0x96D6D0: mov     cl, [eax]
0x96D6D2: add     eax, 1
0x96D6D5: test    cl, cl
0x96D6D7: jnz     short loc_96D6D0
0x96D6D9: sub     eax, edx
0x96D6DB: lea     esi, [eax+0Dh]
0x96D6DE: push    esi; Size
0x96D6DF: call    FormHeapAlloc
0x96D6E4: push    ebx; ArgList
0x96D6E5: push    offset aSSphere_bv; "%s = SPHERE_BV"
0x96D6EA: push    esi; SizeInBytes
0x96D6EB: push    eax; DstBuf
0x96D6EC: mov     dword ptr [esp+24h+ArgList], eax
0x96D6F0: call    sub_6C5D40
0x96D6F5: mov     esi, [esp+24h+arg_4]
0x96D6F9: movzx   edi, word ptr [esi+0Ah]
0x96D6FD: movzx   eax, word ptr [esi+8]
0x96D701: add     esp, 14h
0x96D704: cmp     edi, eax
0x96D706: jb      short loc_96D716
0x96D708: movzx   ecx, word ptr [esi+0Eh]
0x96D70C: add     ecx, edi
0x96D70E: push    ecx
0x96D70F: mov     ecx, esi
0x96D711: call    NiTArray_SetSize
0x96D716: lea     edx, [esp+10h+ArgList]
0x96D71A: push    edx
0x96D71B: push    edi
0x96D71C: mov     ecx, esi
0x96D71E: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x96D723: push    offset aCenter_2; "     center"
0x96D728: lea     ecx, [ebp+4]
0x96D72B: call    sub_707280
0x96D730: movzx   edi, word ptr [esi+0Ah]
0x96D734: mov     dword ptr [esp+10h+ArgList], eax
0x96D738: movzx   eax, word ptr [esi+8]
0x96D73C: cmp     edi, eax
0x96D73E: jb      short loc_96D74E
0x96D740: movzx   ecx, word ptr [esi+0Eh]
0x96D744: add     ecx, edi
0x96D746: push    ecx
0x96D747: mov     ecx, esi
0x96D749: call    NiTArray_SetSize
0x96D74E: lea     edx, [esp+10h+ArgList]
0x96D752: push    edx
0x96D753: push    edi
0x96D754: mov     ecx, esi
0x96D756: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x96D75B: mov     eax, ebx
0x96D75D: lea     edx, [eax+1]
0x96D760: mov     cl, [eax]
0x96D762: add     eax, 1
0x96D765: test    cl, cl
0x96D767: jnz     short loc_96D760
0x96D769: sub     eax, edx
0x96D76B: lea     edi, [eax+1Eh]
0x96D76E: push    edi; Size
0x96D76F: call    FormHeapAlloc
0x96D774: fld     dword ptr [ebp+10h]
0x96D777: fld     qword ptr ds:0A309F0h
0x96D77D: mov     ebx, eax
0x96D77F: fmul    st(1), st
0x96D781: mov     dword ptr [esp+14h+ArgList], ebx
0x96D785: fxch    st(1)
0x96D787: call    Double_To_SInt32
0x96D78C: mov     [esp+14h+arg_4], eax
0x96D790: fidivr  [esp+14h+arg_4]
0x96D794: push    ecx
0x96D795: fstp    qword ptr [esp+18h+var_18]; ArgList
0x96D798: push    offset aRadiusG; "     radius = %g"
0x96D79D: push    edi; SizeInBytes
0x96D79E: push    ebx; DstBuf
0x96D79F: call    sub_6C5D40
0x96D7A4: movzx   edi, word ptr [esi+0Ah]
0x96D7A8: movzx   eax, word ptr [esi+8]
0x96D7AC: add     esp, 14h
0x96D7AF: cmp     edi, eax
0x96D7B1: jb      short loc_96D7C1
0x96D7B3: movzx   ecx, word ptr [esi+0Eh]
0x96D7B7: add     ecx, edi
0x96D7B9: push    ecx
0x96D7BA: mov     ecx, esi
0x96D7BC: call    NiTArray_SetSize
0x96D7C1: lea     edx, [esp+10h+ArgList]
0x96D7C5: push    edx
0x96D7C6: push    edi
0x96D7C7: mov     ecx, esi
0x96D7C9: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x96D7CE: pop     edi
0x96D7CF: pop     esi
0x96D7D0: pop     ebp
0x96D7D1: pop     ebx
0x96D7D2: retn    8
