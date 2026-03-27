0x776780: sub     esp, 0Ch
0x776783: push    ebx
0x776784: push    esi
0x776785: mov     esi, ecx
0x776787: xor     ebx, ebx
0x776789: cmp     [esi+0Ch], ebx
0x77678C: push    edi
0x77678D: jz      short loc_7767ED
0x77678F: nop
0x776790: mov     ecx, esi
0x776792: call    sub_6A9030
0x776797: mov     [esp+18h+var_C], eax
0x77679B: lea     eax, [esp+18h+var_4]
0x77679F: push    eax
0x7767A0: lea     ecx, [esp+1Ch+var_8]
0x7767A4: push    ecx
0x7767A5: lea     edx, [esp+20h+var_C]
0x7767A9: push    edx
0x7767AA: mov     ecx, esi
0x7767AC: call    sub_452600
0x7767B1: mov     edi, [esp+18h+var_8]
0x7767B5: push    edi
0x7767B6: mov     ecx, esi
0x7767B8: call    NiTMap_RemoveAt
0x7767BD: mov     edx, [esp+18h+var_4]
0x7767C1: mov     [edi+104h], ebx
0x7767C7: mov     ecx, [edx+6Ch]
0x7767CA: mov     eax, ecx
0x7767CC: and     ecx, 1Fh
0x7767CF: mov     edi, 1
0x7767D4: shl     edi, cl
0x7767D6: shr     eax, 5
0x7767D9: push    edx
0x7767DA: not     edi
0x7767DC: and     [esi+eax*4+40h], edi
0x7767E0: call    FormHeapFree
0x7767E5: add     esp, 4
0x7767E8: cmp     [esi+0Ch], ebx
0x7767EB: jnz     short loc_776790
0x7767ED: cmp     [esi+1Ch], ebx
0x7767F0: jz      short loc_77681C
0x7767F2: lea     edi, [esi+10h]
0x7767F5: mov     ecx, [edi+4]
0x7767F8: mov     eax, [ecx]
0x7767FA: cmp     eax, ebx
0x7767FC: mov     [edi+4], eax
0x7767FF: jz      short loc_776806
0x776801: mov     [eax+4], ebx
0x776804: jmp     short loc_776809
0x776806: mov     [edi+8], ebx
0x776809: mov     eax, [edi]
0x77680B: mov     edx, [eax+8]
0x77680E: push    ecx
0x77680F: mov     ecx, edi
0x776811: call    edx
0x776813: add     dword ptr [edi+0Ch], 0FFFFFFFFh
0x776817: cmp     [esi+1Ch], ebx
0x77681A: jnz     short loc_7767F5
0x77681C: mov     eax, [esi+20h]
0x77681F: cmp     eax, ebx
0x776821: jz      short loc_77682E
0x776823: mov     ecx, [eax]
0x776825: mov     edx, [ecx+8]
0x776828: push    eax
0x776829: call    edx
0x77682B: mov     [esi+20h], ebx
0x77682E: lea     edi, [esi+10h]
0x776831: mov     ecx, edi
0x776833: mov     dword ptr [edi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@PAVNiLight@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,NiLight *>::`vftable'
0x776839: call    NiTPointerList__FreeAllNodes
0x77683E: mov     dword ptr [edi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVNiLight@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiLight *>::`vftable'
0x776844: mov     ecx, esi
0x776846: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@PAVNiLight@@PAVLightEntry@NiDX9LightManager@@@@6B@; const NiTPointerMap<NiLight *,NiDX9LightManager::LightEntry *>::`vftable'
0x77684C: call    NiTMap_Clear
0x776851: mov     ecx, esi
0x776853: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVNiLight@@PAVLightEntry@NiDX9LightManager@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,NiLight *,NiDX9LightManager::LightEntry *>::`vftable'
0x776859: call    NiTMap_Clear
0x77685E: mov     eax, [esi+8]
0x776861: push    eax
0x776862: call    FormHeapFree
0x776867: add     esp, 4
0x77686A: pop     edi
0x77686B: pop     esi
0x77686C: pop     ebx
0x77686D: add     esp, 0Ch
0x776870: retn
