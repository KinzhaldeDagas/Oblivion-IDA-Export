0x49B710: push    0FFFFFFFFh
0x49B712: push    offset SEH_49B710
0x49B717: mov     eax, large fs:0
0x49B71D: push    eax
0x49B71E: sub     esp, 10h
0x49B721: push    ebx
0x49B722: push    ebp
0x49B723: push    esi
0x49B724: push    edi
0x49B725: mov     eax, ds:0B30AACh
0x49B72A: xor     eax, esp
0x49B72C: push    eax
0x49B72D: lea     eax, [esp+30h+var_C]
0x49B731: mov     large fs:0, eax
0x49B737: mov     ebx, ecx
0x49B739: mov     eax, [ebx+4]
0x49B73C: test    eax, eax
0x49B73E: lea     edi, [ebx+4]
0x49B741: jnz     loc_49B90D
0x49B747: push    0DCh ; 'Ü'; Size
0x49B74C: call    FormHeapAlloc
0x49B751: add     esp, 4
0x49B754: mov     [esp+30h+var_1C], eax
0x49B758: test    eax, eax
0x49B75A: mov     [esp+30h+var_4], 0
0x49B762: jz      short loc_49B76F
0x49B764: push    0
0x49B766: mov     ecx, eax; this
0x49B768: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x49B76D: jmp     short loc_49B771
0x49B76F: xor     eax, eax
0x49B771: or      ebp, 0FFFFFFFFh
0x49B774: push    eax; a2
0x49B775: mov     ecx, edi; this
0x49B777: mov     [esp+34h+var_4], ebp
0x49B77B: call    NiSmartPointer_Set??
0x49B780: push    1Ch; Size
0x49B782: call    FormHeapAlloc
0x49B787: mov     esi, eax
0x49B789: add     esp, 4
0x49B78C: mov     [esp+30h+var_1C], esi
0x49B790: test    esi, esi
0x49B792: mov     [esp+30h+var_4], 1
0x49B79A: jz      short loc_49B7B5
0x49B79C: mov     ecx, esi; this
0x49B79E: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x49B7A3: mov     dword ptr [esi], offset ??_7NiAlphaProperty@@6B@; const NiAlphaProperty::`vftable'
0x49B7A9: mov     word ptr [esi+18h], 0ECh ; 'ì'
0x49B7AF: mov     byte ptr [esi+1Ah], 0
0x49B7B3: jmp     short loc_49B7B7
0x49B7B5: xor     esi, esi
0x49B7B7: mov     ax, [esi+18h]
0x49B7BB: and     ax, 0DCEDh
0x49B7BF: or      ax, 0EDh
0x49B7C3: mov     [esi+18h], ax
0x49B7C7: mov     ecx, [edi]; this
0x49B7C9: push    esi; a2
0x49B7CA: mov     [esp+34h+var_4], ebp
0x49B7CE: call    sub_405680
0x49B7D3: push    esi; a2
0x49B7D4: lea     ecx, [ebx+24h]; this
0x49B7D7: call    NiSmartPointer_Set??
0x49B7DC: push    5Ch ; '\'; Size
0x49B7DE: call    FormHeapAlloc
0x49B7E3: add     esp, 4
0x49B7E6: mov     [esp+30h+var_1C], eax
0x49B7EA: test    eax, eax
0x49B7EC: mov     esi, 2
0x49B7F1: mov     [esp+30h+var_4], esi
0x49B7F5: jz      short loc_49B800
0x49B7F7: mov     ecx, eax; this
0x49B7F9: call    ??0NiMaterialProperty@@QAE@XZ; NiMaterialProperty::NiMaterialProperty(void)
0x49B7FE: jmp     short loc_49B802
0x49B800: xor     eax, eax
0x49B802: fld1
0x49B804: add     [eax+54h], esi
0x49B807: fst     [esp+30h+var_18]
0x49B80B: push    eax; a2
0x49B80C: mov     ecx, [esp+34h+var_18]
0x49B810: fst     [esp+34h+var_14]
0x49B814: mov     edx, [esp+34h+var_14]
0x49B818: fst     [esp+34h+var_10]
0x49B81C: mov     [eax+1Ch], ecx
0x49B81F: fst     [esp+34h+var_18]
0x49B823: mov     ecx, [esp+34h+var_10]
0x49B827: fst     [esp+34h+var_14]
0x49B82B: mov     [eax+20h], edx
0x49B82E: fstp    [esp+34h+var_10]
0x49B832: mov     edx, [esp+34h+var_18]
0x49B836: mov     [eax+28h], edx
0x49B839: mov     edx, [esp+34h+var_10]
0x49B83D: mov     [eax+24h], ecx
0x49B840: mov     ecx, [esp+34h+var_14]
0x49B844: mov     [eax+2Ch], ecx
0x49B847: mov     [eax+30h], edx
0x49B84A: mov     ecx, [edi]; this
0x49B84C: mov     [esp+34h+var_4], ebp
0x49B850: call    sub_405680
0x49B855: push    1Ch; Size
0x49B857: call    FormHeapAlloc
0x49B85C: mov     esi, eax
0x49B85E: add     esp, 4
0x49B861: mov     [esp+30h+var_1C], esi
0x49B865: test    esi, esi
0x49B867: mov     [esp+30h+var_4], 3
0x49B86F: jz      short loc_49B888
0x49B871: mov     ecx, esi; this
0x49B873: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x49B878: mov     dword ptr [esi], offset ??_7NiZBufferProperty@@6B@; const NiZBufferProperty::`vftable'
0x49B87E: mov     word ptr [esi+18h], 0Fh
0x49B884: mov     eax, esi
0x49B886: jmp     short loc_49B88A
0x49B888: xor     eax, eax
0x49B88A: mov     cx, [eax+18h]
0x49B88E: and     cx, 0FFFDh
0x49B893: or      cx, 1
0x49B897: mov     [eax+18h], cx
0x49B89B: mov     ecx, [edi]; this
0x49B89D: push    eax; a2
0x49B89E: mov     [esp+34h+var_4], ebp
0x49B8A2: call    sub_405680
0x49B8A7: push    24h ; '$'; Size
0x49B8A9: call    FormHeapAlloc
0x49B8AE: mov     esi, eax
0x49B8B0: add     esp, 4
0x49B8B3: mov     [esp+30h+var_1C], esi
0x49B8B7: test    esi, esi
0x49B8B9: mov     [esp+30h+var_4], 4
0x49B8C1: jz      short loc_49B8E2
0x49B8C3: mov     ecx, esi; this
0x49B8C5: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x49B8CA: mov     dword ptr [esi], offset ??_7NiStencilProperty@@6B@; const NiStencilProperty::`vftable'
0x49B8D0: mov     dword ptr [esi+1Ch], 0
0x49B8D7: mov     [esi+20h], ebp
0x49B8DA: mov     word ptr [esi+18h], 4180h
0x49B8E0: jmp     short loc_49B8E4
0x49B8E2: xor     esi, esi
0x49B8E4: or      word ptr [esi+18h], 0C00h
0x49B8EA: mov     ecx, [edi]; this
0x49B8EC: push    esi; a2
0x49B8ED: mov     [esp+34h+var_4], ebp
0x49B8F1: call    sub_405680
0x49B8F6: mov     eax, [esp+30h+arg_0]
0x49B8FA: test    eax, eax
0x49B8FC: mov     ecx, [edi]
0x49B8FE: jz      short loc_49B903
0x49B900: push    eax
0x49B901: jmp     short loc_49B908
0x49B903: push    offset aWaterNode; "Water Node"
0x49B908: call    NiObjectNET_SetName
0x49B90D: mov     ecx, [esp+30h+var_C]
0x49B911: mov     large fs:0, ecx
0x49B918: pop     ecx
0x49B919: pop     edi
0x49B91A: pop     esi
0x49B91B: pop     ebp
0x49B91C: pop     ebx
0x49B91D: add     esp, 1Ch
0x49B920: retn    4
