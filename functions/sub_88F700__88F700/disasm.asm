0x88F700: mov     ecx, [esp+arg_0]
0x88F704: sub     esp, 7Ch
0x88F707: test    ecx, ecx
0x88F709: jz      loc_88F872
0x88F70F: mov     eax, [ecx]
0x88F711: mov     edx, [eax+8]
0x88F714: push    ebp
0x88F715: call    edx
0x88F717: mov     ebp, eax
0x88F719: test    ebp, ebp
0x88F71B: jz      loc_88F871
0x88F721: cmp     word ptr [ebp+0B6h], 0
0x88F729: jbe     loc_88F871
0x88F72F: mov     eax, [ebp+0B0h]
0x88F735: mov     eax, [eax]
0x88F737: test    eax, eax
0x88F739: jz      loc_88F871
0x88F73F: cmp     word ptr [eax+0B6h], 0
0x88F747: jbe     loc_88F871
0x88F74D: mov     ecx, [eax+0B0h]
0x88F753: push    edi
0x88F754: mov     edi, [ecx]
0x88F756: test    edi, edi
0x88F758: jz      loc_88F870
0x88F75E: push    eax
0x88F75F: call    sub_88F200
0x88F764: mov     ecx, eax
0x88F766: add     esp, 4
0x88F769: test    ecx, ecx
0x88F76B: jz      loc_88F870
0x88F771: fldz
0x88F773: mov     [esp+84h+var_79], 1
0x88F778: fcomp   dword ptr [ecx+14h]
0x88F77B: fnstsw  ax
0x88F77D: test    ah, 44h
0x88F780: jnp     short loc_88F787
0x88F782: mov     [esp+84h+var_79], 0
0x88F787: cmp     dword ptr [edi+0A8h], 0
0x88F78E: jnz     short loc_88F79B
0x88F790: cmp     [esp+84h+var_79], 0
0x88F795: jz      loc_88F870
0x88F79B: push    ebx
0x88F79C: push    esi
0x88F79D: mov     esi, [ecx+10h]
0x88F7A0: test    esi, esi
0x88F7A2: jz      short loc_88F7D7
0x88F7A4: mov     ecx, esi
0x88F7A6: call    sub_607840
0x88F7AB: test    al, al
0x88F7AD: jz      short loc_88F7D7
0x88F7AF: lea     edx, [esp+8Ch+var_44]
0x88F7B3: push    edx
0x88F7B4: mov     ecx, esi
0x88F7B6: call    sub_4D6900
0x88F7BB: lea     eax, [esp+8Ch+var_78]
0x88F7BF: push    eax
0x88F7C0: mov     ecx, esi
0x88F7C2: call    sub_4D6950
0x88F7C7: lea     ecx, [esp+8Ch+var_68]
0x88F7CB: push    ecx
0x88F7CC: lea     ecx, [esp+90h+var_78]
0x88F7D0: call    sub_47C600
0x88F7D5: jmp     short loc_88F7E5
0x88F7D7: lea     esi, [edi+64h]
0x88F7DA: mov     ecx, 0Dh
0x88F7DF: lea     edi, [esp+8Ch+var_68]
0x88F7E3: rep movsd
0x88F7E5: mov     bl, [esp+8Ch+arg_8]
0x88F7EC: test    bl, bl
0x88F7EE: lea     edx, [ebp+30h]
0x88F7F1: mov     ecx, 0Dh
0x88F7F6: mov     esi, edx
0x88F7F8: lea     edi, [esp+8Ch+var_34]
0x88F7FC: rep movsd
0x88F7FE: jnz     short loc_88F806
0x88F800: cmp     [esp+8Ch+var_79], bl
0x88F804: jnz     short loc_88F811
0x88F806: fld     [esp+8Ch+var_8]
0x88F80D: fstp    [esp+8Ch+var_3C]
0x88F811: mov     eax, [esp+8Ch+arg_4]
0x88F818: mov     ecx, [esp+8Ch+var_44]
0x88F81C: mov     esi, [esp+8Ch+var_40]
0x88F820: mov     edi, [esp+8Ch+var_3C]
0x88F824: mov     [eax], ecx
0x88F826: mov     [eax+4], esi
0x88F829: mov     [eax+8], edi
0x88F82C: fld     dword ptr [eax]
0x88F82E: fsub    dword ptr [ebp+54h]
0x88F831: test    bl, bl
0x88F833: fstp    dword ptr [eax]
0x88F835: fld     dword ptr [eax+4]
0x88F838: fsub    dword ptr [ebp+58h]
0x88F83B: fstp    dword ptr [eax+4]
0x88F83E: fld     dword ptr [eax+8]
0x88F841: fsub    dword ptr [ebp+5Ch]
0x88F844: fstp    dword ptr [eax+8]
0x88F847: mov     [ebp+54h], ecx
0x88F84A: mov     [ebp+58h], esi
0x88F84D: mov     [ebp+5Ch], edi
0x88F850: mov     ecx, 9
0x88F855: lea     esi, [esp+8Ch+var_68]
0x88F859: mov     edi, edx
0x88F85B: rep movsd
0x88F85D: pop     esi
0x88F85E: pop     ebx
0x88F85F: jz      short loc_88F870
0x88F861: mov     edx, [ebp+0]
0x88F864: mov     eax, [edx+74h]
0x88F867: pop     edi
0x88F868: mov     ecx, ebp
0x88F86A: pop     ebp
0x88F86B: add     esp, 7Ch
0x88F86E: jmp     eax
0x88F870: pop     edi
0x88F871: pop     ebp
0x88F872: add     esp, 7Ch
0x88F875: retn
