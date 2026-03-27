0x6267A0: push    0FFFFFFFFh
0x6267A2: push    offset SEH_6267A0
0x6267A7: mov     eax, large fs:0
0x6267AD: push    eax
0x6267AE: sub     esp, 10h
0x6267B1: push    ebx
0x6267B2: push    ebp
0x6267B3: push    esi
0x6267B4: push    edi
0x6267B5: mov     eax, ds:0B30AACh
0x6267BA: xor     eax, esp
0x6267BC: push    eax
0x6267BD: lea     eax, [esp+30h+var_C]
0x6267C1: mov     large fs:0, eax
0x6267C7: mov     esi, ecx
0x6267C9: xor     ebx, ebx
0x6267CB: cmp     [esi+4Ch], bl
0x6267CE: jnz     loc_62687D
0x6267D4: mov     ecx, [esi+54h]
0x6267D7: cmp     ecx, ebx
0x6267D9: jnz     short loc_626844
0x6267DB: mov     ecx, [esi+50h]
0x6267DE: cmp     ecx, ebx
0x6267E0: jnz     short loc_626807
0x6267E2: mov     ecx, [esi+5Ch]
0x6267E5: mov     eax, [ecx]
0x6267E7: mov     edx, [eax+17Ch]
0x6267ED: push    1
0x6267EF: call    edx
0x6267F1: mov     esi, [esi+60h]
0x6267F4: mov     eax, [esi]
0x6267F6: mov     edx, [eax+17Ch]
0x6267FC: push    1
0x6267FE: mov     ecx, esi
0x626800: call    edx
0x626802: jmp     loc_626BEF
0x626807: call    sub_6B74B0
0x62680C: mov     ecx, [esi+50h]
0x62680F: call    sub_6B7C20
0x626814: cmp     eax, ebx
0x626816: mov     [esi+54h], eax
0x626819: jz      short loc_626824
0x62681B: mov     ecx, eax
0x62681D: call    sub_6B7BA0
0x626822: jmp     short loc_62684E
0x626824: mov     ecx, [esi+5Ch]
0x626827: mov     eax, [ecx]
0x626829: mov     edx, [eax+17Ch]
0x62682F: push    1
0x626831: call    edx
0x626833: mov     ecx, [esi+60h]
0x626836: mov     eax, [ecx]
0x626838: mov     edx, [eax+17Ch]
0x62683E: push    1
0x626840: call    edx
0x626842: jmp     short loc_626859
0x626844: cmp     [esi+58h], ebx
0x626847: jz      short loc_62685E
0x626849: call    sub_6B7C00
0x62684E: mov     ecx, [esi+54h]
0x626851: call    sub_6B7C20
0x626856: mov     [esi+58h], eax
0x626859: cmp     [esi+58h], ebx
0x62685C: jnz     short loc_62687D
0x62685E: mov     ecx, [esi+54h]; int
0x626861: cmp     ecx, ebx
0x626863: jz      short loc_62686A
0x626865: call    sub_6B7C30
0x62686A: mov     ecx, [esi+50h]
0x62686D: call    sub_6B74C0
0x626872: mov     ecx, [esi+50h]
0x626875: call    sub_6B7C20
0x62687A: mov     [esi+54h], eax
0x62687D: mov     ecx, [esi+54h]
0x626880: cmp     ecx, ebx
0x626882: jz      loc_626BCF
0x626888: cmp     [esi+58h], ebx
0x62688B: jnz     short loc_6268C1
0x62688D: call    sub_6B7BA0
0x626892: mov     ecx, [esi+54h]
0x626895: call    sub_6B7C20
0x62689A: cmp     eax, ebx
0x62689C: mov     [esi+58h], eax
0x62689F: jnz     short loc_6268B8
0x6268A1: mov     eax, [esi+54h]
0x6268A4: mov     eax, [eax+0Ch]
0x6268A7: mov     eax, [eax+0Ch]
0x6268AA: push    eax; ArgList
0x6268AB: push    offset aNoResponsesFou; "No responses found for conversation Top"...
0x6268B0: call    PrintError
0x6268B5: add     esp, 8
0x6268B8: cmp     [esi+58h], ebx
0x6268BB: jz      loc_626BEF
0x6268C1: mov     ecx, [esi+54h]
0x6268C4: mov     eax, [ecx+18h]
0x6268C7: push    ebx; int
0x6268C8: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x6268CD: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x6268D2: push    ebx; int
0x6268D3: push    eax; void *
0x6268D4: call    OblivionDynamicCast
0x6268D9: mov     edi, eax
0x6268DB: add     esp, 14h
0x6268DE: cmp     edi, ebx
0x6268E0: jz      loc_626BEF
0x6268E6: cmp     byte ptr [esp+30h+arg_0], 0
0x6268EB: jz      loc_626BEF
0x6268F1: mov     [esp+30h+var_1C.m_data], ebx
0x6268F5: mov     [esp+30h+var_1C.m_dataLen], bx
0x6268FA: mov     [esp+30h+var_1C.m_bufLen], bx
0x6268FF: mov     ecx, [esi+48h]
0x626902: cmp     ecx, ebx
0x626904: mov     [esp+30h+var_4], ebx
0x626908: jz      short loc_626912
0x62690A: call    sub_5EF930
0x62690F: mov     [esi+48h], ebx
0x626912: mov     edx, [esi+58h]
0x626915: mov     eax, [edx+10h]
0x626918: push    ebx; a3
0x626919: push    eax; a2
0x62691A: lea     ecx, [esp+38h+var_1C]; this
0x62691E: call    BSStringT_Set
0x626923: mov     ecx, [edi+58h]
0x626926: mov     eax, [ecx]
0x626928: mov     edx, [eax+260h]
0x62692E: call    edx
0x626930: test    eax, eax
0x626932: jnz     short loc_6269AD
0x626934: mov     ecx, [edi+58h]
0x626937: mov     eax, [ecx]
0x626939: mov     edx, [eax+250h]
0x62693F: call    edx
0x626941: test    al, al
0x626943: jnz     short loc_6269AD
0x626945: cmp     ds:0B1490Ch, al
0x62694B: jz      short loc_6269AD
0x62694D: mov     ecx, [edi+58h]
0x626950: mov     eax, [ecx]
0x626952: mov     edx, [eax+25Ch]
0x626958: call    edx
0x62695A: test    al, al
0x62695C: jnz     short loc_6269AD
0x62695E: mov     ecx, [esi+58h]
0x626961: mov     ebx, [ecx+0Ch]
0x626964: mov     ebp, [ecx+8]
0x626967: push    1
0x626969: push    1
0x62696B: push    0
0x62696D: push    1
0x62696F: call    BSStringT_GetLen
0x626974: mov     ecx, [esp+40h+var_1C.m_data]
0x626978: push    eax
0x626979: push    ebx
0x62697A: push    ebp
0x62697B: lea     eax, [esi+3Ch]
0x62697E: push    eax
0x62697F: push    ecx
0x626980: mov     ecx, edi
0x626982: call    Actor__InitDialogue
0x626987: fstp    dword ptr [esi+44h]
0x62698A: mov     [esi+48h], edi
0x62698D: mov     edi, [edi+58h]
0x626990: mov     edx, [edi]
0x626992: mov     eax, [edx+250h]
0x626998: mov     ecx, edi
0x62699A: call    eax
0x62699C: test    al, al
0x62699E: jz      loc_626BBC
0x6269A4: mov     byte ptr [esi+4Ch], 1
0x6269A8: jmp     loc_626BBC
0x6269AD: mov     ecx, [edi+58h]
0x6269B0: mov     edx, [ecx]
0x6269B2: mov     eax, [edx+250h]
0x6269B8: call    eax
0x6269BA: test    al, al
0x6269BC: jz      short loc_6269D3
0x6269BE: mov     ecx, [edi+58h]
0x6269C1: mov     edx, [ecx]
0x6269C3: mov     eax, [edx+25Ch]
0x6269C9: call    eax
0x6269CB: test    al, al
0x6269CD: jz      loc_626BBC
0x6269D3: mov     ecx, [edi+58h]
0x6269D6: mov     edx, [ecx]
0x6269D8: mov     eax, [edx+260h]
0x6269DE: call    eax
0x6269E0: test    eax, eax
0x6269E2: jnz     short loc_626A01
0x6269E4: mov     ecx, [edi+58h]
0x6269E7: mov     edx, [ecx]
0x6269E9: mov     eax, [edx+25Ch]
0x6269EF: call    eax
0x6269F1: test    al, al
0x6269F3: jnz     short loc_626A01
0x6269F5: cmp     ds:0B1490Ch, al
0x6269FB: jnz     loc_626BBC
0x626A01: mov     ecx, [esi+58h]
0x626A04: mov     ebp, [ecx+0Ch]
0x626A07: mov     ebx, [ecx+8]
0x626A0A: push    1
0x626A0C: push    0
0x626A0E: push    0
0x626A10: push    1
0x626A12: call    BSStringT_GetLen
0x626A17: mov     ecx, [esp+40h+var_1C.m_data]
0x626A1B: push    eax
0x626A1C: push    ebp
0x626A1D: push    ebx
0x626A1E: lea     ebx, [esi+3Ch]
0x626A21: push    ebx
0x626A22: push    ecx
0x626A23: mov     ecx, edi
0x626A25: call    Actor__InitDialogue
0x626A2A: fstp    dword ptr [esi+44h]
0x626A2D: mov     [esi+48h], edi
0x626A30: mov     ecx, [edi+58h]
0x626A33: mov     edx, [ecx]
0x626A35: mov     eax, [edx+264h]
0x626A3B: push    0
0x626A3D: call    eax
0x626A3F: mov     byte ptr [esi+4Ch], 0
0x626A43: mov     ecx, [edi+58h]
0x626A46: mov     edx, [ecx]
0x626A48: mov     eax, [edx+258h]
0x626A4E: push    0
0x626A50: call    eax
0x626A52: mov     ecx, [esi+48h]
0x626A55: mov     edx, [ecx]
0x626A57: mov     eax, [edx+164h]
0x626A5D: call    eax
0x626A5F: mov     ecx, [esi+60h]
0x626A62: mov     edx, [ecx]
0x626A64: mov     edi, eax
0x626A66: mov     eax, [edx+164h]
0x626A6C: call    eax
0x626A6E: test    edi, edi
0x626A70: mov     [esp+30h+arg_0], eax
0x626A74: jz      loc_626B04
0x626A7A: test    eax, eax
0x626A7C: jz      loc_626B04
0x626A82: mov     ecx, [esi+60h]
0x626A85: mov     edx, [esi+48h]
0x626A88: push    ecx
0x626A89: mov     ecx, ds:0B362C0h
0x626A8F: push    edx
0x626A90: call    sub_521450
0x626A95: mov     ebp, eax
0x626A97: test    ebp, ebp
0x626A99: jz      short loc_626AC0
0x626A9B: push    2; int
0x626A9D: mov     ecx, ebp
0x626A9F: call    sub_520200
0x626AA4: push    eax; int
0x626AA5: mov     eax, [esi+48h]
0x626AA8: push    eax; int
0x626AA9: push    ebp; int
0x626AAA: mov     ecx, edi; this
0x626AAC: call    sub_477DB0
0x626AB1: mov     ecx, [esi+5Ch]
0x626AB4: mov     ecx, [ecx+58h]
0x626AB7: mov     edx, [ecx]
0x626AB9: mov     eax, [edx+68h]
0x626ABC: push    0
0x626ABE: call    eax
0x626AC0: mov     eax, [esi+60h]
0x626AC3: mov     ecx, [esi+48h]
0x626AC6: cmp     eax, ecx
0x626AC8: jz      short loc_626B04
0x626ACA: push    ecx
0x626ACB: mov     ecx, ds:0B362C0h
0x626AD1: push    eax
0x626AD2: call    sub_521450
0x626AD7: mov     edi, eax
0x626AD9: test    edi, edi
0x626ADB: jz      short loc_626B04
0x626ADD: push    2; int
0x626ADF: mov     ecx, edi
0x626AE1: call    sub_520200
0x626AE6: mov     ecx, [esi+60h]
0x626AE9: push    eax; int
0x626AEA: push    ecx; int
0x626AEB: mov     ecx, [esp+3Ch+arg_0]; this
0x626AEF: push    edi; int
0x626AF0: call    sub_477DB0
0x626AF5: mov     edx, [esi+60h]
0x626AF8: mov     ecx, [edx+58h]
0x626AFB: mov     eax, [ecx]
0x626AFD: mov     edx, [eax+68h]
0x626B00: push    0
0x626B02: call    edx
0x626B04: mov     eax, ds:0B333C4h
0x626B09: cmp     esi, [eax+118h]
0x626B0F: jz      short loc_626B1A
0x626B11: cmp     byte ptr ds:0B3BDA5h, 0
0x626B18: jz      short loc_626B7F
0x626B1A: mov     ecx, [esi+50h]
0x626B1D: call    sub_6B7C20
0x626B22: test    eax, eax
0x626B24: jz      short loc_626B7F
0x626B26: mov     ecx, [esi+50h]
0x626B29: call    sub_6B7C20
0x626B2E: mov     ecx, eax
0x626B30: call    sub_6B7C20
0x626B35: test    eax, eax
0x626B37: jz      short loc_626B7F
0x626B39: mov     ecx, [esi+50h]
0x626B3C: call    sub_6B7C20
0x626B41: mov     ecx, eax
0x626B43: call    sub_6B7C20
0x626B48: cmp     dword ptr [eax], 0
0x626B4B: jz      short loc_626B7F
0x626B4D: cmp     byte ptr ds:0B13208h, 0
0x626B54: jz      short loc_626B7F
0x626B56: mov     ecx, [esi+50h]
0x626B59: call    sub_6B7C20
0x626B5E: mov     ecx, eax
0x626B60: call    sub_6B7C20
0x626B65: fld     dword ptr ds:0A30634h
0x626B6B: mov     eax, [eax]
0x626B6D: push    ecx
0x626B6E: mov     ecx, [ebx]
0x626B70: fstp    [esp+34h+duration]; duration
0x626B73: push    0; unk2
0x626B75: push    ecx; unk1
0x626B76: push    eax; string
0x626B77: call    GameUI_QueueMessage
0x626B7C: add     esp, 10h
0x626B7F: fldz
0x626B81: fcomp   dword ptr [esi+44h]
0x626B84: fnstsw  ax
0x626B86: test    ah, 1
0x626B89: jnz     short loc_626BBC
0x626B8B: mov     ecx, [esi+58h]
0x626B8E: call    BSStringT_GetLen
0x626B93: test    eax, eax
0x626B95: mov     [esp+30h+arg_0], eax
0x626B99: fild    [esp+30h+arg_0]
0x626B9D: jge     short loc_626BA5
0x626B9F: fadd    dword ptr ds:0A2FC78h
0x626BA5: mov     ecx, offset unk_B36AF8
0x626BAA: fstp    [esp+30h+var_14]
0x626BAE: call    GameSetting_GetSafeFloatPointer
0x626BB3: fld     dword ptr [eax]
0x626BB5: fmul    [esp+30h+var_14]
0x626BB9: fstp    dword ptr [esi+44h]
0x626BBC: lea     ecx, [esp+30h+var_1C]; void *
0x626BC0: mov     [esp+30h+var_4], 0FFFFFFFFh
0x626BC8: call    BSStringT_Clear
0x626BCD: jmp     short loc_626BEF
0x626BCF: mov     ecx, [esi+5Ch]
0x626BD2: mov     edx, [ecx]
0x626BD4: mov     eax, [edx+17Ch]
0x626BDA: push    1
0x626BDC: call    eax
0x626BDE: mov     esi, [esi+60h]
0x626BE1: mov     edx, [esi]
0x626BE3: mov     eax, [edx+17Ch]
0x626BE9: push    1
0x626BEB: mov     ecx, esi
0x626BED: call    eax
0x626BEF: mov     ecx, [esp+30h+var_C]
0x626BF3: mov     large fs:0, ecx
0x626BFA: pop     ecx
0x626BFB: pop     edi
0x626BFC: pop     esi
0x626BFD: pop     ebp
0x626BFE: pop     ebx
0x626BFF: add     esp, 1Ch
0x626C02: retn    4
