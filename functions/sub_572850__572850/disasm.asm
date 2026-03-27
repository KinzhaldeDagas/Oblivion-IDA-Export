0x572850: push    0FFFFFFFFh
0x572852: push    offset SEH_572850
0x572857: mov     eax, large fs:0
0x57285D: push    eax
0x57285E: sub     esp, 0B4h
0x572864: push    ebx
0x572865: push    ebp
0x572866: push    esi
0x572867: push    edi
0x572868: mov     eax, ds:0B30AACh
0x57286D: xor     eax, esp
0x57286F: push    eax
0x572870: lea     eax, [esp+0D4h+var_C]
0x572877: mov     large fs:0, eax
0x57287D: mov     ebp, [esp+0D4h+arg_0]
0x572884: xor     edi, edi
0x572886: cmp     ebp, edi
0x572888: jz      loc_572AF7
0x57288E: fld     dword ptr [ebp+28h]
0x572891: mov     [esp+0D4h+var_BD], 0
0x572896: call    Double_To_SInt32
0x57289B: mov     ecx, [esp+0D4h+arg_8]
0x5728A2: mov     edx, [esp+0D4h+a2]
0x5728A9: mov     [esp+0D4h+var_B8], eax
0x5728AD: lea     eax, [esp+0D4h+var_B8]
0x5728B1: push    eax
0x5728B2: push    ecx
0x5728B3: push    edx
0x5728B4: push    ebp
0x5728B5: call    sub_571BD0
0x5728BA: mov     ebx, eax
0x5728BC: add     esp, 10h
0x5728BF: cmp     ebx, edi
0x5728C1: jz      loc_5729CE
0x5728C7: push    1
0x5728C9: call    sub_571F90
0x5728CE: mov     esi, [eax+15E4h]
0x5728D4: add     eax, 15E0h
0x5728D9: add     esp, 4
0x5728DC: cmp     esi, edi
0x5728DE: jz      short loc_572937
0x5728E0: mov     ecx, ds:0B3A6A4h
0x5728E6: cmp     ecx, edi
0x5728E8: jnz     short loc_572924
0x5728EA: push    15F0h; Size
0x5728EF: call    FormHeapAlloc
0x5728F4: add     esp, 4
0x5728F7: mov     [esp+0D4h+var_BC], eax
0x5728FB: cmp     eax, edi
0x5728FD: mov     [esp+0D4h+var_4], edi
0x572904: jz      short loc_57290F
0x572906: mov     ecx, eax
0x572908: call    sub_571E80
0x57290D: jmp     short loc_572911
0x57290F: xor     eax, eax
0x572911: mov     ecx, eax
0x572913: mov     [esp+0D4h+var_4], 0FFFFFFFFh
0x57291E: mov     ds:0B3A6A4h, ecx
0x572924: lea     eax, [esi+8]
0x572927: mov     eax, [eax]
0x572929: mov     edx, [eax+0Ch]
0x57292C: cmp     edx, [ebx+0Ch]
0x57292F: mov     esi, [esi]
0x572931: jz      short loc_57299A
0x572933: cmp     esi, edi
0x572935: jnz     short loc_5728E6
0x572937: mov     ecx, [ebx+0Ch]
0x57293A: mov     eax, [ebp+0]
0x57293D: mov     eax, [eax+88h]
0x572943: push    ecx
0x572944: lea     edx, [esp+0D8h+var_B8]
0x572948: push    edx
0x572949: mov     ecx, ebp
0x57294B: call    eax
0x57294D: mov     esi, [esp+0D4h+var_B8]
0x572951: cmp     esi, edi
0x572953: jz      short loc_572971
0x572955: lea     ecx, [esi+4]
0x572958: push    ecx; lpAddend
0x572959: call    dword ptr ds:0A2807Ch
0x57295F: test    eax, eax
0x572961: jnz     short loc_572971
0x572963: cmp     esi, edi
0x572965: jz      short loc_572971
0x572967: mov     edx, [esi]
0x572969: mov     eax, [edx]
0x57296B: push    1
0x57296D: mov     ecx, esi
0x57296F: call    eax
0x572971: push    0E4h ; 'ä'; Size
0x572976: call    FormHeapAlloc
0x57297B: add     esp, 4
0x57297E: mov     [esp+0D4h+var_BC], eax
0x572982: cmp     eax, edi
0x572984: mov     [esp+0D4h+var_4], 1
0x57298F: jz      short loc_5729A9
0x572991: mov     ecx, eax
0x572993: call    NiBillBoardNode_Constructor
0x572998: jmp     short loc_5729AB
0x57299A: fld     [esp+0D4h+arg_C]
0x5729A1: fstp    dword ptr [eax+18h]
0x5729A4: jmp     loc_572D65
0x5729A9: xor     eax, eax
0x5729AB: push    offset aFloatingtext; "FloatingText"
0x5729B0: mov     ecx, eax
0x5729B2: mov     [esp+0D8h+var_4], 0FFFFFFFFh
0x5729BD: mov     ebp, eax
0x5729BF: call    NiObjectNET_SetName
0x5729C4: mov     [esp+0D4h+var_BD], 1
0x5729C9: jmp     loc_572A72
0x5729CE: push    0E4h ; 'ä'; Size
0x5729D3: call    FormHeapAlloc
0x5729D8: mov     esi, eax
0x5729DA: add     esp, 4
0x5729DD: mov     [esp+0D4h+var_BC], esi
0x5729E1: cmp     esi, edi
0x5729E3: mov     [esp+0D4h+var_4], 2
0x5729EE: jz      short loc_572A11
0x5729F0: push    edi
0x5729F1: mov     ecx, esi; this
0x5729F3: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x5729F8: fldz
0x5729FA: fstp    dword ptr [esi+0E0h]
0x572A00: mov     dword ptr [esi], offset ??_7NiBillboardNode@@6B@; const NiBillboardNode::`vftable'
0x572A06: mov     word ptr [esi+0DCh], 9
0x572A0F: jmp     short loc_572A13
0x572A11: xor     esi, esi
0x572A13: or      ebx, 0FFFFFFFFh
0x572A16: push    offset aFloatingtext; "FloatingText"
0x572A1B: mov     ecx, esi
0x572A1D: mov     [esp+0D8h+var_4], ebx
0x572A24: mov     ebp, esi
0x572A26: call    NiObjectNET_SetName
0x572A2B: push    20h ; ' '; Size
0x572A2D: call    FormHeapAlloc
0x572A32: add     esp, 4
0x572A35: mov     [esp+0D4h+var_BC], eax
0x572A39: cmp     eax, edi
0x572A3B: mov     [esp+0D4h+var_4], 3
0x572A46: jz      short loc_572A67
0x572A48: mov     ecx, [esp+0D4h+var_B8]
0x572A4C: mov     edx, [esp+0D4h+arg_8]
0x572A53: push    ecx
0x572A54: mov     ecx, [esp+0D8h+a2]
0x572A5B: push    edx
0x572A5C: push    ecx
0x572A5D: push    esi
0x572A5E: mov     ecx, eax
0x572A60: call    sub_571C50
0x572A65: jmp     short loc_572A69
0x572A67: xor     eax, eax
0x572A69: mov     [esp+0D4h+var_4], ebx
0x572A70: mov     ebx, eax
0x572A72: mov     edx, [ebx+1Ch]
0x572A75: add     edx, [esp+0D4h+arg_8]
0x572A7C: mov     eax, [esp+0D4h+a2]
0x572A83: push    edi; a3
0x572A84: push    eax; a2
0x572A85: lea     ecx, [esp+0DCh+var_B4]; this
0x572A89: mov     [esp+0DCh+var_B8], edx
0x572A8D: mov     [esp+0DCh+var_AC], 2710h
0x572A95: mov     [esp+0DCh+var_B4.m_data], edi
0x572A99: mov     [esp+0DCh+var_B4.m_dataLen], di
0x572A9E: mov     [esp+0DCh+var_B4.m_bufLen], di
0x572AA3: call    BSStringT_Set
0x572AA8: mov     [esp+0D4h+var_4], 4
0x572AB3: call    FontManager_GetSingleton
0x572AB8: fldz
0x572ABA: mov     eax, [eax+4]
0x572ABD: push    edi; int
0x572ABE: push    offset dword_B25AE0; int
0x572AC3: push    2; int
0x572AC5: lea     ecx, [esp+0E0h+var_AC]
0x572AC9: push    ecx; int
0x572ACA: lea     edx, [esp+0E4h+var_B4]
0x572ACE: push    edx; int
0x572ACF: sub     esp, 0Ch
0x572AD2: fst     [esp+0F4h+var_EC]; float
0x572AD6: mov     ecx, eax
0x572AD8: fst     [esp+0F4h+var_F0]; float
0x572ADC: fstp    [esp+0F4h+var_F4]; float
0x572ADF: call    sub_575870
0x572AE4: mov     esi, eax
0x572AE6: cmp     esi, edi
0x572AE8: jnz     short loc_572AFE
0x572AEA: mov     eax, [esp+0D4h+var_B4.m_data]
0x572AEE: push    eax
0x572AEF: call    FormHeapFree
0x572AF4: add     esp, 4
0x572AF7: xor     al, al
0x572AF9: jmp     loc_572D67
0x572AFE: mov     edx, [ebp+0]
0x572B01: mov     eax, [edx+84h]
0x572B07: push    1
0x572B09: push    esi
0x572B0A: mov     ecx, ebp
0x572B0C: call    eax
0x572B0E: mov     edx, [esp+0D4h+a2]
0x572B15: push    edi; a3
0x572B16: lea     ecx, [ebx+10h]; this
0x572B19: push    edx; a2
0x572B1A: call    BSStringT_Set
0x572B1F: fld     dword ptr ds:0A3F3E0h
0x572B25: push    ecx
0x572B26: lea     ecx, [esp+0D8h+var_9C]
0x572B2A: fstp    [esp+0D8h+var_D8]; float
0x572B2D: call    NiMatrix33_InitRotationTransposedTransform???
0x572B32: lea     edi, [esi+30h]
0x572B35: push    edi
0x572B36: lea     eax, [esp+0D8h+var_78]
0x572B3A: push    eax
0x572B3B: lea     ecx, [esp+0DCh+var_9C]
0x572B3F: call    NiMAtrix33_Multiply
0x572B44: fldz
0x572B46: fst     [esp+0D4h+var_A8]
0x572B4A: mov     esi, eax
0x572B4C: fstp    [esp+0D4h+var_A4]
0x572B50: mov     ecx, 9
0x572B55: fild    [esp+0D4h+var_B8]
0x572B59: mov     edx, [esp+0D4h+var_A4]
0x572B5D: rep movsd
0x572B5F: fstp    [esp+0D4h+var_B8]
0x572B63: fld     [esp+0D4h+var_B8]
0x572B67: fstp    [esp+0D4h+var_A0]
0x572B6B: fld     dword ptr ds:0A3721Ch
0x572B71: mov     ecx, [esp+0D4h+var_A8]
0x572B75: mov     eax, [esp+0D4h+var_A0]
0x572B79: mov     [ebp+54h], ecx
0x572B7C: push    ecx
0x572B7D: mov     [ebp+58h], edx
0x572B80: lea     ecx, [esp+0D8h+var_9C]
0x572B84: fstp    [esp+0D8h+var_D8]; float
0x572B87: mov     [ebp+5Ch], eax
0x572B8A: call    NiMatrix33_InitRotationTransposedTransform???
0x572B8F: push    ecx
0x572B90: fld     dword ptr ds:0A449C0h
0x572B96: lea     ecx, [esp+0D8h+var_54]
0x572B9D: fstp    [esp+0D8h+var_D8]; float
0x572BA0: call    sub_70FD80
0x572BA5: lea     edi, [ebp+30h]
0x572BA8: push    edi
0x572BA9: lea     ecx, [esp+0D8h+var_78]
0x572BAD: push    ecx
0x572BAE: lea     edx, [esp+0DCh+var_54]
0x572BB5: push    edx
0x572BB6: lea     eax, [esp+0E0h+var_30]
0x572BBD: push    eax
0x572BBE: lea     ecx, [esp+0E4h+var_9C]
0x572BC2: call    NiMAtrix33_Multiply
0x572BC7: mov     ecx, eax
0x572BC9: call    NiMAtrix33_Multiply
0x572BCE: fld     qword ptr ds:0A2FAA0h
0x572BD4: fabs
0x572BD6: mov     esi, eax
0x572BD8: fstp    [esp+0D4h+var_BC]
0x572BDC: mov     ecx, 9
0x572BE1: fld     [esp+0D4h+var_BC]
0x572BE5: rep movsd
0x572BE7: fstp    dword ptr [ebp+60h]
0x572BEA: push    1Ch; Size
0x572BEC: mov     [ebx+0Ch], ebp
0x572BEF: call    FormHeapAlloc
0x572BF4: mov     esi, eax
0x572BF6: add     esp, 4
0x572BF9: mov     [esp+0D4h+var_BC], esi
0x572BFD: test    esi, esi
0x572BFF: mov     byte ptr [esp+0D4h+var_4], 5
0x572C07: jz      short loc_572C1E
0x572C09: mov     ecx, esi; this
0x572C0B: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x572C10: mov     dword ptr [esi], offset ??_7NiVertexColorProperty@@6B@; const NiVertexColorProperty::`vftable'
0x572C16: mov     word ptr [esi+18h], 8
0x572C1C: jmp     short loc_572C20
0x572C1E: xor     esi, esi
0x572C20: mov     cx, [esi+18h]
0x572C24: and     cx, 0FFD7h
0x572C29: or      cx, 10h
0x572C2D: mov     [esi+18h], cx
0x572C31: push    esi; a2
0x572C32: mov     ecx, ebp; this
0x572C34: mov     byte ptr [esp+0D8h+var_4], 4
0x572C3C: call    sub_405680
0x572C41: push    1Ch; Size
0x572C43: call    FormHeapAlloc
0x572C48: mov     esi, eax
0x572C4A: add     esp, 4
0x572C4D: mov     [esp+0D4h+var_BC], esi
0x572C51: test    esi, esi
0x572C53: mov     byte ptr [esp+0D4h+var_4], 6
0x572C5B: jz      short loc_572C76
0x572C5D: mov     ecx, esi; this
0x572C5F: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x572C64: mov     dword ptr [esi], offset ??_7NiAlphaProperty@@6B@; const NiAlphaProperty::`vftable'
0x572C6A: mov     word ptr [esi+18h], 0ECh ; 'ì'
0x572C70: mov     byte ptr [esi+1Ah], 0
0x572C74: jmp     short loc_572C78
0x572C76: xor     esi, esi
0x572C78: mov     dx, [esi+18h]
0x572C7C: and     dx, 0DFFFh
0x572C81: or      dx, 1
0x572C85: push    esi; a2
0x572C86: mov     ecx, ebp; this
0x572C88: mov     byte ptr [esp+0D8h+var_4], 4
0x572C90: mov     [esi+18h], dx
0x572C94: call    sub_405680
0x572C99: cmp     [esp+0D4h+var_BD], 0
0x572C9E: mov     esi, [esp+0D4h+arg_0]
0x572CA5: jnz     short loc_572CAF
0x572CA7: push    ebx
0x572CA8: mov     ecx, esi
0x572CAA: call    NiNode_AddNiExtraData
0x572CAF: mov     eax, [esi]
0x572CB1: mov     edx, [eax+84h]
0x572CB7: push    1
0x572CB9: push    ebp
0x572CBA: mov     ecx, esi
0x572CBC: call    edx
0x572CBE: mov     ecx, ebp; this
0x572CC0: call    NiAVObject_InitializePropertyState
0x572CC5: mov     ecx, ebp
0x572CC7: call    NiNode_UpdateDynamicEffectState
0x572CCC: fldz
0x572CCE: push    0; a3
0x572CD0: push    ecx
0x572CD1: mov     ecx, ebp; this
0x572CD3: fstp    [esp+0DCh+var_DC]; a2
0x572CD6: call    NiAVObject_UpdateNiAVObject
0x572CDB: push    1Ch; Size
0x572CDD: call    FormHeapAlloc
0x572CE2: add     esp, 4
0x572CE5: mov     [esp+0D4h+var_BC], eax
0x572CE9: test    eax, eax
0x572CEB: mov     byte ptr [esp+0D4h+var_4], 7
0x572CF3: jz      short loc_572D00
0x572CF5: mov     ecx, eax
0x572CF7: call    sub_571D40
0x572CFC: mov     esi, eax
0x572CFE: jmp     short loc_572D02
0x572D00: xor     esi, esi
0x572D02: fld     [esp+0D4h+var_B8]
0x572D06: mov     eax, [esp+0D4h+a2]
0x572D0D: fst     dword ptr [esi]
0x572D0F: push    0; a3
0x572D11: fstp    dword ptr [esi+4]
0x572D14: lea     ecx, [esi+10h]; this
0x572D17: fld     [esp+0D8h+arg_C]
0x572D1E: push    eax; a2
0x572D1F: fstp    dword ptr [esi+18h]
0x572D22: mov     byte ptr [esp+0DCh+var_4], 4
0x572D2A: mov     [esp+0DCh+var_BC], esi
0x572D2E: call    BSStringT_Set
0x572D33: push    ebp; a2
0x572D34: lea     ecx, [esi+0Ch]; this
0x572D37: call    NiSmartPointer_Set??
0x572D3C: lea     ecx, [esp+0D4h+var_BC]
0x572D40: push    ecx
0x572D41: push    1
0x572D43: call    sub_571F90
0x572D48: mov     ecx, eax
0x572D4A: add     esp, 4
0x572D4D: add     ecx, 15E0h
0x572D53: call    sub_5B1E20
0x572D58: mov     edx, [esp+0D4h+var_B4.m_data]
0x572D5C: push    edx
0x572D5D: call    FormHeapFree
0x572D62: add     esp, 4
0x572D65: mov     al, 1
0x572D67: mov     ecx, dword ptr [esp+0D4h+var_C]
0x572D6E: mov     large fs:0, ecx
0x572D75: pop     ecx
0x572D76: pop     edi
0x572D77: pop     esi
0x572D78: pop     ebp
0x572D79: pop     ebx
0x572D7A: add     esp, 0C0h
0x572D80: retn
