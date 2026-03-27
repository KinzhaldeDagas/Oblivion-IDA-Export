0x72E390: push    0FFFFFFFFh
0x72E392: push    offset ??0?$NiTPointerMap@IM@@QAE@XZ_SEH
0x72E397: mov     eax, large fs:0
0x72E39D: push    eax
0x72E39E: sub     esp, 64h
0x72E3A1: mov     eax, ds:0B30AACh
0x72E3A6: xor     eax, esp
0x72E3A8: mov     [esp+70h+var_10], eax
0x72E3AC: push    ebx
0x72E3AD: push    ebp
0x72E3AE: push    esi
0x72E3AF: push    edi
0x72E3B0: mov     eax, ds:0B30AACh
0x72E3B5: xor     eax, esp
0x72E3B7: push    eax
0x72E3B8: lea     eax, [esp+84h+var_C]
0x72E3BC: mov     large fs:0, eax
0x72E3C2: mov     [esp+84h+var_34], ecx
0x72E3C6: mov     edi, [esp+84h+arg_0]
0x72E3CD: movzx   eax, word ptr [edi+8]
0x72E3D1: movzx   eax, ax
0x72E3D4: mov     [esp+84h+var_3C], eax
0x72E3D8: movzx   eax, word ptr [edi+40h]
0x72E3DC: mov     ebp, [esp+84h+arg_C]
0x72E3E3: movzx   esi, ax
0x72E3E6: xor     ecx, ecx
0x72E3E8: mov     eax, 25h ; '%'
0x72E3ED: mov     [esp+84h+var_58], eax
0x72E3F1: xor     ebx, ebx
0x72E3F3: mov     edx, 4
0x72E3F8: mul     edx
0x72E3FA: seto    cl
0x72E3FD: mov     [esp+84h+var_38], edi
0x72E401: mov     [esp+84h+var_60], ebp
0x72E405: mov     [esp+84h+var_20], esi
0x72E409: mov     [esp+84h+var_5C], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IM@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,float>::`vftable'
0x72E411: mov     [esp+84h+var_50], ebx
0x72E415: neg     ecx
0x72E417: or      ecx, eax
0x72E419: push    ecx; Size
0x72E41A: call    FormHeapAlloc
0x72E41F: mov     ecx, [esp+88h+var_58]
0x72E423: lea     edx, ds:0[ecx*4]
0x72E42A: push    edx
0x72E42B: push    ebx
0x72E42C: push    eax
0x72E42D: mov     [esp+94h+var_54], eax
0x72E431: call    __memset
0x72E436: add     esp, 10h
0x72E439: mov     [esp+84h+var_5C], offset ??_7?$NiTPointerMap@IM@@6B@; const NiTPointerMap<uint,float>::`vftable'
0x72E441: mov     [esp+84h+var_4], ebx
0x72E448: mov     [esp+84h+var_70], ebx
0x72E44C: mov     [esp+84h+var_6C], ebx
0x72E450: mov     [esp+84h+var_68], ebx
0x72E454: push    1
0x72E456: lea     eax, [esp+88h+var_40]
0x72E45A: push    eax
0x72E45B: lea     ecx, [esp+8Ch+var_44]
0x72E45F: push    ecx
0x72E460: mov     ecx, edi
0x72E462: mov     byte ptr [esp+90h+var_4], 1
0x72E46A: call    sub_729C50
0x72E46F: test    esi, esi
0x72E471: mov     [esp+84h+var_30], ebx
0x72E475: jbe     loc_72E827
0x72E47B: jmp     short loc_72E480
0x72E47D: align 10h
0x72E480: mov     edx, [edi]
0x72E482: mov     edx, [edx+60h]
0x72E485: lea     eax, [esp+84h+var_14]
0x72E489: push    eax
0x72E48A: lea     ecx, [esp+88h+var_18+2]
0x72E48E: push    ecx
0x72E48F: lea     eax, [esp+8Ch+var_18]
0x72E493: push    eax
0x72E494: push    ebx
0x72E495: mov     ecx, edi
0x72E497: call    edx
0x72E499: mov     cx, word ptr [esp+84h+var_18]
0x72E49E: mov     ax, word ptr [esp+84h+var_18+2]
0x72E4A3: cmp     cx, ax
0x72E4A6: jz      loc_72E818
0x72E4AC: mov     dx, word ptr [esp+84h+var_14]
0x72E4B1: cmp     ax, dx
0x72E4B4: jz      loc_72E818
0x72E4BA: cmp     dx, cx
0x72E4BD: jz      loc_72E818
0x72E4C3: push    ebp
0x72E4C4: lea     eax, [esp+88h+var_18]
0x72E4C8: push    eax
0x72E4C9: lea     ecx, [esp+8Ch+var_5C]
0x72E4CD: push    ecx
0x72E4CE: mov     ecx, [esp+90h+var_34]
0x72E4D2: call    sub_72D190
0x72E4D7: movzx   ecx, byte ptr [esp+84h+arg_4]
0x72E4DF: mov     eax, [esp+84h+var_50]
0x72E4E3: cmp     eax, ecx
0x72E4E5: mov     [esp+84h+var_28], eax
0x72E4E9: mov     [esp+84h+var_1C], ecx
0x72E4ED: jbe     loc_72E80F
0x72E4F3: mov     edx, [esp+84h+var_58]
0x72E4F7: xor     ebx, ebx
0x72E4F9: xor     eax, eax
0x72E4FB: cmp     edx, ebx
0x72E4FD: jbe     short loc_72E50F
0x72E4FF: mov     ecx, [esp+84h+var_54]
0x72E503: cmp     [ecx+eax*4], ebx
0x72E506: jnz     short loc_72E57B
0x72E508: add     eax, 1
0x72E50B: cmp     eax, edx
0x72E50D: jb      short loc_72E503
0x72E50F: xor     eax, eax
0x72E511: fld     dword ptr ds:0A32048h
0x72E517: mov     ecx, eax
0x72E519: fstp    [esp+84h+var_64]
0x72E51D: mov     [esp+84h+var_24], ebx
0x72E521: fld     dword ptr [ecx+8]
0x72E524: mov     edi, [ecx+4]
0x72E527: mov     ecx, [ecx]
0x72E529: fstp    [esp+84h+var_48]
0x72E52D: cmp     ecx, ebx
0x72E52F: jnz     short loc_72E560
0x72E531: mov     edx, [esp+84h+var_5C]
0x72E535: mov     eax, [edx+4]
0x72E538: push    edi
0x72E539: lea     ecx, [esp+88h+var_5C]
0x72E53D: call    eax
0x72E53F: mov     edx, [esp+84h+var_58]
0x72E543: add     eax, 1
0x72E546: cmp     eax, edx
0x72E548: jnb     short loc_72E55E
0x72E54A: mov     esi, [esp+84h+var_54]
0x72E54E: mov     edi, edi
0x72E550: mov     ecx, [esi+eax*4]
0x72E553: cmp     ecx, ebx
0x72E555: jnz     short loc_72E560
0x72E557: add     eax, 1
0x72E55A: cmp     eax, edx
0x72E55C: jb      short loc_72E550
0x72E55E: xor     ecx, ecx
0x72E560: fld     [esp+84h+var_48]
0x72E564: fld     [esp+84h+var_64]
0x72E568: fcomp   st(1)
0x72E56A: fnstsw  ax
0x72E56C: test    ah, 41h
0x72E56F: jnz     short loc_72E580
0x72E571: fstp    [esp+84h+var_64]
0x72E575: mov     [esp+84h+var_24], edi
0x72E579: jmp     short loc_72E582
0x72E57B: mov     eax, [ecx+eax*4]
0x72E57E: jmp     short loc_72E511
0x72E580: fstp    st
0x72E582: cmp     ecx, ebx
0x72E584: jnz     short loc_72E521
0x72E586: mov     [esp+84h+var_64], ebx
0x72E58A: cmp     [esp+84h+var_6C], 0
0x72E58F: mov     ecx, [esp+84h+var_64]
0x72E593: movzx   ebp, word ptr [esp+ecx*2+84h+var_18]
0x72E598: mov     [esp+84h+var_2C], ebp
0x72E59C: jnz     short loc_72E5A9
0x72E59E: push    1
0x72E5A0: lea     ecx, [esp+88h+var_70]
0x72E5A4: call    sub_6E8CA0
0x72E5A9: mov     eax, [esp+84h+var_68]
0x72E5AD: mov     edx, [esp+84h+var_70]
0x72E5B1: mov     ecx, [esp+84h+var_60]
0x72E5B5: mov     [edx+eax*4], ebp
0x72E5B8: mov     edx, [esp+84h+var_40]
0x72E5BC: movzx   ebx, word ptr [edx+ebp*2]
0x72E5C0: add     eax, 1
0x72E5C3: test    ebx, ebx
0x72E5C5: mov     [esp+84h+var_68], eax
0x72E5C9: lea     eax, [ebp+ebp*2+0]
0x72E5CD: lea     edi, [ecx+eax*4]
0x72E5D0: mov     [esp+84h+var_48], edi
0x72E5D4: mov     [esp+84h+var_4C], ebx
0x72E5D8: jbe     loc_72E67B
0x72E5DE: jmp     short loc_72E5E4
0x72E5E0: mov     edi, [esp+84h+var_48]
0x72E5E4: mov     eax, [esp+84h+var_44]
0x72E5E8: movzx   esi, word ptr [eax+ebx*2-2]
0x72E5ED: mov     ecx, [esp+84h+var_38]
0x72E5F1: push    1
0x72E5F3: push    ebp
0x72E5F4: push    esi
0x72E5F5: call    sub_728440
0x72E5FA: test    eax, eax
0x72E5FC: jnz     short loc_72E677
0x72E5FE: mov     edx, [esp+84h+var_60]
0x72E602: lea     ecx, [esi+esi*2]
0x72E605: lea     eax, [edx+ecx*4]
0x72E608: mov     edx, [edi+8]
0x72E60B: cmp     edx, [eax+8]
0x72E60E: jnz     short loc_72E66E
0x72E610: xor     ecx, ecx
0x72E612: test    edx, edx
0x72E614: jbe     short loc_72E635
0x72E616: mov     eax, [eax]
0x72E618: mov     edi, [edi]
0x72E61A: sub     edi, eax
0x72E61C: lea     esp, [esp+0]
0x72E620: mov     ebp, [eax+edi]
0x72E623: cmp     ebp, [eax]
0x72E625: jnz     short loc_72E66A
0x72E627: add     ecx, 1
0x72E62A: add     eax, 8
0x72E62D: cmp     ecx, edx
0x72E62F: jb      short loc_72E620
0x72E631: mov     ebp, [esp+84h+var_2C]
0x72E635: mov     eax, [esp+84h+var_6C]
0x72E639: cmp     [esp+84h+var_68], eax
0x72E63D: jnz     short loc_72E656
0x72E63F: test    eax, eax
0x72E641: jbe     short loc_72E647
0x72E643: add     eax, eax
0x72E645: jmp     short loc_72E64C
0x72E647: mov     eax, 1
0x72E64C: push    eax
0x72E64D: lea     ecx, [esp+88h+var_70]
0x72E651: call    sub_6E8CA0
0x72E656: mov     eax, [esp+84h+var_68]
0x72E65A: mov     ecx, [esp+84h+var_70]
0x72E65E: mov     [ecx+eax*4], esi
0x72E661: add     eax, 1
0x72E664: mov     [esp+84h+var_68], eax
0x72E668: jmp     short loc_72E66E
0x72E66A: mov     ebp, [esp+84h+var_2C]
0x72E66E: sub     ebx, 1
0x72E671: jnz     loc_72E5E0
0x72E677: mov     ebx, [esp+84h+var_4C]
0x72E67B: mov     eax, [esp+84h+var_3C]
0x72E67F: add     eax, 0FFFFFFFFh
0x72E682: cmp     ebx, eax
0x72E684: jnb     loc_72E72E
0x72E68A: mov     edx, [esp+84h+var_44]
0x72E68E: mov     eax, [esp+84h+var_4C]
0x72E692: movzx   edi, word ptr [edx+eax*2+2]
0x72E697: mov     ecx, [esp+84h+var_38]
0x72E69B: push    1
0x72E69D: push    ebp
0x72E69E: push    edi
0x72E69F: call    sub_728440
0x72E6A4: test    eax, eax
0x72E6A6: jnz     loc_72E72E
0x72E6AC: mov     edx, [esp+84h+var_60]
0x72E6B0: mov     eax, [esp+84h+var_48]
0x72E6B4: lea     ecx, [edi+edi*2]
0x72E6B7: lea     esi, [edx+ecx*4]
0x72E6BA: mov     edx, [eax+8]
0x72E6BD: cmp     edx, [esi+8]
0x72E6C0: jnz     short loc_72E714
0x72E6C2: xor     ecx, ecx
0x72E6C4: test    edx, edx
0x72E6C6: jbe     short loc_72E6E1
0x72E6C8: mov     eax, [eax]
0x72E6CA: mov     esi, [esi]
0x72E6CC: sub     esi, eax
0x72E6CE: mov     edi, edi
0x72E6D0: mov     ebx, [eax]
0x72E6D2: cmp     ebx, [esi+eax]
0x72E6D5: jnz     short loc_72E714
0x72E6D7: add     ecx, 1
0x72E6DA: add     eax, 8
0x72E6DD: cmp     ecx, edx
0x72E6DF: jb      short loc_72E6D0
0x72E6E1: mov     eax, [esp+84h+var_6C]
0x72E6E5: cmp     [esp+84h+var_68], eax
0x72E6E9: jnz     short loc_72E702
0x72E6EB: test    eax, eax
0x72E6ED: jbe     short loc_72E6F3
0x72E6EF: add     eax, eax
0x72E6F1: jmp     short loc_72E6F8
0x72E6F3: mov     eax, 1
0x72E6F8: push    eax
0x72E6F9: lea     ecx, [esp+88h+var_70]
0x72E6FD: call    sub_6E8CA0
0x72E702: mov     eax, [esp+84h+var_68]
0x72E706: mov     ecx, [esp+84h+var_70]
0x72E70A: mov     [ecx+eax*4], edi
0x72E70D: add     eax, 1
0x72E710: mov     [esp+84h+var_68], eax
0x72E714: mov     ecx, [esp+84h+var_4C]
0x72E718: mov     eax, [esp+84h+var_3C]
0x72E71C: add     ecx, 1
0x72E71F: add     eax, 0FFFFFFFFh
0x72E722: cmp     ecx, eax
0x72E724: mov     [esp+84h+var_4C], ecx
0x72E728: jb      loc_72E68A
0x72E72E: xor     edi, edi
0x72E730: cmp     [esp+84h+var_68], edi
0x72E734: jbe     short loc_72E7AC
0x72E736: mov     ebx, [esp+84h+var_70]
0x72E73A: mov     eax, [ebx+edi*4]
0x72E73D: lea     edx, [eax+eax*2]
0x72E740: mov     eax, [esp+84h+var_60]
0x72E744: mov     esi, [eax+edx*4+8]
0x72E748: lea     ecx, [eax+edx*4]
0x72E74B: xor     eax, eax
0x72E74D: test    esi, esi
0x72E74F: jbe     short loc_72E7A3
0x72E751: mov     edx, [ecx]
0x72E753: mov     ebp, [esp+84h+var_24]
0x72E757: cmp     [edx], ebp
0x72E759: jz      short loc_72E767
0x72E75B: add     eax, 1
0x72E75E: add     edx, 8
0x72E761: cmp     eax, esi
0x72E763: jb      short loc_72E753
0x72E765: jmp     short loc_72E7A3
0x72E767: add     esi, 0FFFFFFFFh
0x72E76A: cmp     eax, esi
0x72E76C: mov     edx, eax
0x72E76E: jnb     short loc_72E78E
0x72E770: mov     eax, [ecx]
0x72E772: mov     esi, [eax+edx*8+8]
0x72E776: lea     eax, [eax+edx*8]
0x72E779: mov     [eax], esi
0x72E77B: mov     esi, [eax+0Ch]
0x72E77E: mov     [eax+4], esi
0x72E781: mov     eax, [ecx+8]
0x72E784: add     edx, 1
0x72E787: sub     eax, 1
0x72E78A: cmp     edx, eax
0x72E78C: jb      short loc_72E770
0x72E78E: or      esi, 0FFFFFFFFh
0x72E791: add     [ecx+8], esi
0x72E794: cmp     dword ptr [ecx+8], 0
0x72E798: jz      loc_72E8F7
0x72E79E: call    sub_72CD30
0x72E7A3: add     edi, 1
0x72E7A6: cmp     edi, [esp+84h+var_68]
0x72E7AA: jb      short loc_72E736
0x72E7AC: mov     eax, [esp+84h+var_64]
0x72E7B0: add     eax, 1
0x72E7B3: cmp     eax, 3
0x72E7B6: mov     [esp+84h+var_68], 0
0x72E7BE: mov     [esp+84h+var_64], eax
0x72E7C2: jb      loc_72E58A
0x72E7C8: mov     eax, [esp+84h+var_28]
0x72E7CC: sub     eax, 1
0x72E7CF: cmp     eax, [esp+84h+var_1C]
0x72E7D3: mov     [esp+84h+var_28], eax
0x72E7D7: jz      short loc_72E7FF
0x72E7D9: lea     ecx, [esp+84h+var_5C]
0x72E7DD: call    NiTMap_Clear
0x72E7E2: mov     ecx, [esp+84h+var_60]
0x72E7E6: push    ecx
0x72E7E7: mov     ecx, [esp+88h+var_34]
0x72E7EB: lea     edx, [esp+88h+var_18]
0x72E7EF: push    edx
0x72E7F0: lea     eax, [esp+8Ch+var_5C]
0x72E7F4: push    eax
0x72E7F5: call    sub_72D190
0x72E7FA: jmp     loc_72E4F3
0x72E7FF: mov     ebx, [esp+84h+var_30]
0x72E803: mov     esi, [esp+84h+var_20]
0x72E807: mov     ebp, [esp+84h+var_60]
0x72E80B: mov     edi, [esp+84h+var_38]
0x72E80F: lea     ecx, [esp+84h+var_5C]
0x72E813: call    NiTMap_Clear
0x72E818: add     ebx, 1
0x72E81B: cmp     ebx, esi
0x72E81D: mov     [esp+84h+var_30], ebx
0x72E821: jb      loc_72E480
0x72E827: mov     eax, [esp+84h+var_3C]
0x72E82B: test    eax, eax
0x72E82D: jbe     short loc_72E86E
0x72E82F: movzx   ebx, [esp+84h+arg_8]
0x72E837: lea     esi, [ebp+8]
0x72E83A: mov     ebp, eax
0x72E83C: lea     esp, [esp+0]
0x72E840: mov     eax, [esi]
0x72E842: cmp     eax, ebx
0x72E844: jbe     short loc_72E866
0x72E846: mov     ecx, [esi-8]
0x72E849: push    offset sub_72C3B0
0x72E84E: push    8
0x72E850: lea     edi, [esi-8]
0x72E853: push    eax
0x72E854: push    ecx
0x72E855: call    unknown_libname_60
0x72E85A: add     esp, 10h
0x72E85D: mov     ecx, edi
0x72E85F: mov     [esi], ebx
0x72E861: call    sub_72CD30
0x72E866: add     esi, 0Ch
0x72E869: sub     ebp, 1
0x72E86C: jnz     short loc_72E840
0x72E86E: mov     edx, [esp+84h+var_44]
0x72E872: push    edx
0x72E873: call    FormHeapFree
0x72E878: mov     eax, [esp+88h+var_40]
0x72E87C: push    eax
0x72E87D: call    FormHeapFree
0x72E882: mov     ecx, [esp+8Ch+var_70]
0x72E886: push    ecx
0x72E887: call    FormHeapFree
0x72E88C: add     esp, 0Ch
0x72E88F: mov     [esp+84h+var_5C], offset ??_7?$NiTPointerMap@IM@@6B@; const NiTPointerMap<uint,float>::`vftable'
0x72E897: lea     ecx, [esp+84h+var_5C]
0x72E89B: mov     [esp+84h+var_4], 3
0x72E8A6: call    NiTMap_Clear
0x72E8AB: lea     ecx, [esp+84h+var_5C]
0x72E8AF: mov     [esp+84h+var_4], 0FFFFFFFFh
0x72E8BA: mov     [esp+84h+var_5C], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IM@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,float>::`vftable'
0x72E8C2: call    NiTMap_Clear
0x72E8C7: mov     edx, [esp+84h+var_54]
0x72E8CB: push    edx
0x72E8CC: call    FormHeapFree
0x72E8D1: add     esp, 4
0x72E8D4: mov     al, 1
0x72E8D6: mov     ecx, dword ptr [esp+84h+var_C]
0x72E8DA: mov     large fs:0, ecx
0x72E8E1: pop     ecx
0x72E8E2: pop     edi
0x72E8E3: pop     esi
0x72E8E4: pop     ebp
0x72E8E5: pop     ebx
0x72E8E6: mov     ecx, [esp+70h+var_10]
0x72E8EA: xor     ecx, esp
0x72E8EC: call    @__security_check_cookie@4; __security_check_cookie(x)
0x72E8F1: add     esp, 70h
0x72E8F4: retn    10h
0x72E8F7: mov     ecx, [esp+84h+var_44]
0x72E8FB: push    ecx
0x72E8FC: call    FormHeapFree
0x72E901: mov     edx, [esp+88h+var_40]
0x72E905: push    edx
0x72E906: call    FormHeapFree
0x72E90B: push    ebx
0x72E90C: call    FormHeapFree
0x72E911: add     esp, 0Ch
0x72E914: mov     [esp+84h+var_5C], offset ??_7?$NiTPointerMap@IM@@6B@; const NiTPointerMap<uint,float>::`vftable'
0x72E91C: lea     ecx, [esp+84h+var_5C]
0x72E920: mov     [esp+84h+var_4], 2
0x72E92B: call    NiTMap_Clear
0x72E930: lea     ecx, [esp+84h+var_5C]
0x72E934: mov     [esp+84h+var_4], esi
0x72E93B: mov     [esp+84h+var_5C], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IM@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,float>::`vftable'
0x72E943: call    NiTMap_Clear
0x72E948: mov     eax, [esp+84h+var_54]
0x72E94C: push    eax
0x72E94D: call    FormHeapFree
0x72E952: add     esp, 4
0x72E955: xor     al, al
0x72E957: jmp     loc_72E8D6
