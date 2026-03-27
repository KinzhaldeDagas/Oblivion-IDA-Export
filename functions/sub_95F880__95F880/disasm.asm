0x95F880: push    ebx
0x95F881: push    ebp
0x95F882: mov     ebp, [esp+8+arg_0]
0x95F886: push    esi
0x95F887: mov     ebx, ecx
0x95F889: mov     dword ptr [ebx], offset ??_7NiUnionBV@@6B@; const NiUnionBV::`vftable'
0x95F88F: lea     esi, [ebx+4]
0x95F892: push    edi
0x95F893: xor     edi, edi
0x95F895: mov     dword ptr [esi], offset ??_7?$NiTArray@PAVNiBoundingVolume@@@@6B@; const NiTArray<NiBoundingVolume *>::`vftable'
0x95F89B: mov     [esi+8], di
0x95F89F: mov     word ptr [esi+0Eh], 1
0x95F8A5: mov     [esi+0Ah], di
0x95F8A9: mov     [esi+0Ch], di
0x95F8AD: mov     [esi+4], edi
0x95F8B0: movzx   eax, word ptr [ebp+0Eh]
0x95F8B4: push    eax
0x95F8B5: mov     ecx, esi
0x95F8B7: call    NiTArray_SetSize
0x95F8BC: cmp     [ebx+0Eh], di
0x95F8C0: jbe     short loc_95F8EF
0x95F8C2: mov     ecx, [ebp+8]
0x95F8C5: mov     ecx, [ecx+edi*4]
0x95F8C8: test    ecx, ecx
0x95F8CA: jz      short loc_95F8E4
0x95F8CC: mov     edx, [ecx]
0x95F8CE: mov     eax, [edx+1Ch]
0x95F8D1: call    eax
0x95F8D3: lea     ecx, [esp+10h+arg_0]
0x95F8D7: push    ecx
0x95F8D8: push    edi
0x95F8D9: mov     ecx, esi
0x95F8DB: mov     [esp+18h+arg_0], eax
0x95F8DF: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x95F8E4: movzx   edx, word ptr [ebx+0Eh]
0x95F8E8: add     edi, 1
0x95F8EB: cmp     edi, edx
0x95F8ED: jb      short loc_95F8C2
0x95F8EF: pop     edi
0x95F8F0: pop     esi
0x95F8F1: pop     ebp
0x95F8F2: mov     eax, ebx
0x95F8F4: pop     ebx
0x95F8F5: retn    4
