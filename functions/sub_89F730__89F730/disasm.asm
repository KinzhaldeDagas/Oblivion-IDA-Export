0x89F730: push    0FFFFFFFFh
0x89F732: push    offset SEH_89F730
0x89F737: mov     eax, large fs:0
0x89F73D: push    eax
0x89F73E: sub     esp, 0Ch
0x89F741: push    ebp
0x89F742: push    esi
0x89F743: push    edi
0x89F744: mov     eax, ds:0B30AACh
0x89F749: xor     eax, esp
0x89F74B: push    eax
0x89F74C: lea     eax, [esp+28h+var_C]
0x89F750: mov     large fs:0, eax
0x89F756: mov     edi, ecx
0x89F758: test    edi, edi
0x89F75A: jz      short loc_89F773
0x89F75C: mov     eax, [edi+8]
0x89F75F: test    eax, eax
0x89F761: jz      short loc_89F773
0x89F763: add     eax, 14h
0x89F766: jz      short loc_89F773
0x89F768: mov     eax, [eax]
0x89F76A: test    eax, eax
0x89F76C: jz      short loc_89F773
0x89F76E: mov     ebp, [eax+8]
0x89F771: jmp     short loc_89F775
0x89F773: xor     ebp, ebp
0x89F775: test    ebp, ebp
0x89F777: jz      loc_89F8C5
0x89F77D: mov     esi, [esp+28h+arg_0]
0x89F781: test    esi, esi
0x89F783: jnz     short loc_89F7B4
0x89F785: push    0DCh ; 'Ü'; Size
0x89F78A: call    FormHeapAlloc
0x89F78F: add     esp, 4
0x89F792: mov     [esp+28h+arg_0], eax
0x89F796: test    eax, eax
0x89F798: mov     [esp+28h+var_4], esi
0x89F79C: jz      short loc_89F7A8
0x89F79E: push    esi
0x89F79F: mov     ecx, eax; this
0x89F7A1: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x89F7A6: jmp     short loc_89F7AA
0x89F7A8: xor     eax, eax
0x89F7AA: mov     [esp+28h+var_4], 0FFFFFFFFh
0x89F7B2: mov     esi, eax
0x89F7B4: cmp     dword ptr [esi+8], 0
0x89F7B8: jnz     short loc_89F7C6
0x89F7BA: push    offset aBhkworldobject; "bhkWorldObject"
0x89F7BF: mov     ecx, esi
0x89F7C1: call    NiObjectNET_SetName
0x89F7C6: test    edi, edi
0x89F7C8: fldz
0x89F7CA: fst     [esp+28h+var_18]
0x89F7CE: fst     [esp+28h+var_14]
0x89F7D2: fstp    [esp+28h+var_10]
0x89F7D6: jz      short loc_89F7E9
0x89F7D8: mov     eax, [edi+8]
0x89F7DB: test    eax, eax
0x89F7DD: jz      short loc_89F7E9
0x89F7DF: add     eax, 14h
0x89F7E2: jz      short loc_89F7E9
0x89F7E4: mov     eax, [eax+1Ch]
0x89F7E7: jmp     short loc_89F7EB
0x89F7E9: xor     eax, eax
0x89F7EB: lea     ecx, [esp+28h+var_18]
0x89F7EF: push    ecx
0x89F7F0: push    eax
0x89F7F1: call    sub_8A8140
0x89F7F6: add     esp, 8
0x89F7F9: push    offset dword_B25AC4
0x89F7FE: lea     ecx, [esp+2Ch+var_18]
0x89F802: call    sub_8AA390
0x89F807: test    al, al
0x89F809: jz      loc_89F8A0
0x89F80F: push    5Ch ; '\'; Size
0x89F811: call    FormHeapAlloc
0x89F816: add     esp, 4
0x89F819: mov     [esp+28h+arg_0], eax
0x89F81D: test    eax, eax
0x89F81F: mov     edi, 1
0x89F824: mov     [esp+28h+var_4], edi
0x89F828: jz      short loc_89F833
0x89F82A: mov     ecx, eax; this
0x89F82C: call    ??0NiMaterialProperty@@QAE@XZ; NiMaterialProperty::NiMaterialProperty(void)
0x89F831: jmp     short loc_89F835
0x89F833: xor     eax, eax
0x89F835: mov     edx, ds:0B25AC4h
0x89F83B: mov     [eax+1Ch], edx
0x89F83E: mov     ecx, ds:0B25AC8h
0x89F844: mov     [eax+20h], ecx
0x89F847: mov     edx, ds:0B25ACCh
0x89F84D: add     [eax+54h], edi
0x89F850: mov     ecx, [eax+54h]
0x89F853: mov     [eax+24h], edx
0x89F856: mov     edx, ds:0B25AC4h
0x89F85C: mov     [eax+28h], edx
0x89F85F: mov     edx, ds:0B25AC8h
0x89F865: mov     [eax+2Ch], edx
0x89F868: mov     edx, ds:0B25ACCh
0x89F86E: add     ecx, edi
0x89F870: mov     [eax+54h], ecx
0x89F873: mov     [eax+30h], edx
0x89F876: mov     edx, [esp+28h+var_18]
0x89F87A: mov     [eax+40h], edx
0x89F87D: mov     edx, [esp+28h+var_14]
0x89F881: mov     [eax+44h], edx
0x89F884: mov     edx, [esp+28h+var_10]
0x89F888: add     ecx, edi
0x89F88A: mov     [eax+54h], ecx
0x89F88D: push    eax; a2
0x89F88E: mov     ecx, esi; this
0x89F890: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x89F898: mov     [eax+48h], edx
0x89F89B: call    sub_405680
0x89F8A0: mov     eax, [ebp+0]
0x89F8A3: mov     edx, [eax+90h]
0x89F8A9: push    esi
0x89F8AA: mov     ecx, ebp
0x89F8AC: call    edx
0x89F8AE: mov     eax, esi
0x89F8B0: mov     ecx, [esp+28h+var_C]
0x89F8B4: mov     large fs:0, ecx
0x89F8BB: pop     ecx
0x89F8BC: pop     edi
0x89F8BD: pop     esi
0x89F8BE: pop     ebp
0x89F8BF: add     esp, 18h
0x89F8C2: retn    4
0x89F8C5: mov     eax, [esp+28h+arg_0]
0x89F8C9: mov     ecx, [esp+28h+var_C]
0x89F8CD: mov     large fs:0, ecx
0x89F8D4: pop     ecx
0x89F8D5: pop     edi
0x89F8D6: pop     esi
0x89F8D7: pop     ebp
0x89F8D8: add     esp, 18h
0x89F8DB: retn    4
