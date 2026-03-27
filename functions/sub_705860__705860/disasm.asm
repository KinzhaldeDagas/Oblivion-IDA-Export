0x705860: push    0FFFFFFFFh
0x705862: push    offset SEH_705860
0x705867: mov     eax, large fs:0
0x70586D: push    eax
0x70586E: sub     esp, 0Ch
0x705871: push    ebx
0x705872: push    ebp
0x705873: push    esi
0x705874: push    edi
0x705875: mov     eax, ds:0B30AACh
0x70587A: xor     eax, esp
0x70587C: push    eax
0x70587D: lea     eax, [esp+2Ch+var_C]
0x705881: mov     large fs:0, eax
0x705887: mov     edi, ecx
0x705889: mov     [esp+2Ch+var_14], edi
0x70588D: mov     eax, [esp+2Ch+arg_4]
0x705891: mov     ebp, [esp+2Ch+arg_0]
0x705895: push    eax
0x705896: push    ebp
0x705897: call    sub_700A60
0x70589C: mov     cx, [edi+18h]
0x7058A0: mov     [ebp+18h], cx
0x7058A4: movzx   eax, word ptr [edi+26h]
0x7058A8: xor     ebx, ebx
0x7058AA: test    eax, eax
0x7058AC: mov     [esp+2Ch+arg_4], eax
0x7058B0: jbe     loc_7059D0
0x7058B6: mov     edx, [edi+20h]
0x7058B9: lea     esi, ds:0[ebx*4]
0x7058C0: cmp     dword ptr [esi+edx], 0
0x7058C4: jz      loc_7059C3
0x7058CA: cmp     ebx, 5
0x7058CD: jnz     loc_705964
0x7058D3: push    28h ; '('; Size
0x7058D5: call    FormHeapAlloc
0x7058DA: mov     esi, eax
0x7058DC: add     esp, 4
0x7058DF: mov     [esp+2Ch+var_10], esi
0x7058E3: test    esi, esi
0x7058E5: mov     [esp+2Ch+var_4], 0
0x7058ED: jz      short loc_705934
0x7058EF: mov     eax, [edi+20h]
0x7058F2: mov     edi, [eax+14h]
0x7058F5: add     eax, 14h
0x7058F8: push    edi
0x7058F9: mov     ecx, esi
0x7058FB: call    sub_704190
0x705900: mov     ebp, [esp+2Ch+arg_0]
0x705904: mov     dword ptr [esi], offset ??_7BumpMap@NiTexturingProperty@@6B@; const NiTexturingProperty::BumpMap::`vftable'
0x70590A: fld     dword ptr [edi+10h]
0x70590D: fstp    dword ptr [esi+10h]
0x705910: fld     dword ptr [edi+14h]
0x705913: fstp    dword ptr [esi+14h]
0x705916: fld     dword ptr [edi+18h]
0x705919: fstp    dword ptr [esi+18h]
0x70591C: fld     dword ptr [edi+1Ch]
0x70591F: fstp    dword ptr [esi+1Ch]
0x705922: fld     dword ptr [edi+20h]
0x705925: fstp    dword ptr [esi+20h]
0x705928: fld     dword ptr [edi+24h]
0x70592B: mov     edi, [esp+2Ch+var_14]
0x70592F: fstp    dword ptr [esi+24h]
0x705932: jmp     short loc_705936
0x705934: xor     esi, esi
0x705936: cmp     word ptr [ebp+24h], 5
0x70593B: mov     [esp+2Ch+var_10], esi
0x70593F: lea     esi, [ebp+1Ch]
0x705942: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x70594A: ja      short loc_70595B
0x70594C: movzx   eax, word ptr [esi+0Eh]
0x705950: add     eax, 5
0x705953: push    eax
0x705954: mov     ecx, esi
0x705956: call    NiTArray_SetSize
0x70595B: lea     ecx, [esp+2Ch+var_10]
0x70595F: push    ecx
0x705960: push    5
0x705962: jmp     short loc_7059BC
0x705964: push    10h; Size
0x705966: call    FormHeapAlloc
0x70596B: add     esp, 4
0x70596E: mov     [esp+2Ch+var_10], eax
0x705972: test    eax, eax
0x705974: mov     [esp+2Ch+var_4], 1
0x70597C: jz      short loc_70598F
0x70597E: mov     edx, [edi+20h]
0x705981: add     edx, esi
0x705983: mov     edx, [edx]
0x705985: push    edx
0x705986: mov     ecx, eax
0x705988: call    sub_704190
0x70598D: jmp     short loc_705991
0x70598F: xor     eax, eax
0x705991: lea     esi, [ebp+1Ch]
0x705994: mov     [esp+2Ch+var_10], eax
0x705998: movzx   eax, word ptr [esi+8]
0x70599C: cmp     ebx, eax
0x70599E: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x7059A6: jb      short loc_7059B6
0x7059A8: movzx   ecx, word ptr [esi+0Eh]
0x7059AC: add     ecx, ebx
0x7059AE: push    ecx
0x7059AF: mov     ecx, esi
0x7059B1: call    NiTArray_SetSize
0x7059B6: lea     edx, [esp+2Ch+var_10]
0x7059BA: push    edx
0x7059BB: push    ebx
0x7059BC: mov     ecx, esi
0x7059BE: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7059C3: add     ebx, 1
0x7059C6: cmp     ebx, [esp+2Ch+arg_4]
0x7059CA: jb      loc_7058B6
0x7059D0: cmp     dword ptr [edi+2Ch], 0
0x7059D4: jz      loc_705B02
0x7059DA: cmp     dword ptr [ebp+2Ch], 0
0x7059DE: jnz     short loc_705A1A
0x7059E0: push    10h; Size
0x7059E2: call    FormHeapAlloc
0x7059E7: add     esp, 4
0x7059EA: xor     ecx, ecx
0x7059EC: cmp     eax, ecx
0x7059EE: jz      short loc_705A0D
0x7059F0: mov     dword ptr [eax], offset ??_7?$NiTArray@PAVShaderMap@NiTexturingProperty@@@@6B@; const NiTArray<NiTexturingProperty::ShaderMap *>::`vftable'
0x7059F6: mov     [eax+8], cx
0x7059FA: mov     word ptr [eax+0Eh], 1
0x705A00: mov     [eax+0Ah], cx
0x705A04: mov     [eax+0Ch], cx
0x705A08: mov     [eax+4], ecx
0x705A0B: jmp     short loc_705A0F
0x705A0D: xor     eax, eax
0x705A0F: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x705A17: mov     [ebp+2Ch], eax
0x705A1A: mov     eax, [edi+2Ch]
0x705A1D: movzx   eax, word ptr [eax+0Ah]
0x705A21: xor     ebp, ebp
0x705A23: test    eax, eax
0x705A25: mov     [esp+2Ch+arg_4], eax
0x705A29: jbe     loc_705B02
0x705A2F: mov     ecx, [edi+2Ch]
0x705A32: mov     edx, [ecx+4]
0x705A35: lea     ebx, ds:0[ebp*4]
0x705A3C: cmp     dword ptr [ebx+edx], 0
0x705A40: jz      loc_705AF7
0x705A46: push    14h; Size
0x705A48: call    FormHeapAlloc
0x705A4D: mov     esi, eax
0x705A4F: add     esp, 4
0x705A52: mov     [esp+2Ch+var_10], esi
0x705A56: test    esi, esi
0x705A58: mov     [esp+2Ch+var_4], 3
0x705A60: jz      short loc_705A85
0x705A62: mov     eax, [edi+2Ch]
0x705A65: mov     eax, [eax+4]
0x705A68: mov     edi, [eax+ebx]
0x705A6B: add     eax, ebx
0x705A6D: push    edi
0x705A6E: mov     ecx, esi
0x705A70: call    sub_704190
0x705A75: mov     dword ptr [esi], offset ??_7ShaderMap@NiTexturingProperty@@6B@; const NiTexturingProperty::ShaderMap::`vftable'
0x705A7B: mov     ecx, [edi+10h]
0x705A7E: mov     [esi+10h], ecx
0x705A81: mov     edi, esi
0x705A83: jmp     short loc_705A87
0x705A85: xor     edi, edi
0x705A87: mov     edx, [esp+2Ch+arg_0]
0x705A8B: mov     esi, [edx+2Ch]
0x705A8E: movzx   eax, word ptr [esi+8]
0x705A92: cmp     ebp, eax
0x705A94: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x705A9C: jb      short loc_705AAC
0x705A9E: movzx   ecx, word ptr [esi+0Eh]
0x705AA2: add     ecx, ebp
0x705AA4: push    ecx
0x705AA5: mov     ecx, esi
0x705AA7: call    NiTArray_SetSize
0x705AAC: movzx   edx, word ptr [esi+0Ah]
0x705AB0: cmp     ebp, edx
0x705AB2: jb      short loc_705AC6
0x705AB4: test    edi, edi
0x705AB6: lea     eax, [ebp+1]
0x705AB9: mov     [esi+0Ah], ax
0x705ABD: jz      short loc_705AE9
0x705ABF: add     word ptr [esi+0Ch], 1
0x705AC4: jmp     short loc_705AE9
0x705AC6: test    edi, edi
0x705AC8: jz      short loc_705ADA
0x705ACA: mov     ecx, [esi+4]
0x705ACD: cmp     dword ptr [ebx+ecx], 0
0x705AD1: jnz     short loc_705AE9
0x705AD3: add     word ptr [esi+0Ch], 1
0x705AD8: jmp     short loc_705AE9
0x705ADA: mov     edx, [esi+4]
0x705ADD: cmp     dword ptr [ebx+edx], 0
0x705AE1: jz      short loc_705AE9
0x705AE3: add     word ptr [esi+0Ch], 0FFFFh
0x705AE9: mov     eax, [esi+4]
0x705AEC: mov     [ebx+eax], edi
0x705AEF: mov     edi, [esp+2Ch+var_14]
0x705AF3: mov     eax, [esp+2Ch+arg_4]
0x705AF7: add     ebp, 1
0x705AFA: cmp     ebp, eax
0x705AFC: jb      loc_705A2F
0x705B02: mov     ecx, [esp+2Ch+var_C]
0x705B06: mov     large fs:0, ecx
0x705B0D: pop     ecx
0x705B0E: pop     edi
0x705B0F: pop     esi
0x705B10: pop     ebp
0x705B11: pop     ebx
0x705B12: add     esp, 18h
0x705B15: retn    8
