0x4E55E0: sub     esp, 1Ch
0x4E55E3: push    ebp
0x4E55E4: push    edi
0x4E55E5: xor     edi, edi
0x4E55E7: mov     ebp, ecx
0x4E55E9: cmp     [ebp+24h], edi
0x4E55EC: mov     [esp+24h+var_1C], edi
0x4E55F0: jz      loc_4E571E
0x4E55F6: mov     eax, [esp+24h+arg_0]
0x4E55FA: fld     dword ptr [eax]
0x4E55FC: push    esi
0x4E55FD: fstp    [esp+28h+var_14]
0x4E5601: fld     [esp+28h+var_14]
0x4E5605: fistp   [esp+28h+var_18]
0x4E5609: fld     dword ptr [eax+4]
0x4E560C: fstp    [esp+28h+var_10]
0x4E5610: fld     [esp+28h+var_10]
0x4E5614: fistp   [esp+28h+var_14]
0x4E5618: mov     ecx, [ebp+20h]; this
0x4E561B: call    TESObjectCELL_GetXCoordinate
0x4E5620: mov     ecx, [ebp+20h]; this
0x4E5623: mov     esi, eax
0x4E5625: call    TESObjectCELL_GetYCoordinate
0x4E562A: mov     ecx, [esp+28h+var_18]
0x4E562E: sar     ecx, 0Ch
0x4E5631: cmp     ecx, esi
0x4E5633: jnz     short loc_4E5644
0x4E5635: mov     edx, [esp+28h+var_14]
0x4E5639: sar     edx, 0Ch
0x4E563C: cmp     edx, eax
0x4E563E: jz      loc_4E5713
0x4E5644: fld     dword ptr ds:0A32048h
0x4E564A: lea     esi, [ebp+28h]
0x4E564D: test    esi, esi
0x4E564F: fstp    [esp+28h+var_14]
0x4E5653: jz      loc_4E5713
0x4E5659: push    ebx
0x4E565A: jmp     short loc_4E5664
0x4E565C: align 10h
0x4E5660: mov     edi, [esp+2Ch+var_1C]
0x4E5664: cmp     dword ptr [esi+4], 0
0x4E5668: jnz     short loc_4E5673
0x4E566A: cmp     dword ptr [esi], 0
0x4E566D: jz      loc_4E5707
0x4E5673: mov     edi, [esi]
0x4E5675: movzx   eax, word ptr [edi]
0x4E5678: mov     ecx, [ebp+24h]
0x4E567B: mov     edx, [ecx+4]
0x4E567E: mov     ebx, [edx+eax*4]
0x4E5681: test    ebx, ebx
0x4E5683: jz      short loc_4E56EE
0x4E5685: mov     ecx, ebx
0x4E5687: call    sub_67ED70
0x4E568C: test    al, al
0x4E568E: jnz     short loc_4E56EE
0x4E5690: mov     eax, [esp+2Ch+arg_0]
0x4E5694: fld     dword ptr [edi+4]
0x4E5697: fsub    dword ptr [eax]
0x4E5699: fstp    [esp+2Ch+var_C]
0x4E569D: fld     dword ptr [edi+8]
0x4E56A0: fsub    dword ptr [eax+4]
0x4E56A3: fstp    [esp+2Ch+var_8]
0x4E56A7: fld     dword ptr [edi+0Ch]
0x4E56AA: fsub    dword ptr [eax+8]
0x4E56AD: fstp    [esp+2Ch+var_4]
0x4E56B1: fld     [esp+2Ch+var_C]
0x4E56B5: fld     [esp+2Ch+var_8]
0x4E56B9: fld     [esp+2Ch+var_4]
0x4E56BD: fld     st(1)
0x4E56BF: fmulp   st(2), st
0x4E56C1: fld     st(2)
0x4E56C3: fmulp   st(3), st
0x4E56C5: fxch    st(1)
0x4E56C7: faddp   st(2), st
0x4E56C9: fmul    st, st
0x4E56CB: faddp   st(1), st
0x4E56CD: fstp    [esp+2Ch+var_10]
0x4E56D1: fld     [esp+2Ch+var_10]
0x4E56D5: fld     [esp+2Ch+var_14]
0x4E56D9: fcomp   st(1)
0x4E56DB: fnstsw  ax
0x4E56DD: test    ah, 41h
0x4E56E0: jnz     short loc_4E56EC
0x4E56E2: fstp    [esp+2Ch+var_14]
0x4E56E6: mov     [esp+2Ch+var_1C], ebx
0x4E56EA: jmp     short loc_4E56EE
0x4E56EC: fstp    st
0x4E56EE: mov     esi, [esi+4]
0x4E56F1: test    esi, esi
0x4E56F3: jnz     loc_4E5660
0x4E56F9: mov     eax, [esp+2Ch+var_1C]
0x4E56FD: pop     ebx
0x4E56FE: pop     esi
0x4E56FF: pop     edi
0x4E5700: pop     ebp
0x4E5701: add     esp, 1Ch
0x4E5704: retn    4
0x4E5707: pop     ebx
0x4E5708: pop     esi
0x4E5709: mov     eax, edi
0x4E570B: pop     edi
0x4E570C: pop     ebp
0x4E570D: add     esp, 1Ch
0x4E5710: retn    4
0x4E5713: pop     esi
0x4E5714: mov     eax, edi
0x4E5716: pop     edi
0x4E5717: pop     ebp
0x4E5718: add     esp, 1Ch
0x4E571B: retn    4
0x4E571E: mov     eax, edi
0x4E5720: pop     edi
0x4E5721: pop     ebp
0x4E5722: add     esp, 1Ch
0x4E5725: retn    4
