0x76B5D0: sub     esp, 0Ch
0x76B5D3: push    ebx
0x76B5D4: mov     ebx, ecx
0x76B5D6: cmp     dword ptr [ebx+280h], 0
0x76B5DD: push    ebp
0x76B5DE: push    esi
0x76B5DF: mov     dword ptr [ebx], offset ??_7NiDX9Renderer@@6B@; const NiDX9Renderer::`vftable'
0x76B5E5: jz      short loc_76B666
0x76B5E7: cmp     dword ptr [ebx+8ACh], 0
0x76B5EE: jz      short loc_76B61E
0x76B5F0: xor     esi, esi
0x76B5F2: cmp     ds:0B28CB0h, esi
0x76B5F8: jbe     short loc_76B61E
0x76B5FA: lea     ebx, [ebx+0]
0x76B600: mov     ecx, [ebx+8ACh]
0x76B606: mov     eax, [ecx]
0x76B608: mov     edx, [eax+0E0h]
0x76B60E: push    0
0x76B610: push    esi
0x76B611: call    edx
0x76B613: add     esi, 1
0x76B616: cmp     esi, ds:0B28CB0h
0x76B61C: jb      short loc_76B600
0x76B61E: xor     esi, esi
0x76B620: cmp     [ebx+6DCh], esi
0x76B626: jbe     short loc_76B653
0x76B628: jmp     short loc_76B630
0x76B62A: align 10h
0x76B630: mov     eax, [ebx+280h]
0x76B636: mov     ecx, [eax]
0x76B638: mov     edx, [ecx+190h]
0x76B63E: push    0
0x76B640: push    0
0x76B642: push    0
0x76B644: push    esi
0x76B645: push    eax
0x76B646: call    edx
0x76B648: add     esi, 1
0x76B64B: cmp     esi, [ebx+6DCh]
0x76B651: jb      short loc_76B630
0x76B653: mov     eax, [ebx+280h]
0x76B659: mov     ecx, [eax]
0x76B65B: mov     edx, [ecx+1A0h]
0x76B661: push    0
0x76B663: push    eax
0x76B664: call    edx
0x76B666: push    edi
0x76B667: lea     edi, [ebx+864h]
0x76B66D: lea     esi, [ebx+6F4h]
0x76B673: mov     [esp+1Ch+var_C], 4
0x76B67B: jmp     short loc_76B680
0x76B67D: align 10h
0x76B680: mov     ebp, 16h
0x76B685: mov     eax, [esi]
0x76B687: push    eax
0x76B688: call    FormHeapFree
0x76B68D: add     esp, 4
0x76B690: add     esi, 4
0x76B693: sub     ebp, 1
0x76B696: jnz     short loc_76B685
0x76B698: mov     ebp, [edi]
0x76B69A: test    ebp, ebp
0x76B69C: jz      short loc_76B6C1
0x76B69E: lea     ecx, [ebp+4]
0x76B6A1: push    ecx; lpAddend
0x76B6A2: call    dword ptr ds:0A2807Ch
0x76B6A8: test    eax, eax
0x76B6AA: jnz     short loc_76B6BB
0x76B6AC: test    ebp, ebp
0x76B6AE: jz      short loc_76B6BB
0x76B6B0: mov     edx, [ebp+0]
0x76B6B3: mov     eax, [edx]
0x76B6B5: push    1
0x76B6B7: mov     ecx, ebp
0x76B6B9: call    eax
0x76B6BB: mov     dword ptr [edi], 0
0x76B6C1: add     edi, 4
0x76B6C4: sub     [esp+1Ch+var_C], 1
0x76B6C9: jnz     short loc_76B680
0x76B6CB: mov     eax, [ebx+614h]
0x76B6D1: test    eax, eax
0x76B6D3: jz      short loc_76B6EC
0x76B6D5: mov     ecx, [eax+0Ch]
0x76B6D8: test    ecx, ecx
0x76B6DA: mov     edx, ds:0B42164h
0x76B6E0: mov     ds:0B42164h, eax
0x76B6E5: mov     [eax+0Ch], edx
0x76B6E8: mov     eax, ecx
0x76B6EA: jnz     short loc_76B6D5
0x76B6EC: xor     edi, edi
0x76B6EE: mov     [ebx+614h], edi
0x76B6F4: mov     [ebx+618h], edi
0x76B6FA: mov     eax, ds:0B42164h
0x76B6FF: cmp     eax, edi
0x76B701: jz      short loc_76B715
0x76B703: mov     esi, [eax+0Ch]
0x76B706: push    eax
0x76B707: call    FormHeapFree
0x76B70C: add     esp, 4
0x76B70F: cmp     esi, edi
0x76B711: mov     eax, esi
0x76B713: jnz     short loc_76B703
0x76B715: mov     ds:0B42164h, edi
0x76B71B: mov     edx, [ebx+608h]
0x76B721: xor     eax, eax
0x76B723: cmp     edx, edi
0x76B725: jbe     short loc_76B73E
0x76B727: mov     esi, [ebx+60Ch]
0x76B72D: mov     ecx, esi
0x76B72F: nop
0x76B730: cmp     [ecx], edi
0x76B732: jnz     short loc_76B754
0x76B734: add     eax, 1
0x76B737: add     ecx, 4
0x76B73A: cmp     eax, edx
0x76B73C: jb      short loc_76B730
0x76B73E: xor     eax, eax
0x76B740: cmp     eax, edi
0x76B742: mov     ebp, eax
0x76B744: jz      short loc_76B7AC
0x76B746: mov     eax, [ebp+0]
0x76B749: test    eax, eax
0x76B74B: mov     edi, [ebp+8]
0x76B74E: jz      short loc_76B759
0x76B750: mov     ebp, eax
0x76B752: jmp     short loc_76B792
0x76B754: mov     eax, [esi+eax*4]
0x76B757: jmp     short loc_76B740
0x76B759: mov     edx, [ebx+604h]
0x76B75F: mov     eax, [ebp+4]
0x76B762: mov     edx, [edx+4]
0x76B765: lea     esi, [ebx+604h]
0x76B76B: push    eax
0x76B76C: mov     ecx, esi
0x76B76E: call    edx
0x76B770: mov     edx, [esi+4]
0x76B773: add     eax, 1
0x76B776: cmp     eax, edx
0x76B778: jnb     short loc_76B790
0x76B77A: mov     ecx, [esi+8]
0x76B77D: lea     ecx, [ecx+eax*4]
0x76B780: mov     ebp, [ecx]
0x76B782: test    ebp, ebp
0x76B784: jnz     short loc_76B792
0x76B786: add     eax, 1
0x76B789: add     ecx, 4
0x76B78C: cmp     eax, edx
0x76B78E: jb      short loc_76B780
0x76B790: xor     ebp, ebp
0x76B792: test    edi, edi
0x76B794: jz      short loc_76B7A8
0x76B796: mov     esi, [edi+20h]
0x76B799: push    edi
0x76B79A: call    FormHeapFree
0x76B79F: add     esp, 4
0x76B7A2: test    esi, esi
0x76B7A4: mov     edi, esi
0x76B7A6: jnz     short loc_76B796
0x76B7A8: test    ebp, ebp
0x76B7AA: jnz     short loc_76B746
0x76B7AC: mov     ecx, ebx
0x76B7AE: call    sub_76B380
0x76B7B3: call    sub_779010
0x76B7B8: call    sub_76DB00
0x76B7BD: lea     ecx, [ebx+8C0h]
0x76B7C3: call    NiTMap_Clear
0x76B7C8: lea     ecx, [ebx+8D0h]
0x76B7CE: call    NiTMap_Clear
0x76B7D3: lea     ecx, [ebx+8E0h]
0x76B7D9: call    NiTMap_Clear
0x76B7DE: push    ebx
0x76B7DF: call    sub_774250
0x76B7E4: mov     ecx, [ebx+888h]
0x76B7EA: add     esp, 4
0x76B7ED: xor     eax, eax
0x76B7EF: test    ecx, ecx
0x76B7F1: jbe     short loc_76B813
0x76B7F3: mov     esi, [ebx+88Ch]
0x76B7F9: mov     edx, esi
0x76B7FB: jmp     short loc_76B800
0x76B7FD: align 10h
0x76B800: cmp     dword ptr [edx], 0
0x76B803: jnz     loc_76BD2D
0x76B809: add     eax, 1
0x76B80C: add     edx, 4
0x76B80F: cmp     eax, ecx
0x76B811: jb      short loc_76B800
0x76B813: xor     eax, eax
0x76B815: test    eax, eax
0x76B817: mov     [esp+1Ch+var_8], eax
0x76B81B: jz      loc_76B911
0x76B821: lea     edx, [esp+1Ch+var_C]
0x76B825: push    edx
0x76B826: lea     eax, [esp+20h+var_4]
0x76B82A: push    eax
0x76B82B: lea     ecx, [esp+24h+var_8]
0x76B82F: push    ecx
0x76B830: lea     ecx, [ebx+884h]
0x76B836: mov     [esp+28h+var_C], 0
0x76B83E: call    sub_7B2600
0x76B843: mov     esi, [esp+1Ch+var_C]
0x76B847: test    esi, esi
0x76B849: jz      loc_76B906
0x76B84F: mov     edx, [esi]
0x76B851: mov     eax, [edx+64h]
0x76B854: xor     edi, edi
0x76B856: mov     ecx, esi
0x76B858: mov     [esp+1Ch+var_C], edi
0x76B85C: call    eax
0x76B85E: test    eax, eax
0x76B860: jbe     short loc_76B8B4
0x76B862: mov     edx, [esi]
0x76B864: mov     eax, [edx+70h]
0x76B867: push    edi
0x76B868: mov     ecx, esi
0x76B86A: call    eax
0x76B86C: mov     ebp, eax
0x76B86E: test    ebp, ebp
0x76B870: jz      short loc_76B89C
0x76B872: mov     edi, [ebp+10h]
0x76B875: test    edi, edi
0x76B877: jz      short loc_76B89C
0x76B879: lea     ecx, [edi+4]
0x76B87C: push    ecx; lpAddend
0x76B87D: call    dword ptr ds:0A2807Ch
0x76B883: test    eax, eax
0x76B885: jnz     short loc_76B895
0x76B887: test    edi, edi
0x76B889: jz      short loc_76B895
0x76B88B: mov     edx, [edi]
0x76B88D: mov     eax, [edx]
0x76B88F: push    1
0x76B891: mov     ecx, edi
0x76B893: call    eax
0x76B895: mov     dword ptr [ebp+10h], 0
0x76B89C: mov     edi, [esp+1Ch+var_C]
0x76B8A0: mov     edx, [esi]
0x76B8A2: mov     eax, [edx+64h]
0x76B8A5: add     edi, 1
0x76B8A8: mov     ecx, esi
0x76B8AA: mov     [esp+1Ch+var_C], edi
0x76B8AE: call    eax
0x76B8B0: cmp     edi, eax
0x76B8B2: jb      short loc_76B862
0x76B8B4: mov     edx, [esi]
0x76B8B6: mov     eax, [edx+74h]
0x76B8B9: mov     ecx, esi
0x76B8BB: call    eax
0x76B8BD: mov     edi, eax
0x76B8BF: test    edi, edi
0x76B8C1: jz      short loc_76B8EE
0x76B8C3: mov     ebp, [edi+10h]
0x76B8C6: test    ebp, ebp
0x76B8C8: jz      short loc_76B8EE
0x76B8CA: lea     ecx, [ebp+4]
0x76B8CD: push    ecx; lpAddend
0x76B8CE: call    dword ptr ds:0A2807Ch
0x76B8D4: test    eax, eax
0x76B8D6: jnz     short loc_76B8E7
0x76B8D8: test    ebp, ebp
0x76B8DA: jz      short loc_76B8E7
0x76B8DC: mov     edx, [ebp+0]
0x76B8DF: mov     eax, [edx]
0x76B8E1: push    1
0x76B8E3: mov     ecx, ebp
0x76B8E5: call    eax
0x76B8E7: mov     dword ptr [edi+10h], 0
0x76B8EE: lea     ecx, [esi+4]
0x76B8F1: push    ecx; lpAddend
0x76B8F2: call    dword ptr ds:0A2807Ch
0x76B8F8: test    eax, eax
0x76B8FA: jnz     short loc_76B906
0x76B8FC: mov     edx, [esi]
0x76B8FE: mov     eax, [edx]
0x76B900: push    1
0x76B902: mov     ecx, esi
0x76B904: call    eax
0x76B906: cmp     [esp+1Ch+var_8], 0
0x76B90B: jnz     loc_76B821
0x76B911: lea     ecx, [ebx+884h]
0x76B917: call    NiTMap_Clear
0x76B91C: mov     esi, [ebx+89Ch]
0x76B922: xor     edi, edi
0x76B924: cmp     esi, edi
0x76B926: jz      short loc_76B94A
0x76B928: lea     ecx, [esi+4]
0x76B92B: push    ecx; lpAddend
0x76B92C: call    dword ptr ds:0A2807Ch
0x76B932: test    eax, eax
0x76B934: jnz     short loc_76B944
0x76B936: cmp     esi, edi
0x76B938: jz      short loc_76B944
0x76B93A: mov     edx, [esi]
0x76B93C: mov     eax, [edx]
0x76B93E: push    1
0x76B940: mov     ecx, esi
0x76B942: call    eax
0x76B944: mov     [ebx+89Ch], edi
0x76B94A: mov     ecx, [ebx+8B0h]
0x76B950: cmp     ecx, edi
0x76B952: jz      short loc_76B95C
0x76B954: mov     edx, [ecx]
0x76B956: mov     eax, [edx]
0x76B958: push    1
0x76B95A: call    eax
0x76B95C: mov     ecx, [ebx+8B4h]
0x76B962: cmp     ecx, edi
0x76B964: mov     [ebx+8B0h], edi
0x76B96A: jz      short loc_76B97A
0x76B96C: mov     edx, [ecx]
0x76B96E: mov     eax, [edx]
0x76B970: push    1
0x76B972: call    eax
0x76B974: mov     [ebx+8B4h], edi
0x76B97A: mov     ecx, [ebx+8A0h]
0x76B980: cmp     ecx, edi
0x76B982: jz      short loc_76B9BE
0x76B984: mov     edx, [ecx]
0x76B986: mov     eax, [ebx+8A4h]
0x76B98C: mov     edx, [edx+8]
0x76B98F: push    eax
0x76B990: call    edx
0x76B992: mov     ecx, [ebx+8A0h]
0x76B998: mov     eax, [ecx]
0x76B99A: mov     edx, [ebx+8A8h]
0x76B9A0: mov     eax, [eax+8]
0x76B9A3: push    edx
0x76B9A4: call    eax
0x76B9A6: mov     ecx, [ebx+8A0h]
0x76B9AC: cmp     ecx, edi
0x76B9AE: jz      short loc_76B9B8
0x76B9B0: mov     edx, [ecx]
0x76B9B2: mov     eax, [edx]
0x76B9B4: push    1
0x76B9B6: call    eax
0x76B9B8: mov     [ebx+8A0h], edi
0x76B9BE: mov     ecx, [ebx+8ACh]
0x76B9C4: cmp     ecx, edi
0x76B9C6: jz      short loc_76B9D0
0x76B9C8: mov     edx, [ecx]
0x76B9CA: mov     eax, [edx]
0x76B9CC: push    1
0x76B9CE: call    eax
0x76B9D0: mov     ecx, [ebx+8B8h]
0x76B9D6: cmp     ecx, edi
0x76B9D8: mov     [ebx+8ACh], edi
0x76B9DE: jz      short loc_76B9E8
0x76B9E0: mov     edx, [ecx]
0x76B9E2: mov     eax, [edx]
0x76B9E4: push    1
0x76B9E6: call    eax
0x76B9E8: mov     esi, [ebx+8BCh]
0x76B9EE: cmp     esi, edi
0x76B9F0: mov     [ebx+8B8h], edi
0x76B9F6: jz      short loc_76BA08
0x76B9F8: mov     ecx, esi
0x76B9FA: call    sub_776780
0x76B9FF: push    esi
0x76BA00: call    FormHeapFree
0x76BA05: add     esp, 4
0x76BA08: mov     [ebx+8BCh], edi
0x76BA0E: xor     ebp, ebp
0x76BA10: mov     esi, ss:dword_B42170[ebp]
0x76BA16: cmp     esi, edi
0x76BA18: jz      short loc_76BA3C
0x76BA1A: lea     ecx, [esi+4]
0x76BA1D: push    ecx; lpAddend
0x76BA1E: call    dword ptr ds:0A2807Ch
0x76BA24: test    eax, eax
0x76BA26: jnz     short loc_76BA36
0x76BA28: cmp     esi, edi
0x76BA2A: jz      short loc_76BA36
0x76BA2C: mov     edx, [esi]
0x76BA2E: mov     eax, [edx]
0x76BA30: push    1
0x76BA32: mov     ecx, esi
0x76BA34: call    eax
0x76BA36: mov     ss:dword_B42170[ebp], edi
0x76BA3C: add     ebp, 4
0x76BA3F: cmp     ebp, 400h
0x76BA45: jb      short loc_76BA10
0x76BA47: mov     eax, [ebx+280h]
0x76BA4D: cmp     eax, edi
0x76BA4F: jz      short loc_76BA5F
0x76BA51: mov     ecx, [eax]
0x76BA53: mov     edx, [ecx+8]
0x76BA56: push    eax
0x76BA57: call    edx
0x76BA59: mov     [ebx+280h], edi
0x76BA5F: mov     eax, [ebx+0A40h]
0x76BA65: push    eax
0x76BA66: call    FormHeapFree
0x76BA6B: mov     ecx, [ebx+0A44h]
0x76BA71: push    ecx
0x76BA72: call    FormHeapFree
0x76BA77: mov     edx, [ebx+0A48h]
0x76BA7D: push    edx
0x76BA7E: call    FormHeapFree
0x76BA83: mov     eax, [ebx+0A50h]
0x76BA89: push    eax
0x76BA8A: call    FormHeapFree
0x76BA8F: add     esp, 10h
0x76BA92: mov     ecx, ebx
0x76BA94: call    sub_7640C0
0x76BA99: mov     ecx, ebx
0x76BA9B: call    sub_764130
0x76BAA0: mov     ecx, [ebx+0ACCh]
0x76BAA6: mov     esi, offset ??_7?$NiTArray@PAX@@6B@; const NiTArray<void *>::`vftable'
0x76BAAB: push    ecx
0x76BAAC: mov     [ebx+0AC8h], esi
0x76BAB2: call    FormHeapFree
0x76BAB7: mov     edx, [ebx+0ABCh]
0x76BABD: push    edx
0x76BABE: mov     dword ptr [ebx+0AB8h], offset ??_7?$NiTArray@P6A_NPAX@Z@@6B@; const NiTArray<bool (*)(void *)>::`vftable'
0x76BAC8: call    FormHeapFree
0x76BACD: mov     eax, [ebx+0AACh]
0x76BAD3: push    eax
0x76BAD4: mov     [ebx+0AA8h], esi
0x76BADA: call    FormHeapFree
0x76BADF: mov     ecx, [ebx+0A9Ch]
0x76BAE5: push    ecx
0x76BAE6: mov     dword ptr [ebx+0A98h], offset ??_7?$NiTArray@P6A_N_NPAX@Z@@6B@; const NiTArray<bool (*)(bool,void *)>::`vftable'
0x76BAF0: call    FormHeapFree
0x76BAF5: mov     esi, [ebx+0A94h]
0x76BAFB: add     esp, 10h
0x76BAFE: cmp     esi, edi
0x76BB00: jz      short loc_76BB1E
0x76BB02: lea     edx, [esi+4]
0x76BB05: push    edx; lpAddend
0x76BB06: call    dword ptr ds:0A2807Ch
0x76BB0C: test    eax, eax
0x76BB0E: jnz     short loc_76BB1E
0x76BB10: cmp     esi, edi
0x76BB12: jz      short loc_76BB1E
0x76BB14: mov     eax, [esi]
0x76BB16: mov     edx, [eax]
0x76BB18: push    1
0x76BB1A: mov     ecx, esi
0x76BB1C: call    edx
0x76BB1E: mov     edi, [ebx+908h]
0x76BB24: lea     esi, [ebx+904h]
0x76BB2A: xor     ebp, ebp
0x76BB2C: cmp     edi, ebp
0x76BB2E: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@PAVNiD3DShaderInterface@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,NiD3DShaderInterface *>::`vftable'
0x76BB34: jz      short loc_76BB48
0x76BB36: mov     edx, [esi]
0x76BB38: mov     eax, edi
0x76BB3A: mov     edi, [edi]
0x76BB3C: push    eax
0x76BB3D: mov     eax, [edx+8]
0x76BB40: mov     ecx, esi
0x76BB42: call    eax
0x76BB44: cmp     edi, ebp
0x76BB46: jnz     short loc_76BB36
0x76BB48: mov     [esi+0Ch], ebp
0x76BB4B: mov     [esi+4], ebp
0x76BB4E: mov     [esi+8], ebp
0x76BB51: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVNiD3DShaderInterface@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiD3DShaderInterface *>::`vftable'
0x76BB57: mov     edi, [ebx+8F8h]
0x76BB5D: cmp     edi, ebp
0x76BB5F: lea     esi, [ebx+8F4h]
0x76BB65: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@V?$NiPointer@VNiDX92DBufferData@@@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,NiPointer<NiDX92DBufferData>>::`vftable'
0x76BB6B: jz      short loc_76BB82
0x76BB6D: lea     ecx, [ecx+0]
0x76BB70: mov     edx, [esi]
0x76BB72: mov     eax, edi
0x76BB74: mov     edi, [edi]
0x76BB76: push    eax
0x76BB77: mov     eax, [edx+8]
0x76BB7A: mov     ecx, esi
0x76BB7C: call    eax
0x76BB7E: cmp     edi, ebp
0x76BB80: jnz     short loc_76BB70
0x76BB82: mov     [esi+0Ch], ebp
0x76BB85: mov     [esi+4], ebp
0x76BB88: mov     [esi+8], ebp
0x76BB8B: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@V?$NiPointer@VNiDX92DBufferData@@@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiPointer<NiDX92DBufferData>>::`vftable'
0x76BB91: mov     esi, [ebx+8F0h]
0x76BB97: cmp     esi, ebp
0x76BB99: jz      short loc_76BBB7
0x76BB9B: lea     ecx, [esi+4]
0x76BB9E: push    ecx; lpAddend
0x76BB9F: call    dword ptr ds:0A2807Ch
0x76BBA5: test    eax, eax
0x76BBA7: jnz     short loc_76BBB7
0x76BBA9: cmp     esi, ebp
0x76BBAB: jz      short loc_76BBB7
0x76BBAD: mov     edx, [esi]
0x76BBAF: mov     eax, [edx]
0x76BBB1: push    1
0x76BBB3: mov     ecx, esi
0x76BBB5: call    eax
0x76BBB7: lea     esi, [ebx+8E0h]
0x76BBBD: mov     ecx, esi
0x76BBBF: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@PAVNiDynamicTexture@@PAVNiDX9DynamicTextureData@@@@6B@; const NiTPointerMap<NiDynamicTexture *,NiDX9DynamicTextureData *>::`vftable'
0x76BBC5: call    NiTMap_Clear
0x76BBCA: mov     ecx, esi
0x76BBCC: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVNiDynamicTexture@@PAVNiDX9DynamicTextureData@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,NiDynamicTexture *,NiDX9DynamicTextureData *>::`vftable'
0x76BBD2: call    NiTMap_Clear
0x76BBD7: mov     ecx, [esi+8]
0x76BBDA: push    ecx
0x76BBDB: call    FormHeapFree
0x76BBE0: lea     esi, [ebx+8D0h]
0x76BBE6: add     esp, 4
0x76BBE9: mov     ecx, esi
0x76BBEB: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@PAVNiRenderedCubeMap@@PAVNiDX9RenderedCubeMapData@@@@6B@; const NiTPointerMap<NiRenderedCubeMap *,NiDX9RenderedCubeMapData *>::`vftable'
0x76BBF1: call    NiTMap_Clear
0x76BBF6: mov     ecx, esi
0x76BBF8: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVNiRenderedCubeMap@@PAVNiDX9RenderedCubeMapData@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,NiRenderedCubeMap *,NiDX9RenderedCubeMapData *>::`vftable'
0x76BBFE: call    NiTMap_Clear
0x76BC03: mov     edx, [esi+8]
0x76BC06: push    edx
0x76BC07: call    FormHeapFree
0x76BC0C: lea     esi, [ebx+8C0h]
0x76BC12: add     esp, 4
0x76BC15: mov     ecx, esi
0x76BC17: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@PAVNiRenderedTexture@@PAVNiDX9RenderedTextureData@@@@6B@; const NiTPointerMap<NiRenderedTexture *,NiDX9RenderedTextureData *>::`vftable'
0x76BC1D: call    NiTMap_Clear
0x76BC22: mov     ecx, esi
0x76BC24: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVNiRenderedTexture@@PAVNiDX9RenderedTextureData@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,NiRenderedTexture *,NiDX9RenderedTextureData *>::`vftable'
0x76BC2A: call    NiTMap_Clear
0x76BC2F: mov     eax, [esi+8]
0x76BC32: push    eax
0x76BC33: call    FormHeapFree
0x76BC38: mov     esi, [ebx+89Ch]
0x76BC3E: add     esp, 4
0x76BC41: cmp     esi, ebp
0x76BC43: jz      short loc_76BC61
0x76BC45: lea     ecx, [esi+4]
0x76BC48: push    ecx; lpAddend
0x76BC49: call    dword ptr ds:0A2807Ch
0x76BC4F: test    eax, eax
0x76BC51: jnz     short loc_76BC61
0x76BC53: cmp     esi, ebp
0x76BC55: jz      short loc_76BC61
0x76BC57: mov     edx, [esi]
0x76BC59: mov     eax, [edx]
0x76BC5B: push    1
0x76BC5D: mov     ecx, esi
0x76BC5F: call    eax
0x76BC61: lea     esi, [ebx+884h]
0x76BC67: mov     ecx, esi
0x76BC69: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@PAUHWND__@@V?$NiPointer@VNiRenderTargetGroup@@@@@@6B@; const NiTPointerMap<HWND__ *,NiPointer<NiRenderTargetGroup>>::`vftable'
0x76BC6F: call    NiTMap_Clear
0x76BC74: mov     ecx, esi
0x76BC76: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAUHWND__@@V?$NiPointer@VNiRenderTargetGroup@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,HWND__ *,NiPointer<NiRenderTargetGroup>>::`vftable'
0x76BC7C: call    NiTMap_Clear
0x76BC81: mov     ecx, [esi+8]
0x76BC84: push    ecx
0x76BC85: call    FormHeapFree
0x76BC8A: add     esp, 4
0x76BC8D: lea     edi, [ebx+874h]
0x76BC93: mov     [esp+1Ch+var_8], 3
0x76BC9B: jmp     short loc_76BCA0
0x76BC9D: align 10h
0x76BCA0: mov     esi, [edi-4]
0x76BCA3: sub     edi, 4
0x76BCA6: cmp     esi, ebp
0x76BCA8: jz      short loc_76BCC6
0x76BCAA: lea     edx, [esi+4]
0x76BCAD: push    edx; lpAddend
0x76BCAE: call    dword ptr ds:0A2807Ch
0x76BCB4: test    eax, eax
0x76BCB6: jnz     short loc_76BCC6
0x76BCB8: cmp     esi, ebp
0x76BCBA: jz      short loc_76BCC6
0x76BCBC: mov     eax, [esi]
0x76BCBE: mov     edx, [eax]
0x76BCC0: push    1
0x76BCC2: mov     ecx, esi
0x76BCC4: call    edx
0x76BCC6: sub     [esp+1Ch+var_8], 1
0x76BCCB: jns     short loc_76BCA0
0x76BCCD: mov     esi, [ebx+624h]
0x76BCD3: cmp     esi, ebp
0x76BCD5: pop     edi
0x76BCD6: jz      short loc_76BCF4
0x76BCD8: lea     eax, [esi+4]
0x76BCDB: push    eax; lpAddend
0x76BCDC: call    dword ptr ds:0A2807Ch
0x76BCE2: test    eax, eax
0x76BCE4: jnz     short loc_76BCF4
0x76BCE6: cmp     esi, ebp
0x76BCE8: jz      short loc_76BCF4
0x76BCEA: mov     edx, [esi]
0x76BCEC: mov     eax, [edx]
0x76BCEE: push    1
0x76BCF0: mov     ecx, esi
0x76BCF2: call    eax
0x76BCF4: lea     esi, [ebx+604h]
0x76BCFA: mov     ecx, esi
0x76BCFC: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@PAVNiVBBlock@@PAVPrePackObject@NiDX9Renderer@@@@6B@; const NiTPointerMap<NiVBBlock *,NiDX9Renderer::PrePackObject *>::`vftable'
0x76BD02: call    NiTMap_Clear
0x76BD07: mov     ecx, esi
0x76BD09: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVNiVBBlock@@PAVPrePackObject@NiDX9Renderer@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,NiVBBlock *,NiDX9Renderer::PrePackObject *>::`vftable'
0x76BD0F: call    NiTMap_Clear
0x76BD14: mov     ecx, [esi+8]
0x76BD17: push    ecx
0x76BD18: call    FormHeapFree
0x76BD1D: add     esp, 4
0x76BD20: pop     esi
0x76BD21: pop     ebp
0x76BD22: mov     ecx, ebx; this
0x76BD24: pop     ebx
0x76BD25: add     esp, 0Ch
0x76BD28: jmp     ??1NiRenderer@@UAE@XZ; NiRenderer::~NiRenderer(void)
0x76BD2D: mov     eax, [esi+eax*4]
0x76BD30: jmp     loc_76B815
