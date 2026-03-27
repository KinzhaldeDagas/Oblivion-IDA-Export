0x591600: push    0FFFFFFFFh
0x591602: push    offset SEH_591600
0x591607: mov     eax, large fs:0
0x59160D: push    eax
0x59160E: sub     esp, 14h
0x591611: push    ebx
0x591612: push    ebp
0x591613: push    esi
0x591614: push    edi
0x591615: mov     eax, ds:0B30AACh
0x59161A: xor     eax, esp
0x59161C: push    eax
0x59161D: lea     eax, [esp+34h+var_C]
0x591621: mov     large fs:0, eax
0x591627: mov     ebp, ecx
0x591629: call    sub_5894D0
0x59162E: mov     dword ptr [esp+34h+canCreate], eax
0x591632: xor     eax, eax
0x591634: mov     [esp+34h+var_20], eax
0x591638: push    30h ; '0'; Size
0x59163A: mov     [esp+38h+var_4], eax
0x59163E: call    FormHeapAlloc
0x591643: push    20h ; ' '; Size
0x591645: mov     esi, eax
0x591647: call    FormHeapAlloc
0x59164C: push    0Ch; Size
0x59164E: mov     edi, eax
0x591650: call    FormHeapAlloc
0x591655: fldz
0x591657: mov     ebx, eax
0x591659: fst     [esp+40h+var_18]
0x59165D: mov     eax, [esp+40h+var_18]
0x591661: fst     [esp+40h+var_14]
0x591665: mov     ecx, [esp+40h+var_14]
0x591669: fst     [esp+40h+var_10]
0x59166D: mov     edx, [esp+40h+var_10]
0x591671: fst     [esp+40h+var_18]
0x591675: mov     [esi], eax
0x591677: fst     [esp+40h+var_14]
0x59167B: fld     dword ptr ds:0A30634h
0x591681: mov     eax, [esp+40h+var_18]
0x591685: mov     [esi+4], ecx
0x591688: fst     [esp+40h+var_10]
0x59168C: fld1
0x59168E: mov     ecx, [esp+40h+var_14]
0x591692: mov     [esi+8], edx
0x591695: fst     [esp+40h+var_18]
0x591699: mov     edx, [esp+40h+var_10]
0x59169D: fxch    st(2)
0x59169F: mov     [esi+0Ch], eax
0x5916A2: fst     [esp+40h+var_14]
0x5916A6: mov     eax, [esp+40h+var_18]
0x5916AA: fst     [esp+40h+var_10]
0x5916AE: mov     [esi+10h], ecx
0x5916B1: fxch    st(2)
0x5916B3: mov     ecx, [esp+40h+var_14]
0x5916B7: fst     [esp+40h+var_18]
0x5916BB: mov     [esi+18h], eax
0x5916BE: fxch    st(2)
0x5916C0: mov     eax, [esp+40h+var_18]
0x5916C4: fst     [esp+40h+var_14]
0x5916C8: mov     [esi+14h], edx
0x5916CB: fxch    st(1)
0x5916CD: mov     edx, [esp+40h+var_10]
0x5916D1: fstp    [esp+40h+var_10]
0x5916D5: mov     [esi+1Ch], ecx
0x5916D8: mov     ecx, [esp+40h+var_14]
0x5916DC: mov     [esi+24h], eax
0x5916DF: mov     [esi+20h], edx
0x5916E2: fst     [esp+40h+var_18]
0x5916E6: mov     edx, [esp+40h+var_10]
0x5916EA: fst     [esp+40h+var_14]
0x5916EE: mov     [esi+28h], ecx
0x5916F1: mov     [esi+2Ch], edx
0x5916F4: mov     eax, 2
0x5916F9: mov     [ebx+4], ax
0x5916FD: mov     [ebx+6], ax
0x591701: mov     eax, [esp+40h+var_18]
0x591705: fst     [esp+40h+var_18]
0x591709: mov     edx, [esp+40h+var_18]
0x59170D: fxch    st(1)
0x59170F: mov     ecx, 1
0x591714: mov     [ebx+2], cx
0x591718: mov     [ebx+8], cx
0x59171C: mov     ecx, [esp+40h+var_14]
0x591720: fst     [esp+40h+var_14]
0x591724: mov     word ptr [ebx], 0
0x591729: fst     [esp+40h+var_18]
0x59172D: mov     word ptr [ebx+0Ah], 3
0x591733: mov     [edi], eax
0x591735: mov     eax, [esp+40h+var_14]
0x591739: add     esp, 0Ch
0x59173C: mov     [edi+4], ecx
0x59173F: mov     [edi+8], edx
0x591742: mov     [edi+0Ch], eax
0x591745: mov     ecx, [esp+34h+var_18]
0x591749: fxch    st(1)
0x59174B: fstp    [esp+34h+var_14]
0x59174F: mov     edx, [esp+34h+var_14]
0x591753: mov     [edi+10h], ecx
0x591756: fst     [esp+34h+var_18]
0x59175A: mov     eax, [esp+34h+var_18]
0x59175E: fstp    [esp+34h+var_14]
0x591762: mov     ecx, [esp+34h+var_14]
0x591766: mov     [edi+1Ch], ecx
0x591769: push    0FC8h
0x59176E: mov     ecx, ebp
0x591770: mov     [edi+14h], edx
0x591773: mov     [edi+18h], eax
0x591776: call    Tile_GetFloat
0x59177B: fcomp   dword ptr ds:0A379B4h
0x591781: fnstsw  ax
0x591783: test    ah, 44h
0x591786: jp      short loc_591801
0x591788: push    0D0h ; 'Ð'; Size
0x59178D: call    FormHeapAlloc
0x591792: add     esp, 4
0x591795: mov     [esp+34h+var_18], eax
0x591799: test    eax, eax
0x59179B: mov     byte ptr [esp+34h+var_4], 1
0x5917A0: jz      short loc_5917D6
0x5917A2: call    sub_57D7F0
0x5917A7: call    Double_To_SInt32
0x5917AC: push    eax
0x5917AD: call    sub_57D7A0
0x5917B2: call    Double_To_SInt32
0x5917B7: push    eax
0x5917B8: mov     ecx, [esp+3Ch+var_18]
0x5917BC: push    0
0x5917BE: push    0
0x5917C0: push    ebx
0x5917C1: push    2
0x5917C3: push    0
0x5917C5: push    1
0x5917C7: push    edi
0x5917C8: push    0
0x5917CA: push    0
0x5917CC: push    esi
0x5917CD: push    4
0x5917CF: call    sub_4A1780
0x5917D4: jmp     short loc_5917D8
0x5917D6: xor     eax, eax
0x5917D8: test    eax, eax
0x5917DA: mov     byte ptr [esp+34h+var_4], 0
0x5917DF: jz      short loc_5917F7
0x5917E1: mov     edi, eax
0x5917E3: add     eax, 4
0x5917E6: push    eax; lpAddend
0x5917E7: mov     [esp+38h+var_20], edi
0x5917EB: call    dword ptr ds:0A28078h
0x5917F1: mov     byte ptr [ebp+48h], 1
0x5917F5: jmp     short loc_591854
0x5917F7: mov     edi, [esp+34h+var_20]
0x5917FB: mov     byte ptr [ebp+48h], 1
0x5917FF: jmp     short loc_591854
0x591801: push    0C0h ; 'À'; Size
0x591806: call    FormHeapAlloc
0x59180B: add     esp, 4
0x59180E: mov     [esp+34h+var_18], eax
0x591812: test    eax, eax
0x591814: mov     byte ptr [esp+34h+var_4], 2
0x591819: jz      short loc_591833
0x59181B: push    ebx
0x59181C: push    2
0x59181E: push    0
0x591820: push    1
0x591822: push    edi
0x591823: push    0
0x591825: push    0
0x591827: push    esi
0x591828: push    4
0x59182A: mov     ecx, eax
0x59182C: call    sub_7174B0
0x591831: jmp     short loc_591835
0x591833: xor     eax, eax
0x591835: test    eax, eax
0x591837: mov     byte ptr [esp+34h+var_4], 0
0x59183C: jz      short loc_59184C
0x59183E: mov     [esp+34h+var_20], eax
0x591842: add     eax, 4
0x591845: push    eax; lpAddend
0x591846: call    dword ptr ds:0A28078h
0x59184C: mov     edi, [esp+34h+var_20]
0x591850: mov     byte ptr [ebp+48h], 0
0x591854: push    30h ; '0'; Size
0x591856: call    FormHeapAlloc
0x59185B: add     esp, 4
0x59185E: mov     [esp+34h+var_18], eax
0x591862: test    eax, eax
0x591864: mov     byte ptr [esp+34h+var_4], 3
0x591869: jz      short loc_591876
0x59186B: mov     ecx, eax
0x59186D: call    NiTexturingProperty__NiTexturingProperty
0x591872: mov     esi, eax
0x591874: jmp     short loc_591878
0x591876: xor     esi, esi
0x591878: push    0
0x59187A: mov     ecx, esi
0x59187C: mov     byte ptr [esp+38h+var_4], 0
0x591881: call    NiTexturingProperty__SetUnk08
0x591886: push    0FCFh
0x59188B: mov     ecx, ebp
0x59188D: call    Tile_GetFloat
0x591892: fcomp   dword ptr ds:0A379B4h
0x591898: mov     ecx, esi
0x59189A: fnstsw  ax
0x59189C: test    ah, 44h
0x59189F: jp      short loc_5918A5
0x5918A1: push    3
0x5918A3: jmp     short loc_5918A7
0x5918A5: push    0
0x5918A7: call    sub_405870
0x5918AC: mov     dx, [esi+18h]
0x5918B0: and     dx, 0FFF5h
0x5918B5: or      dx, 4
0x5918B9: push    esi; a2
0x5918BA: mov     ecx, edi; this
0x5918BC: mov     [esi+18h], dx
0x5918C0: call    sub_405680
0x5918C5: push    5Ch ; '\'; Size
0x5918C7: call    FormHeapAlloc
0x5918CC: add     esp, 4
0x5918CF: mov     [esp+34h+var_18], eax
0x5918D3: test    eax, eax
0x5918D5: mov     byte ptr [esp+34h+var_4], 4
0x5918DA: jz      short loc_5918E5
0x5918DC: mov     ecx, eax; this
0x5918DE: call    ??0NiMaterialProperty@@QAE@XZ; NiMaterialProperty::NiMaterialProperty(void)
0x5918E3: jmp     short loc_5918E7
0x5918E5: xor     eax, eax
0x5918E7: fldz
0x5918E9: add     dword ptr [eax+54h], 2
0x5918ED: fstp    dword ptr [eax+50h]
0x5918F0: push    eax; a2
0x5918F1: fld1
0x5918F3: mov     byte ptr [esp+38h+var_4], 0
0x5918F8: fst     [esp+38h+var_18]
0x5918FC: fst     [esp+38h+var_14]
0x591900: mov     ecx, [esp+38h+var_18]
0x591904: fstp    [esp+38h+var_10]
0x591908: mov     edx, [esp+38h+var_14]
0x59190C: mov     [eax+40h], ecx
0x59190F: mov     ecx, [esp+38h+var_10]
0x591913: mov     [eax+44h], edx
0x591916: mov     [eax+48h], ecx
0x591919: mov     ecx, edi; this
0x59191B: call    sub_405680
0x591920: push    0DCh ; 'Ü'; Size
0x591925: call    FormHeapAlloc
0x59192A: add     esp, 4
0x59192D: mov     [esp+34h+var_18], eax
0x591931: test    eax, eax
0x591933: mov     byte ptr [esp+34h+var_4], 5
0x591938: jz      short loc_591945
0x59193A: push    0
0x59193C: mov     ecx, eax; this
0x59193E: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x591943: jmp     short loc_591947
0x591945: xor     eax, eax
0x591947: mov     [ebp+24h], eax
0x59194A: mov     edx, [eax]
0x59194C: push    1
0x59194E: mov     ecx, eax
0x591950: mov     eax, [edx+84h]
0x591956: push    edi
0x591957: mov     byte ptr [esp+3Ch+var_4], 0
0x59195C: call    eax
0x59195E: mov     ecx, dword ptr [esp+34h+canCreate]
0x591962: test    ecx, ecx
0x591964: jnz     short loc_591978
0x591966: push    1; arg1
0x591968: push    ecx; canCreate
0x591969: call    InterfaceManager_GetSingleton
0x59196E: mov     ecx, [eax+54h]
0x591971: add     esp, 8
0x591974: mov     dword ptr [esp+34h+canCreate], ecx
0x591978: mov     edx, [ecx]
0x59197A: mov     eax, [ebp+24h]
0x59197D: mov     edx, [edx+84h]
0x591983: push    1
0x591985: push    eax
0x591986: call    edx
0x591988: mov     eax, [ebp+8]
0x59198B: mov     ecx, [ebp+24h]
0x59198E: push    eax; Src
0x59198F: call    NiObjectNET_SetName
0x591994: push    1; arg1
0x591996: push    0; canCreate
0x591998: call    InterfaceManager_GetSingleton
0x59199D: mov     eax, [eax+78h]
0x5919A0: mov     ecx, [ebp+24h]; this
0x5919A3: add     esp, 8
0x5919A6: push    eax; a2
0x5919A7: call    sub_405680
0x5919AC: mov     ecx, [ebp+24h]
0x5919AF: call    NiNode_UpdateDynamicEffectState
0x5919B4: mov     ecx, [ebp+24h]; this
0x5919B7: call    NiAVObject_InitializePropertyState
0x5919BC: push    1; arg1
0x5919BE: push    0; canCreate
0x5919C0: call    InterfaceManager_GetSingleton
0x5919C5: push    14h; Size
0x5919C7: mov     byte ptr [eax+7Ch], 1
0x5919CB: call    FormHeapAlloc
0x5919D0: add     esp, 0Ch
0x5919D3: mov     [esp+34h+var_18], eax
0x5919D7: test    eax, eax
0x5919D9: mov     byte ptr [esp+34h+var_4], 6
0x5919DE: jz      short loc_5919EE
0x5919E0: mov     ecx, [ebp+24h]
0x5919E3: push    ecx
0x5919E4: push    ebp
0x5919E5: mov     ecx, eax; this
0x5919E7: call    ??0Extra@Tile@@QAE@XZ; Tile::Extra::Extra(void)
0x5919EC: jmp     short loc_5919F0
0x5919EE: xor     eax, eax
0x5919F0: mov     ecx, [ebp+24h]
0x5919F3: push    eax
0x5919F4: mov     byte ptr [esp+38h+var_4], 0
0x5919F9: call    NiNode_AddNiExtraData
0x5919FE: push    0; int
0x591A00: push    0FABh
0x591A05: mov     ecx, ebp
0x591A07: call    Tile_GetFloat
0x591A0C: push    ecx
0x591A0D: fstp    [esp+3Ch+var_3C]; float
0x591A10: push    0FABh; int
0x591A15: mov     ecx, ebp
0x591A17: call    sub_58B2F0
0x591A1C: push    0FC8h
0x591A21: mov     ecx, ebp
0x591A23: call    Tile_GetFloat
0x591A28: fcomp   dword ptr ds:0A379B4h
0x591A2E: fnstsw  ax
0x591A30: test    ah, 44h
0x591A33: jp      short loc_591A3C
0x591A35: or      dword ptr [ebp+2Ch], 200h
0x591A3C: or      dword ptr [ebp+2Ch], 3Dh
0x591A40: test    edi, edi
0x591A42: mov     ebp, [ebp+24h]
0x591A45: mov     [esp+34h+var_4], 0FFFFFFFFh
0x591A4D: jz      short loc_591A67
0x591A4F: lea     edx, [edi+4]
0x591A52: push    edx; lpAddend
0x591A53: call    dword ptr ds:0A2807Ch
0x591A59: test    eax, eax
0x591A5B: jnz     short loc_591A67
0x591A5D: mov     eax, [edi]
0x591A5F: mov     edx, [eax]
0x591A61: push    1
0x591A63: mov     ecx, edi
0x591A65: call    edx
0x591A67: mov     eax, ebp
0x591A69: mov     ecx, dword ptr [esp+34h+var_C]
0x591A6D: mov     large fs:0, ecx
0x591A74: pop     ecx
0x591A75: pop     edi
0x591A76: pop     esi
0x591A77: pop     ebp
0x591A78: pop     ebx
0x591A79: add     esp, 20h
0x591A7C: retn
