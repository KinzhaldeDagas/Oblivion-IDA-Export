0x74D550: sub     esp, 34h
0x74D553: push    ebp
0x74D554: mov     ebp, [esp+38h+arg_4]
0x74D558: mov     eax, [ebp+54h]
0x74D55B: mov     ecx, [ebp+58h]
0x74D55E: mov     [esp+38h+var_30], eax
0x74D562: xor     eax, eax
0x74D564: cmp     [ebp+48h], ax
0x74D568: mov     [esp+38h+var_2C], ecx
0x74D56C: mov     [esp+38h+var_34], eax
0x74D570: jbe     loc_74D673
0x74D576: push    ebx
0x74D577: push    esi
0x74D578: push    edi
0x74D579: lea     esp, [esp+0]
0x74D580: movzx   ebx, ax
0x74D583: mov     eax, [ebp+5Ch]
0x74D586: lea     edx, ds:0[ebx*8]
0x74D58D: sub     edx, ebx
0x74D58F: lea     ecx, [eax+edx*4]
0x74D592: mov     eax, [ebp+68h]
0x74D595: movzx   edx, word ptr [eax+0B6h]
0x74D59C: cmp     edx, ebx
0x74D59E: mov     [esp+44h+var_28], ecx
0x74D5A2: ja      short loc_74D5AC
0x74D5A4: xor     esi, esi
0x74D5A6: mov     [esp+44h+arg_4], esi
0x74D5AA: jmp     short loc_74D5BB
0x74D5AC: mov     eax, [eax+0B0h]
0x74D5B2: mov     ecx, [eax+ebx*4]
0x74D5B5: mov     [esp+44h+arg_4], ecx
0x74D5B9: mov     esi, ecx
0x74D5BB: mov     ecx, [ebp+1Ch]
0x74D5BE: lea     eax, [ebx+ebx*2]
0x74D5C1: add     eax, eax
0x74D5C3: add     eax, eax
0x74D5C5: mov     edx, [ecx+eax]
0x74D5C8: add     ecx, eax
0x74D5CA: mov     [esi+54h], edx
0x74D5CD: mov     edx, [ecx+4]
0x74D5D0: mov     [esi+58h], edx
0x74D5D3: mov     edx, [esp+44h+var_30]
0x74D5D7: test    edx, edx
0x74D5D9: mov     ecx, [ecx+8]
0x74D5DC: mov     [esi+5Ch], ecx
0x74D5DF: jz      short loc_74D624
0x74D5E1: mov     ecx, [esp+44h+var_2C]
0x74D5E5: test    ecx, ecx
0x74D5E7: jz      short loc_74D624
0x74D5E9: fld     dword ptr [eax+ecx+8]
0x74D5ED: sub     esp, 10h
0x74D5F0: fstp    [esp+54h+var_48]; float
0x74D5F4: fld     dword ptr [eax+ecx+4]
0x74D5F8: fstp    [esp+54h+var_4C]; float
0x74D5FC: fld     dword ptr [eax+ecx]
0x74D5FF: lea     ecx, [esp+54h+var_24]
0x74D603: fstp    [esp+54h+var_50]; float
0x74D607: fld     dword ptr [edx+ebx*4]
0x74D60A: fstp    [esp+54h+var_54]; float
0x74D60D: call    sub_70FE20
0x74D612: lea     edi, [esi+30h]
0x74D615: mov     ecx, 9
0x74D61A: lea     esi, [esp+44h+var_24]
0x74D61E: rep movsd
0x74D620: mov     esi, [esp+44h+arg_4]
0x74D624: mov     edx, [ebp+4Ch]
0x74D627: fld     dword ptr [edx+ebx*4]
0x74D62A: mov     eax, [ebp+44h]
0x74D62D: fmul    dword ptr [eax+ebx*4]
0x74D630: mov     eax, [esp+44h+var_28]
0x74D634: mov     edx, [esi]
0x74D636: mov     edx, [edx+60h]
0x74D639: fstp    [esp+44h+arg_4]
0x74D63D: push    1
0x74D63F: fld     [esp+48h+arg_4]
0x74D643: push    ecx
0x74D644: fabs
0x74D646: mov     ecx, esi
0x74D648: fstp    [esp+4Ch+arg_4]
0x74D64C: fld     [esp+4Ch+arg_4]
0x74D650: fstp    dword ptr [esi+60h]
0x74D653: fld     dword ptr [eax+0Ch]
0x74D656: fstp    [esp+4Ch+var_4C]
0x74D659: call    edx
0x74D65B: mov     eax, [esp+44h+var_34]
0x74D65F: add     eax, 1
0x74D662: cmp     ax, [ebp+48h]
0x74D666: mov     [esp+44h+var_34], eax
0x74D66A: jb      loc_74D580
0x74D670: pop     edi
0x74D671: pop     esi
0x74D672: pop     ebx
0x74D673: pop     ebp
0x74D674: add     esp, 34h
0x74D677: retn    8
