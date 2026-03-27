0x5F6540: sub     esp, 108h
0x5F6546: mov     eax, ds:0B30AACh
0x5F654B: xor     eax, esp
0x5F654D: mov     [esp+108h+var_4], eax
0x5F6554: push    ebx
0x5F6555: push    ebp
0x5F6556: mov     ebp, [esp+110h+arg_4]
0x5F655D: mov     ebx, ecx
0x5F655F: cmp     dword ptr [ebx+58h], 0
0x5F6563: push    esi
0x5F6564: mov     esi, [esp+114h+arg_8]
0x5F656B: jnz     short loc_5F6574
0x5F656D: xor     eax, eax
0x5F656F: jmp     Actor_GetDetectionLevel___Return
0x5F6574: mov     byte ptr [esi], 0
0x5F6577: mov     ecx, [ebx+58h]
0x5F657A: mov     eax, [ecx]
0x5F657C: mov     edx, [eax+3B0h]
0x5F6582: push    edi
0x5F6583: mov     edi, 7FFFFFFFh
0x5F6588: push    ebp
0x5F6589: mov     [esp+11Ch+var_100], edi
0x5F658D: call    edx
0x5F658F: test    eax, eax
0x5F6591: jz      short loc_5F659F
0x5F6593: mov     ecx, [eax+0Ch]
0x5F6596: mov     dl, [eax+8]
0x5F6599: mov     [esp+114h+var_FC], ecx
0x5F659D: mov     [esi], dl
0x5F659F: mov     eax, [ebp+0]
0x5F65A2: mov     edx, [eax+154h]
0x5F65A8: mov     ecx, ebp
0x5F65AA: call    edx
0x5F65AC: test    eax, eax
0x5F65AE: jz      Actor_GetDetectionLevel___Return_Neg1
0x5F65B4: cmp     byte ptr [esp+114h+arg_4], 0
0x5F65BC: jnz     short loc_5F65C8
0x5F65BE: cmp     [esp+114h+var_FC], edi
0x5F65C2: jnz     Actor_GetDetectionLevel___ReturnDetectionLevel
0x5F65C8: push    0
0x5F65CA: push    ebp
0x5F65CB: mov     ecx, ebx
0x5F65CD: call    TesObjectREF_GetDistance
0x5F65D2: fstp    [esp+114h+var_E0]
0x5F65D6: add     dword ptr ds:0B333C0h, 1
0x5F65DD: mov     ecx, [ebp+58h]
0x5F65E0: mov     eax, [ecx]
0x5F65E2: mov     edx, [eax+3ACh]
0x5F65E8: push    0
0x5F65EA: push    ebp
0x5F65EB: call    edx
0x5F65ED: call    Double_To_SInt32
0x5F65F2: mov     [esp+114h+var_F0], eax
0x5F65F6: mov     eax, [ebx]
0x5F65F8: mov     edx, [eax+288h]
0x5F65FE: push    29h ; ')'
0x5F6600: mov     ecx, ebx
0x5F6602: call    edx
0x5F6604: fcomp   dword ptr ds:0A2FAA8h
0x5F660A: fnstsw  ax
0x5F660C: test    ah, 41h
0x5F660F: jnz     short loc_5F6631
0x5F6611: fild    [esp+114h+var_F0]
0x5F6615: fmul    dword ptr ds:0B37A50h
0x5F661B: call    Double_To_SInt32
0x5F6620: cmp     eax, 64h ; 'd'
0x5F6623: mov     [esp+114h+var_F0], eax
0x5F6627: jle     short loc_5F6631
0x5F6629: mov     [esp+114h+var_F0], 64h ; 'd'
0x5F6631: push    0; char
0x5F6633: lea     eax, [esp+118h+var_F4]
0x5F6637: push    eax; int
0x5F6638: push    1; char
0x5F663A: push    ebp; int
0x5F663B: push    1; int
0x5F663D: mov     ecx, ebx; int
0x5F663F: mov     [esp+128h+var_F4], 3
0x5F6647: call    sub_5F2820
0x5F664C: mov     edx, [ebx]
0x5F664E: mov     byte ptr [esp+114h+var_E8], al
0x5F6652: mov     eax, [edx+330h]
0x5F6658: mov     ecx, ebx
0x5F665A: call    eax
0x5F665C: test    eax, eax
0x5F665E: jz      short loc_5F668F
0x5F6660: mov     edx, [ebx]
0x5F6662: mov     eax, [edx+330h]
0x5F6668: mov     ecx, ebx
0x5F666A: call    eax
0x5F666C: mov     ecx, eax
0x5F666E: call    sub_6135F0
0x5F6673: cmp     eax, ebp
0x5F6675: jnz     short loc_5F668F
0x5F6677: mov     ecx, [esp+114h+var_F4]
0x5F667B: mov     edx, [ebx]
0x5F667D: mov     eax, [edx+330h]
0x5F6683: push    ecx
0x5F6684: mov     ecx, ebx
0x5F6686: call    eax
0x5F6688: mov     ecx, eax
0x5F668A: call    sub_612810
0x5F668F: mov     cl, byte ptr [esp+114h+var_E8]
0x5F6693: mov     [esi], cl
0x5F6695: mov     ecx, ebp
0x5F6697: call    sub_5F3B50
0x5F669C: mov     ecx, ebp
0x5F669E: mov     [esp+114h+var_DC], eax
0x5F66A2: call    Actor_IsSneaking
0x5F66A7: test    al, al
0x5F66A9: jz      short loc_5F66CA
0x5F66AB: push    1Fh
0x5F66AD: mov     ecx, ebp
0x5F66AF: call    Actor_GetBaseCalcAVi
0x5F66B4: push    eax
0x5F66B5: call    Calc_MasteryFromSkill
0x5F66BA: add     esp, 4
0x5F66BD: cmp     eax, 2
0x5F66C0: jl      short loc_5F66CA
0x5F66C2: mov     [esp+114h+var_DC], 0
0x5F66CA: cmp     dword ptr [ebp+58h], 0
0x5F66CE: jz      short loc_5F66E6
0x5F66D0: mov     ecx, [ebp+58h]
0x5F66D3: mov     edx, [ecx]
0x5F66D5: mov     eax, [edx+2C0h]
0x5F66DB: call    eax
0x5F66DD: test    al, 0Fh
0x5F66DF: mov     [esp+114h+var_E4], 1
0x5F66E4: jnz     short loc_5F66EB
0x5F66E6: mov     [esp+114h+var_E4], 0
0x5F66EB: mov     ecx, [ebp+58h]
0x5F66EE: mov     edx, [ecx]
0x5F66F0: mov     eax, [edx+2C0h]
0x5F66F6: mov     [esp+114h+var_EC], 0
0x5F66FB: call    eax
0x5F66FD: test    ax, 200h
0x5F6701: jz      short loc_5F6708
0x5F6703: mov     [esp+114h+var_EC], 1
0x5F6708: mov     ecx, ebp
0x5F670A: call    Actor_IsSneaking
0x5F670F: test    al, al
0x5F6711: jz      short loc_5F6734
0x5F6713: push    1Fh
0x5F6715: mov     ecx, ebp
0x5F6717: call    Actor_GetBaseCalcAVi
0x5F671C: push    eax
0x5F671D: call    Calc_MasteryFromSkill
0x5F6722: add     esp, 4
0x5F6725: cmp     eax, 3
0x5F6728: jl      short loc_5F6734
0x5F672A: mov     [esp+114h+var_E4], 0
0x5F672F: mov     [esp+114h+var_EC], 0
0x5F6734: mov     ecx, ebp
0x5F6736: call    Actor_IsSneaking
0x5F673B: fld     dword ptr ds:0A6E688h
0x5F6741: push    ecx
0x5F6742: mov     ecx, ebx; this
0x5F6744: fstp    [esp+118h+var_118]; float
0x5F6747: mov     byte ptr [esp+118h+var_D8], al
0x5F674B: call    TESObjectREFR_GetParentCell
0x5F6750: mov     edx, [ebx]
0x5F6752: push    eax; int
0x5F6753: mov     eax, [edx+174h]
0x5F6759: mov     ecx, ebx
0x5F675B: call    eax
0x5F675D: push    eax; int
0x5F675E: mov     ecx, ebx
0x5F6760: call    Actor_IsUnderwater??
0x5F6765: cmp     dword ptr [ebx+58h], 0
0x5F6769: mov     byte ptr [esp+114h+var_D0], al
0x5F676D: jz      short loc_5F6786
0x5F676F: mov     ecx, [ebx+58h]
0x5F6772: mov     edx, [ecx]
0x5F6774: mov     eax, [edx+36Ch]
0x5F677A: call    eax
0x5F677C: cmp     eax, 9
0x5F677F: setz    byte ptr [esp+114h+var_F4]
0x5F6784: jmp     short loc_5F678B
0x5F6786: mov     byte ptr [esp+114h+var_F4], 0
0x5F678B: cmp     byte ptr [esp+114h+arg_10], 0
0x5F6793: mov     byte ptr [esp+114h+var_F8], 1
0x5F6798: jz      short loc_5F679F
0x5F679A: mov     byte ptr [esp+114h+var_D8], 0
0x5F679F: mov     ecx, ebp; this
0x5F67A1: call    TESObjectREFR_GetParentCell
0x5F67A6: test    eax, eax
0x5F67A8: jz      short loc_5F67C1
0x5F67AA: mov     ecx, ebp; this
0x5F67AC: call    TESObjectREFR_GetParentCell
0x5F67B1: mov     ecx, eax; this
0x5F67B3: call    TESObjectCELL_IsInterior
0x5F67B8: test    al, al
0x5F67BA: setz    cl
0x5F67BD: mov     byte ptr [esp+114h+var_F8], cl
0x5F67C1: mov     edx, [ebx]
0x5F67C3: mov     eax, [edx+288h]
0x5F67C9: push    7
0x5F67CB: mov     ecx, ebx
0x5F67CD: call    eax
0x5F67CF: call    Double_To_SInt32
0x5F67D4: mov     edx, [ebx]
0x5F67D6: push    eax
0x5F67D7: mov     eax, [edx+288h]
0x5F67DD: push    1Fh
0x5F67DF: mov     ecx, ebx
0x5F67E1: call    eax
0x5F67E3: call    Double_To_SInt32
0x5F67E8: push    eax
0x5F67E9: call    Calc_LuckModifiedSkill
0x5F67EE: add     esp, 8
0x5F67F1: call    Double_To_SInt32
0x5F67F6: mov     edx, [ebp+0]
0x5F67F9: mov     esi, eax
0x5F67FB: mov     eax, [edx+288h]
0x5F6801: push    7
0x5F6803: mov     ecx, ebp
0x5F6805: mov     [esp+114h+var_D0], esi
0x5F6809: call    eax
0x5F680B: call    Double_To_SInt32
0x5F6810: mov     edx, [ebp+0]
0x5F6813: push    eax
0x5F6814: mov     eax, [edx+288h]
0x5F681A: push    1Fh
0x5F681C: mov     ecx, ebp
0x5F681E: call    eax
0x5F6820: call    Double_To_SInt32
0x5F6825: push    eax
0x5F6826: call    Calc_LuckModifiedSkill
0x5F682B: add     esp, 8
0x5F682E: call    Double_To_SInt32
0x5F6833: mov     edx, [ebp+0]
0x5F6836: mov     edi, eax
0x5F6838: mov     eax, [edx+284h]
0x5F683E: push    2Fh ; '/'
0x5F6840: mov     ecx, ebp
0x5F6842: mov     [esp+114h+var_FC], edi
0x5F6846: call    eax
0x5F6848: test    eax, eax
0x5F684A: jle     short loc_5F6861
0x5F684C: mov     [esp+114h+var_CC], 64h ; 'd'
0x5F6854: mov     [esp+114h+var_FC], 0FFFFFF9Ch
0x5F685C: jmp     loc_5F68E7
0x5F6861: mov     edx, [ebp+0]
0x5F6864: mov     eax, [edx+284h]
0x5F686A: push    2Eh ; '.'
0x5F686C: mov     ecx, ebp
0x5F686E: call    eax
0x5F6870: cmp     eax, 64h ; 'd'
0x5F6873: mov     [esp+114h+var_CC], eax
0x5F6877: jl      short loc_5F6883
0x5F6879: mov     [esp+114h+var_FC], 0FFFFFF9Ch
0x5F6881: jmp     short loc_5F68E7
0x5F6883: mov     ecx, [esp+114h+var_F8]
0x5F6887: mov     edx, [esp+114h+var_F4]
0x5F688B: push    ecx
0x5F688C: mov     ecx, [esp+118h+var_D0]
0x5F6890: push    edx
0x5F6891: mov     edx, dword ptr [esp+11Ch+var_EC]
0x5F6895: push    ecx
0x5F6896: mov     ecx, [esp+120h+arg_10]
0x5F689D: push    edx
0x5F689E: mov     edx, [esp+124h+arg_14]
0x5F68A5: push    ecx
0x5F68A6: mov     ecx, [esp+128h+var_D8]
0x5F68AA: push    edx
0x5F68AB: mov     edx, dword ptr [esp+12Ch+var_E4]
0x5F68AF: push    ecx
0x5F68B0: mov     ecx, [esp+130h+var_DC]
0x5F68B4: push    edx
0x5F68B5: mov     edx, [esp+134h+var_F0]
0x5F68B9: push    ecx
0x5F68BA: push    eax
0x5F68BB: mov     eax, [ebx]
0x5F68BD: push    edx
0x5F68BE: mov     edx, [eax+284h]
0x5F68C4: push    2Dh ; '-'
0x5F68C6: mov     ecx, ebx
0x5F68C8: call    edx
0x5F68CA: fld     [esp+140h+var_E0]
0x5F68CE: push    eax
0x5F68CF: movzx   eax, byte ptr [esp+144h+var_E8]
0x5F68D4: push    ecx
0x5F68D5: fstp    [esp+148h+var_148]
0x5F68D8: push    eax
0x5F68D9: push    edi
0x5F68DA: push    esi
0x5F68DB: call    Calc_DetectionLevel
0x5F68E0: add     esp, 40h
0x5F68E3: mov     [esp+114h+var_FC], eax
0x5F68E7: fld     [esp+114h+var_E0]
0x5F68EB: fcomp   qword ptr ds:0A6C820h
0x5F68F1: fnstsw  ax
0x5F68F3: test    ah, 41h
0x5F68F6: jp      short loc_5F6912
0x5F68F8: mov     ecx, [ebp+58h]
0x5F68FB: mov     edx, [ecx]
0x5F68FD: mov     eax, [edx+35Ch]
0x5F6903: call    eax
0x5F6905: fiadd   [esp+114h+var_FC]
0x5F6909: call    Double_To_SInt32
0x5F690E: mov     [esp+114h+var_FC], eax
0x5F6912: cmp     byte ptr [esp+114h+arg_4], 0
0x5F691A: jz      short loc_5F6926
0x5F691C: cmp     byte ptr [esp+114h+arg_14], 0
0x5F6924: jz      short loc_5F6952
0x5F6926: mov     edx, [esp+114h+var_FC]
0x5F692A: xor     eax, eax
0x5F692C: test    edx, edx
0x5F692E: jle     short loc_5F6935
0x5F6930: mov     eax, 3
0x5F6935: cmp     ebx, ds:0B333C4h
0x5F693B: jz      short loc_5F6952
0x5F693D: mov     ecx, [ebx+58h]
0x5F6940: mov     esi, [ecx]
0x5F6942: push    edx
0x5F6943: mov     edx, [esp+118h+var_E8]
0x5F6947: push    edx
0x5F6948: push    eax
0x5F6949: mov     eax, [esi+0A8h]
0x5F694F: push    ebp
0x5F6950: call    eax
0x5F6952: cmp     byte ptr ds:0B3BD9Ah, 0
0x5F6959: jz      Actor_GetDetectionLevel___ReturnDetectionLevel
0x5F695F: mov     eax, ds:0B3BD9Ch
0x5F6964: test    eax, eax
0x5F6966: jnz     short loc_5F6970
0x5F6968: cmp     ebp, ds:0B333C4h
0x5F696E: jz      short loc_5F6978
0x5F6970: cmp     eax, ebp
0x5F6972: jnz     Actor_GetDetectionLevel___ReturnDetectionLevel
0x5F6978: mov     ecx, ds:0B333B4h
0x5F697E: test    ecx, ecx
0x5F6980: mov     [esp+114h+var_F8], 0
0x5F6988: jz      short loc_5F69A2
0x5F698A: mov     edx, [ecx]
0x5F698C: mov     eax, [edx+190h]
0x5F6992: call    eax
0x5F6994: test    al, al
0x5F6996: jz      short loc_5F69A2
0x5F6998: mov     ecx, ds:0B333B4h
0x5F699E: mov     [esp+114h+var_F8], ecx
0x5F69A2: mov     esi, ds:0B12DB4h
0x5F69A8: add     esi, 0FFFFFFFFh
0x5F69AB: call    FontManager_GetSingleton
0x5F69B0: mov     ecx, [eax+esi*4]
0x5F69B3: call    sub_404FB0
0x5F69B8: fadd    qword ptr ds:0A30E48h
0x5F69BE: call    Double_To_SInt32
0x5F69C3: mov     ecx, [esp+114h+var_F8]; this
0x5F69C7: cmp     ecx, ebx
0x5F69C9: mov     esi, eax
0x5F69CB: lea     edi, [esi+0Ah]
0x5F69CE: mov     [esp+114h+var_104], edi
0x5F69D2: jnz     Actor_GetDetectionLevel___ReturnDetectionLevel
0x5F69D8: fild    [esp+114h+var_104]
0x5F69DC: push    0FFFFFFFFh; int
0x5F69DE: mov     edx, 500h
0x5F69E3: sub     edx, ds:0B02E24h
0x5F69E9: push    3; int
0x5F69EB: sub     esp, 8
0x5F69EE: fstp    [esp+124h+var_120]; float
0x5F69F2: mov     [esp+124h+var_104], edx
0x5F69F6: fild    [esp+124h+var_104]
0x5F69FA: fstp    [esp+124h+var_124]; float
0x5F69FD: call    TESObjectREFR_GetName
0x5F6A02: push    eax; int
0x5F6A03: call    InterfaceMgr_DebugTextLine
0x5F6A08: add     edi, esi
0x5F6A0A: add     esp, 14h
0x5F6A0D: mov     ecx, ebp; this
0x5F6A0F: mov     [esp+114h+var_104], edi
0x5F6A13: call    TESObjectREFR_GetName
0x5F6A18: push    eax; Format
0x5F6A19: push    offset aRunningDetecti; "Running Detection Against %s"
0x5F6A1E: lea     eax, [esp+11Ch+Dest]
0x5F6A22: push    0C8h ; 'È'; Count
0x5F6A27: push    eax; Dest
0x5F6A28: call    __snprintf
0x5F6A2D: fild    [esp+124h+var_104]
0x5F6A31: add     esp, 10h
0x5F6A34: push    0FFFFFFFFh; int
0x5F6A36: mov     ecx, 500h
0x5F6A3B: sub     ecx, ds:0B02E24h
0x5F6A41: push    3; int
0x5F6A43: sub     esp, 8
0x5F6A46: fstp    [esp+124h+var_120]; float
0x5F6A4A: mov     [esp+124h+var_104], ecx
0x5F6A4E: fild    [esp+124h+var_104]
0x5F6A52: lea     edx, [esp+124h+Dest]
0x5F6A56: fstp    [esp+124h+var_124]; float
0x5F6A59: push    edx; int
0x5F6A5A: call    InterfaceMgr_DebugTextLine
0x5F6A5F: mov     eax, [esp+128h+var_D4]
0x5F6A63: mov     ecx, [esp+128h+var_F8]; this
0x5F6A67: add     esp, 14h
0x5F6A6A: add     edi, esi
0x5F6A6C: push    eax
0x5F6A6D: mov     [esp+118h+var_104], edi
0x5F6A71: call    TESObjectREFR_GetName
0x5F6A76: push    eax; Format
0x5F6A77: push    offset aSSneakValueI; "%s sneak value %i"
0x5F6A7C: lea     ecx, [esp+120h+Dest]
0x5F6A80: push    0C8h ; 'È'; Count
0x5F6A85: push    ecx; Dest
0x5F6A86: call    __snprintf
0x5F6A8B: fild    [esp+128h+var_104]
0x5F6A8F: add     esp, 14h
0x5F6A92: push    0FFFFFFFFh; int
0x5F6A94: mov     edx, 500h
0x5F6A99: sub     edx, ds:0B02E24h
0x5F6A9F: push    3; int
0x5F6AA1: sub     esp, 8
0x5F6AA4: fstp    [esp+124h+var_120]; float
0x5F6AA8: mov     [esp+124h+var_D4], edx
0x5F6AAC: fild    [esp+124h+var_D4]
0x5F6AB0: lea     eax, [esp+124h+Dest]
0x5F6AB4: fstp    [esp+124h+var_124]; float
0x5F6AB7: push    eax; int
0x5F6AB8: call    InterfaceMgr_DebugTextLine
0x5F6ABD: mov     ecx, [esp+128h+var_100]
0x5F6AC1: add     esp, 14h
0x5F6AC4: push    ecx
0x5F6AC5: add     edi, esi
0x5F6AC7: mov     ecx, ebp; this
0x5F6AC9: mov     [esp+118h+var_104], edi
0x5F6ACD: call    TESObjectREFR_GetName
0x5F6AD2: push    eax; Format
0x5F6AD3: push    offset aSSneakValueI; "%s sneak value %i"
0x5F6AD8: lea     edx, [esp+120h+Dest]
0x5F6ADC: push    0C8h ; 'È'; Count
0x5F6AE1: push    edx; Dest
0x5F6AE2: call    __snprintf
0x5F6AE7: add     esp, 14h
0x5F6AEA: push    0FFFFFFFFh; int
0x5F6AEC: push    3; int
0x5F6AEE: fild    [esp+11Ch+var_104]
0x5F6AF2: mov     eax, 500h
0x5F6AF7: sub     eax, ds:0B02E24h
0x5F6AFD: sub     esp, 8
0x5F6B00: fstp    [esp+124h+var_120]; float
0x5F6B04: mov     [esp+124h+var_100], eax
0x5F6B08: fild    [esp+124h+var_100]
0x5F6B0C: lea     ecx, [esp+124h+Dest]
0x5F6B10: fstp    [esp+124h+var_124]; float
0x5F6B13: push    ecx; int
0x5F6B14: call    InterfaceMgr_DebugTextLine
0x5F6B19: movzx   edx, byte ptr [esp+128h+var_E8]
0x5F6B1E: push    edx; Format
0x5F6B1F: push    offset aLineOfSightI; "Line of sight %i"
0x5F6B24: lea     eax, [esp+130h+Dest]
0x5F6B28: push    0C8h ; 'È'; Count
0x5F6B2D: add     edi, esi
0x5F6B2F: push    eax; Dest
0x5F6B30: mov     [esp+138h+var_104], edi
0x5F6B34: call    __snprintf
0x5F6B39: add     esp, 24h
0x5F6B3C: fild    [esp+114h+var_104]
0x5F6B40: push    0FFFFFFFFh; int
0x5F6B42: mov     ecx, 500h
0x5F6B47: sub     ecx, ds:0B02E24h
0x5F6B4D: push    3; int
0x5F6B4F: sub     esp, 8
0x5F6B52: mov     [esp+124h+var_100], ecx
0x5F6B56: fstp    [esp+124h+var_120]; float
0x5F6B5A: lea     edx, [esp+124h+Dest]
0x5F6B5E: fild    [esp+124h+var_100]
0x5F6B62: fstp    [esp+124h+var_124]; float
0x5F6B65: push    edx; int
0x5F6B66: call    InterfaceMgr_DebugTextLine
0x5F6B6B: fld     [esp+128h+var_E0]
0x5F6B6F: add     esp, 0Ch
0x5F6B72: fstp    qword ptr [esp+11Ch+Format]; Format
0x5F6B75: push    offset aDistanceBetwee; "Distance between %.0f"
0x5F6B7A: lea     eax, [esp+120h+Dest]
0x5F6B7E: push    0C8h ; 'È'; Count
0x5F6B83: add     edi, esi
0x5F6B85: push    eax; Dest
0x5F6B86: mov     [esp+128h+var_104], edi
0x5F6B8A: call    __snprintf
0x5F6B8F: fild    [esp+128h+var_104]
0x5F6B93: add     esp, 14h
0x5F6B96: push    0FFFFFFFFh; int
0x5F6B98: mov     ecx, 500h
0x5F6B9D: sub     ecx, ds:0B02E24h
0x5F6BA3: push    3; int
0x5F6BA5: sub     esp, 8
0x5F6BA8: fstp    [esp+124h+var_120]; float
0x5F6BAC: mov     [esp+124h+var_100], ecx
0x5F6BB0: fild    [esp+124h+var_100]
0x5F6BB4: lea     edx, [esp+124h+Dest]
0x5F6BB8: fstp    [esp+124h+var_124]; float
0x5F6BBB: push    edx; int
0x5F6BBC: call    InterfaceMgr_DebugTextLine
0x5F6BC1: mov     eax, [ebx]
0x5F6BC3: mov     edx, [eax+284h]
0x5F6BC9: add     esp, 14h
0x5F6BCC: add     edi, esi
0x5F6BCE: push    2Dh ; '-'
0x5F6BD0: mov     ecx, ebx
0x5F6BD2: mov     [esp+118h+var_104], edi
0x5F6BD6: call    edx
0x5F6BD8: mov     ebx, [esp+110h+var_F4]
0x5F6BDC: push    eax
0x5F6BDD: mov     ecx, ebx; this
0x5F6BDF: call    TESObjectREFR_GetName
0x5F6BE4: push    eax; Format
0x5F6BE5: push    offset aSBlindessValue; "%s blindess value %i"
0x5F6BEA: lea     eax, [esp+11Ch+var_C4]
0x5F6BEE: push    0C8h ; 'È'; Count
0x5F6BF3: push    eax; Dest
0x5F6BF4: call    __snprintf
0x5F6BF9: fild    [esp+124h+var_100]
0x5F6BFD: add     esp, 14h
0x5F6C00: push    0FFFFFFFFh; int
0x5F6C02: push    3; int
0x5F6C04: sub     esp, 8
0x5F6C07: mov     ecx, 500h
0x5F6C0C: fstp    [esp+120h+Format]; float
0x5F6C10: sub     ecx, ds:0B02E24h
0x5F6C16: lea     edx, [esp+120h+var_C4]
0x5F6C1A: mov     [esp+120h+var_FC], ecx
0x5F6C1E: fild    [esp+120h+var_FC]
0x5F6C22: fstp    [esp+120h+var_120]; float
0x5F6C25: push    edx; int
0x5F6C26: call    InterfaceMgr_DebugTextLine
0x5F6C2B: mov     eax, dword ptr [esp+124h+var_EC]
0x5F6C2F: add     esp, 14h
0x5F6C32: add     edi, esi
0x5F6C34: push    eax
0x5F6C35: mov     ecx, ebp; this
0x5F6C37: mov     [esp+114h+var_100], edi
0x5F6C3B: call    TESObjectREFR_GetName
0x5F6C40: push    eax; Format
0x5F6C41: push    offset aLightLevelOnSI; "Light level on %s is  %i"
0x5F6C46: lea     ecx, [esp+11Ch+var_C4]
0x5F6C4A: push    0C8h ; 'È'; Count
0x5F6C4F: push    ecx; Dest
0x5F6C50: call    __snprintf
0x5F6C55: fild    [esp+124h+var_100]
0x5F6C59: add     esp, 14h
0x5F6C5C: push    0FFFFFFFFh; int
0x5F6C5E: mov     edx, 500h
0x5F6C63: sub     edx, ds:0B02E24h
0x5F6C69: push    3; int
0x5F6C6B: sub     esp, 8
0x5F6C6E: fstp    [esp+120h+Format]; float
0x5F6C72: mov     [esp+120h+var_FC], edx
0x5F6C76: fild    [esp+120h+var_FC]
0x5F6C7A: lea     eax, [esp+120h+var_C4]
0x5F6C7E: fstp    [esp+120h+var_120]; float
0x5F6C81: push    eax; int
0x5F6C82: call    InterfaceMgr_DebugTextLine
0x5F6C87: mov     ecx, dword ptr [esp+124h+Dest]
0x5F6C8B: add     esp, 14h
0x5F6C8E: push    ecx
0x5F6C8F: add     edi, esi
0x5F6C91: mov     ecx, ebp; this
0x5F6C93: mov     [esp+114h+var_100], edi
0x5F6C97: call    TESObjectREFR_GetName
0x5F6C9C: push    eax; Format
0x5F6C9D: push    offset aInvisiblityLev; "Invisiblity level %s is  %i"
0x5F6CA2: lea     edx, [esp+11Ch+var_C4]
0x5F6CA6: push    0C8h ; 'È'; Count
0x5F6CAB: push    edx; Dest
0x5F6CAC: call    __snprintf
0x5F6CB1: fild    [esp+124h+var_100]
0x5F6CB5: add     esp, 14h
0x5F6CB8: push    0FFFFFFFFh; int
0x5F6CBA: mov     eax, 500h
0x5F6CBF: sub     eax, ds:0B02E24h
0x5F6CC5: push    3; int
0x5F6CC7: sub     esp, 8
0x5F6CCA: fstp    [esp+120h+Format]; float
0x5F6CCE: mov     [esp+120h+var_FC], eax
0x5F6CD2: fild    [esp+120h+var_FC]
0x5F6CD6: lea     ecx, [esp+120h+var_C4]
0x5F6CDA: fstp    [esp+120h+var_120]; float
0x5F6CDD: push    ecx; int
0x5F6CDE: call    InterfaceMgr_DebugTextLine
0x5F6CE3: mov     edx, [esp+124h+var_D8]
0x5F6CE7: add     esp, 14h
0x5F6CEA: add     edi, esi
0x5F6CEC: push    edx
0x5F6CED: mov     ecx, ebp; this
0x5F6CEF: mov     [esp+114h+var_100], edi
0x5F6CF3: call    TESObjectREFR_GetName
0x5F6CF8: push    eax; Format
0x5F6CF9: push    offset aSBootWeightIsI; "%s boot weight is  %i"
0x5F6CFE: lea     eax, [esp+11Ch+var_C4]
0x5F6D02: push    0C8h ; 'È'; Count
0x5F6D07: push    eax; Dest
0x5F6D08: call    __snprintf
0x5F6D0D: fild    [esp+124h+var_100]
0x5F6D11: add     esp, 14h
0x5F6D14: push    0FFFFFFFFh; int
0x5F6D16: push    3; int
0x5F6D18: sub     esp, 8
0x5F6D1B: mov     ecx, 500h
0x5F6D20: fstp    [esp+120h+Format]; float
0x5F6D24: sub     ecx, ds:0B02E24h
0x5F6D2A: lea     edx, [esp+120h+var_C4]
0x5F6D2E: mov     [esp+120h+var_FC], ecx
0x5F6D32: fild    [esp+120h+var_FC]
0x5F6D36: fstp    [esp+120h+var_120]; float
0x5F6D39: push    edx; int
0x5F6D3A: call    InterfaceMgr_DebugTextLine
0x5F6D3F: add     edi, esi
0x5F6D41: add     esp, 14h
0x5F6D44: mov     ecx, ebp; this
0x5F6D46: mov     [esp+110h+var_100], edi
0x5F6D4A: call    TESObjectREFR_GetName
0x5F6D4F: cmp     byte ptr [esp+110h+var_E0], 0
0x5F6D54: push    eax; Format
0x5F6D55: jz      short loc_5F6D68
0x5F6D57: push    offset aSIsMoving; "%s is moving"
0x5F6D5C: push    0C8h ; 'È'
0x5F6D61: lea     eax, [esp+11Ch+var_C4]
0x5F6D65: push    eax
0x5F6D66: jmp     short loc_5F6D77
0x5F6D68: push    offset aSIsNotMoving; "%s is not moving"
0x5F6D6D: push    0C8h ; 'È'; Count
0x5F6D72: lea     ecx, [esp+11Ch+var_C4]
0x5F6D76: push    ecx; Dest
0x5F6D77: call    __snprintf
0x5F6D7C: fild    [esp+120h+var_100]
0x5F6D80: add     esp, 10h
0x5F6D83: push    0FFFFFFFFh; int
0x5F6D85: mov     edx, 500h
0x5F6D8A: sub     edx, ds:0B02E24h
0x5F6D90: push    3; int
0x5F6D92: sub     esp, 8
0x5F6D95: fstp    [esp+120h+Format]; float
0x5F6D99: mov     [esp+120h+var_FC], edx
0x5F6D9D: fild    [esp+120h+var_FC]
0x5F6DA1: lea     eax, [esp+120h+var_C4]
0x5F6DA5: fstp    [esp+120h+var_120]; float
0x5F6DA8: push    eax; int
0x5F6DA9: call    InterfaceMgr_DebugTextLine
0x5F6DAE: add     edi, esi
0x5F6DB0: add     esp, 14h
0x5F6DB3: mov     ecx, ebp; this
0x5F6DB5: mov     [esp+110h+var_100], edi
0x5F6DB9: call    TESObjectREFR_GetName
0x5F6DBE: cmp     byte ptr [esp+110h+var_D4], 0
0x5F6DC3: push    eax; Format
0x5F6DC4: jz      short loc_5F6DD7
0x5F6DC6: push    offset aSIsSneaking; "%s is sneaking"
0x5F6DCB: push    0C8h ; 'È'
0x5F6DD0: lea     ecx, [esp+11Ch+var_C4]
0x5F6DD4: push    ecx
0x5F6DD5: jmp     short loc_5F6DE6
0x5F6DD7: push    offset aSIsNotSneaking; "%s is not sneaking"
0x5F6DDC: push    0C8h ; 'È'; Count
0x5F6DE1: lea     edx, [esp+11Ch+var_C4]
0x5F6DE5: push    edx; Dest
0x5F6DE6: call    __snprintf
0x5F6DEB: fild    [esp+120h+var_100]
0x5F6DEF: add     esp, 10h
0x5F6DF2: push    0FFFFFFFFh; int
0x5F6DF4: mov     eax, 500h
0x5F6DF9: sub     eax, ds:0B02E24h
0x5F6DFF: push    3; int
0x5F6E01: sub     esp, 8
0x5F6E04: fstp    [esp+120h+Format]; float
0x5F6E08: mov     [esp+120h+var_FC], eax
0x5F6E0C: fild    [esp+120h+var_FC]
0x5F6E10: lea     ecx, [esp+120h+var_C4]
0x5F6E14: fstp    [esp+120h+var_120]; float
0x5F6E17: push    ecx; int
0x5F6E18: call    InterfaceMgr_DebugTextLine
0x5F6E1D: add     edi, esi
0x5F6E1F: add     esp, 14h
0x5F6E22: mov     ecx, ebx; this
0x5F6E24: mov     [esp+110h+var_100], edi
0x5F6E28: call    TESObjectREFR_GetName
0x5F6E2D: push    eax
0x5F6E2E: mov     ecx, ebp; this
0x5F6E30: call    TESObjectREFR_GetName
0x5F6E35: cmp     [esp+114h+arg_18], 0
0x5F6E3D: push    eax; Format
0x5F6E3E: jz      short loc_5F6E51
0x5F6E40: push    offset aSAttakedS; "%s attaked %s"
0x5F6E45: push    0C8h ; 'È'
0x5F6E4A: lea     edx, [esp+120h+var_C4]
0x5F6E4E: push    edx
0x5F6E4F: jmp     short loc_5F6E60
0x5F6E51: push    offset aSDidNotAttackS; "%s did not attack %s "
0x5F6E56: push    0C8h ; 'È'; Count
0x5F6E5B: lea     eax, [esp+120h+var_C4]
0x5F6E5F: push    eax; Dest
0x5F6E60: call    __snprintf
0x5F6E65: fild    [esp+124h+var_100]
0x5F6E69: add     esp, 14h
0x5F6E6C: push    0FFFFFFFFh; int
0x5F6E6E: mov     ecx, 500h
0x5F6E73: sub     ecx, ds:0B02E24h
0x5F6E79: push    3; int
0x5F6E7B: sub     esp, 8
0x5F6E7E: fstp    [esp+120h+Format]; float
0x5F6E82: mov     [esp+120h+var_FC], ecx
0x5F6E86: fild    [esp+120h+var_FC]
0x5F6E8A: lea     edx, [esp+120h+var_C4]
0x5F6E8E: fstp    [esp+120h+var_120]; float
0x5F6E91: push    edx; int
0x5F6E92: call    InterfaceMgr_DebugTextLine
0x5F6E97: add     edi, esi
0x5F6E99: add     esp, 14h
0x5F6E9C: mov     ecx, ebp; this
0x5F6E9E: mov     [esp+110h+var_100], edi
0x5F6EA2: call    TESObjectREFR_GetName
0x5F6EA7: cmp     byte ptr [esp+110h+arg_14], 0
0x5F6EAF: push    eax; Format
0x5F6EB0: jz      short loc_5F6EC3
0x5F6EB2: push    offset aSIsInCombat; "%s is in combat"
0x5F6EB7: push    0C8h ; 'È'
0x5F6EBC: lea     eax, [esp+11Ch+var_C4]
0x5F6EC0: push    eax
0x5F6EC1: jmp     short loc_5F6ED2
0x5F6EC3: push    offset aSIsNotInCombat; "%s is not in combat "
0x5F6EC8: push    0C8h ; 'È'; Count
0x5F6ECD: lea     ecx, [esp+11Ch+var_C4]
0x5F6ED1: push    ecx; Dest
0x5F6ED2: call    __snprintf
0x5F6ED7: fild    [esp+120h+var_100]
0x5F6EDB: add     esp, 10h
0x5F6EDE: push    0FFFFFFFFh; int
0x5F6EE0: mov     edx, 500h
0x5F6EE5: sub     edx, ds:0B02E24h
0x5F6EEB: push    3; int
0x5F6EED: sub     esp, 8
0x5F6EF0: fstp    [esp+120h+Format]; float
0x5F6EF4: mov     [esp+120h+var_FC], edx
0x5F6EF8: fild    [esp+120h+var_FC]
0x5F6EFC: lea     eax, [esp+120h+var_C4]
0x5F6F00: fstp    [esp+120h+var_120]; float
0x5F6F03: push    eax; int
0x5F6F04: call    InterfaceMgr_DebugTextLine
0x5F6F09: add     edi, esi
0x5F6F0B: add     esp, 14h
0x5F6F0E: mov     ecx, ebp; this
0x5F6F10: mov     [esp+110h+var_100], edi
0x5F6F14: call    TESObjectREFR_GetName
0x5F6F19: cmp     byte ptr [esp+110h+var_E8], 0
0x5F6F1E: push    eax; Format
0x5F6F1F: jz      short loc_5F6F32
0x5F6F21: push    offset aSIsRunning; "%s is running"
0x5F6F26: push    0C8h ; 'È'
0x5F6F2B: lea     ecx, [esp+11Ch+var_C4]
0x5F6F2F: push    ecx
0x5F6F30: jmp     short loc_5F6F41
0x5F6F32: push    offset aSIsNotRunning; "%s is not running"
0x5F6F37: push    0C8h ; 'È'; Count
0x5F6F3C: lea     edx, [esp+11Ch+var_C4]
0x5F6F40: push    edx; Dest
0x5F6F41: call    __snprintf
0x5F6F46: fild    [esp+120h+var_100]
0x5F6F4A: add     esp, 10h
0x5F6F4D: push    0FFFFFFFFh; int
0x5F6F4F: mov     eax, 500h
0x5F6F54: sub     eax, ds:0B02E24h
0x5F6F5A: push    3; int
0x5F6F5C: sub     esp, 8
0x5F6F5F: fstp    [esp+120h+Format]; float
0x5F6F63: mov     [esp+120h+var_FC], eax
0x5F6F67: fild    [esp+120h+var_FC]
0x5F6F6B: lea     ecx, [esp+120h+var_C4]
0x5F6F6F: fstp    [esp+120h+var_120]; float
0x5F6F72: push    ecx; int
0x5F6F73: call    InterfaceMgr_DebugTextLine
0x5F6F78: add     edi, esi
0x5F6F7A: add     esp, 14h
0x5F6F7D: mov     ecx, ebp; this
0x5F6F7F: mov     [esp+110h+var_100], edi
0x5F6F83: call    TESObjectREFR_GetName
0x5F6F88: cmp     byte ptr [esp+110h+var_CC], 0
0x5F6F8D: push    eax; Format
0x5F6F8E: jz      short loc_5F6FA1
0x5F6F90: push    offset aSIsUnderwater; "%s is underwater"
0x5F6F95: push    0C8h ; 'È'
0x5F6F9A: lea     edx, [esp+11Ch+var_C4]
0x5F6F9E: push    edx
0x5F6F9F: jmp     short loc_5F6FB0
0x5F6FA1: push    offset aSIsNotUnderwat; "%s is not underwater"
0x5F6FA6: push    0C8h ; 'È'; Count
0x5F6FAB: lea     eax, [esp+11Ch+var_C4]
0x5F6FAF: push    eax; Dest
0x5F6FB0: call    __snprintf
0x5F6FB5: fild    [esp+120h+var_100]
0x5F6FB9: add     esp, 10h
0x5F6FBC: push    0FFFFFFFFh; int
0x5F6FBE: mov     ecx, 500h
0x5F6FC3: sub     ecx, ds:0B02E24h
0x5F6FC9: push    3; int
0x5F6FCB: sub     esp, 8
0x5F6FCE: fstp    [esp+120h+Format]; float
0x5F6FD2: mov     [esp+120h+var_FC], ecx
0x5F6FD6: fild    [esp+120h+var_FC]
0x5F6FDA: lea     edx, [esp+120h+var_C4]
0x5F6FDE: fstp    [esp+120h+var_120]; float
0x5F6FE1: push    edx; int
0x5F6FE2: call    InterfaceMgr_DebugTextLine
0x5F6FE7: add     edi, esi
0x5F6FE9: add     esp, 14h
0x5F6FEC: mov     ecx, ebx; this
0x5F6FEE: mov     [esp+110h+var_100], edi
0x5F6FF2: call    TESObjectREFR_GetName
0x5F6FF7: cmp     byte ptr [esp+110h+var_F0], 0
0x5F6FFC: push    eax; Format
0x5F6FFD: jz      short loc_5F7010
0x5F6FFF: push    offset aSIsSleeping; "%s is sleeping"
0x5F7004: push    0C8h ; 'È'
0x5F7009: lea     eax, [esp+11Ch+var_C4]
0x5F700D: push    eax
0x5F700E: jmp     short loc_5F701F
0x5F7010: push    offset aSIsNotSleeping; "%s is not sleeping"
0x5F7015: push    0C8h ; 'È'; Count
0x5F701A: lea     ecx, [esp+11Ch+var_C4]
0x5F701E: push    ecx; Dest
0x5F701F: call    __snprintf
0x5F7024: fild    [esp+120h+var_100]
0x5F7028: add     esp, 10h
0x5F702B: push    0FFFFFFFFh; int
0x5F702D: mov     edx, 500h
0x5F7032: sub     edx, ds:0B02E24h
0x5F7038: push    3; int
0x5F703A: sub     esp, 8
0x5F703D: fstp    [esp+120h+Format]; float
0x5F7041: mov     [esp+120h+var_FC], edx
0x5F7045: fild    [esp+120h+var_FC]
0x5F7049: lea     eax, [esp+120h+var_C4]
0x5F704D: fstp    [esp+120h+var_120]; float
0x5F7050: push    eax; int
0x5F7051: call    InterfaceMgr_DebugTextLine
0x5F7056: mov     ecx, [esp+124h+var_F8]
0x5F705A: add     esp, 14h
0x5F705D: push    ecx
0x5F705E: mov     ecx, ebp; this
0x5F7060: call    TESObjectREFR_GetName
0x5F7065: push    eax
0x5F7066: mov     ecx, ebx; this
0x5F7068: call    TESObjectREFR_GetName
0x5F706D: push    eax; Format
0x5F706E: push    offset aSDetectionLeve; "%s detection level to %s is  %i"
0x5F7073: lea     edx, [esp+120h+var_C4]
0x5F7077: push    0C8h ; 'È'; Count
0x5F707C: push    edx; Dest
0x5F707D: call    __snprintf
0x5F7082: add     esp, 18h
0x5F7085: push    0FFFFFFFFh; int
0x5F7087: add     edi, esi
0x5F7089: mov     [esp+114h+var_FC], edi
0x5F708D: fild    [esp+114h+var_FC]
0x5F7091: mov     eax, 500h
0x5F7096: sub     eax, ds:0B02E24h
0x5F709C: push    3; int
0x5F709E: sub     esp, 8
0x5F70A1: fstp    [esp+120h+Format]; float
0x5F70A5: mov     [esp+120h+var_FC], eax
0x5F70A9: fild    [esp+120h+var_FC]
0x5F70AD: lea     ecx, [esp+120h+var_C4]
0x5F70B1: fstp    [esp+120h+var_120]; float
0x5F70B4: push    ecx; int
0x5F70B5: call    InterfaceMgr_DebugTextLine
0x5F70BA: add     esp, 14h
0x5F70BD: jmp     short Actor_GetDetectionLevel___ReturnDetectionLevel
