0x7AC2C0: push    0FFFFFFFFh
0x7AC2C2: push    offset ??1BSShaderAccumulator@@UAE@XZ_SEH
0x7AC2C7: mov     eax, large fs:0
0x7AC2CD: push    eax
0x7AC2CE: sub     esp, 8
0x7AC2D1: push    ebx
0x7AC2D2: push    ebp
0x7AC2D3: push    esi
0x7AC2D4: push    edi
0x7AC2D5: mov     eax, ds:0B30AACh
0x7AC2DA: xor     eax, esp
0x7AC2DC: push    eax
0x7AC2DD: lea     eax, [esp+28h+var_C]
0x7AC2E1: mov     large fs:0, eax
0x7AC2E7: mov     ebx, ecx
0x7AC2E9: mov     [esp+28h+var_10], ebx
0x7AC2ED: mov     dword ptr [ebx], offset ??_7BSShaderAccumulator@@6B@; const BSShaderAccumulator::`vftable'
0x7AC2F3: mov     [esp+28h+var_4], 10h
0x7AC2FB: lea     edi, [ebx+108h]
0x7AC301: mov     ebp, 1A3h
0x7AC306: xor     esi, esi
0x7AC308: lea     ecx, [edi-4]
0x7AC30B: call    sub_7A9C30
0x7AC310: mov     eax, [edi]
0x7AC312: mov     [edi+8], eax
0x7AC315: mov     [edi], esi
0x7AC317: mov     [edi+4], esi
0x7AC31A: mov     [edi+0Ch], esi
0x7AC31D: add     edi, 14h
0x7AC320: sub     ebp, 1
0x7AC323: jnz     short loc_7AC308
0x7AC325: lea     edi, [ebx+2200h]
0x7AC32B: mov     ecx, edi
0x7AC32D: call    sub_7A9C30
0x7AC332: mov     ecx, [edi+4]
0x7AC335: mov     [edi+0Ch], ecx
0x7AC338: mov     [edi+4], esi
0x7AC33B: mov     [edi+8], esi
0x7AC33E: mov     [edi+10h], esi
0x7AC341: lea     edi, [ebx+2214h]
0x7AC347: mov     ecx, edi
0x7AC349: call    sub_7A9C30
0x7AC34E: mov     edx, [edi+4]
0x7AC351: mov     [edi+0Ch], edx
0x7AC354: mov     [edi+4], esi
0x7AC357: mov     [edi+8], esi
0x7AC35A: mov     [edi+10h], esi
0x7AC35D: cmp     [ebx+48h], esi
0x7AC360: jz      short loc_7AC3B9
0x7AC362: lea     ebp, [ebx+3Ch]
0x7AC365: mov     eax, [ebp+4]
0x7AC368: mov     ecx, [eax]
0x7AC36A: cmp     ecx, esi
0x7AC36C: mov     [ebp+4], ecx
0x7AC36F: jz      short loc_7AC376
0x7AC371: mov     [ecx+4], esi
0x7AC374: jmp     short loc_7AC379
0x7AC376: mov     [ebp+8], esi
0x7AC379: mov     edx, [ebp+0]
0x7AC37C: mov     edi, [eax+8]
0x7AC37F: push    eax
0x7AC380: mov     eax, [edx+8]
0x7AC383: mov     ecx, ebp
0x7AC385: call    eax
0x7AC387: add     dword ptr [ebp+0Ch], 0FFFFFFFFh
0x7AC38B: cmp     edi, esi
0x7AC38D: jz      short loc_7AC3B4
0x7AC38F: mov     ecx, edi
0x7AC391: call    sub_7A9C30
0x7AC396: mov     ecx, [edi+4]
0x7AC399: mov     [edi+0Ch], ecx
0x7AC39C: mov     [edi+4], esi
0x7AC39F: mov     [edi+8], esi
0x7AC3A2: mov     [edi+10h], esi
0x7AC3A5: push    edi
0x7AC3A6: mov     dword ptr [edi], offset ??_7?$BSTPersistentList@V?$NiTPointerAllocator@I@@PAVRenderPass@BSShaderProperty@@@@6B@; const BSTPersistentList<NiTPointerAllocator<uint>,BSShaderProperty::RenderPass *>::`vftable'
0x7AC3AC: call    FormHeapFree
0x7AC3B1: add     esp, 4
0x7AC3B4: cmp     [ebx+48h], esi
0x7AC3B7: jnz     short loc_7AC365
0x7AC3B9: mov     [ebx+5Ch], esi
0x7AC3BC: mov     [ebx+60h], esi
0x7AC3BF: cmp     [ebx+58h], esi
0x7AC3C2: jz      short loc_7AC41B
0x7AC3C4: lea     ebp, [ebx+4Ch]
0x7AC3C7: mov     eax, [ebp+4]
0x7AC3CA: mov     ecx, [eax]
0x7AC3CC: cmp     ecx, esi
0x7AC3CE: mov     [ebp+4], ecx
0x7AC3D1: jz      short loc_7AC3D8
0x7AC3D3: mov     [ecx+4], esi
0x7AC3D6: jmp     short loc_7AC3DB
0x7AC3D8: mov     [ebp+8], esi
0x7AC3DB: mov     edx, [ebp+0]
0x7AC3DE: mov     edi, [eax+8]
0x7AC3E1: push    eax
0x7AC3E2: mov     eax, [edx+8]
0x7AC3E5: mov     ecx, ebp
0x7AC3E7: call    eax
0x7AC3E9: add     dword ptr [ebp+0Ch], 0FFFFFFFFh
0x7AC3ED: cmp     edi, esi
0x7AC3EF: jz      short loc_7AC416
0x7AC3F1: mov     ecx, edi
0x7AC3F3: call    sub_7A9C30
0x7AC3F8: mov     ecx, [edi+4]
0x7AC3FB: mov     [edi+0Ch], ecx
0x7AC3FE: mov     [edi+4], esi
0x7AC401: mov     [edi+8], esi
0x7AC404: mov     [edi+10h], esi
0x7AC407: push    edi
0x7AC408: mov     dword ptr [edi], offset ??_7?$BSTPersistentList@V?$NiTPointerAllocator@I@@PAVRenderPass@BSShaderProperty@@@@6B@; const BSTPersistentList<NiTPointerAllocator<uint>,BSShaderProperty::RenderPass *>::`vftable'
0x7AC40E: call    FormHeapFree
0x7AC413: add     esp, 4
0x7AC416: cmp     [ebx+58h], esi
0x7AC419: jnz     short loc_7AC3C7
0x7AC41B: cmp     [ebx+2260h], esi
0x7AC421: jz      short loc_7AC45A
0x7AC423: lea     edi, [ebx+2254h]
0x7AC429: lea     esp, [esp+0]
0x7AC430: mov     ecx, [edi+4]
0x7AC433: mov     eax, [ecx]
0x7AC435: cmp     eax, esi
0x7AC437: mov     [edi+4], eax
0x7AC43A: jz      short loc_7AC441
0x7AC43C: mov     [eax+4], esi
0x7AC43F: jmp     short loc_7AC444
0x7AC441: mov     [edi+8], esi
0x7AC444: mov     edx, [edi]
0x7AC446: mov     eax, [edx+8]
0x7AC449: push    ecx
0x7AC44A: mov     ecx, edi
0x7AC44C: call    eax
0x7AC44E: add     dword ptr [edi+0Ch], 0FFFFFFFFh
0x7AC452: cmp     [ebx+2260h], esi
0x7AC458: jnz     short loc_7AC430
0x7AC45A: cmp     [ebx+2250h], esi
0x7AC460: jz      short loc_7AC492
0x7AC462: lea     edi, [ebx+2244h]
0x7AC468: mov     ecx, [edi+4]
0x7AC46B: mov     eax, [ecx]
0x7AC46D: cmp     eax, esi
0x7AC46F: mov     [edi+4], eax
0x7AC472: jz      short loc_7AC479
0x7AC474: mov     [eax+4], esi
0x7AC477: jmp     short loc_7AC47C
0x7AC479: mov     [edi+8], esi
0x7AC47C: mov     edx, [edi]
0x7AC47E: mov     eax, [edx+8]
0x7AC481: push    ecx
0x7AC482: mov     ecx, edi
0x7AC484: call    eax
0x7AC486: add     dword ptr [edi+0Ch], 0FFFFFFFFh
0x7AC48A: cmp     [ebx+2250h], esi
0x7AC490: jnz     short loc_7AC468
0x7AC492: mov     [ebx+74h], esi
0x7AC495: cmp     [ebx+70h], esi
0x7AC498: jz      short loc_7AC517
0x7AC49A: lea     ebx, [ebx+0]
0x7AC4A0: mov     eax, [ebx+68h]
0x7AC4A3: mov     ecx, [eax]
0x7AC4A5: cmp     ecx, esi
0x7AC4A7: lea     ebp, [ebx+64h]
0x7AC4AA: mov     [ebp+4], ecx
0x7AC4AD: jz      short loc_7AC4B4
0x7AC4AF: mov     [ecx+4], esi
0x7AC4B2: jmp     short loc_7AC4B7
0x7AC4B4: mov     [ebp+8], esi
0x7AC4B7: mov     edx, [ebp+0]
0x7AC4BA: mov     edi, [eax+8]
0x7AC4BD: push    eax
0x7AC4BE: mov     eax, [edx+8]
0x7AC4C1: mov     ecx, ebp
0x7AC4C3: call    eax
0x7AC4C5: add     dword ptr [ebp+0Ch], 0FFFFFFFFh
0x7AC4C9: cmp     edi, esi
0x7AC4CB: jz      short loc_7AC512
0x7AC4CD: mov     ecx, edi
0x7AC4CF: call    sub_7A9C30
0x7AC4D4: mov     ecx, [edi+4]
0x7AC4D7: mov     [edi+0Ch], ecx
0x7AC4DA: lea     ebp, [edi+14h]
0x7AC4DD: mov     ecx, ebp
0x7AC4DF: mov     [edi+4], esi
0x7AC4E2: mov     [edi+8], esi
0x7AC4E5: mov     [edi+10h], esi
0x7AC4E8: call    sub_7A9C30
0x7AC4ED: mov     edx, [ebp+4]
0x7AC4F0: mov     [ebp+0Ch], edx
0x7AC4F3: mov     [ebp+4], esi
0x7AC4F6: mov     [ebp+8], esi
0x7AC4F9: mov     [ebp+10h], esi
0x7AC4FC: push    edi
0x7AC4FD: mov     dword ptr [ebp+0], offset ??_7?$BSTPersistentList@V?$NiTPointerAllocator@I@@PAVRenderPass@BSShaderProperty@@@@6B@; const BSTPersistentList<NiTPointerAllocator<uint>,BSShaderProperty::RenderPass *>::`vftable'
0x7AC504: mov     dword ptr [edi], offset ??_7?$BSTPersistentList@V?$NiTPointerAllocator@I@@PAVNiGeometry@@@@6B@; const BSTPersistentList<NiTPointerAllocator<uint>,NiGeometry *>::`vftable'
0x7AC50A: call    FormHeapFree
0x7AC50F: add     esp, 4
0x7AC512: cmp     [ebx+70h], esi
0x7AC515: jnz     short loc_7AC4A0
0x7AC517: mov     edi, [ebx+78h]
0x7AC51A: cmp     edi, esi
0x7AC51C: jz      short loc_7AC54A
0x7AC51E: mov     ecx, edi
0x7AC520: call    sub_7A9C30
0x7AC525: mov     eax, [edi+4]
0x7AC528: mov     [edi+0Ch], eax
0x7AC52B: mov     [edi+4], esi
0x7AC52E: mov     [edi+8], esi
0x7AC531: mov     [edi+10h], esi
0x7AC534: mov     eax, [ebx+78h]
0x7AC537: cmp     eax, esi
0x7AC539: jz      short loc_7AC54A
0x7AC53B: push    eax
0x7AC53C: mov     dword ptr [eax], offset ??_7?$BSTPersistentList@V?$NiTPointerAllocator@I@@PAVRenderPass@BSShaderProperty@@@@6B@; const BSTPersistentList<NiTPointerAllocator<uint>,BSShaderProperty::RenderPass *>::`vftable'
0x7AC542: call    FormHeapFree
0x7AC547: add     esp, 4
0x7AC54A: lea     edi, [ebx+90h]
0x7AC550: mov     ecx, edi
0x7AC552: call    sub_7A9C30
0x7AC557: mov     ecx, [edi+4]
0x7AC55A: mov     [edi+0Ch], ecx
0x7AC55D: mov     [edi+4], esi
0x7AC560: mov     [edi+8], esi
0x7AC563: mov     [edi+10h], esi
0x7AC566: lea     edi, [ebx+7Ch]
0x7AC569: mov     ecx, edi
0x7AC56B: call    sub_7A9C30
0x7AC570: mov     edx, [edi+4]
0x7AC573: mov     [edi+0Ch], edx
0x7AC576: mov     [edi+4], esi
0x7AC579: mov     [edi+8], esi
0x7AC57C: mov     [edi+10h], esi
0x7AC57F: lea     edi, [ebx+0A4h]
0x7AC585: mov     ecx, edi
0x7AC587: call    sub_7A9C30
0x7AC58C: mov     eax, [edi+4]
0x7AC58F: mov     [edi+0Ch], eax
0x7AC592: mov     [edi+4], esi
0x7AC595: mov     [edi+8], esi
0x7AC598: mov     [edi+10h], esi
0x7AC59B: mov     ebp, [ebx+21D4h]
0x7AC5A1: cmp     ebp, esi
0x7AC5A3: jz      short loc_7AC5F6
0x7AC5A5: lea     eax, [ebp+8]
0x7AC5A8: mov     eax, [eax]
0x7AC5AA: cmp     eax, esi
0x7AC5AC: mov     ebp, [ebp+0]
0x7AC5AF: mov     [esp+28h+var_14], eax
0x7AC5B3: jz      short loc_7AC5F2
0x7AC5B5: mov     edi, [eax+4]
0x7AC5B8: cmp     edi, esi
0x7AC5BA: jz      short loc_7AC5E9
0x7AC5BC: mov     ecx, edi
0x7AC5BE: call    sub_7A9C30
0x7AC5C3: mov     ecx, [edi+4]
0x7AC5C6: mov     edx, [esp+28h+var_14]
0x7AC5CA: mov     [edi+0Ch], ecx
0x7AC5CD: mov     [edi+4], esi
0x7AC5D0: mov     [edi+8], esi
0x7AC5D3: mov     [edi+10h], esi
0x7AC5D6: mov     ecx, [edx+4]
0x7AC5D9: cmp     ecx, esi
0x7AC5DB: jz      short loc_7AC5E5
0x7AC5DD: mov     eax, [ecx]
0x7AC5DF: mov     edx, [eax]
0x7AC5E1: push    1
0x7AC5E3: call    edx
0x7AC5E5: mov     eax, [esp+28h+var_14]
0x7AC5E9: push    eax
0x7AC5EA: call    FormHeapFree
0x7AC5EF: add     esp, 4
0x7AC5F2: cmp     ebp, esi
0x7AC5F4: jnz     short loc_7AC5A5
0x7AC5F6: mov     edi, [ebx+21D4h]
0x7AC5FC: cmp     edi, esi
0x7AC5FE: lea     ebp, [ebx+21D0h]
0x7AC604: jz      short loc_7AC619
0x7AC606: mov     edx, [ebp+0]
0x7AC609: mov     eax, edi
0x7AC60B: mov     edi, [edi]
0x7AC60D: push    eax
0x7AC60E: mov     eax, [edx+8]
0x7AC611: mov     ecx, ebp
0x7AC613: call    eax
0x7AC615: cmp     edi, esi
0x7AC617: jnz     short loc_7AC606
0x7AC619: mov     [ebp+0Ch], esi
0x7AC61C: mov     [ebp+4], esi
0x7AC61F: mov     [ebp+8], esi
0x7AC622: mov     eax, [ebx+21E8h]
0x7AC628: push    eax
0x7AC629: call    FormHeapFree
0x7AC62E: add     esp, 4
0x7AC631: cmp     [ebx+2238h], esi
0x7AC637: jz      short loc_7AC692
0x7AC639: lea     edi, [ebx+222Ch]
0x7AC63F: nop
0x7AC640: mov     ecx, [ebx+2230h]
0x7AC646: mov     ebp, [ecx+8]
0x7AC649: cmp     ebp, esi
0x7AC64B: jz      short loc_7AC668
0x7AC64D: mov     eax, [ebp+14h]
0x7AC650: cmp     eax, esi
0x7AC652: jz      short loc_7AC65F
0x7AC654: mov     edx, [eax]
0x7AC656: push    eax
0x7AC657: mov     eax, [edx+8]
0x7AC65A: call    eax
0x7AC65C: mov     [ebp+14h], esi
0x7AC65F: push    ebp
0x7AC660: call    FormHeapFree
0x7AC665: add     esp, 4
0x7AC668: mov     ecx, [edi+4]
0x7AC66B: mov     eax, [ecx]
0x7AC66D: cmp     eax, esi
0x7AC66F: mov     [edi+4], eax
0x7AC672: jz      short loc_7AC679
0x7AC674: mov     [eax+4], esi
0x7AC677: jmp     short loc_7AC67C
0x7AC679: mov     [edi+8], esi
0x7AC67C: mov     edx, [edi]
0x7AC67E: mov     eax, [edx+8]
0x7AC681: push    ecx
0x7AC682: mov     ecx, edi
0x7AC684: call    eax
0x7AC686: add     dword ptr [edi+0Ch], 0FFFFFFFFh
0x7AC68A: cmp     [ebx+2238h], esi
0x7AC690: jnz     short loc_7AC640
0x7AC692: mov     edi, [ebx+2228h]
0x7AC698: cmp     edi, esi
0x7AC69A: jz      short loc_7AC6BE
0x7AC69C: lea     ecx, [edi+4]
0x7AC69F: push    ecx; lpAddend
0x7AC6A0: call    dword ptr ds:0A2807Ch
0x7AC6A6: test    eax, eax
0x7AC6A8: jnz     short loc_7AC6B8
0x7AC6AA: cmp     edi, esi
0x7AC6AC: jz      short loc_7AC6B8
0x7AC6AE: mov     edx, [edi]
0x7AC6B0: mov     eax, [edx]
0x7AC6B2: push    1
0x7AC6B4: mov     ecx, edi
0x7AC6B6: call    eax
0x7AC6B8: mov     [ebx+2228h], esi
0x7AC6BE: lea     edi, [ebx+0C8h]
0x7AC6C4: mov     ebp, 3
0x7AC6C9: lea     esp, [esp+0]
0x7AC6D0: mov     eax, [edi]
0x7AC6D2: cmp     eax, esi
0x7AC6D4: jz      short loc_7AC6E0
0x7AC6D6: mov     ecx, [eax]
0x7AC6D8: mov     edx, [ecx+8]
0x7AC6DB: push    eax
0x7AC6DC: call    edx
0x7AC6DE: mov     [edi], esi
0x7AC6E0: add     edi, 14h
0x7AC6E3: sub     ebp, 1
0x7AC6E6: jnz     short loc_7AC6D0
0x7AC6E8: mov     edi, [ebx+2264h]
0x7AC6EE: cmp     edi, esi
0x7AC6F0: jz      short loc_7AC708
0x7AC6F2: mov     ecx, edi; void *
0x7AC6F4: call    sub_6C4090
0x7AC6F9: push    edi
0x7AC6FA: call    FormHeapFree
0x7AC6FF: add     esp, 4
0x7AC702: mov     [ebx+2264h], esi
0x7AC708: lea     edi, [ebx+2254h]
0x7AC70E: mov     [esp+28h+var_14], edi
0x7AC712: mov     dword ptr [edi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@PAVNiGeometry@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,NiGeometry *>::`vftable'
0x7AC718: mov     ebp, [edi+4]
0x7AC71B: cmp     ebp, esi
0x7AC71D: mov     byte ptr [esp+28h+var_4], 11h
0x7AC722: jz      short loc_7AC737
0x7AC724: mov     edx, [edi]
0x7AC726: mov     eax, ebp
0x7AC728: mov     ebp, [ebp+0]
0x7AC72B: push    eax
0x7AC72C: mov     eax, [edx+8]
0x7AC72F: mov     ecx, edi
0x7AC731: call    eax
0x7AC733: cmp     ebp, esi
0x7AC735: jnz     short loc_7AC724
0x7AC737: mov     [edi+0Ch], esi
0x7AC73A: mov     [edi+4], esi
0x7AC73D: mov     [edi+8], esi
0x7AC740: mov     dword ptr [edi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVNiGeometry@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiGeometry *>::`vftable'
0x7AC746: lea     edi, [ebx+2244h]
0x7AC74C: mov     [esp+28h+var_14], edi
0x7AC750: mov     dword ptr [edi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@PAVNiGeometry@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,NiGeometry *>::`vftable'
0x7AC756: mov     ebp, [edi+4]
0x7AC759: cmp     ebp, esi
0x7AC75B: mov     byte ptr [esp+28h+var_4], 12h
0x7AC760: jz      short loc_7AC775
0x7AC762: mov     edx, [edi]
0x7AC764: mov     eax, ebp
0x7AC766: mov     ebp, [ebp+0]
0x7AC769: push    eax
0x7AC76A: mov     eax, [edx+8]
0x7AC76D: mov     ecx, edi
0x7AC76F: call    eax
0x7AC771: cmp     ebp, esi
0x7AC773: jnz     short loc_7AC762
0x7AC775: mov     [edi+0Ch], esi
0x7AC778: mov     [edi+4], esi
0x7AC77B: mov     [edi+8], esi
0x7AC77E: mov     dword ptr [edi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVNiGeometry@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiGeometry *>::`vftable'
0x7AC784: lea     edi, [ebx+222Ch]
0x7AC78A: mov     [esp+28h+var_14], edi
0x7AC78E: mov     dword ptr [edi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@PAUReferenceVolume@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,ReferenceVolume *>::`vftable'
0x7AC794: mov     ebp, [edi+4]
0x7AC797: cmp     ebp, esi
0x7AC799: mov     byte ptr [esp+28h+var_4], 13h
0x7AC79E: jz      short loc_7AC7B3
0x7AC7A0: mov     edx, [edi]
0x7AC7A2: mov     eax, ebp
0x7AC7A4: mov     ebp, [ebp+0]
0x7AC7A7: push    eax
0x7AC7A8: mov     eax, [edx+8]
0x7AC7AB: mov     ecx, edi
0x7AC7AD: call    eax
0x7AC7AF: cmp     ebp, esi
0x7AC7B1: jnz     short loc_7AC7A0
0x7AC7B3: mov     [edi+0Ch], esi
0x7AC7B6: mov     [edi+4], esi
0x7AC7B9: mov     [edi+8], esi
0x7AC7BC: mov     dword ptr [edi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAUReferenceVolume@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,ReferenceVolume *>::`vftable'
0x7AC7C2: mov     edi, [ebx+2228h]
0x7AC7C8: cmp     edi, esi
0x7AC7CA: mov     byte ptr [esp+28h+var_4], 0Ch
0x7AC7CF: jz      short loc_7AC7ED
0x7AC7D1: lea     ecx, [edi+4]
0x7AC7D4: push    ecx; lpAddend
0x7AC7D5: call    dword ptr ds:0A2807Ch
0x7AC7DB: test    eax, eax
0x7AC7DD: jnz     short loc_7AC7ED
0x7AC7DF: cmp     edi, esi
0x7AC7E1: jz      short loc_7AC7ED
0x7AC7E3: mov     edx, [edi]
0x7AC7E5: mov     eax, [edx]
0x7AC7E7: push    1
0x7AC7E9: mov     ecx, edi
0x7AC7EB: call    eax
0x7AC7ED: lea     edi, [ebx+21D0h]
0x7AC7F3: mov     dword ptr [ebx+2214h], offset ??_7?$BSTPersistentList@V?$NiTPointerAllocator@I@@PAVNiGeometry@@@@6B@; const BSTPersistentList<NiTPointerAllocator<uint>,NiGeometry *>::`vftable'
0x7AC7FD: mov     dword ptr [ebx+2200h], offset ??_7?$BSTPersistentList@V?$NiTPointerAllocator@I@@PAVNiGeometry@@@@6B@; const BSTPersistentList<NiTPointerAllocator<uint>,NiGeometry *>::`vftable'
0x7AC807: mov     dword ptr [ebx+21ECh], offset ??_7?$BSTPersistentList@V?$NiTPointerAllocator@I@@PAVNiGeometry@@@@6B@; const BSTPersistentList<NiTPointerAllocator<uint>,NiGeometry *>::`vftable'
0x7AC811: mov     [esp+28h+var_14], edi
0x7AC815: mov     dword ptr [edi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@PAVShadowVolumeRPList@BSShaderAccumulator@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,BSShaderAccumulator::ShadowVolumeRPList *>::`vftable'
0x7AC81B: mov     ebp, [edi+4]
0x7AC81E: cmp     ebp, esi
0x7AC820: mov     byte ptr [esp+28h+var_4], 14h
0x7AC825: jz      short loc_7AC83A
0x7AC827: mov     edx, [edi]
0x7AC829: mov     eax, ebp
0x7AC82B: mov     ebp, [ebp+0]
0x7AC82E: push    eax
0x7AC82F: mov     eax, [edx+8]
0x7AC832: mov     ecx, edi
0x7AC834: call    eax
0x7AC836: cmp     ebp, esi
0x7AC838: jnz     short loc_7AC827
0x7AC83A: mov     [edi+0Ch], esi
0x7AC83D: mov     [edi+4], esi
0x7AC840: mov     [edi+8], esi
0x7AC843: mov     dword ptr [edi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVShadowVolumeRPList@BSShaderAccumulator@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,BSShaderAccumulator::ShadowVolumeRPList *>::`vftable'
0x7AC849: lea     edi, [ebx+21C0h]
0x7AC84F: mov     [esp+28h+var_14], edi
0x7AC853: mov     dword ptr [edi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@PAVRenderPass@BSShaderProperty@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,BSShaderProperty::RenderPass *>::`vftable'
0x7AC859: mov     ebp, [edi+4]
0x7AC85C: cmp     ebp, esi
0x7AC85E: mov     byte ptr [esp+28h+var_4], 15h
0x7AC863: jz      short loc_7AC878
0x7AC865: mov     edx, [edi]
0x7AC867: mov     eax, ebp
0x7AC869: mov     ebp, [ebp+0]
0x7AC86C: push    eax
0x7AC86D: mov     eax, [edx+8]
0x7AC870: mov     ecx, edi
0x7AC872: call    eax
0x7AC874: cmp     ebp, esi
0x7AC876: jnz     short loc_7AC865
0x7AC878: push    offset sub_7A9AE0; void (__thiscall *)(void *)
0x7AC87D: push    1A3h; int
0x7AC882: push    14h; unsigned int
0x7AC884: lea     ecx, [ebx+104h]
0x7AC88A: push    ecx; void *
0x7AC88B: mov     [edi+0Ch], esi
0x7AC88E: mov     [edi+4], esi
0x7AC891: mov     [edi+8], esi
0x7AC894: mov     dword ptr [edi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVRenderPass@BSShaderProperty@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,BSShaderProperty::RenderPass *>::`vftable'
0x7AC89A: mov     byte ptr [esp+38h+var_4], 6
0x7AC89F: call    $LN21
0x7AC8A4: lea     edi, [ebx+64h]
0x7AC8A7: mov     dword ptr [ebx+0A4h], offset ??_7?$BSTPersistentList@V?$NiTPointerAllocator@I@@PAVRenderPass@BSShaderProperty@@@@6B@; const BSTPersistentList<NiTPointerAllocator<uint>,BSShaderProperty::RenderPass *>::`vftable'
0x7AC8B1: mov     dword ptr [ebx+90h], offset ??_7?$BSTPersistentList@V?$NiTPointerAllocator@I@@PAVRenderPass@BSShaderProperty@@@@6B@; const BSTPersistentList<NiTPointerAllocator<uint>,BSShaderProperty::RenderPass *>::`vftable'
0x7AC8BB: mov     dword ptr [ebx+7Ch], offset ??_7?$BSTPersistentList@V?$NiTPointerAllocator@I@@PAVRenderPass@BSShaderProperty@@@@6B@; const BSTPersistentList<NiTPointerAllocator<uint>,BSShaderProperty::RenderPass *>::`vftable'
0x7AC8C2: mov     [esp+28h+var_14], edi
0x7AC8C6: mov     dword ptr [edi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@PAUImmediateGeometryGroup@BSShaderAccumulator@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,BSShaderAccumulator::ImmediateGeometryGroup *>::`vftable'
0x7AC8CC: mov     ebp, [edi+4]
0x7AC8CF: cmp     ebp, esi
0x7AC8D1: mov     byte ptr [esp+28h+var_4], 16h
0x7AC8D6: jz      short loc_7AC8EB
0x7AC8D8: mov     edx, [edi]
0x7AC8DA: mov     eax, ebp
0x7AC8DC: mov     ebp, [ebp+0]
0x7AC8DF: push    eax
0x7AC8E0: mov     eax, [edx+8]
0x7AC8E3: mov     ecx, edi
0x7AC8E5: call    eax
0x7AC8E7: cmp     ebp, esi
0x7AC8E9: jnz     short loc_7AC8D8
0x7AC8EB: mov     [edi+0Ch], esi
0x7AC8EE: mov     [edi+4], esi
0x7AC8F1: mov     [edi+8], esi
0x7AC8F4: mov     dword ptr [edi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAUImmediateGeometryGroup@BSShaderAccumulator@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,BSShaderAccumulator::ImmediateGeometryGroup *>::`vftable'
0x7AC8FA: lea     edi, [ebx+4Ch]
0x7AC8FD: mov     [esp+28h+var_14], edi
0x7AC901: mov     dword ptr [edi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@PAUGeometryGroup@BSShaderAccumulator@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,BSShaderAccumulator::GeometryGroup *>::`vftable'
0x7AC907: mov     ebp, [edi+4]
0x7AC90A: cmp     ebp, esi
0x7AC90C: mov     byte ptr [esp+28h+var_4], 17h
0x7AC911: jz      short loc_7AC926
0x7AC913: mov     edx, [edi]
0x7AC915: mov     eax, ebp
0x7AC917: mov     ebp, [ebp+0]
0x7AC91A: push    eax
0x7AC91B: mov     eax, [edx+8]
0x7AC91E: mov     ecx, edi
0x7AC920: call    eax
0x7AC922: cmp     ebp, esi
0x7AC924: jnz     short loc_7AC913
0x7AC926: mov     [edi+0Ch], esi
0x7AC929: mov     [edi+4], esi
0x7AC92C: mov     [edi+8], esi
0x7AC92F: mov     dword ptr [edi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAUGeometryGroup@BSShaderAccumulator@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,BSShaderAccumulator::GeometryGroup *>::`vftable'
0x7AC935: lea     edi, [ebx+3Ch]
0x7AC938: mov     [esp+28h+var_14], edi
0x7AC93C: mov     dword ptr [edi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@PAUGeometryGroup@BSShaderAccumulator@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,BSShaderAccumulator::GeometryGroup *>::`vftable'
0x7AC942: mov     ebp, [edi+4]
0x7AC945: cmp     ebp, esi
0x7AC947: mov     byte ptr [esp+28h+var_4], 18h
0x7AC94C: jz      short loc_7AC963
0x7AC94E: mov     edi, edi
0x7AC950: mov     edx, [edi]
0x7AC952: mov     eax, ebp
0x7AC954: mov     ebp, [ebp+0]
0x7AC957: push    eax
0x7AC958: mov     eax, [edx+8]
0x7AC95B: mov     ecx, edi
0x7AC95D: call    eax
0x7AC95F: cmp     ebp, esi
0x7AC961: jnz     short loc_7AC950
0x7AC963: mov     ecx, ebx
0x7AC965: mov     [edi+0Ch], esi
0x7AC968: mov     [edi+4], esi
0x7AC96B: mov     [edi+8], esi
0x7AC96E: mov     dword ptr [edi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAUGeometryGroup@BSShaderAccumulator@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,BSShaderAccumulator::GeometryGroup *>::`vftable'
0x7AC974: mov     [esp+28h+var_4], 0FFFFFFFFh
0x7AC97C: call    sub_71A910
0x7AC981: mov     ecx, dword ptr [esp+28h+var_C]
0x7AC985: mov     large fs:0, ecx
0x7AC98C: pop     ecx
0x7AC98D: pop     edi
0x7AC98E: pop     esi
0x7AC98F: pop     ebp
0x7AC990: pop     ebx
0x7AC991: add     esp, 14h
0x7AC994: retn
