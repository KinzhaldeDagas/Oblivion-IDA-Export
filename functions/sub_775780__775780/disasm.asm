0x775780: sub     esp, 20h
0x775783: mov     eax, [esp+20h+arg_8]
0x775787: push    ebx
0x775788: push    ebp
0x775789: mov     [ecx], eax
0x77578B: push    esi
0x77578C: mov     esi, [esp+2Ch+arg_0]
0x775790: lea     ebp, [ecx+134h]
0x775796: push    edi
0x775797: mov     edi, [esp+30h+arg_4]
0x77579B: xor     eax, eax
0x77579D: lea     ebx, [ecx+4]
0x7757A0: mov     [ebp+0Ch], eax
0x7757A3: mov     [ebp+4], eax
0x7757A6: mov     [ebp+8], eax
0x7757A9: mov     dword ptr [ebp+0], offset ??_7?$NiTPointerList@PAVDisplayFormatInfo@NiDX9DeviceDesc@@@@6B@; const NiTPointerList<NiDX9DeviceDesc::DisplayFormatInfo *>::`vftable'
0x7757B0: mov     eax, [ecx]
0x7757B2: mov     edx, [esi]
0x7757B4: push    ebx
0x7757B5: push    eax
0x7757B6: push    edi
0x7757B7: mov     [esp+3Ch+var_20], ecx
0x7757BB: mov     ecx, [edx+38h]
0x7757BE: push    esi
0x7757BF: call    ecx
0x7757C1: test    eax, eax
0x7757C3: jl      loc_775946
0x7757C9: mov     edx, [esp+30h+arg_10]
0x7757CD: mov     eax, [edx+4]
0x7757D0: test    eax, eax
0x7757D2: jz      loc_77594C
0x7757D8: jmp     short loc_7757E4
0x7757DA: align 10h
0x7757E0: mov     eax, [esp+30h+var_1C]
0x7757E4: lea     ecx, [eax+8]
0x7757E7: mov     eax, [eax]
0x7757E9: mov     [esp+30h+var_1C], eax
0x7757ED: mov     eax, [ecx]
0x7757EF: test    eax, eax
0x7757F1: mov     [esp+30h+var_18], eax
0x7757F5: jz      loc_775939
0x7757FB: mov     ecx, [esi]
0x7757FD: mov     edx, [ecx+18h]
0x775800: push    eax
0x775801: push    edi
0x775802: push    esi
0x775803: call    edx
0x775805: test    eax, eax
0x775807: mov     [esp+30h+var_14], eax
0x77580B: mov     [esp+30h+arg_0], 0
0x775813: jbe     loc_775939
0x775819: lea     esp, [esp+0]
0x775820: mov     edx, [esp+30h+arg_0]
0x775824: mov     eax, [esi]
0x775826: lea     ecx, [esp+30h+var_10]
0x77582A: push    ecx
0x77582B: mov     ecx, [esp+34h+var_18]
0x77582F: push    edx
0x775830: mov     edx, [eax+1Ch]
0x775833: push    ecx
0x775834: push    edi
0x775835: xor     bl, bl
0x775837: push    esi
0x775838: mov     byte ptr [esp+44h+arg_8], 0
0x77583D: mov     byte ptr [esp+44h+arg_10], bl
0x775841: call    edx
0x775843: test    eax, eax
0x775845: jl      short loc_775865
0x775847: mov     eax, [esp+30h+var_4]
0x77584B: mov     edx, [esp+30h+var_20]
0x77584F: mov     ecx, [esi]
0x775851: mov     ecx, [ecx+24h]
0x775854: push    0
0x775856: push    eax
0x775857: push    eax
0x775858: mov     eax, [edx]
0x77585A: push    eax
0x77585B: push    edi
0x77585C: push    esi
0x77585D: call    ecx
0x77585F: mov     bl, 1
0x775861: mov     byte ptr [esp+30h+arg_10], bl
0x775865: mov     eax, [esp+30h+var_4]
0x775869: mov     ecx, [esp+30h+arg_C]
0x77586D: mov     edx, [esi]
0x77586F: mov     edx, [edx+24h]
0x775872: push    1
0x775874: push    eax
0x775875: mov     eax, [esp+38h+var_20]
0x775879: push    ecx
0x77587A: mov     ecx, [eax]
0x77587C: push    ecx
0x77587D: push    edi
0x77587E: push    esi
0x77587F: call    edx
0x775881: test    eax, eax
0x775883: jl      short loc_77588A
0x775885: mov     byte ptr [esp+30h+arg_8], 1
0x77588A: test    bl, bl
0x77588C: jnz     short loc_775898
0x77588E: cmp     byte ptr [esp+30h+arg_8], bl
0x775892: jz      loc_775924
0x775898: mov     ebx, [esp+30h+var_20]
0x77589C: mov     eax, [ebx+138h]
0x7758A2: test    eax, eax
0x7758A4: jz      short loc_7758C3
0x7758A6: mov     edx, [esp+30h+var_4]
0x7758AA: lea     ebx, [ebx+0]
0x7758B0: lea     ecx, [eax+8]
0x7758B3: mov     ecx, [ecx]
0x7758B5: test    ecx, ecx
0x7758B7: mov     eax, [eax]
0x7758B9: jz      short loc_7758BF
0x7758BB: cmp     [ecx], edx
0x7758BD: jz      short loc_775924
0x7758BF: test    eax, eax
0x7758C1: jnz     short loc_7758B0
0x7758C3: push    18h; Size
0x7758C5: call    FormHeapAlloc
0x7758CA: add     esp, 4
0x7758CD: test    eax, eax
0x7758CF: jz      short loc_7758F0
0x7758D1: mov     ecx, [esp+30h+arg_8]
0x7758D5: mov     edx, [esp+30h+arg_10]
0x7758D9: push    ecx
0x7758DA: mov     ecx, [esp+34h+var_4]
0x7758DE: push    edx
0x7758DF: mov     edx, [ebx]
0x7758E1: push    ecx
0x7758E2: push    edx
0x7758E3: push    edi
0x7758E4: push    esi
0x7758E5: mov     ecx, eax
0x7758E7: call    sub_7753F0
0x7758EC: mov     edi, eax
0x7758EE: jmp     short loc_7758F2
0x7758F0: xor     edi, edi
0x7758F2: mov     eax, [ebp+0]
0x7758F5: mov     edx, [eax+4]
0x7758F8: mov     ecx, ebp
0x7758FA: call    edx
0x7758FC: mov     [eax+8], edi
0x7758FF: mov     dword ptr [eax], 0
0x775905: mov     ecx, [ebp+8]
0x775908: mov     [eax+4], ecx
0x77590B: mov     ecx, [ebp+8]
0x77590E: test    ecx, ecx
0x775910: jz      short loc_775916
0x775912: mov     [ecx], eax
0x775914: jmp     short loc_775919
0x775916: mov     [ebp+4], eax
0x775919: add     dword ptr [ebp+0Ch], 1
0x77591D: mov     edi, [esp+30h+arg_4]
0x775921: mov     [ebp+8], eax
0x775924: mov     eax, [esp+30h+arg_0]
0x775928: add     eax, 1
0x77592B: cmp     eax, [esp+30h+var_14]
0x77592F: mov     [esp+30h+arg_0], eax
0x775933: jb      loc_775820
0x775939: cmp     [esp+30h+var_1C], 0
0x77593E: jnz     loc_7757E0
0x775944: jmp     short loc_77594C
0x775946: mov     dword ptr [ebx], 0
0x77594C: mov     edx, [esp+30h+var_20]
0x775950: mov     eax, [edx+138h]
0x775956: test    eax, eax
0x775958: jz      short loc_775973
0x77595A: lea     ebx, [ebx+0]
0x775960: mov     esi, [esp+30h+arg_C]
0x775964: lea     ecx, [eax+8]
0x775967: mov     ecx, [ecx]
0x775969: cmp     [ecx], esi
0x77596B: mov     eax, [eax]
0x77596D: jz      short loc_775986
0x77596F: test    eax, eax
0x775971: jnz     short loc_775960
0x775973: pop     edi
0x775974: pop     esi
0x775975: pop     ebp
0x775976: mov     byte ptr [edx+144h], 0
0x77597D: mov     eax, edx
0x77597F: pop     ebx
0x775980: add     esp, 20h
0x775983: retn    14h
0x775986: cmp     byte ptr [ecx+4], 0
0x77598A: jz      short loc_775973
0x77598C: pop     edi
0x77598D: pop     esi
0x77598E: pop     ebp
0x77598F: mov     byte ptr [edx+144h], 1
0x775996: mov     eax, edx
0x775998: pop     ebx
0x775999: add     esp, 20h
0x77599C: retn    14h
