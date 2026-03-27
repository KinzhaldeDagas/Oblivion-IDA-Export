0x6957C0: push    0FFFFFFFFh
0x6957C2: push    offset SEH_6957C0
0x6957C7: mov     eax, large fs:0
0x6957CD: push    eax
0x6957CE: sub     esp, 1Ch
0x6957D1: push    ebx
0x6957D2: push    ebp
0x6957D3: push    esi
0x6957D4: push    edi
0x6957D5: mov     eax, ds:0B30AACh
0x6957DA: xor     eax, esp
0x6957DC: push    eax
0x6957DD: lea     eax, [esp+3Ch+var_C]
0x6957E1: mov     large fs:0, eax
0x6957E7: mov     ebx, ecx
0x6957E9: mov     eax, [ebx]
0x6957EB: mov     edx, [eax+154h]
0x6957F1: call    edx
0x6957F3: mov     esi, eax
0x6957F5: test    esi, esi
0x6957F7: jz      loc_695A32
0x6957FD: mov     eax, [esi]
0x6957FF: mov     edx, [eax+58h]
0x695802: push    offset aMagicareadispl; "MagicAreaDisplay"
0x695807: mov     ecx, esi
0x695809: call    edx
0x69580B: test    eax, eax
0x69580D: jnz     loc_695A32
0x695813: mov     eax, [esi]
0x695815: mov     edx, [eax+8]
0x695818: mov     ecx, esi
0x69581A: call    edx
0x69581C: test    eax, eax
0x69581E: mov     [esp+3Ch+var_20], eax
0x695822: jz      loc_695A32
0x695828: fld     dword ptr [esi+60h]
0x69582B: mov     ecx, [ebx+70h]
0x69582E: fstp    [esp+3Ch+var_24]
0x695832: call    EffectItem_GetArea
0x695837: mov     [esp+3Ch+var_28], eax
0x69583B: fild    [esp+3Ch+var_28]
0x69583F: push    0; int
0x695841: push    0Ah; int
0x695843: push    0Ah; int
0x695845: fmul    dword ptr ds:0B37DB8h
0x69584B: push    ecx
0x69584C: fdiv    [esp+4Ch+var_24]
0x695850: fstp    [esp+4Ch+var_24]
0x695854: fld     [esp+4Ch+var_24]
0x695858: fstp    [esp+4Ch+var_4C]; float
0x69585B: call    sub_6FC010
0x695860: add     esp, 10h
0x695863: mov     esi, eax
0x695865: push    offset aMagicareadispl; "MagicAreaDisplay"
0x69586A: mov     ecx, esi
0x69586C: call    NiObjectNET_SetName
0x695871: mov     eax, ds:0B3F9A8h
0x695876: mov     [esi+54h], eax
0x695879: mov     ecx, ds:0B3F9ACh
0x69587F: mov     [esi+58h], ecx
0x695882: mov     edx, ds:0B3F9B0h
0x695888: push    1Ch; Size
0x69588A: mov     [esi+5Ch], edx
0x69588D: call    FormHeapAlloc
0x695892: mov     edi, eax
0x695894: add     esp, 4
0x695897: mov     [esp+3Ch+var_24], edi
0x69589B: test    edi, edi
0x69589D: mov     [esp+3Ch+var_4], 0
0x6958A5: jz      short loc_6958BC
0x6958A7: mov     ecx, edi; this
0x6958A9: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x6958AE: mov     dword ptr [edi], offset ??_7NiVertexColorProperty@@6B@; const NiVertexColorProperty::`vftable'
0x6958B4: mov     word ptr [edi+18h], 8
0x6958BA: jmp     short loc_6958BE
0x6958BC: xor     edi, edi
0x6958BE: and     word ptr [edi+18h], 0FFC7h
0x6958C4: or      ebp, 0FFFFFFFFh
0x6958C7: push    edi; a2
0x6958C8: mov     ecx, esi; this
0x6958CA: mov     [esp+40h+var_4], ebp
0x6958CE: call    sub_405680
0x6958D3: push    1Ch; Size
0x6958D5: call    FormHeapAlloc
0x6958DA: mov     edi, eax
0x6958DC: add     esp, 4
0x6958DF: mov     [esp+3Ch+var_24], edi
0x6958E3: test    edi, edi
0x6958E5: mov     [esp+3Ch+var_4], 1
0x6958ED: jz      short loc_695906
0x6958EF: mov     ecx, edi; this
0x6958F1: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x6958F6: mov     dword ptr [edi], offset ??_7NiZBufferProperty@@6B@; const NiZBufferProperty::`vftable'
0x6958FC: mov     word ptr [edi+18h], 0Fh
0x695902: mov     eax, edi
0x695904: jmp     short loc_695908
0x695906: xor     eax, eax
0x695908: or      word ptr [eax+18h], 3
0x69590D: push    eax; a2
0x69590E: mov     ecx, esi; this
0x695910: mov     [esp+40h+var_4], ebp
0x695914: call    sub_405680
0x695919: push    1Ch; Size
0x69591B: call    FormHeapAlloc
0x695920: mov     edi, eax
0x695922: add     esp, 4
0x695925: mov     [esp+3Ch+var_24], edi
0x695929: test    edi, edi
0x69592B: mov     [esp+3Ch+var_4], 2
0x695933: jz      short loc_69594C
0x695935: mov     ecx, edi; this
0x695937: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x69593C: mov     dword ptr [edi], offset ??_7NiWireframeProperty@@6B@; const NiWireframeProperty::`vftable'
0x695942: mov     word ptr [edi+18h], 0
0x695948: mov     eax, edi
0x69594A: jmp     short loc_69594E
0x69594C: xor     eax, eax
0x69594E: mov     edi, 1
0x695953: or      [eax+18h], di
0x695957: push    eax; a2
0x695958: mov     ecx, esi; this
0x69595A: mov     [esp+40h+var_4], ebp
0x69595E: call    sub_405680
0x695963: fldz
0x695965: fst     [esp+3Ch+var_18]
0x695969: lea     eax, [esp+3Ch+var_1C]
0x69596D: fst     [esp+3Ch+var_14]
0x695971: push    eax
0x695972: mov     ecx, ebx
0x695974: fstp    [esp+40h+var_10]
0x695978: call    sub_65ABE0
0x69597D: mov     edx, [eax]
0x69597F: lea     ecx, [esp+3Ch+var_18]
0x695983: push    ecx
0x695984: push    edx
0x695985: call    sub_8A8140
0x69598A: push    5Ch ; '\'; Size
0x69598C: call    FormHeapAlloc
0x695991: add     esp, 0Ch
0x695994: mov     [esp+3Ch+var_24], eax
0x695998: test    eax, eax
0x69599A: mov     [esp+3Ch+var_4], 3
0x6959A2: jz      short loc_6959AD
0x6959A4: mov     ecx, eax; this
0x6959A6: call    ??0NiMaterialProperty@@QAE@XZ; NiMaterialProperty::NiMaterialProperty(void)
0x6959AB: jmp     short loc_6959AF
0x6959AD: xor     eax, eax
0x6959AF: mov     ecx, ds:0B25AC4h
0x6959B5: mov     [eax+1Ch], ecx
0x6959B8: mov     edx, ds:0B25AC8h
0x6959BE: mov     [eax+20h], edx
0x6959C1: mov     ecx, ds:0B25ACCh
0x6959C7: add     [eax+54h], edi
0x6959CA: mov     [eax+24h], ecx
0x6959CD: mov     edx, ds:0B25AC4h
0x6959D3: mov     ecx, [eax+54h]
0x6959D6: mov     [eax+28h], edx
0x6959D9: mov     edx, ds:0B25AC8h
0x6959DF: mov     [eax+2Ch], edx
0x6959E2: mov     edx, ds:0B25ACCh
0x6959E8: add     ecx, 1
0x6959EB: mov     [eax+54h], ecx
0x6959EE: mov     [eax+30h], edx
0x6959F1: mov     edx, [esp+3Ch+var_18]
0x6959F5: mov     [eax+40h], edx
0x6959F8: mov     edx, [esp+3Ch+var_14]
0x6959FC: mov     [eax+44h], edx
0x6959FF: mov     edx, [esp+3Ch+var_10]
0x695A03: add     ecx, 1
0x695A06: mov     [eax+54h], ecx
0x695A09: push    eax; a2
0x695A0A: mov     ecx, esi; this
0x695A0C: mov     [esp+40h+var_4], ebp
0x695A10: mov     [eax+48h], edx
0x695A13: call    sub_405680
0x695A18: mov     edi, [esp+3Ch+var_20]
0x695A1C: mov     eax, [edi]
0x695A1E: mov     edx, [eax+84h]
0x695A24: push    0
0x695A26: push    esi
0x695A27: mov     ecx, edi
0x695A29: call    edx
0x695A2B: mov     ecx, edi; this
0x695A2D: call    NiAVObject_InitializePropertyState
0x695A32: mov     ecx, dword ptr [esp+3Ch+var_C]
0x695A36: mov     large fs:0, ecx
0x695A3D: pop     ecx
0x695A3E: pop     edi
0x695A3F: pop     esi
0x695A40: pop     ebp
0x695A41: pop     ebx
0x695A42: add     esp, 28h
0x695A45: retn
