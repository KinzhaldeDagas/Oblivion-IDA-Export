0x7AB6F0: push    ecx
0x7AB6F1: push    ebx
0x7AB6F2: push    ebp
0x7AB6F3: push    esi
0x7AB6F4: mov     ebp, ecx
0x7AB6F6: push    edi
0x7AB6F7: mov     [esp+14h+var_4], ebp
0x7AB6FB: lea     esi, [ebp+108h]
0x7AB701: mov     edi, 1A3h
0x7AB706: xor     ebx, ebx
0x7AB708: lea     ecx, [esi-4]
0x7AB70B: call    sub_7A9C30
0x7AB710: mov     eax, [esi]
0x7AB712: mov     [esi+8], eax
0x7AB715: mov     [esi], ebx
0x7AB717: mov     [esi+4], ebx
0x7AB71A: mov     [esi+0Ch], ebx
0x7AB71D: add     esi, 14h
0x7AB720: sub     edi, 1
0x7AB723: jnz     short loc_7AB708
0x7AB725: cmp     [ebp+48h], ebx
0x7AB728: jz      short loc_7AB783
0x7AB72A: lea     edi, [ebp+3Ch]
0x7AB72D: lea     ecx, [ecx+0]
0x7AB730: mov     eax, [edi+4]
0x7AB733: mov     ecx, [eax]
0x7AB735: cmp     ecx, ebx
0x7AB737: mov     [edi+4], ecx
0x7AB73A: jz      short loc_7AB741
0x7AB73C: mov     [ecx+4], ebx
0x7AB73F: jmp     short loc_7AB744
0x7AB741: mov     [edi+8], ebx
0x7AB744: mov     edx, [edi]
0x7AB746: mov     esi, [eax+8]
0x7AB749: push    eax
0x7AB74A: mov     eax, [edx+8]
0x7AB74D: mov     ecx, edi
0x7AB74F: call    eax
0x7AB751: add     dword ptr [edi+0Ch], 0FFFFFFFFh
0x7AB755: cmp     esi, ebx
0x7AB757: jz      short loc_7AB77E
0x7AB759: mov     ecx, esi
0x7AB75B: call    sub_7A9C30
0x7AB760: mov     ecx, [esi+4]
0x7AB763: mov     [esi+0Ch], ecx
0x7AB766: mov     [esi+4], ebx
0x7AB769: mov     [esi+8], ebx
0x7AB76C: mov     [esi+10h], ebx
0x7AB76F: push    esi
0x7AB770: mov     dword ptr [esi], offset ??_7?$BSTPersistentList@V?$NiTPointerAllocator@I@@PAVRenderPass@BSShaderProperty@@@@6B@; const BSTPersistentList<NiTPointerAllocator<uint>,BSShaderProperty::RenderPass *>::`vftable'
0x7AB776: call    FormHeapFree
0x7AB77B: add     esp, 4
0x7AB77E: cmp     [ebp+48h], ebx
0x7AB781: jnz     short loc_7AB730
0x7AB783: mov     [ebp+5Ch], ebx
0x7AB786: mov     [ebp+60h], ebx
0x7AB789: cmp     [ebp+58h], ebx
0x7AB78C: jz      short loc_7AB7E4
0x7AB78E: lea     edi, [ebp+4Ch]
0x7AB791: mov     eax, [edi+4]
0x7AB794: mov     ecx, [eax]
0x7AB796: cmp     ecx, ebx
0x7AB798: mov     [edi+4], ecx
0x7AB79B: jz      short loc_7AB7A2
0x7AB79D: mov     [ecx+4], ebx
0x7AB7A0: jmp     short loc_7AB7A5
0x7AB7A2: mov     [edi+8], ebx
0x7AB7A5: mov     edx, [edi]
0x7AB7A7: mov     esi, [eax+8]
0x7AB7AA: push    eax
0x7AB7AB: mov     eax, [edx+8]
0x7AB7AE: mov     ecx, edi
0x7AB7B0: call    eax
0x7AB7B2: add     dword ptr [edi+0Ch], 0FFFFFFFFh
0x7AB7B6: cmp     esi, ebx
0x7AB7B8: jz      short loc_7AB7DF
0x7AB7BA: mov     ecx, esi
0x7AB7BC: call    sub_7A9C30
0x7AB7C1: mov     ecx, [esi+4]
0x7AB7C4: mov     [esi+0Ch], ecx
0x7AB7C7: mov     [esi+4], ebx
0x7AB7CA: mov     [esi+8], ebx
0x7AB7CD: mov     [esi+10h], ebx
0x7AB7D0: push    esi
0x7AB7D1: mov     dword ptr [esi], offset ??_7?$BSTPersistentList@V?$NiTPointerAllocator@I@@PAVRenderPass@BSShaderProperty@@@@6B@; const BSTPersistentList<NiTPointerAllocator<uint>,BSShaderProperty::RenderPass *>::`vftable'
0x7AB7D7: call    FormHeapFree
0x7AB7DC: add     esp, 4
0x7AB7DF: cmp     [ebp+58h], ebx
0x7AB7E2: jnz     short loc_7AB791
0x7AB7E4: mov     [ebp+74h], ebx
0x7AB7E7: cmp     [ebp+70h], ebx
0x7AB7EA: jz      short loc_7AB869
0x7AB7EC: add     ebp, 64h ; 'd'
0x7AB7EF: nop
0x7AB7F0: mov     eax, [ebp+4]
0x7AB7F3: mov     ecx, [eax]
0x7AB7F5: cmp     ecx, ebx
0x7AB7F7: mov     [ebp+4], ecx
0x7AB7FA: jz      short loc_7AB801
0x7AB7FC: mov     [ecx+4], ebx
0x7AB7FF: jmp     short loc_7AB804
0x7AB801: mov     [ebp+8], ebx
0x7AB804: mov     edx, [ebp+0]
0x7AB807: mov     esi, [eax+8]
0x7AB80A: push    eax
0x7AB80B: mov     eax, [edx+8]
0x7AB80E: mov     ecx, ebp
0x7AB810: call    eax
0x7AB812: add     dword ptr [ebp+0Ch], 0FFFFFFFFh
0x7AB816: cmp     esi, ebx
0x7AB818: jz      short loc_7AB85E
0x7AB81A: mov     ecx, esi
0x7AB81C: call    sub_7A9C30
0x7AB821: mov     ecx, [esi+4]
0x7AB824: mov     [esi+0Ch], ecx
0x7AB827: lea     edi, [esi+14h]
0x7AB82A: mov     ecx, edi
0x7AB82C: mov     [esi+4], ebx
0x7AB82F: mov     [esi+8], ebx
0x7AB832: mov     [esi+10h], ebx
0x7AB835: call    sub_7A9C30
0x7AB83A: mov     edx, [edi+4]
0x7AB83D: mov     [edi+0Ch], edx
0x7AB840: mov     [edi+4], ebx
0x7AB843: mov     [edi+8], ebx
0x7AB846: mov     [edi+10h], ebx
0x7AB849: push    esi
0x7AB84A: mov     dword ptr [edi], offset ??_7?$BSTPersistentList@V?$NiTPointerAllocator@I@@PAVRenderPass@BSShaderProperty@@@@6B@; const BSTPersistentList<NiTPointerAllocator<uint>,BSShaderProperty::RenderPass *>::`vftable'
0x7AB850: mov     dword ptr [esi], offset ??_7?$BSTPersistentList@V?$NiTPointerAllocator@I@@PAVNiGeometry@@@@6B@; const BSTPersistentList<NiTPointerAllocator<uint>,NiGeometry *>::`vftable'
0x7AB856: call    FormHeapFree
0x7AB85B: add     esp, 4
0x7AB85E: mov     eax, [esp+14h+var_4]
0x7AB862: cmp     [eax+70h], ebx
0x7AB865: jnz     short loc_7AB7F0
0x7AB867: mov     ebp, eax
0x7AB869: mov     esi, [ebp+78h]
0x7AB86C: cmp     esi, ebx
0x7AB86E: jz      short loc_7AB886
0x7AB870: mov     ecx, esi
0x7AB872: call    sub_7A9C30
0x7AB877: mov     ecx, [esi+4]
0x7AB87A: mov     [esi+0Ch], ecx
0x7AB87D: mov     [esi+4], ebx
0x7AB880: mov     [esi+8], ebx
0x7AB883: mov     [esi+10h], ebx
0x7AB886: lea     esi, [ebp+90h]
0x7AB88C: mov     ecx, esi
0x7AB88E: call    sub_7A9C30
0x7AB893: mov     edx, [esi+4]
0x7AB896: mov     [esi+0Ch], edx
0x7AB899: mov     [esi+4], ebx
0x7AB89C: mov     [esi+8], ebx
0x7AB89F: mov     [esi+10h], ebx
0x7AB8A2: lea     esi, [ebp+7Ch]
0x7AB8A5: mov     ecx, esi
0x7AB8A7: call    sub_7A9C30
0x7AB8AC: mov     eax, [esi+4]
0x7AB8AF: mov     [esi+0Ch], eax
0x7AB8B2: mov     [esi+4], ebx
0x7AB8B5: mov     [esi+8], ebx
0x7AB8B8: mov     [esi+10h], ebx
0x7AB8BB: cmp     [ebp+21DCh], ebx
0x7AB8C1: jz      short loc_7AB91A
0x7AB8C3: mov     ecx, [ebp+21D4h]
0x7AB8C9: mov     edx, [ecx+8]
0x7AB8CC: mov     ebp, [edx+4]
0x7AB8CF: cmp     [ebp+10h], ebx
0x7AB8D2: jz      short loc_7AB916
0x7AB8D4: mov     esi, [ebp+4]
0x7AB8D7: cmp     esi, ebx
0x7AB8D9: jz      short loc_7AB900
0x7AB8DB: jmp     short loc_7AB8E0
0x7AB8DD: align 10h
0x7AB8E0: mov     edi, [esi+8]
0x7AB8E3: cmp     edi, ebx
0x7AB8E5: lea     eax, [esi+8]
0x7AB8E8: mov     esi, [esi]
0x7AB8EA: jz      short loc_7AB8FC
0x7AB8EC: mov     ecx, edi
0x7AB8EE: call    sub_7E2400
0x7AB8F3: push    edi
0x7AB8F4: call    FormHeapFree
0x7AB8F9: add     esp, 4
0x7AB8FC: cmp     esi, ebx
0x7AB8FE: jnz     short loc_7AB8E0
0x7AB900: mov     ecx, ebp
0x7AB902: call    sub_7A9C30
0x7AB907: mov     eax, [ebp+4]
0x7AB90A: mov     [ebp+0Ch], eax
0x7AB90D: mov     [ebp+4], ebx
0x7AB910: mov     [ebp+8], ebx
0x7AB913: mov     [ebp+10h], ebx
0x7AB916: mov     ebp, [esp+14h+var_4]
0x7AB91A: mov     esi, [ebp+21C4h]
0x7AB920: cmp     esi, ebx
0x7AB922: lea     edi, [ebp+21C0h]
0x7AB928: jz      short loc_7AB942
0x7AB92A: lea     ebx, [ebx+0]
0x7AB930: mov     edx, [edi]
0x7AB932: mov     eax, esi
0x7AB934: mov     esi, [esi]
0x7AB936: push    eax
0x7AB937: mov     eax, [edx+8]
0x7AB93A: mov     ecx, edi
0x7AB93C: call    eax
0x7AB93E: cmp     esi, ebx
0x7AB940: jnz     short loc_7AB930
0x7AB942: mov     [edi+0Ch], ebx
0x7AB945: mov     [edi+4], ebx
0x7AB948: mov     [edi+8], ebx
0x7AB94B: pop     edi
0x7AB94C: pop     esi
0x7AB94D: pop     ebp
0x7AB94E: mov     ds:0B42CDBh, bl
0x7AB954: pop     ebx
0x7AB955: pop     ecx
0x7AB956: retn
