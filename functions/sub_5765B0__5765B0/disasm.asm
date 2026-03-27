0x5765B0: push    0FFFFFFFFh
0x5765B2: push    offset SEH_5777A0
0x5765B7: mov     eax, large fs:0
0x5765BD: push    eax
0x5765BE: push    ecx
0x5765BF: push    ebx
0x5765C0: push    esi
0x5765C1: push    edi
0x5765C2: mov     eax, ds:0B30AACh
0x5765C7: xor     eax, esp
0x5765C9: push    eax
0x5765CA: lea     eax, [esp+20h+var_C]
0x5765CE: mov     large fs:0, eax
0x5765D4: mov     esi, ecx
0x5765D6: mov     [esp+20h+var_10], esi
0x5765DA: xor     edi, edi
0x5765DC: mov     [esi+0Ch], edi
0x5765DF: mov     [esi+4], edi
0x5765E2: mov     [esi+8], edi
0x5765E5: mov     dword ptr [esi], offset ??_7?$NiTList@PAVTextLine@FontManager@@@@6B@; const NiTList<FontManager::TextLine *>::`vftable'
0x5765EB: mov     ebx, [esp+20h+arg_4]
0x5765EF: mov     eax, [ebx+1Ch]
0x5765F2: add     eax, [ebx+18h]
0x5765F5: mov     ecx, [esp+20h+arg_8]
0x5765F9: mov     edx, [esp+20h+arg_C]
0x5765FD: mov     [esi+14h], eax
0x576600: mov     eax, [esp+20h+arg_0]
0x576604: mov     [esi+18h], ecx
0x576607: mov     ecx, esi
0x576609: mov     [esp+20h+var_4], edi
0x57660D: mov     [esi+1Ch], edx
0x576610: mov     [esi+38h], eax
0x576613: call    dword ptr ds:0A68A64h
0x576619: mov     [eax+8], ebx
0x57661C: mov     [eax], edi
0x57661E: mov     ecx, [esi+8]
0x576621: mov     [eax+4], ecx
0x576624: mov     ecx, [esi+8]
0x576627: cmp     ecx, edi
0x576629: jz      short loc_57662F
0x57662B: mov     [ecx], eax
0x57662D: jmp     short loc_576632
0x57662F: mov     [esi+4], eax
0x576632: add     dword ptr [esi+0Ch], 1
0x576636: mov     [esi+8], eax
0x576639: mov     dword ptr [esi+20h], 23h ; '#'
0x576640: mov     [ebx+30h], esi
0x576643: mov     [esi+24h], edi
0x576646: mov     [esi+28h], edi
0x576649: mov     [esi+2Ch], edi
0x57664C: mov     [esi+30h], edi
0x57664F: mov     [esi+34h], edi
0x576652: mov     eax, esi
0x576654: mov     ecx, [esp+20h+var_C]
0x576658: mov     large fs:0, ecx
0x57665F: pop     ecx
0x576660: pop     edi
0x576661: pop     esi
0x576662: pop     ebx
0x576663: add     esp, 10h
0x576666: retn    10h
