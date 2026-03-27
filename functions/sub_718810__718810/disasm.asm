0x718810: push    ebx
0x718811: push    esi
0x718812: mov     esi, dword ptr [esp+8+arg_0]
0x718816: push    edi
0x718817: push    esi
0x718818: mov     edi, ecx
0x71881A: call    sub_700B10
0x71881F: mov     eax, ds:0B3FCE8h
0x718824: push    eax; ArgList
0x718825: call    TESOutput_PrintString
0x71882A: movzx   ebx, word ptr [esi+0Ah]
0x71882E: movzx   ecx, word ptr [esi+8]
0x718832: add     esp, 4
0x718835: cmp     ebx, ecx
0x718837: mov     dword ptr [esp+0Ch+arg_0], eax
0x71883B: jb      short loc_71884B
0x71883D: movzx   edx, word ptr [esi+0Eh]
0x718841: add     edx, ebx
0x718843: push    edx
0x718844: mov     ecx, esi
0x718846: call    NiTArray_SetSize
0x71884B: lea     eax, [esp+0Ch+arg_0]
0x71884F: push    eax
0x718850: push    ebx
0x718851: mov     ecx, esi
0x718853: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x718858: mov     cl, [edi+18h]
0x71885B: and     cl, 1
0x71885E: mov     [esp+0Ch+arg_0], cl
0x718862: mov     edx, dword ptr [esp+0Ch+arg_0]
0x718866: push    edx; char
0x718867: push    offset aM_balpha; "m_bAlpha"
0x71886C: call    TESOutput_PrintLabeledBool
0x718871: movzx   ebx, word ptr [esi+0Ah]
0x718875: mov     dword ptr [esp+14h+arg_0], eax
0x718879: movzx   eax, word ptr [esi+8]
0x71887D: add     esp, 8
0x718880: cmp     ebx, eax
0x718882: jb      short loc_718892
0x718884: movzx   ecx, word ptr [esi+0Eh]
0x718888: add     ecx, ebx
0x71888A: push    ecx
0x71888B: mov     ecx, esi
0x71888D: call    NiTArray_SetSize
0x718892: lea     edx, [esp+0Ch+arg_0]
0x718896: push    edx
0x718897: push    ebx
0x718898: mov     ecx, esi
0x71889A: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x71889F: movzx   eax, byte ptr [edi+18h]
0x7188A3: shr     eax, 1
0x7188A5: and     eax, 0Fh
0x7188A8: push    eax; int
0x7188A9: push    offset aM_esrcblend; "m_eSrcBlend"
0x7188AE: call    sub_7182A0
0x7188B3: movzx   ebx, word ptr [esi+0Ah]
0x7188B7: mov     dword ptr [esp+14h+arg_0], eax
0x7188BB: movzx   eax, word ptr [esi+8]
0x7188BF: add     esp, 8
0x7188C2: cmp     ebx, eax
0x7188C4: jb      short loc_7188D4
0x7188C6: movzx   ecx, word ptr [esi+0Eh]
0x7188CA: add     ecx, ebx
0x7188CC: push    ecx
0x7188CD: mov     ecx, esi
0x7188CF: call    NiTArray_SetSize
0x7188D4: lea     edx, [esp+0Ch+arg_0]
0x7188D8: push    edx
0x7188D9: push    ebx
0x7188DA: mov     ecx, esi
0x7188DC: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7188E1: movzx   eax, word ptr [edi+18h]
0x7188E5: shr     eax, 5
0x7188E8: and     eax, 0Fh
0x7188EB: push    eax; int
0x7188EC: push    offset aM_edestblend; "m_eDestBlend"
0x7188F1: call    sub_7182A0
0x7188F6: movzx   ebx, word ptr [esi+0Ah]
0x7188FA: mov     dword ptr [esp+14h+arg_0], eax
0x7188FE: movzx   eax, word ptr [esi+8]
0x718902: add     esp, 8
0x718905: cmp     ebx, eax
0x718907: jb      short loc_718917
0x718909: movzx   ecx, word ptr [esi+0Eh]
0x71890D: add     ecx, ebx
0x71890F: push    ecx
0x718910: mov     ecx, esi
0x718912: call    NiTArray_SetSize
0x718917: lea     edx, [esp+0Ch+arg_0]
0x71891B: push    edx
0x71891C: push    ebx
0x71891D: mov     ecx, esi
0x71891F: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x718924: mov     ax, [edi+18h]
0x718928: shr     ax, 9
0x71892C: and     al, 1
0x71892E: mov     [esp+0Ch+arg_0], al
0x718932: mov     ecx, dword ptr [esp+0Ch+arg_0]
0x718936: push    ecx; char
0x718937: push    offset aM_balphatest; "m_bAlphaTest"
0x71893C: call    TESOutput_PrintLabeledBool
0x718941: movzx   ebx, word ptr [esi+0Ah]
0x718945: movzx   edx, word ptr [esi+8]
0x718949: add     esp, 8
0x71894C: cmp     ebx, edx
0x71894E: mov     dword ptr [esp+0Ch+arg_0], eax
0x718952: jb      short loc_718962
0x718954: movzx   eax, word ptr [esi+0Eh]
0x718958: add     eax, ebx
0x71895A: push    eax
0x71895B: mov     ecx, esi
0x71895D: call    NiTArray_SetSize
0x718962: lea     ecx, [esp+0Ch+arg_0]
0x718966: push    ecx
0x718967: push    ebx
0x718968: mov     ecx, esi
0x71896A: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x71896F: movzx   eax, word ptr [edi+18h]
0x718973: shr     eax, 0Ah
0x718976: and     eax, 7
0x718979: push    eax; int
0x71897A: push    offset aM_etestmode; "m_eTestMode"
0x71897F: call    sub_718400
0x718984: movzx   ebx, word ptr [esi+0Ah]
0x718988: movzx   edx, word ptr [esi+8]
0x71898C: add     esp, 8
0x71898F: cmp     ebx, edx
0x718991: mov     dword ptr [esp+0Ch+arg_0], eax
0x718995: jb      short loc_7189A5
0x718997: movzx   eax, word ptr [esi+0Eh]
0x71899B: add     eax, ebx
0x71899D: push    eax
0x71899E: mov     ecx, esi
0x7189A0: call    NiTArray_SetSize
0x7189A5: lea     ecx, [esp+0Ch+arg_0]
0x7189A9: push    ecx
0x7189AA: push    ebx
0x7189AB: mov     ecx, esi
0x7189AD: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7189B2: mov     dl, [edi+1Ah]
0x7189B5: mov     [esp+0Ch+arg_0], dl
0x7189B9: mov     eax, dword ptr [esp+0Ch+arg_0]
0x7189BD: push    eax; char
0x7189BE: push    offset aM_uctestref; "m_ucTestRef"
0x7189C3: call    sub_70FA00
0x7189C8: movzx   ebx, word ptr [esi+0Ah]
0x7189CC: movzx   ecx, word ptr [esi+8]
0x7189D0: add     esp, 8
0x7189D3: cmp     ebx, ecx
0x7189D5: mov     dword ptr [esp+0Ch+arg_0], eax
0x7189D9: jb      short loc_7189E9
0x7189DB: movzx   edx, word ptr [esi+0Eh]
0x7189DF: add     edx, ebx
0x7189E1: push    edx
0x7189E2: mov     ecx, esi
0x7189E4: call    NiTArray_SetSize
0x7189E9: lea     eax, [esp+0Ch+arg_0]
0x7189ED: push    eax
0x7189EE: push    ebx
0x7189EF: mov     ecx, esi
0x7189F1: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7189F6: mov     cx, [edi+18h]
0x7189FA: shr     cx, 0Dh
0x7189FE: and     cl, 1
0x718A01: mov     [esp+0Ch+arg_0], cl
0x718A05: mov     edx, dword ptr [esp+0Ch+arg_0]
0x718A09: push    edx; char
0x718A0A: push    offset aM_bnosorter; "m_bNoSorter"
0x718A0F: call    TESOutput_PrintLabeledBool
0x718A14: movzx   edi, word ptr [esi+0Ah]
0x718A18: mov     dword ptr [esp+14h+arg_0], eax
0x718A1C: movzx   eax, word ptr [esi+8]
0x718A20: add     esp, 8
0x718A23: cmp     edi, eax
0x718A25: jb      short loc_718A35
0x718A27: movzx   ecx, word ptr [esi+0Eh]
0x718A2B: add     ecx, edi
0x718A2D: push    ecx
0x718A2E: mov     ecx, esi
0x718A30: call    NiTArray_SetSize
0x718A35: lea     edx, [esp+0Ch+arg_0]
0x718A39: push    edx
0x718A3A: push    edi
0x718A3B: mov     ecx, esi
0x718A3D: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x718A42: pop     edi
0x718A43: pop     esi
0x718A44: pop     ebx
0x718A45: retn    4
