0x70F520: sub     esp, 1Ch
0x70F523: push    ebx
0x70F524: push    ebp
0x70F525: push    esi
0x70F526: mov     esi, [esp+28h+arg_0]
0x70F52A: cmp     dword ptr [esi+0D8h], 0A030003h
0x70F534: mov     eax, [esi+21Ch]
0x70F53A: push    edi
0x70F53B: mov     ebx, 4
0x70F540: mov     edi, ecx
0x70F542: lea     ecx, [esp+2Ch+arg_0]
0x70F546: mov     [esp+2Ch+arg_0], ebx
0x70F54A: jnb     loc_70F642
0x70F550: push    1
0x70F552: push    ecx
0x70F553: push    ebx
0x70F554: lea     edx, [esp+38h+var_1C]
0x70F558: push    edx
0x70F559: push    eax
0x70F55A: mov     eax, [eax+4]
0x70F55D: call    eax
0x70F55F: mov     ecx, [esp+40h+var_1C]
0x70F563: add     esp, 14h
0x70F566: mov     [edi+4], ecx
0x70F569: lea     ebp, [esp+2Ch+var_10]
0x70F56D: mov     [esp+2Ch+arg_0], ebx
0x70F571: mov     eax, [esi+21Ch]
0x70F577: push    1
0x70F579: lea     edx, [esp+30h+var_1C]
0x70F57D: push    edx
0x70F57E: push    ebx
0x70F57F: push    ebp
0x70F580: push    eax
0x70F581: mov     eax, [eax+4]
0x70F584: mov     [esp+40h+var_1C], ebx
0x70F588: call    eax
0x70F58A: add     esp, 14h
0x70F58D: add     ebp, ebx
0x70F58F: sub     [esp+2Ch+arg_0], 1
0x70F594: jnz     short loc_70F571
0x70F596: mov     eax, [esi+21Ch]
0x70F59C: push    1
0x70F59E: lea     ecx, [esp+30h+arg_0]
0x70F5A2: push    ecx
0x70F5A3: push    ebx
0x70F5A4: lea     edx, [esp+38h+var_18]
0x70F5A8: push    edx
0x70F5A9: push    eax
0x70F5AA: mov     eax, [eax+4]
0x70F5AD: mov     [esp+40h+arg_0], ebx
0x70F5B1: call    eax
0x70F5B3: mov     cl, byte ptr [esp+40h+var_18]
0x70F5B7: push    1
0x70F5B9: lea     edx, [esp+44h+arg_0]
0x70F5BD: push    edx
0x70F5BE: mov     [edi+1], cl
0x70F5C1: mov     eax, [esi+21Ch]
0x70F5C7: mov     edx, [eax+4]
0x70F5CA: push    ebx
0x70F5CB: lea     ecx, [esp+4Ch+var_14]
0x70F5CF: push    ecx
0x70F5D0: push    eax
0x70F5D1: mov     [esp+54h+arg_0], ebx
0x70F5D5: call    edx
0x70F5D7: mov     eax, [esi+21Ch]
0x70F5DD: push    1
0x70F5DF: lea     ecx, [esp+58h+arg_0]
0x70F5E3: push    ecx
0x70F5E4: push    ebx
0x70F5E5: lea     edx, [esp+60h+var_14]
0x70F5E9: push    edx
0x70F5EA: push    eax
0x70F5EB: mov     eax, [eax+4]
0x70F5EE: mov     [esp+68h+arg_0], ebx
0x70F5F2: call    eax
0x70F5F4: add     esp, 3Ch
0x70F5F7: cmp     dword ptr [esi+0D8h], 0A00010Bh
0x70F601: jb      short loc_70F623
0x70F603: mov     esi, [esi+21Ch]
0x70F609: mov     eax, [esi+4]
0x70F60C: push    1
0x70F60E: lea     ecx, [esp+30h+arg_0]
0x70F612: push    ecx
0x70F613: push    ebx
0x70F614: lea     edx, [esp+38h+var_1C]
0x70F618: push    edx
0x70F619: push    esi
0x70F61A: mov     [esp+40h+arg_0], ebx
0x70F61E: call    eax
0x70F620: add     esp, 14h
0x70F623: movzx   edx, byte ptr [edi+1]
0x70F627: mov     eax, [edi+4]
0x70F62A: lea     ecx, [esp+2Ch+var_10]
0x70F62E: push    ecx
0x70F62F: push    edx
0x70F630: push    eax
0x70F631: mov     ecx, edi
0x70F633: call    sub_70F030
0x70F638: pop     edi
0x70F639: pop     esi
0x70F63A: pop     ebp
0x70F63B: pop     ebx
0x70F63C: add     esp, 1Ch
0x70F63F: retn    4
0x70F642: mov     ebp, 1
0x70F647: push    ebp
0x70F648: push    ecx
0x70F649: push    ebx
0x70F64A: lea     edx, [esp+38h+var_14]
0x70F64E: push    edx
0x70F64F: push    eax
0x70F650: mov     eax, [eax+4]
0x70F653: call    eax
0x70F655: mov     ecx, [esp+40h+var_14]
0x70F659: push    ebp
0x70F65A: lea     edx, [esp+44h+arg_0]
0x70F65E: push    edx
0x70F65F: mov     [edi+4], ecx
0x70F662: mov     eax, [esi+21Ch]
0x70F668: mov     edx, [eax+4]
0x70F66B: push    ebp
0x70F66C: lea     ecx, [edi+1]
0x70F66F: push    ecx
0x70F670: push    eax
0x70F671: mov     [esp+54h+arg_0], ebp
0x70F675: call    edx
0x70F677: mov     eax, [esi+21Ch]
0x70F67D: push    ebp
0x70F67E: lea     ecx, [esp+58h+arg_0]
0x70F682: push    ecx
0x70F683: push    ebx
0x70F684: lea     edx, [edi+0Ch]
0x70F687: push    edx
0x70F688: push    eax
0x70F689: mov     eax, [eax+4]
0x70F68C: mov     [esp+68h+arg_0], ebx
0x70F690: call    eax
0x70F692: mov     eax, [esi+21Ch]
0x70F698: push    ebp
0x70F699: lea     ecx, [esp+6Ch+arg_0]
0x70F69D: push    ecx
0x70F69E: push    ebx
0x70F69F: lea     edx, [edi+10h]
0x70F6A2: push    edx
0x70F6A3: push    eax
0x70F6A4: mov     eax, [eax+4]
0x70F6A7: mov     [esp+7Ch+arg_0], ebx
0x70F6AE: call    eax
0x70F6B0: mov     eax, [esi+21Ch]
0x70F6B6: mov     edx, [eax+4]
0x70F6B9: add     esp, 50h
0x70F6BC: push    ebp
0x70F6BD: lea     ecx, [esp+30h+arg_0]
0x70F6C1: push    ecx
0x70F6C2: push    ebp
0x70F6C3: push    edi
0x70F6C4: push    eax
0x70F6C5: mov     [esp+40h+arg_0], ebp
0x70F6C9: call    edx
0x70F6CB: mov     eax, [esi+21Ch]
0x70F6D1: push    ebp
0x70F6D2: lea     ecx, [esp+44h+arg_0]
0x70F6D6: push    ecx
0x70F6D7: push    ebx
0x70F6D8: lea     edx, [esp+4Ch+var_14]
0x70F6DC: push    edx
0x70F6DD: push    eax
0x70F6DE: mov     eax, [eax+4]
0x70F6E1: mov     [esp+54h+arg_0], ebx
0x70F6E5: call    eax
0x70F6E7: mov     ecx, [esp+54h+var_14]
0x70F6EB: add     esp, 28h
0x70F6EE: mov     [edi+8], ecx
0x70F6F1: add     edi, 18h
0x70F6F4: mov     ebp, ebx
0x70F6F6: jmp     short loc_70F700
0x70F6F8: align 10h
0x70F700: mov     eax, [esi+21Ch]
0x70F706: push    1
0x70F708: lea     edx, [esp+30h+var_14]
0x70F70C: push    edx
0x70F70D: mov     edx, [eax+4]
0x70F710: push    ebx
0x70F711: lea     ecx, [esp+38h+var_18]
0x70F715: push    ecx
0x70F716: push    eax
0x70F717: mov     [esp+40h+var_14], ebx
0x70F71B: call    edx
0x70F71D: mov     eax, [esp+40h+var_18]
0x70F721: push    1
0x70F723: lea     ecx, [esp+44h+var_14]
0x70F727: push    ecx
0x70F728: mov     [edi-4], eax
0x70F72B: mov     eax, [esi+21Ch]
0x70F731: push    ebx
0x70F732: lea     edx, [esp+4Ch+var_1C]
0x70F736: push    edx
0x70F737: push    eax
0x70F738: mov     eax, [eax+4]
0x70F73B: mov     [esp+54h+var_14], ebx
0x70F73F: call    eax
0x70F741: mov     ecx, [esp+54h+var_1C]
0x70F745: push    1
0x70F747: lea     edx, [esp+58h+var_14]
0x70F74B: push    edx
0x70F74C: mov     [edi], ecx
0x70F74E: mov     eax, [esi+21Ch]
0x70F754: mov     edx, [eax+4]
0x70F757: push    1
0x70F759: lea     ecx, [edi+4]
0x70F75C: push    ecx
0x70F75D: push    eax
0x70F75E: mov     [esp+68h+var_14], 1
0x70F766: call    edx
0x70F768: mov     eax, [esi+21Ch]
0x70F76E: push    1
0x70F770: lea     ecx, [esp+6Ch+var_14]
0x70F774: push    ecx
0x70F775: push    1
0x70F777: lea     edx, [esp+74h+arg_0]
0x70F77B: push    edx
0x70F77C: push    eax
0x70F77D: mov     eax, [eax+4]
0x70F780: mov     [esp+7Ch+var_14], 1
0x70F788: call    eax
0x70F78A: add     esp, 50h
0x70F78D: cmp     byte ptr [esp+2Ch+arg_0], 0
0x70F792: setnbe  cl
0x70F795: mov     [edi+5], cl
0x70F798: add     edi, 0Ch
0x70F79B: sub     ebp, 1
0x70F79E: jnz     loc_70F700
0x70F7A4: pop     edi
0x70F7A5: pop     esi
0x70F7A6: pop     ebp
0x70F7A7: pop     ebx
0x70F7A8: add     esp, 1Ch
0x70F7AB: retn    4
