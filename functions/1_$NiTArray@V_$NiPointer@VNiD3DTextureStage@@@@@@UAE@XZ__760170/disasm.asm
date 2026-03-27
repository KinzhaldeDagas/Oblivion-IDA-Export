0x760170: mov     eax, [ecx+4]
0x760173: test    eax, eax
0x760175: mov     dword ptr [ecx], offset ??_7?$NiTArray@V?$NiPointer@VNiD3DTextureStage@@@@@@6B@; const NiTArray<NiPointer<NiD3DTextureStage>>::`vftable'
0x76017B: jz      short locret_7601B6
0x76017D: push    ebx
0x76017E: push    esi
0x76017F: push    edi
0x760180: mov     edi, [eax-4]
0x760183: lea     ebx, [eax-4]
0x760186: lea     esi, [eax+edi*4]
0x760189: sub     edi, 1
0x76018C: js      short loc_7601AA
0x76018E: mov     edi, edi
0x760190: mov     ecx, [esi-4]
0x760193: sub     esi, 4
0x760196: test    ecx, ecx
0x760198: jz      short loc_7601A5
0x76019A: add     dword ptr [ecx+5Ch], 0FFFFFFFFh
0x76019E: jnz     short loc_7601A5
0x7601A0: call    sub_772560
0x7601A5: sub     edi, 1
0x7601A8: jns     short loc_760190
0x7601AA: push    ebx
0x7601AB: call    FormHeapFree
0x7601B0: add     esp, 4
0x7601B3: pop     edi
0x7601B4: pop     esi
0x7601B5: pop     ebx
0x7601B6: retn
