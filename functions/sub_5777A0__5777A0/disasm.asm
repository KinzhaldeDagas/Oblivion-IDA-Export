0x5777A0: push    0FFFFFFFFh
0x5777A2: push    offset SEH_5777A0
0x5777A7: mov     eax, large fs:0
0x5777AD: push    eax
0x5777AE: push    ecx
0x5777AF: push    ebx
0x5777B0: push    esi
0x5777B1: push    edi
0x5777B2: mov     eax, ds:0B30AACh
0x5777B7: xor     eax, esp
0x5777B9: push    eax
0x5777BA: lea     eax, [esp+20h+var_C]
0x5777BE: mov     large fs:0, eax
0x5777C4: mov     esi, ecx
0x5777C6: mov     [esp+20h+var_10], esi
0x5777CA: mov     eax, [esi+0Ch]
0x5777CD: xor     ebx, ebx
0x5777CF: cmp     eax, ebx
0x5777D1: mov     [esp+20h+var_4], ebx
0x5777D5: jz      short loc_577815
0x5777D7: mov     eax, [esi+4]
0x5777DA: mov     ecx, [eax]
0x5777DC: cmp     ecx, ebx
0x5777DE: mov     [esi+4], ecx
0x5777E1: jz      short loc_5777E8
0x5777E3: mov     [ecx+4], ebx
0x5777E6: jmp     short loc_5777EB
0x5777E8: mov     [esi+8], ebx
0x5777EB: mov     edx, [esi]
0x5777ED: mov     edi, [eax+8]
0x5777F0: push    eax
0x5777F1: mov     eax, [edx+8]
0x5777F4: mov     ecx, esi
0x5777F6: call    eax
0x5777F8: add     dword ptr [esi+0Ch], 0FFFFFFFFh
0x5777FC: cmp     edi, ebx
0x5777FE: jz      short loc_577810
0x577800: mov     ecx, edi
0x577802: call    sub_5771C0
0x577807: push    edi
0x577808: call    FormHeapFree
0x57780D: add     esp, 4
0x577810: cmp     [esi+0Ch], ebx
0x577813: jnz     short loc_5777D7
0x577815: mov     ecx, esi
0x577817: mov     [esp+20h+var_4], 0FFFFFFFFh
0x57781F: call    ??1?$NiTList@PAVTextLine@FontManager@@@@UAE@XZ; NiTList<FontManager::TextLine *>::~NiTList<FontManager::TextLine *>(void)
0x577824: mov     ecx, dword ptr [esp+20h+var_C]
0x577828: mov     large fs:0, ecx
0x57782F: pop     ecx
0x577830: pop     edi
0x577831: pop     esi
0x577832: pop     ebx
0x577833: add     esp, 10h
0x577836: retn
