0x8C46A0: push    ebp
0x8C46A1: mov     ebp, esp
0x8C46A3: and     esp, 0FFFFFFF0h
0x8C46A6: sub     esp, 34h
0x8C46A9: mov     eax, ds:0B30AACh
0x8C46AE: xor     eax, esp
0x8C46B0: mov     [esp+34h+var_4], eax
0x8C46B4: push    ebx
0x8C46B5: push    esi
0x8C46B6: mov     esi, [ebp+arg_0]
0x8C46B9: push    edi
0x8C46BA: push    esi
0x8C46BB: mov     edi, ecx
0x8C46BD: call    sub_914F30
0x8C46C2: mov     eax, ds:0BA8110h
0x8C46C7: push    eax; ArgList
0x8C46C8: call    TESOutput_PrintString
0x8C46CD: movzx   ebx, word ptr [esi+0Ah]
0x8C46D1: movzx   ecx, word ptr [esi+8]
0x8C46D5: add     esp, 4
0x8C46D8: cmp     ebx, ecx
0x8C46DA: mov     [esp+40h+var_30], eax
0x8C46DE: jb      short loc_8C46EE
0x8C46E0: movzx   edx, word ptr [esi+0Eh]
0x8C46E4: add     edx, ebx
0x8C46E6: push    edx
0x8C46E7: mov     ecx, esi
0x8C46E9: call    NiTArray_SetSize
0x8C46EE: lea     eax, [esp+40h+var_30]
0x8C46F2: push    eax
0x8C46F3: push    ebx
0x8C46F4: mov     ecx, esi
0x8C46F6: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8C46FB: test    edi, edi
0x8C46FD: jz      short loc_8C470F
0x8C46FF: mov     edi, [edi+8]
0x8C4702: test    edi, edi
0x8C4704: jz      short loc_8C470F
0x8C4706: movaps  xmm0, xmmword ptr [edi+10h]
0x8C470A: movaps  [esp+40h+var_20], xmm0
0x8C470F: lea     ecx, [esp+40h+var_20]
0x8C4713: push    ecx
0x8C4714: lea     edx, [esp+44h+var_2C]
0x8C4718: push    edx
0x8C4719: call    sub_43F3E0
0x8C471E: add     esp, 8
0x8C4721: push    offset aNormal_0; "Normal"
0x8C4726: lea     ecx, [esp+44h+var_2C]
0x8C472A: call    sub_707280
0x8C472F: movzx   edi, word ptr [esi+0Ah]
0x8C4733: mov     [esp+40h+var_30], eax
0x8C4737: movzx   eax, word ptr [esi+8]
0x8C473B: cmp     edi, eax
0x8C473D: jb      short loc_8C474D
0x8C473F: movzx   ecx, word ptr [esi+0Eh]
0x8C4743: add     ecx, edi
0x8C4745: push    ecx
0x8C4746: mov     ecx, esi
0x8C4748: call    NiTArray_SetSize
0x8C474D: lea     edx, [esp+40h+var_30]
0x8C4751: push    edx
0x8C4752: push    edi
0x8C4753: mov     ecx, esi
0x8C4755: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8C475A: fld     dword ptr [esp+40h+var_20+0Ch]
0x8C475E: push    ecx
0x8C475F: fstp    [esp+44h+var_44]; float
0x8C4762: push    offset aConstant; "Constant"
0x8C4767: call    TESOutput_PrintLabeledFloat
0x8C476C: movzx   edi, word ptr [esi+0Ah]
0x8C4770: mov     [esp+48h+var_30], eax
0x8C4774: movzx   eax, word ptr [esi+8]
0x8C4778: add     esp, 8
0x8C477B: cmp     edi, eax
0x8C477D: jb      short loc_8C478D
0x8C477F: movzx   ecx, word ptr [esi+0Eh]
0x8C4783: add     ecx, edi
0x8C4785: push    ecx
0x8C4786: mov     ecx, esi
0x8C4788: call    NiTArray_SetSize
0x8C478D: lea     edx, [esp+40h+var_30]
0x8C4791: push    edx
0x8C4792: push    edi
0x8C4793: mov     ecx, esi
0x8C4795: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8C479A: mov     ecx, [esp+40h+var_4]
0x8C479E: pop     edi
0x8C479F: pop     esi
0x8C47A0: pop     ebx
0x8C47A1: xor     ecx, esp
0x8C47A3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8C47A8: mov     esp, ebp
0x8C47AA: pop     ebp
0x8C47AB: retn    4
