0x7587D0: push    ebx
0x7587D1: push    esi
0x7587D2: mov     esi, [esp+8+a2]
0x7587D6: push    edi
0x7587D7: push    esi; a2
0x7587D8: mov     ebx, ecx
0x7587DA: call    sub_7009A0
0x7587DF: mov     eax, ds:0B41758h
0x7587E4: push    eax; ArgList
0x7587E5: call    TESOutput_PrintString
0x7587EA: movzx   edi, word ptr [esi+0Ah]
0x7587EE: movzx   ecx, word ptr [esi+8]
0x7587F2: add     esp, 4
0x7587F5: cmp     edi, ecx
0x7587F7: mov     [esp+0Ch+a2], eax
0x7587FB: jb      short loc_75880B
0x7587FD: movzx   edx, word ptr [esi+0Eh]
0x758801: add     edx, edi
0x758803: push    edx
0x758804: mov     ecx, esi
0x758806: call    NiTArray_SetSize
0x75880B: lea     eax, [esp+0Ch+a2]
0x75880F: push    eax
0x758810: push    edi
0x758811: mov     ecx, esi
0x758813: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x758818: mov     ecx, [ebx+8]
0x75881B: push    ecx; int
0x75881C: push    offset aNumBirthRateKe; "Num Birth Rate Keys"
0x758821: call    TESOutput_PrintLabeledUnsignedInt
0x758826: movzx   edi, word ptr [esi+0Ah]
0x75882A: movzx   edx, word ptr [esi+8]
0x75882E: add     esp, 8
0x758831: cmp     edi, edx
0x758833: mov     [esp+0Ch+a2], eax
0x758837: jb      short loc_758847
0x758839: movzx   eax, word ptr [esi+0Eh]
0x75883D: add     eax, edi
0x75883F: push    eax
0x758840: mov     ecx, esi
0x758842: call    NiTArray_SetSize
0x758847: lea     ecx, [esp+0Ch+a2]
0x75884B: push    ecx
0x75884C: push    edi
0x75884D: mov     ecx, esi
0x75884F: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x758854: mov     eax, [ebx+10h]
0x758857: sub     eax, 1
0x75885A: jz      short loc_75887B
0x75885C: sub     eax, 1
0x75885F: jz      short loc_758874
0x758861: sub     eax, 1
0x758864: jz      short loc_75886D
0x758866: mov     eax, offset aUnknown_2; "Unknown"
0x75886B: jmp     short loc_758880
0x75886D: mov     eax, offset aTcbkey; "TCBKEY"
0x758872: jmp     short loc_758880
0x758874: mov     eax, offset aBezkey; "BEZKEY"
0x758879: jmp     short loc_758880
0x75887B: mov     eax, offset aLinkey; "LINKEY"
0x758880: push    eax; int
0x758881: push    offset aBirthRateKeyTy; "Birth Rate Key Type"
0x758886: call    TESOutput_PrintLabeledString
0x75888B: movzx   edi, word ptr [esi+0Ah]
0x75888F: movzx   edx, word ptr [esi+8]
0x758893: add     esp, 8
0x758896: cmp     edi, edx
0x758898: mov     [esp+0Ch+a2], eax
0x75889C: jb      short loc_7588AC
0x75889E: movzx   eax, word ptr [esi+0Eh]
0x7588A2: add     eax, edi
0x7588A4: push    eax
0x7588A5: mov     ecx, esi
0x7588A7: call    NiTArray_SetSize
0x7588AC: lea     ecx, [esp+0Ch+a2]
0x7588B0: push    ecx
0x7588B1: push    edi
0x7588B2: mov     ecx, esi
0x7588B4: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7588B9: mov     edx, [ebx+18h]
0x7588BC: push    edx; int
0x7588BD: push    offset aNumEmitterActi; "Num Emitter Active Keys"
0x7588C2: call    TESOutput_PrintLabeledUnsignedInt
0x7588C7: movzx   edi, word ptr [esi+0Ah]
0x7588CB: mov     [esp+14h+a2], eax
0x7588CF: movzx   eax, word ptr [esi+8]
0x7588D3: add     esp, 8
0x7588D6: cmp     edi, eax
0x7588D8: jb      short loc_7588E8
0x7588DA: movzx   ecx, word ptr [esi+0Eh]
0x7588DE: add     ecx, edi
0x7588E0: push    ecx
0x7588E1: mov     ecx, esi
0x7588E3: call    NiTArray_SetSize
0x7588E8: lea     edx, [esp+0Ch+a2]
0x7588EC: push    edx
0x7588ED: push    edi
0x7588EE: mov     ecx, esi
0x7588F0: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7588F5: pop     edi
0x7588F6: pop     esi
0x7588F7: pop     ebx
0x7588F8: retn    4
