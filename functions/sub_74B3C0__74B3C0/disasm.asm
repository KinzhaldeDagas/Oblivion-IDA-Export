0x74B3C0: sub     esp, 60h
0x74B3C3: push    ebp
0x74B3C4: mov     ebp, [esp+64h+arg_4]
0x74B3C8: test    ebp, ebp
0x74B3CA: push    edi
0x74B3CB: mov     edi, ecx
0x74B3CD: jz      short loc_74B3E8
0x74B3CF: mov     eax, [ebp+0]
0x74B3D2: mov     edx, [eax+10h]
0x74B3D5: mov     ecx, ebp
0x74B3D7: call    edx
0x74B3D9: test    eax, eax
0x74B3DB: jz      short loc_74B3E8
0x74B3DD: mov     eax, [esp+68h+arg_0]
0x74B3E1: mov     eax, [eax+8]
0x74B3E4: test    eax, eax
0x74B3E6: jnz     short loc_74B3F2
0x74B3E8: pop     edi
0x74B3E9: xor     al, al
0x74B3EB: pop     ebp
0x74B3EC: add     esp, 60h
0x74B3EF: retn    10h
0x74B3F2: movzx   eax, word ptr [eax+8]
0x74B3F6: push    ebx
0x74B3F7: movzx   ebx, ax
0x74B3FA: push    esi
0x74B3FB: mov     dword ptr [esp+70h+var_60], ebx
0x74B3FF: call    _rand
0x74B404: mov     [esp+70h+arg_4], eax
0x74B408: fild    [esp+70h+arg_4]
0x74B40C: fdiv    qword ptr ds:0A3D5A8h
0x74B412: fstp    [esp+70h+arg_4]
0x74B416: fld     [esp+70h+arg_4]
0x74B41A: fimul   dword ptr [esp+70h+var_60]
0x74B41E: fnstcw  word ptr [esp+70h+arg_4]
0x74B422: movzx   eax, word ptr [esp+70h+arg_4]
0x74B427: or      eax, 0C00h
0x74B42C: mov     dword ptr [esp+70h+var_60], eax
0x74B430: lea     eax, [ebx-1]
0x74B433: fldcw   word ptr [esp+70h+var_60]
0x74B437: fistp   [esp+70h+var_60]
0x74B43B: mov     esi, dword ptr [esp+70h+var_60]
0x74B43F: cmp     esi, eax
0x74B441: fldcw   word ptr [esp+70h+arg_4]
0x74B445: jl      short loc_74B449
0x74B447: mov     esi, eax
0x74B449: mov     eax, [esp+70h+arg_0]
0x74B44D: imul    esi, 2Ch ; ','
0x74B450: mov     ecx, [eax+8]
0x74B453: add     esi, [ecx+0Ch]
0x74B456: cmp     word ptr [esi+1Eh], 0
0x74B45B: jnz     short loc_74B47D
0x74B45D: mov     edx, [esp+70h+arg_C]
0x74B464: mov     ecx, [esp+70h+arg_8]
0x74B468: push    edx
0x74B469: push    ecx
0x74B46A: push    ebp
0x74B46B: push    eax
0x74B46C: mov     ecx, edi
0x74B46E: call    sub_74B220
0x74B473: pop     esi
0x74B474: pop     ebx
0x74B475: pop     edi
0x74B476: pop     ebp
0x74B477: add     esp, 60h
0x74B47A: retn    10h
0x74B47D: movzx   ebx, word ptr [esi+1Eh]
0x74B481: mov     [esp+70h+arg_0], ebx
0x74B485: call    sub_53D460
0x74B48A: lea     ecx, [ebx-1]
0x74B48D: fimul   [esp+70h+arg_0]
0x74B491: fnstcw  word ptr [esp+70h+arg_0]
0x74B495: movzx   eax, word ptr [esp+70h+arg_0]
0x74B49A: or      eax, 0C00h
0x74B49F: mov     [esp+70h+arg_4], eax
0x74B4A3: fldcw   word ptr [esp+70h+arg_4]
0x74B4A7: fistp   [esp+70h+var_60]
0x74B4AB: mov     eax, dword ptr [esp+70h+var_60]
0x74B4AF: cmp     eax, ecx
0x74B4B1: fldcw   word ptr [esp+70h+arg_0]
0x74B4B5: jl      short loc_74B4B9
0x74B4B7: mov     eax, ecx
0x74B4B9: mov     ebx, [ebp+0B8h]
0x74B4BF: test    ebx, ebx
0x74B4C1: jnz     short loc_74B4CF
0x74B4C3: pop     esi
0x74B4C4: pop     ebx
0x74B4C5: pop     edi
0x74B4C6: xor     al, al
0x74B4C8: pop     ebp
0x74B4C9: add     esp, 60h
0x74B4CC: retn    10h
0x74B4CF: cmp     word ptr [esi+22h], 0
0x74B4D4: jz      short loc_74B4F1
0x74B4D6: mov     ecx, [esi+14h]
0x74B4D9: movzx   edx, word ptr [ecx+eax*2]
0x74B4DD: mov     dword ptr [esp+70h+var_60], edx
0x74B4E1: movzx   edx, word ptr [ecx+eax*2+2]
0x74B4E6: movzx   eax, word ptr [ecx+eax*2+4]
0x74B4EB: mov     ecx, dword ptr [esp+70h+var_60]
0x74B4EF: jmp     short loc_74B505
0x74B4F1: mov     edx, [esi+14h]
0x74B4F4: lea     ecx, [eax+eax*2]
0x74B4F7: lea     eax, [edx+ecx*2]
0x74B4FA: movzx   ecx, word ptr [eax]
0x74B4FD: movzx   edx, word ptr [eax+2]
0x74B501: movzx   eax, word ptr [eax+4]
0x74B505: push    ecx
0x74B506: push    esi
0x74B507: push    ebx
0x74B508: push    ebp
0x74B509: lea     ecx, [esp+80h+var_24]
0x74B50D: mov     [esp+80h+arg_0], edx
0x74B514: push    ecx
0x74B515: lea     edx, [esp+84h+var_60]
0x74B519: push    edx
0x74B51A: mov     ecx, edi
0x74B51C: mov     [esp+88h+arg_4], eax
0x74B523: call    sub_74A390
0x74B528: mov     eax, [esp+70h+arg_0]
0x74B52C: push    eax
0x74B52D: push    esi
0x74B52E: push    ebx
0x74B52F: push    ebp
0x74B530: lea     ecx, [esp+80h+var_18]
0x74B534: push    ecx
0x74B535: lea     edx, [esp+84h+var_54]
0x74B539: push    edx
0x74B53A: mov     ecx, edi
0x74B53C: call    sub_74A390
0x74B541: mov     eax, [esp+70h+arg_4]
0x74B545: push    eax
0x74B546: push    esi
0x74B547: push    ebx
0x74B548: push    ebp
0x74B549: lea     ecx, [esp+80h+var_C]
0x74B54D: push    ecx
0x74B54E: lea     edx, [esp+84h+var_48]
0x74B552: push    edx
0x74B553: mov     ecx, edi
0x74B555: call    sub_74A390
0x74B55A: fld     [esp+70h+var_54]
0x74B55E: fadd    dword ptr [esp+70h+var_60]
0x74B562: push    ecx
0x74B563: lea     eax, [esp+74h+var_3C]
0x74B567: lea     ecx, [esp+74h+var_30]
0x74B56B: fstp    [esp+74h+var_3C]
0x74B56F: fld     [esp+74h+var_50]
0x74B573: fadd    dword ptr [esp+74h+var_60+4]
0x74B577: fstp    [esp+74h+var_38]
0x74B57B: fld     [esp+74h+var_58]
0x74B57F: fadd    [esp+74h+var_4C]
0x74B583: fstp    [esp+74h+var_34]
0x74B587: fld     [esp+74h+var_3C]
0x74B58B: fadd    [esp+74h+var_48]
0x74B58F: fstp    [esp+74h+var_30]
0x74B593: fld     [esp+74h+var_44]
0x74B597: fadd    [esp+74h+var_38]
0x74B59B: fstp    [esp+74h+var_2C]
0x74B59F: fld     [esp+74h+var_40]
0x74B5A3: fadd    [esp+74h+var_34]
0x74B5A7: fstp    [esp+74h+var_28]
0x74B5AB: fld     dword ptr ds:0A46C30h
0x74B5B1: fstp    [esp+74h+var_74]; float
0x74B5B4: push    eax; int
0x74B5B5: call    sub_4BF9B0
0x74B5BA: mov     esi, [esp+70h+arg_8]
0x74B5BE: mov     ecx, [esp+70h+var_3C]
0x74B5C2: mov     edx, [esp+70h+var_38]
0x74B5C6: mov     eax, [esp+70h+var_34]
0x74B5CA: mov     ebx, [esp+70h+arg_C]
0x74B5D1: mov     [esi], ecx
0x74B5D3: mov     [esi+4], edx
0x74B5D6: mov     [esi+8], eax
0x74B5D9: cmp     dword ptr [edi+70h], 0
0x74B5DD: jnz     loc_74B685
0x74B5E3: fld     [esp+70h+var_18]
0x74B5E7: push    ecx
0x74B5E8: fadd    [esp+74h+var_24]
0x74B5EC: lea     ecx, [esp+74h+var_C]
0x74B5F0: fstp    [esp+74h+var_3C]
0x74B5F4: fld     [esp+74h+var_20]
0x74B5F8: fadd    [esp+74h+var_14]
0x74B5FC: fstp    [esp+74h+var_38]
0x74B600: fld     [esp+74h+var_1C]
0x74B604: fadd    [esp+74h+var_10]
0x74B608: fstp    [esp+74h+var_34]
0x74B60C: fld     [esp+74h+var_3C]
0x74B610: fadd    [esp+74h+var_C]
0x74B614: fstp    [esp+74h+var_18]
0x74B618: fld     [esp+74h+var_8]
0x74B61C: fadd    [esp+74h+var_38]
0x74B620: fstp    [esp+74h+var_14]
0x74B624: fld     [esp+74h+var_4]
0x74B628: fadd    [esp+74h+var_34]
0x74B62C: fstp    [esp+74h+var_10]
0x74B630: fld     dword ptr ds:0A46C30h
0x74B636: fstp    [esp+74h+var_74]; float
0x74B639: push    ecx; int
0x74B63A: lea     ecx, [esp+78h+var_18]
0x74B63E: call    sub_4BF9B0
0x74B643: lea     edx, [esp+70h+var_C]
0x74B647: push    edx
0x74B648: call    sub_4BFAA0
0x74B64D: add     esp, 4
0x74B650: mov     ecx, ebx
0x74B652: call    sub_404C90
0x74B657: fstp    [esp+70h+arg_0]
0x74B65B: fld     [esp+70h+arg_0]
0x74B65F: lea     eax, [esp+70h+var_C]
0x74B663: push    eax; int
0x74B664: push    ecx
0x74B665: lea     ecx, [esp+78h+var_18]
0x74B669: fstp    [esp+78h+var_78]; float
0x74B66C: push    ecx; int
0x74B66D: call    sub_47DA10
0x74B672: mov     edx, [eax]
0x74B674: mov     [ebx], edx
0x74B676: mov     ecx, [eax+4]
0x74B679: mov     [ebx+4], ecx
0x74B67C: mov     edx, [eax+8]
0x74B67F: add     esp, 0Ch
0x74B682: mov     [ebx+8], edx
0x74B685: cmp     dword ptr [edi+74h], 3
0x74B689: jnz     loc_74B77B
0x74B68F: fld     [esp+70h+var_54]
0x74B693: fld     dword ptr [esp+70h+var_60]
0x74B697: fld     st
0x74B699: fsubp   st(2), st
0x74B69B: fxch    st(1)
0x74B69D: fstp    [esp+70h+var_3C]
0x74B6A1: fld     [esp+70h+var_50]
0x74B6A5: fld     dword ptr [esp+70h+var_60+4]
0x74B6A9: fld     st
0x74B6AB: fsubp   st(2), st
0x74B6AD: fxch    st(1)
0x74B6AF: fstp    [esp+70h+var_38]
0x74B6B3: fld     [esp+70h+var_4C]
0x74B6B7: fld     [esp+70h+var_58]
0x74B6BB: fld     st
0x74B6BD: fsubp   st(2), st
0x74B6BF: fxch    st(1)
0x74B6C1: fstp    [esp+70h+var_34]
0x74B6C5: fld     [esp+70h+var_48]
0x74B6C9: fsubrp  st(3), st
0x74B6CB: fxch    st(2)
0x74B6CD: fstp    [esp+70h+var_54]
0x74B6D1: fsubr   [esp+70h+var_44]
0x74B6D5: fstp    [esp+70h+var_50]
0x74B6D9: fsubr   [esp+70h+var_40]
0x74B6DD: fstp    [esp+70h+var_4C]
0x74B6E1: call    sub_53D460
0x74B6E6: fstp    [esp+70h+arg_0]
0x74B6EA: push    ecx
0x74B6EB: fld     [esp+74h+arg_0]
0x74B6EF: lea     ecx, [esp+74h+var_3C]
0x74B6F3: fstp    [esp+74h+var_74]; float
0x74B6F6: call    NiPoint3__MutliplyByValue
0x74B6FB: call    sub_53D460
0x74B700: fld     [esp+70h+arg_0]
0x74B704: fld1
0x74B706: push    ecx
0x74B707: fsubrp  st(1), st
0x74B709: lea     ecx, [esp+74h+var_54]
0x74B70D: fmulp   st(1), st
0x74B70F: fstp    [esp+74h+arg_0]
0x74B713: fld     [esp+74h+arg_0]
0x74B717: fstp    [esp+74h+var_74]; float
0x74B71A: call    NiPoint3__MutliplyByValue
0x74B71F: fld     [esp+70h+var_3C]
0x74B723: fadd    dword ptr [esp+70h+var_60]
0x74B727: fstp    [esp+70h+var_48]
0x74B72B: fld     [esp+70h+var_38]
0x74B72F: fadd    dword ptr [esp+70h+var_60+4]
0x74B733: fstp    [esp+70h+var_44]
0x74B737: fld     [esp+70h+var_34]
0x74B73B: fadd    [esp+70h+var_58]
0x74B73F: fstp    [esp+70h+var_40]
0x74B743: fld     [esp+70h+var_48]
0x74B747: fadd    [esp+70h+var_54]
0x74B74B: fstp    [esp+70h+var_3C]
0x74B74F: mov     eax, [esp+70h+var_3C]
0x74B753: fld     [esp+70h+var_44]
0x74B757: mov     [esi], eax
0x74B759: fadd    [esp+70h+var_50]
0x74B75D: fstp    [esp+70h+var_38]
0x74B761: mov     ecx, [esp+70h+var_38]
0x74B765: fld     [esp+70h+var_40]
0x74B769: mov     [esi+4], ecx
0x74B76C: fadd    [esp+70h+var_4C]
0x74B770: fstp    [esp+70h+var_34]
0x74B774: mov     edx, [esp+70h+var_34]
0x74B778: mov     [esi+8], edx
0x74B77B: push    ebx
0x74B77C: push    esi
0x74B77D: push    ebp
0x74B77E: mov     ecx, edi
0x74B780: call    sub_74A0A0
0x74B785: pop     esi
0x74B786: pop     ebx
0x74B787: pop     edi
0x74B788: mov     al, 1
0x74B78A: pop     ebp
0x74B78B: add     esp, 60h
0x74B78E: retn    10h
