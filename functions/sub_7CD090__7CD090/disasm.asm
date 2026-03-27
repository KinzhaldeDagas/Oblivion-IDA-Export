0x7CD090: mov     eax, 2868h
0x7CD095: call    __alloca_probe
0x7CD09A: mov     eax, ds:0B30AACh
0x7CD09F: xor     eax, esp
0x7CD0A1: mov     [esp+2868h+var_4], eax
0x7CD0A8: push    ebx
0x7CD0A9: push    ebp
0x7CD0AA: push    esi
0x7CD0AB: push    edi
0x7CD0AC: push    0Ah; Radix
0x7CD0AE: lea     eax, [esp+287Ch+Dest]
0x7CD0B5: mov     [esp+287Ch+var_2864], ecx
0x7CD0B9: mov     ecx, ds:0B42E88h
0x7CD0BF: push    eax; Dest
0x7CD0C0: push    ecx; Value
0x7CD0C1: call    __itoa
0x7CD0C6: xor     edi, edi
0x7CD0C8: push    44h ; 'D'
0x7CD0CA: lea     edx, [esp+2888h+var_B40]
0x7CD0D1: push    edi
0x7CD0D2: mov     ebp, offset aLighting1xVBas; "lighting\\1x\\v\\base.v.hlsl"
0x7CD0D7: push    edx
0x7CD0D8: mov     [esp+2890h+var_B48], ebp
0x7CD0DF: mov     [esp+2890h+var_B44], edi
0x7CD0E6: call    __memset
0x7CD0EB: push    44h ; 'D'
0x7CD0ED: lea     eax, [esp+2894h+var_AF4]
0x7CD0F4: push    edi
0x7CD0F5: push    eax
0x7CD0F6: mov     [esp+289Ch+var_AFC], edi
0x7CD0FD: mov     [esp+289Ch+var_AF8], edi
0x7CD104: call    __memset
0x7CD109: push    44h ; 'D'
0x7CD10B: lea     ecx, [esp+28A0h+var_AA8]
0x7CD112: push    edi
0x7CD113: push    ecx
0x7CD114: mov     [esp+28A8h+var_AB0], edi
0x7CD11B: mov     [esp+28A8h+var_AAC], edi
0x7CD122: call    __memset
0x7CD127: push    44h ; 'D'
0x7CD129: lea     edx, [esp+28ACh+var_A5C]
0x7CD130: push    edi
0x7CD131: push    edx
0x7CD132: mov     [esp+28B4h+var_A64], offset aLighting1xVDif; "lighting\\1x\\v\\diffusePt.v.hlsl"
0x7CD13D: mov     [esp+28B4h+var_A60], edi
0x7CD144: call    __memset
0x7CD149: push    44h ; 'D'
0x7CD14B: lea     eax, [esp+28B8h+var_A10]
0x7CD152: push    edi
0x7CD153: push    eax
0x7CD154: mov     [esp+28C0h+var_A18], offset aLighting1xVD_0; "lighting\\1x\\v\\diffuseDir.v.hlsl"
0x7CD15F: mov     [esp+28C0h+var_A14], edi
0x7CD166: call    __memset
0x7CD16B: add     esp, 48h
0x7CD16E: push    44h ; 'D'
0x7CD170: lea     ecx, [esp+287Ch+var_9C4]
0x7CD177: push    edi
0x7CD178: push    ecx
0x7CD179: mov     [esp+2884h+var_9CC], ebp
0x7CD180: mov     [esp+2884h+var_9C8], edi
0x7CD187: call    __memset
0x7CD18C: push    3Ch ; '<'
0x7CD18E: lea     edx, [esp+2888h+var_970]
0x7CD195: push    edi
0x7CD196: mov     esi, offset EmptyString
0x7CD19B: push    edx
0x7CD19C: mov     [esp+2890h+var_980], ebp
0x7CD1A3: mov     [esp+2890h+var_97C], offset aVc; "VC"
0x7CD1AE: mov     [esp+2890h+var_978], esi
0x7CD1B5: mov     [esp+2890h+var_974], edi
0x7CD1BC: call    __memset
0x7CD1C1: push    3Ch ; '<'
0x7CD1C3: lea     eax, [esp+2894h+var_924]
0x7CD1CA: push    edi
0x7CD1CB: push    eax
0x7CD1CC: mov     [esp+289Ch+var_934], ebp
0x7CD1D3: mov     [esp+289Ch+var_930], offset aFacegenblend; "FACEGENBLEND"
0x7CD1DE: mov     [esp+289Ch+var_92C], esi
0x7CD1E5: mov     [esp+289Ch+var_928], edi
0x7CD1EC: call    __memset
0x7CD1F1: push    44h ; 'D'
0x7CD1F3: push    edi
0x7CD1F4: lea     ecx, [esp+28A4h+var_8E0]
0x7CD1FB: mov     [esp+28A4h+var_8E8], offset aLighting1xVSpe; "lighting\\1x\\v\\specularPt.v.hlsl"
0x7CD206: mov     [esp+28A4h+var_8E4], edi
0x7CD20D: push    ecx
0x7CD20E: call    __memset
0x7CD213: push    44h ; 'D'
0x7CD215: lea     edx, [esp+28ACh+var_894]
0x7CD21C: push    edi
0x7CD21D: push    edx
0x7CD21E: mov     [esp+28B4h+var_89C], offset aLighting1xVS_0; "lighting\\1x\\v\\specularDir.v.hlsl"
0x7CD229: mov     [esp+28B4h+var_898], edi
0x7CD230: call    __memset
0x7CD235: push    44h ; 'D'
0x7CD237: lea     eax, [esp+28B8h+var_848]
0x7CD23E: push    edi
0x7CD23F: mov     ebx, offset aLighting1xVAmb; "lighting\\1x\\v\\ambDiffuseDirTexture.v"...
0x7CD244: push    eax
0x7CD245: mov     [esp+28C0h+var_850], ebx
0x7CD24C: mov     [esp+28C0h+var_84C], edi
0x7CD253: call    __memset
0x7CD258: add     esp, 48h
0x7CD25B: push    3Ch ; '<'
0x7CD25D: lea     ecx, [esp+287Ch+var_7F4]
0x7CD264: push    edi
0x7CD265: push    ecx
0x7CD266: mov     [esp+2884h+var_804], ebx
0x7CD26D: mov     [esp+2884h+var_800], offset off_A90D88
0x7CD278: mov     [esp+2884h+var_7FC], esi
0x7CD27F: mov     [esp+2884h+var_7F8], edi
0x7CD286: call    __memset
0x7CD28B: push    3Ch ; '<'
0x7CD28D: lea     edx, [esp+2888h+var_7A8]
0x7CD294: push    edi
0x7CD295: push    edx
0x7CD296: mov     [esp+2890h+var_7B8], ebx
0x7CD29D: mov     [esp+2890h+var_7B4], offset aVc; "VC"
0x7CD2A8: mov     [esp+2890h+var_7B0], esi
0x7CD2AF: mov     [esp+2890h+var_7AC], edi
0x7CD2B6: call    __memset
0x7CD2BB: push    34h ; '4'
0x7CD2BD: lea     eax, [esp+2894h+var_754]
0x7CD2C4: push    edi
0x7CD2C5: push    eax
0x7CD2C6: mov     [esp+289Ch+var_76C], ebx
0x7CD2CD: mov     [esp+289Ch+var_768], offset off_A90D88
0x7CD2D8: mov     [esp+289Ch+var_764], esi
0x7CD2DF: mov     [esp+289Ch+var_760], offset aVc; "VC"
0x7CD2EA: mov     [esp+289Ch+var_75C], esi
0x7CD2F1: mov     [esp+289Ch+var_758], edi
0x7CD2F8: call    __memset
0x7CD2FD: push    3Ch ; '<'
0x7CD2FF: lea     ecx, [esp+28A0h+var_710]
0x7CD306: push    edi
0x7CD307: push    ecx
0x7CD308: mov     [esp+28A8h+var_720], ebx
0x7CD30F: mov     [esp+28A8h+var_71C], offset aFacegenblend; "FACEGENBLEND"
0x7CD31A: mov     [esp+28A8h+var_718], esi
0x7CD321: mov     [esp+28A8h+var_714], edi
0x7CD328: call    __memset
0x7CD32D: push    34h ; '4'
0x7CD32F: mov     [esp+28ACh+var_6D4], ebx
0x7CD336: lea     edx, [esp+28ACh+var_6BC]
0x7CD33D: push    edi
0x7CD33E: mov     ebx, offset off_A90D88
0x7CD343: push    edx
0x7CD344: mov     [esp+28B4h+var_6D0], offset aFacegenblend; "FACEGENBLEND"
0x7CD34F: mov     [esp+28B4h+var_6CC], esi
0x7CD356: mov     [esp+28B4h+var_6C8], ebx
0x7CD35D: mov     [esp+28B4h+var_6C4], esi
0x7CD364: mov     [esp+28B4h+var_6C0], edi
0x7CD36B: call    __memset
0x7CD370: push    44h ; 'D'
0x7CD372: lea     eax, [esp+28B8h+var_680]
0x7CD379: push    edi
0x7CD37A: push    eax
0x7CD37B: mov     [esp+28C0h+var_688], offset aLighting1xVA_0; "lighting\\1x\\v\\ambDiffuseDirAndPt.v.h"...
0x7CD386: mov     [esp+28C0h+var_684], edi
0x7CD38D: call    __memset
0x7CD392: add     esp, 48h
0x7CD395: push    3Ch ; '<'
0x7CD397: mov     [esp+287Ch+var_63C], ebp
0x7CD39E: mov     [esp+287Ch+var_638], ebx
0x7CD3A5: mov     [esp+287Ch+var_634], esi
0x7CD3AC: mov     [esp+287Ch+var_630], edi
0x7CD3B3: push    edi
0x7CD3B4: lea     ecx, [esp+2880h+var_62C]
0x7CD3BB: push    ecx
0x7CD3BC: call    __memset
0x7CD3C1: push    34h ; '4'
0x7CD3C3: lea     edx, [esp+2888h+var_5D8]
0x7CD3CA: push    edi
0x7CD3CB: push    edx
0x7CD3CC: mov     [esp+2890h+var_5F0], ebp
0x7CD3D3: mov     [esp+2890h+var_5EC], ebx
0x7CD3DA: mov     [esp+2890h+var_5E8], esi
0x7CD3E1: mov     [esp+2890h+var_5E4], offset off_A8F8C4
0x7CD3EC: mov     [esp+2890h+var_5E0], esi
0x7CD3F3: mov     [esp+2890h+var_5DC], edi
0x7CD3FA: call    __memset
0x7CD3FF: push    44h ; 'D'
0x7CD401: lea     eax, [esp+2894h+var_59C]
0x7CD408: push    edi
0x7CD409: push    eax
0x7CD40A: mov     [esp+289Ch+var_5A4], offset aLighting1xVEnv; "lighting\\1x\\v\\envmap.v.hlsl"
0x7CD415: mov     [esp+289Ch+var_5A0], edi
0x7CD41C: call    __memset
0x7CD421: push    44h ; 'D'
0x7CD423: lea     ecx, [esp+28A0h+var_550]
0x7CD42A: push    edi
0x7CD42B: mov     ebx, offset aLighting1xVVer; "lighting\\1x\\v\\vertDir.v.hlsl"
0x7CD430: push    ecx
0x7CD431: mov     [esp+28A8h+var_558], ebx
0x7CD438: mov     [esp+28A8h+var_554], edi
0x7CD43F: call    __memset
0x7CD444: push    3Ch ; '<'
0x7CD446: lea     edx, [esp+28ACh+var_4FC]
0x7CD44D: push    edi
0x7CD44E: push    edx
0x7CD44F: mov     [esp+28B4h+var_50C], ebx
0x7CD456: mov     [esp+28B4h+var_508], offset aVc; "VC"
0x7CD461: mov     [esp+28B4h+var_504], esi
0x7CD468: mov     [esp+28B4h+var_500], edi
0x7CD46F: call    __memset
0x7CD474: push    44h ; 'D'
0x7CD476: lea     eax, [esp+28B8h+var_4B8]
0x7CD47D: push    edi
0x7CD47E: mov     ebx, offset aLighting1xVV_0; "lighting\\1x\\v\\vertDirAndPt.v.hlsl"
0x7CD483: push    eax
0x7CD484: mov     [esp+28C0h+var_4C0], ebx
0x7CD48B: mov     [esp+28C0h+var_4BC], edi
0x7CD492: call    __memset
0x7CD497: add     esp, 48h
0x7CD49A: push    3Ch ; '<'
0x7CD49C: lea     ecx, [esp+287Ch+var_464]
0x7CD4A3: push    edi
0x7CD4A4: push    ecx
0x7CD4A5: mov     [esp+2884h+var_474], ebx
0x7CD4AC: mov     [esp+2884h+var_470], offset aVc; "VC"
0x7CD4B7: mov     [esp+2884h+var_46C], esi
0x7CD4BE: mov     [esp+2884h+var_468], edi
0x7CD4C5: call    __memset
0x7CD4CA: push    3Ch ; '<'
0x7CD4CC: lea     edx, [esp+2888h+var_418]
0x7CD4D3: push    edi
0x7CD4D4: push    edx
0x7CD4D5: mov     [esp+2890h+var_428], ebp
0x7CD4DC: mov     [esp+2890h+var_424], offset aSi; "SI"
0x7CD4E7: mov     [esp+2890h+var_420], esi
0x7CD4EE: mov     [esp+2890h+var_41C], edi
0x7CD4F5: call    __memset
0x7CD4FA: push    44h ; 'D'
0x7CD4FC: lea     eax, [esp+2894h+var_3D4]
0x7CD503: push    edi
0x7CD504: mov     ebx, offset aLighting1xVLan; "lighting\\1x\\v\\land.v.hlsl"
0x7CD509: push    eax
0x7CD50A: mov     [esp+289Ch+var_3DC], ebx
0x7CD511: mov     [esp+289Ch+var_3D8], edi
0x7CD518: call    __memset
0x7CD51D: push    3Ch ; '<'
0x7CD51F: push    edi
0x7CD520: lea     ecx, [esp+28A4h+var_380]
0x7CD527: mov     [esp+28A4h+var_390], ebx
0x7CD52E: mov     [esp+28A4h+var_38C], offset aLandalpha; "LANDALPHA"
0x7CD539: mov     [esp+28A4h+var_388], esi
0x7CD540: mov     [esp+28A4h+var_384], edi
0x7CD547: push    ecx
0x7CD548: call    __memset
0x7CD54D: push    34h ; '4'
0x7CD54F: lea     edx, [esp+28ACh+var_32C]
0x7CD556: push    edi
0x7CD557: push    edx
0x7CD558: mov     [esp+28B4h+var_344], ebx
0x7CD55F: mov     [esp+28B4h+var_340], offset aLandalpha; "LANDALPHA"
0x7CD56A: mov     [esp+28B4h+var_33C], esi
0x7CD571: mov     [esp+28B4h+var_338], offset aSi; "SI"
0x7CD57C: mov     [esp+28B4h+var_334], esi
0x7CD583: mov     [esp+28B4h+var_330], edi
0x7CD58A: call    __memset
0x7CD58F: push    3Ch ; '<'
0x7CD591: lea     eax, [esp+28B8h+var_2E8]
0x7CD598: push    edi
0x7CD599: push    eax
0x7CD59A: mov     [esp+28C0h+var_2F8], ebx
0x7CD5A1: mov     [esp+28C0h+var_2F4], offset aPtlight; "PTLIGHT"
0x7CD5AC: mov     [esp+28C0h+var_2F0], esi
0x7CD5B3: mov     [esp+28C0h+var_2EC], edi
0x7CD5BA: call    __memset
0x7CD5BF: add     esp, 48h
0x7CD5C2: push    34h ; '4'
0x7CD5C4: lea     ecx, [esp+287Ch+var_294]
0x7CD5CB: push    edi
0x7CD5CC: push    ecx
0x7CD5CD: mov     [esp+2884h+var_2AC], ebx
0x7CD5D4: mov     [esp+2884h+var_2A8], offset aLandalpha; "LANDALPHA"
0x7CD5DF: mov     [esp+2884h+var_2A4], esi
0x7CD5E6: mov     [esp+2884h+var_2A0], offset aPtlight; "PTLIGHT"
0x7CD5F1: mov     [esp+2884h+var_29C], esi
0x7CD5F8: mov     [esp+2884h+var_298], edi
0x7CD5FF: call    __memset
0x7CD604: push    44h ; 'D'
0x7CD606: lea     edx, [esp+2888h+var_258]
0x7CD60D: push    edi
0x7CD60E: push    edx
0x7CD60F: mov     [esp+2890h+var_260], edi
0x7CD616: mov     [esp+2890h+var_25C], edi
0x7CD61D: call    __memset
0x7CD622: push    3Ch ; '<'
0x7CD624: lea     eax, [esp+2894h+var_11C0]
0x7CD62B: push    edi
0x7CD62C: mov     ebx, offset aSkin_1; "SKIN"
0x7CD631: push    eax
0x7CD632: mov     [esp+289Ch+var_11D0], ebp
0x7CD639: mov     [esp+289Ch+var_11CC], ebx
0x7CD640: mov     [esp+289Ch+var_11C8], esi
0x7CD647: mov     [esp+289Ch+var_11C4], edi
0x7CD64E: call    __memset
0x7CD653: push    34h ; '4'
0x7CD655: lea     ecx, [esp+28A0h+var_116C]
0x7CD65C: push    edi
0x7CD65D: push    ecx
0x7CD65E: mov     [esp+28A8h+var_1184], ebp
0x7CD665: mov     [esp+28A8h+var_1180], ebx
0x7CD66C: mov     [esp+28A8h+var_117C], esi
0x7CD673: mov     [esp+28A8h+var_1178], offset off_A90D88
0x7CD67E: mov     [esp+28A8h+var_1174], esi
0x7CD685: mov     [esp+28A8h+var_1170], edi
0x7CD68C: call    __memset
0x7CD691: push    2Ch ; ','
0x7CD693: lea     edx, [esp+28ACh+var_1118]
0x7CD69A: push    edi
0x7CD69B: push    edx
0x7CD69C: mov     [esp+28B4h+var_1138], ebp
0x7CD6A3: mov     [esp+28B4h+var_1134], ebx
0x7CD6AA: mov     [esp+28B4h+var_1130], esi
0x7CD6B1: mov     [esp+28B4h+var_112C], offset off_A90D88
0x7CD6BC: mov     [esp+28B4h+var_1128], esi
0x7CD6C3: mov     [esp+28B4h+var_1124], offset off_A8F8C4
0x7CD6CE: mov     [esp+28B4h+var_1120], esi
0x7CD6D5: mov     [esp+28B4h+var_111C], edi
0x7CD6DC: call    __memset
0x7CD6E1: push    3Ch ; '<'
0x7CD6E3: mov     [esp+28B8h+var_10EC], offset aLighting1xVDif; "lighting\\1x\\v\\diffusePt.v.hlsl"
0x7CD6EE: mov     [esp+28B8h+var_10E8], ebx
0x7CD6F5: mov     [esp+28B8h+var_10E4], esi
0x7CD6FC: mov     [esp+28B8h+var_10E0], edi
0x7CD703: push    edi
0x7CD704: lea     eax, [esp+28BCh+var_10DC]
0x7CD70B: push    eax
0x7CD70C: call    __memset
0x7CD711: add     esp, 48h
0x7CD714: push    3Ch ; '<'
0x7CD716: lea     ecx, [esp+287Ch+var_1090]
0x7CD71D: push    edi
0x7CD71E: push    ecx
0x7CD71F: mov     [esp+2884h+var_10A0], offset aLighting1xVD_0; "lighting\\1x\\v\\diffuseDir.v.hlsl"
0x7CD72A: mov     [esp+2884h+var_109C], ebx
0x7CD731: mov     [esp+2884h+var_1098], esi
0x7CD738: mov     [esp+2884h+var_1094], edi
0x7CD73F: call    __memset
0x7CD744: push    3Ch ; '<'
0x7CD746: lea     edx, [esp+2888h+var_1044]
0x7CD74D: push    edi
0x7CD74E: push    edx
0x7CD74F: mov     [esp+2890h+var_1054], ebp
0x7CD756: mov     [esp+2890h+var_1050], ebx
0x7CD75D: mov     [esp+2890h+var_104C], esi
0x7CD764: mov     [esp+2890h+var_1048], edi
0x7CD76B: call    __memset
0x7CD770: push    34h ; '4'
0x7CD772: lea     eax, [esp+2894h+var_FF0]
0x7CD779: push    edi
0x7CD77A: push    eax
0x7CD77B: mov     [esp+289Ch+var_1008], ebp
0x7CD782: mov     [esp+289Ch+var_1004], ebx
0x7CD789: mov     [esp+289Ch+var_1000], esi
0x7CD790: mov     [esp+289Ch+var_FFC], offset aVc; "VC"
0x7CD79B: mov     [esp+289Ch+var_FF8], esi
0x7CD7A2: mov     [esp+289Ch+var_FF4], edi
0x7CD7A9: call    __memset
0x7CD7AE: push    34h ; '4'
0x7CD7B0: lea     ecx, [esp+28A0h+var_FA4]
0x7CD7B7: push    edi
0x7CD7B8: push    ecx
0x7CD7B9: mov     [esp+28A8h+var_FBC], ebp
0x7CD7C0: mov     [esp+28A8h+var_FB8], ebx
0x7CD7C7: mov     [esp+28A8h+var_FB4], esi
0x7CD7CE: mov     [esp+28A8h+var_FB0], offset aFacegenblend; "FACEGENBLEND"
0x7CD7D9: mov     [esp+28A8h+var_FAC], esi
0x7CD7E0: mov     [esp+28A8h+var_FA8], edi
0x7CD7E7: call    __memset
0x7CD7EC: push    3Ch ; '<'
0x7CD7EE: lea     edx, [esp+28ACh+var_F60]
0x7CD7F5: push    edi
0x7CD7F6: push    edx
0x7CD7F7: mov     [esp+28B4h+var_F70], offset aLighting1xVSpe; "lighting\\1x\\v\\specularPt.v.hlsl"
0x7CD802: mov     [esp+28B4h+var_F6C], ebx
0x7CD809: mov     [esp+28B4h+var_F68], esi
0x7CD810: mov     [esp+28B4h+var_F64], edi
0x7CD817: call    __memset
0x7CD81C: push    3Ch ; '<'
0x7CD81E: lea     eax, [esp+28B8h+var_F14]
0x7CD825: push    edi
0x7CD826: push    eax
0x7CD827: mov     [esp+28C0h+var_F24], offset aLighting1xVS_0; "lighting\\1x\\v\\specularDir.v.hlsl"
0x7CD832: mov     [esp+28C0h+var_F20], ebx
0x7CD839: mov     [esp+28C0h+var_F1C], esi
0x7CD840: mov     [esp+28C0h+var_F18], edi
0x7CD847: call    __memset
0x7CD84C: add     esp, 48h
0x7CD84F: push    3Ch ; '<'
0x7CD851: lea     ecx, [esp+287Ch+var_EC8]
0x7CD858: push    edi
0x7CD859: push    ecx
0x7CD85A: mov     [esp+2884h+var_ED8], offset aLighting1xVAmb; "lighting\\1x\\v\\ambDiffuseDirTexture.v"...
0x7CD865: mov     [esp+2884h+var_ED4], ebx
0x7CD86C: mov     [esp+2884h+var_ED0], esi
0x7CD873: mov     [esp+2884h+var_ECC], edi
0x7CD87A: call    __memset
0x7CD87F: push    34h ; '4'
0x7CD881: push    edi
0x7CD882: lea     edx, [esp+288Ch+var_E74]
0x7CD889: mov     [esp+288Ch+var_E8C], offset aLighting1xVAmb; "lighting\\1x\\v\\ambDiffuseDirTexture.v"...
0x7CD894: mov     [esp+288Ch+var_E88], ebx
0x7CD89B: mov     [esp+288Ch+var_E84], esi
0x7CD8A2: mov     [esp+288Ch+var_E80], offset aVc; "VC"
0x7CD8AD: mov     [esp+288Ch+var_E7C], esi
0x7CD8B4: mov     [esp+288Ch+var_E78], edi
0x7CD8BB: push    edx
0x7CD8BC: call    __memset
0x7CD8C1: push    34h ; '4'
0x7CD8C3: lea     eax, [esp+2894h+var_E28]
0x7CD8CA: push    edi
0x7CD8CB: push    eax
0x7CD8CC: mov     [esp+289Ch+var_E40], offset aLighting1xVAmb; "lighting\\1x\\v\\ambDiffuseDirTexture.v"...
0x7CD8D7: mov     [esp+289Ch+var_E3C], ebx
0x7CD8DE: mov     [esp+289Ch+var_E38], esi
0x7CD8E5: mov     [esp+289Ch+var_E34], offset off_A90D88
0x7CD8F0: mov     [esp+289Ch+var_E30], esi
0x7CD8F7: mov     [esp+289Ch+var_E2C], edi
0x7CD8FE: call    __memset
0x7CD903: push    2Ch ; ','
0x7CD905: lea     ecx, [esp+28A0h+var_DD4]
0x7CD90C: push    edi
0x7CD90D: push    ecx
0x7CD90E: mov     [esp+28A8h+var_DF4], offset aLighting1xVAmb; "lighting\\1x\\v\\ambDiffuseDirTexture.v"...
0x7CD919: mov     [esp+28A8h+var_DF0], ebx
0x7CD920: mov     [esp+28A8h+var_DEC], esi
0x7CD927: mov     [esp+28A8h+var_DE8], offset off_A90D88
0x7CD932: mov     [esp+28A8h+var_DE4], esi
0x7CD939: mov     [esp+28A8h+var_DE0], offset aVc; "VC"
0x7CD944: mov     [esp+28A8h+var_DDC], esi
0x7CD94B: mov     [esp+28A8h+var_DD8], edi
0x7CD952: call    __memset
0x7CD957: push    34h ; '4'
0x7CD959: lea     edx, [esp+28ACh+var_D90]
0x7CD960: push    edi
0x7CD961: push    edx
0x7CD962: mov     [esp+28B4h+var_DA8], offset aLighting1xVAmb; "lighting\\1x\\v\\ambDiffuseDirTexture.v"...
0x7CD96D: mov     [esp+28B4h+var_DA4], ebx
0x7CD974: mov     [esp+28B4h+var_DA0], esi
0x7CD97B: mov     [esp+28B4h+var_D9C], offset aFacegenblend; "FACEGENBLEND"
0x7CD986: mov     [esp+28B4h+var_D98], esi
0x7CD98D: mov     [esp+28B4h+var_D94], edi
0x7CD994: call    __memset
0x7CD999: push    2Ch ; ','
0x7CD99B: lea     eax, [esp+28B8h+var_D3C]
0x7CD9A2: push    edi
0x7CD9A3: push    eax
0x7CD9A4: mov     [esp+28C0h+var_D5C], offset aLighting1xVAmb; "lighting\\1x\\v\\ambDiffuseDirTexture.v"...
0x7CD9AF: mov     [esp+28C0h+var_D58], ebx
0x7CD9B6: mov     [esp+28C0h+var_D54], esi
0x7CD9BD: mov     [esp+28C0h+var_D50], offset aFacegenblend; "FACEGENBLEND"
0x7CD9C8: mov     [esp+28C0h+var_D4C], esi
0x7CD9CF: mov     [esp+28C0h+var_D48], offset off_A90D88
0x7CD9DA: mov     [esp+28C0h+var_D44], esi
0x7CD9E1: mov     [esp+28C0h+var_D40], edi
0x7CD9E8: call    __memset
0x7CD9ED: add     esp, 48h
0x7CD9F0: push    3Ch ; '<'
0x7CD9F2: lea     ecx, [esp+287Ch+var_D00]
0x7CD9F9: push    edi
0x7CD9FA: push    ecx
0x7CD9FB: mov     [esp+2884h+var_D10], offset aLighting1xVA_0; "lighting\\1x\\v\\ambDiffuseDirAndPt.v.h"...
0x7CDA06: mov     [esp+2884h+var_D0C], ebx
0x7CDA0D: mov     [esp+2884h+var_D08], esi
0x7CDA14: mov     [esp+2884h+var_D04], edi
0x7CDA1B: call    __memset
0x7CDA20: push    3Ch ; '<'
0x7CDA22: lea     edx, [esp+2888h+var_CB4]
0x7CDA29: push    edi
0x7CDA2A: push    edx
0x7CDA2B: mov     [esp+2890h+var_CC4], offset aLighting1xVEnv; "lighting\\1x\\v\\envmap.v.hlsl"
0x7CDA36: mov     [esp+2890h+var_CC0], ebx
0x7CDA3D: mov     [esp+2890h+var_CBC], esi
0x7CDA44: mov     [esp+2890h+var_CB8], edi
0x7CDA4B: call    __memset
0x7CDA50: push    44h ; 'D'
0x7CDA52: lea     eax, [esp+2894h+var_C70]
0x7CDA59: push    edi
0x7CDA5A: push    eax
0x7CDA5B: mov     [esp+289Ch+var_C78], edi
0x7CDA62: mov     [esp+289Ch+var_C74], edi
0x7CDA69: call    __memset
0x7CDA6E: push    44h ; 'D'
0x7CDA70: push    edi
0x7CDA71: lea     ecx, [esp+28A4h+var_C24]
0x7CDA78: mov     [esp+28A4h+var_C2C], edi
0x7CDA7F: mov     [esp+28A4h+var_C28], edi
0x7CDA86: push    ecx
0x7CDA87: call    __memset
0x7CDA8C: push    34h ; '4'
0x7CDA8E: lea     edx, [esp+28ACh+var_BC8]
0x7CDA95: push    edi
0x7CDA96: push    edx
0x7CDA97: mov     [esp+28B4h+var_BE0], ebp
0x7CDA9E: mov     [esp+28B4h+var_BDC], ebx
0x7CDAA5: mov     [esp+28B4h+var_BD8], esi
0x7CDAAC: mov     [esp+28B4h+var_BD4], offset aSi; "SI"
0x7CDAB7: mov     [esp+28B4h+var_BD0], esi
0x7CDABE: mov     [esp+28B4h+var_BCC], edi
0x7CDAC5: call    __memset
0x7CDACA: push    44h ; 'D'
0x7CDACC: lea     eax, [esp+28B8h+var_B8C]
0x7CDAD3: push    edi
0x7CDAD4: push    eax
0x7CDAD5: mov     [esp+28C0h+var_B94], edi
0x7CDADC: mov     [esp+28C0h+var_B90], edi
0x7CDAE3: call    __memset
0x7CDAE8: add     esp, 48h
0x7CDAEB: push    44h ; 'D'
0x7CDAED: lea     ecx, [esp+287Ch+var_2858]
0x7CDAF1: push    edi
0x7CDAF2: mov     ebp, offset aLighting2xVAdt; "lighting\\2x\\v\\ADTS.v.hlsl"
0x7CDAF7: push    ecx
0x7CDAF8: mov     [esp+2884h+var_2860], ebp
0x7CDAFC: mov     [esp+2884h+var_285C], edi
0x7CDB00: call    __memset
0x7CDB05: push    34h ; '4'
0x7CDB07: lea     edx, [esp+2888h+var_27FC]
0x7CDB0E: push    edi
0x7CDB0F: push    edx
0x7CDB10: mov     [esp+2890h+var_2814], ebp
0x7CDB14: mov     [esp+2890h+var_2810], offset aModelspacenorm; "MODELSPACENORM"
0x7CDB1F: mov     [esp+2890h+var_280C], esi
0x7CDB26: mov     [esp+2890h+var_2808], offset aLodlandclip; "LODLANDCLIP"
0x7CDB31: mov     [esp+2890h+var_2804], esi
0x7CDB38: mov     [esp+2890h+var_2800], edi
0x7CDB3F: call    __memset
0x7CDB44: push    3Ch ; '<'
0x7CDB46: lea     eax, [esp+2894h+var_27B8]
0x7CDB4D: push    edi
0x7CDB4E: push    eax
0x7CDB4F: mov     [esp+289Ch+var_27C8], ebp
0x7CDB56: mov     [esp+289Ch+var_27C4], ebx
0x7CDB5D: mov     [esp+289Ch+var_27C0], esi
0x7CDB64: mov     [esp+289Ch+var_27BC], edi
0x7CDB6B: call    __memset
0x7CDB70: push    3Ch ; '<'
0x7CDB72: lea     ecx, [esp+28A0h+var_276C]
0x7CDB79: push    edi
0x7CDB7A: push    ecx
0x7CDB7B: mov     [esp+28A8h+var_277C], ebp
0x7CDB82: mov     [esp+28A8h+var_2778], offset aProj_shadow; "PROJ_SHADOW"
0x7CDB8D: mov     [esp+28A8h+var_2774], esi
0x7CDB94: mov     [esp+28A8h+var_2770], edi
0x7CDB9B: call    __memset
0x7CDBA0: push    2Ch ; ','
0x7CDBA2: lea     edx, [esp+28ACh+var_2710]
0x7CDBA9: push    edi
0x7CDBAA: push    edx
0x7CDBAB: mov     [esp+28B4h+var_2730], ebp
0x7CDBB2: mov     [esp+28B4h+var_272C], offset aModelspacenorm; "MODELSPACENORM"
0x7CDBBD: mov     [esp+28B4h+var_2728], esi
0x7CDBC4: mov     [esp+28B4h+var_2724], offset aProj_shadow; "PROJ_SHADOW"
0x7CDBCF: mov     [esp+28B4h+var_2720], esi
0x7CDBD6: mov     [esp+28B4h+var_271C], offset aLodlandclip; "LODLANDCLIP"
0x7CDBE1: mov     [esp+28B4h+var_2718], esi
0x7CDBE8: mov     [esp+28B4h+var_2714], edi
0x7CDBEF: call    __memset
0x7CDBF4: push    34h ; '4'
0x7CDBF6: lea     eax, [esp+28B8h+var_26CC]
0x7CDBFD: push    edi
0x7CDBFE: push    eax
0x7CDBFF: mov     [esp+28C0h+var_26E4], ebp
0x7CDC06: mov     [esp+28C0h+var_26E0], ebx
0x7CDC0D: mov     [esp+28C0h+var_26DC], esi
0x7CDC14: mov     [esp+28C0h+var_26D8], offset aProj_shadow; "PROJ_SHADOW"
0x7CDC1F: mov     [esp+28C0h+var_26D4], esi
0x7CDC26: mov     [esp+28C0h+var_26D0], edi
0x7CDC2D: call    __memset
0x7CDC32: add     esp, 48h
0x7CDC35: push    3Ch ; '<'
0x7CDC37: lea     ecx, [esp+287Ch+var_2688]
0x7CDC3E: push    edi
0x7CDC3F: push    ecx
0x7CDC40: mov     [esp+2884h+var_2698], ebp
0x7CDC47: mov     [esp+2884h+var_2694], offset aStbb; "STBB"
0x7CDC52: mov     [esp+2884h+var_2690], esi
0x7CDC59: mov     [esp+2884h+var_268C], edi
0x7CDC60: call    __memset
0x7CDC65: push    3Ch ; '<'
0x7CDC67: mov     [esp+2888h+var_264C], ebp
0x7CDC6E: lea     edx, [esp+2888h+var_263C]
0x7CDC75: push    edi
0x7CDC76: mov     ebp, offset aLights; "LIGHTS"
0x7CDC7B: push    edx
0x7CDC7C: mov     [esp+2890h+var_2648], ebp
0x7CDC83: mov     [esp+2890h+var_2644], offset a2_0; "2"
0x7CDC8E: mov     [esp+2890h+var_2640], edi
0x7CDC95: call    __memset
0x7CDC9A: push    34h ; '4'
0x7CDC9C: lea     eax, [esp+2894h+var_25E8]
0x7CDCA3: push    edi
0x7CDCA4: push    eax
0x7CDCA5: mov     [esp+289Ch+var_2600], offset aLighting2xVAdt; "lighting\\2x\\v\\ADTS.v.hlsl"
0x7CDCB0: mov     [esp+289Ch+var_25FC], ebp
0x7CDCB7: mov     [esp+289Ch+var_25F8], offset a2_0; "2"
0x7CDCC2: mov     [esp+289Ch+var_25F4], ebx
0x7CDCC9: mov     [esp+289Ch+var_25F0], esi
0x7CDCD0: mov     [esp+289Ch+var_25EC], edi
0x7CDCD7: call    __memset
0x7CDCDC: push    34h ; '4'
0x7CDCDE: lea     ecx, [esp+28A0h+var_259C]
0x7CDCE5: push    edi
0x7CDCE6: push    ecx
0x7CDCE7: mov     [esp+28A8h+var_25B4], offset aLighting2xVAdt; "lighting\\2x\\v\\ADTS.v.hlsl"
0x7CDCF2: mov     [esp+28A8h+var_25B0], ebp
0x7CDCF9: mov     [esp+28A8h+var_25AC], offset a2_0; "2"
0x7CDD04: mov     [esp+28A8h+var_25A8], offset aProj_shadow; "PROJ_SHADOW"
0x7CDD0F: mov     [esp+28A8h+var_25A4], esi
0x7CDD16: mov     [esp+28A8h+var_25A0], edi
0x7CDD1D: call    __memset
0x7CDD22: push    2Ch ; ','
0x7CDD24: lea     edx, [esp+28ACh+var_2548]
0x7CDD2B: push    edi
0x7CDD2C: push    edx
0x7CDD2D: mov     [esp+28B4h+var_2568], offset aLighting2xVAdt; "lighting\\2x\\v\\ADTS.v.hlsl"
0x7CDD38: mov     [esp+28B4h+var_2564], ebp
0x7CDD3F: mov     [esp+28B4h+var_2560], offset a2_0; "2"
0x7CDD4A: mov     [esp+28B4h+var_255C], ebx
0x7CDD51: mov     [esp+28B4h+var_2558], esi
0x7CDD58: mov     [esp+28B4h+var_2554], offset aProj_shadow; "PROJ_SHADOW"
0x7CDD63: mov     [esp+28B4h+var_2550], esi
0x7CDD6A: mov     [esp+28B4h+var_254C], edi
0x7CDD71: call    __memset
0x7CDD76: push    3Ch ; '<'
0x7CDD78: lea     eax, [esp+28B8h+var_250C]
0x7CDD7F: push    edi
0x7CDD80: push    eax
0x7CDD81: mov     [esp+28C0h+var_251C], offset aLighting2xVAdt; "lighting\\2x\\v\\ADTS.v.hlsl"
0x7CDD8C: mov     [esp+28C0h+var_2518], offset aSpecular_0; "SPECULAR"
0x7CDD97: mov     [esp+28C0h+var_2514], esi
0x7CDD9E: mov     [esp+28C0h+var_2510], edi
0x7CDDA5: call    __memset
0x7CDDAA: add     esp, 48h
0x7CDDAD: push    34h ; '4'
0x7CDDAF: lea     ecx, [esp+287Ch+var_24B8]
0x7CDDB6: push    edi
0x7CDDB7: push    ecx
0x7CDDB8: mov     [esp+2884h+var_24D0], offset aLighting2xVAdt; "lighting\\2x\\v\\ADTS.v.hlsl"
0x7CDDC3: mov     [esp+2884h+var_24CC], offset aSpecular_0; "SPECULAR"
0x7CDDCE: mov     [esp+2884h+var_24C8], esi
0x7CDDD5: mov     [esp+2884h+var_24C4], ebx
0x7CDDDC: mov     [esp+2884h+var_24C0], esi
0x7CDDE3: mov     [esp+2884h+var_24BC], edi
0x7CDDEA: call    __memset
0x7CDDEF: mov     [esp+2884h+var_2484], offset aLighting2xVAdt; "lighting\\2x\\v\\ADTS.v.hlsl"
0x7CDDFA: mov     [esp+2884h+var_2480], offset aSpecular_0; "SPECULAR"
0x7CDE05: mov     [esp+2884h+var_247C], esi
0x7CDE0C: mov     [esp+2884h+var_2478], offset aProj_shadow; "PROJ_SHADOW"
0x7CDE17: mov     [esp+2884h+var_2474], esi
0x7CDE1E: push    34h ; '4'
0x7CDE20: lea     edx, [esp+2888h+var_246C]
0x7CDE27: push    edi
0x7CDE28: push    edx
0x7CDE29: mov     [esp+2890h+var_2470], edi
0x7CDE30: call    __memset
0x7CDE35: push    2Ch ; ','
0x7CDE37: lea     eax, [esp+2894h+var_2418]
0x7CDE3E: push    edi
0x7CDE3F: push    eax
0x7CDE40: mov     [esp+289Ch+var_2438], offset aLighting2xVAdt; "lighting\\2x\\v\\ADTS.v.hlsl"
0x7CDE4B: mov     [esp+289Ch+var_2434], offset aSpecular_0; "SPECULAR"
0x7CDE56: mov     [esp+289Ch+var_2430], esi
0x7CDE5D: mov     [esp+289Ch+var_242C], ebx
0x7CDE64: mov     [esp+289Ch+var_2428], esi
0x7CDE6B: mov     [esp+289Ch+var_2424], offset aProj_shadow; "PROJ_SHADOW"
0x7CDE76: mov     [esp+289Ch+var_2420], esi
0x7CDE7D: mov     [esp+289Ch+var_241C], edi
0x7CDE84: call    __memset
0x7CDE89: push    34h ; '4'
0x7CDE8B: lea     ecx, [esp+28A0h+var_23D4]
0x7CDE92: push    edi
0x7CDE93: push    ecx
0x7CDE94: mov     [esp+28A8h+var_23EC], offset aLighting2xVAdt; "lighting\\2x\\v\\ADTS.v.hlsl"
0x7CDE9F: mov     [esp+28A8h+var_23E8], offset aSpecular_0; "SPECULAR"
0x7CDEAA: mov     [esp+28A8h+var_23E4], esi
0x7CDEB1: mov     [esp+28A8h+var_23E0], ebp
0x7CDEB8: mov     [esp+28A8h+var_23DC], offset a2_0; "2"
0x7CDEC3: mov     [esp+28A8h+var_23D8], edi
0x7CDECA: call    __memset
0x7CDECF: push    2Ch ; ','
0x7CDED1: lea     edx, [esp+28ACh+var_2380]
0x7CDED8: push    edi
0x7CDED9: push    edx
0x7CDEDA: mov     [esp+28B4h+var_23A0], offset aLighting2xVAdt; "lighting\\2x\\v\\ADTS.v.hlsl"
0x7CDEE5: mov     [esp+28B4h+var_239C], offset aSpecular_0; "SPECULAR"
0x7CDEF0: mov     [esp+28B4h+var_2398], esi
0x7CDEF7: mov     [esp+28B4h+var_2394], ebp
0x7CDEFE: mov     [esp+28B4h+var_2390], offset a2_0; "2"
0x7CDF09: mov     [esp+28B4h+var_238C], ebx
0x7CDF10: mov     [esp+28B4h+var_2388], esi
0x7CDF17: mov     [esp+28B4h+var_2384], edi
0x7CDF1E: call    __memset
0x7CDF23: push    2Ch ; ','
0x7CDF25: lea     eax, [esp+28B8h+var_2334]
0x7CDF2C: push    edi
0x7CDF2D: push    eax
0x7CDF2E: mov     [esp+28C0h+var_2354], offset aLighting2xVAdt; "lighting\\2x\\v\\ADTS.v.hlsl"
0x7CDF39: mov     [esp+28C0h+var_2350], offset aSpecular_0; "SPECULAR"
0x7CDF44: mov     [esp+28C0h+var_234C], esi
0x7CDF4B: mov     [esp+28C0h+var_2348], ebp
0x7CDF52: mov     [esp+28C0h+var_2344], offset a2_0; "2"
0x7CDF5D: mov     [esp+28C0h+var_2340], offset aProj_shadow; "PROJ_SHADOW"
0x7CDF68: mov     [esp+28C0h+var_233C], esi
0x7CDF6F: mov     [esp+28C0h+var_2338], edi
0x7CDF76: call    __memset
0x7CDF7B: add     esp, 48h
0x7CDF7E: xor     eax, eax
0x7CDF80: mov     ecx, offset a2_0; "2"
0x7CDF85: mov     [esp+2878h+var_2308], offset aLighting2xVAdt; "lighting\\2x\\v\\ADTS.v.hlsl"
0x7CDF90: mov     [esp+2878h+var_2304], offset aSpecular_0; "SPECULAR"
0x7CDF9B: mov     [esp+2878h+var_2300], esi
0x7CDFA2: mov     [esp+2878h+var_22FC], ebp
0x7CDFA9: mov     [esp+2878h+var_22F8], ecx
0x7CDFB0: mov     [esp+2878h+var_22F4], ebx
0x7CDFB7: mov     [esp+2878h+var_22F0], esi
0x7CDFBE: mov     [esp+2878h+var_22EC], offset aProj_shadow; "PROJ_SHADOW"
0x7CDFC9: mov     [esp+2878h+var_22E8], esi
0x7CDFD0: mov     [esp+2878h+var_22E4], edi
0x7CDFD7: mov     [esp+2878h+var_22E0], eax
0x7CDFDE: mov     [esp+2878h+var_22DC], eax
0x7CDFE5: mov     [esp+2878h+var_22D8], eax
0x7CDFEC: mov     [esp+2878h+var_22D4], eax
0x7CDFF3: mov     [esp+2878h+var_22D0], eax
0x7CDFFA: mov     [esp+2878h+var_22CC], eax
0x7CE001: mov     [esp+2878h+var_22C8], eax
0x7CE008: mov     [esp+2878h+var_22C4], eax
0x7CE00F: mov     [esp+2878h+var_22C0], eax
0x7CE016: mov     [esp+2878h+var_22BC], offset aLighting2xVAd_; "lighting\\2x\\v\\AD.v.hlsl"
0x7CE021: mov     [esp+2878h+var_22B8], ebp
0x7CE028: mov     [esp+2878h+var_22B4], ecx
0x7CE02F: push    3Ch ; '<'
0x7CE031: lea     ecx, [esp+287Ch+var_22AC]
0x7CE038: push    edi
0x7CE039: push    ecx
0x7CE03A: mov     [esp+2884h+var_22B0], edi
0x7CE041: call    __memset
0x7CE046: push    34h ; '4'
0x7CE048: lea     edx, [esp+2888h+var_2258]
0x7CE04F: push    edi
0x7CE050: push    edx
0x7CE051: mov     [esp+2890h+var_2270], offset aLighting2xVAd_; "lighting\\2x\\v\\AD.v.hlsl"
0x7CE05C: mov     [esp+2890h+var_226C], ebp
0x7CE063: mov     [esp+2890h+var_2268], offset a2_0; "2"
0x7CE06E: mov     [esp+2890h+var_2264], ebx
0x7CE075: mov     [esp+2890h+var_2260], esi
0x7CE07C: mov     [esp+2890h+var_225C], edi
0x7CE083: call    __memset
0x7CE088: push    34h ; '4'
0x7CE08A: lea     eax, [esp+2894h+var_220C]
0x7CE091: push    edi
0x7CE092: push    eax
0x7CE093: mov     [esp+289Ch+var_2224], offset aLighting2xVAd_; "lighting\\2x\\v\\AD.v.hlsl"
0x7CE09E: mov     [esp+289Ch+var_2220], ebp
0x7CE0A5: mov     [esp+289Ch+var_221C], offset a2_0; "2"
0x7CE0B0: mov     [esp+289Ch+var_2218], offset aProj_shadow; "PROJ_SHADOW"
0x7CE0BB: mov     [esp+289Ch+var_2214], esi
0x7CE0C2: mov     [esp+289Ch+var_2210], edi
0x7CE0C9: call    __memset
0x7CE0CE: push    2Ch ; ','
0x7CE0D0: lea     ecx, [esp+28A0h+var_21B8]
0x7CE0D7: push    edi
0x7CE0D8: push    ecx
0x7CE0D9: mov     [esp+28A8h+var_21D8], offset aLighting2xVAd_; "lighting\\2x\\v\\AD.v.hlsl"
0x7CE0E4: mov     [esp+28A8h+var_21D4], ebp
0x7CE0EB: mov     [esp+28A8h+var_21D0], offset a2_0; "2"
0x7CE0F6: mov     [esp+28A8h+var_21CC], ebx
0x7CE0FD: mov     [esp+28A8h+var_21C8], esi
0x7CE104: mov     [esp+28A8h+var_21C4], offset aProj_shadow; "PROJ_SHADOW"
0x7CE10F: mov     [esp+28A8h+var_21C0], esi
0x7CE116: mov     [esp+28A8h+var_21BC], edi
0x7CE11D: call    __memset
0x7CE122: push    3Ch ; '<'
0x7CE124: lea     edx, [esp+28ACh+var_217C]
0x7CE12B: push    edi
0x7CE12C: push    edx
0x7CE12D: mov     [esp+28B4h+var_218C], offset aLighting2xVAd_; "lighting\\2x\\v\\AD.v.hlsl"
0x7CE138: mov     [esp+28B4h+var_2188], ebp
0x7CE13F: mov     [esp+28B4h+var_2184], offset a3; "3"
0x7CE14A: mov     [esp+28B4h+var_2180], edi
0x7CE151: call    __memset
0x7CE156: push    34h ; '4'
0x7CE158: lea     eax, [esp+28B8h+var_2128]
0x7CE15F: push    edi
0x7CE160: push    eax
0x7CE161: mov     [esp+28C0h+var_2140], offset aLighting2xVAd_; "lighting\\2x\\v\\AD.v.hlsl"
0x7CE16C: mov     [esp+28C0h+var_213C], ebp
0x7CE173: mov     [esp+28C0h+var_2138], offset a3; "3"
0x7CE17E: mov     [esp+28C0h+var_2134], ebx
0x7CE185: mov     [esp+28C0h+var_2130], esi
0x7CE18C: mov     [esp+28C0h+var_212C], edi
0x7CE193: call    __memset
0x7CE198: add     esp, 48h
0x7CE19B: push    34h ; '4'
0x7CE19D: lea     ecx, [esp+287Ch+var_20DC]
0x7CE1A4: push    edi
0x7CE1A5: push    ecx
0x7CE1A6: mov     [esp+2884h+var_20F4], offset aLighting2xVAd_; "lighting\\2x\\v\\AD.v.hlsl"
0x7CE1B1: mov     [esp+2884h+var_20F0], ebp
0x7CE1B8: mov     [esp+2884h+var_20EC], offset a3; "3"
0x7CE1C3: mov     [esp+2884h+var_20E8], offset aProj_shadow; "PROJ_SHADOW"
0x7CE1CE: mov     [esp+2884h+var_20E4], esi
0x7CE1D5: mov     [esp+2884h+var_20E0], edi
0x7CE1DC: call    __memset
0x7CE1E1: mov     [esp+2884h+var_20A8], offset aLighting2xVAd_; "lighting\\2x\\v\\AD.v.hlsl"
0x7CE1EC: mov     [esp+2884h+var_20A4], ebp
0x7CE1F3: mov     [esp+2884h+var_20A0], offset a3; "3"
0x7CE1FE: mov     [esp+2884h+var_209C], ebx
0x7CE205: mov     [esp+2884h+var_2098], esi
0x7CE20C: mov     [esp+2884h+var_2094], offset aProj_shadow; "PROJ_SHADOW"
0x7CE217: mov     [esp+2884h+var_2090], esi
0x7CE21E: mov     [esp+2884h+var_208C], edi
0x7CE225: push    2Ch ; ','
0x7CE227: lea     edx, [esp+2888h+var_2088]
0x7CE22E: push    edi
0x7CE22F: push    edx
0x7CE230: call    __memset
0x7CE235: push    3Ch ; '<'
0x7CE237: lea     eax, [esp+2894h+var_204C]
0x7CE23E: push    edi
0x7CE23F: push    eax
0x7CE240: mov     [esp+289Ch+var_205C], offset aLighting2xVDif; "lighting\\2x\\v\\DiffusePt.v.hlsl"
0x7CE24B: mov     [esp+289Ch+var_2058], ebp
0x7CE252: mov     [esp+289Ch+var_2054], offset a2_0; "2"
0x7CE25D: mov     [esp+289Ch+var_2050], edi
0x7CE264: call    __memset
0x7CE269: push    34h ; '4'
0x7CE26B: lea     ecx, [esp+28A0h+var_1FF8]
0x7CE272: push    edi
0x7CE273: push    ecx
0x7CE274: mov     [esp+28A8h+var_2010], offset aLighting2xVDif; "lighting\\2x\\v\\DiffusePt.v.hlsl"
0x7CE27F: mov     [esp+28A8h+var_200C], ebp
0x7CE286: mov     [esp+28A8h+var_2008], offset a2_0; "2"
0x7CE291: mov     [esp+28A8h+var_2004], ebx
0x7CE298: mov     [esp+28A8h+var_2000], esi
0x7CE29F: mov     [esp+28A8h+var_1FFC], edi
0x7CE2A6: call    __memset
0x7CE2AB: push    3Ch ; '<'
0x7CE2AD: lea     edx, [esp+28ACh+var_1FB4]
0x7CE2B4: push    edi
0x7CE2B5: push    edx
0x7CE2B6: mov     [esp+28B4h+var_1FC4], offset aLighting2xVDif; "lighting\\2x\\v\\DiffusePt.v.hlsl"
0x7CE2C1: mov     [esp+28B4h+var_1FC0], ebp
0x7CE2C8: mov     [esp+28B4h+var_1FBC], offset a3; "3"
0x7CE2D3: mov     [esp+28B4h+var_1FB8], edi
0x7CE2DA: call    __memset
0x7CE2DF: push    34h ; '4'
0x7CE2E1: lea     eax, [esp+28B8h+var_1F60]
0x7CE2E8: push    edi
0x7CE2E9: push    eax
0x7CE2EA: mov     [esp+28C0h+var_1F78], offset aLighting2xVDif; "lighting\\2x\\v\\DiffusePt.v.hlsl"
0x7CE2F5: mov     [esp+28C0h+var_1F74], ebp
0x7CE2FC: mov     [esp+28C0h+var_1F70], offset a3; "3"
0x7CE307: mov     [esp+28C0h+var_1F6C], ebx
0x7CE30E: mov     [esp+28C0h+var_1F68], esi
0x7CE315: mov     [esp+28C0h+var_1F64], edi
0x7CE31C: call    __memset
0x7CE321: add     esp, 48h
0x7CE324: push    44h ; 'D'
0x7CE326: lea     ecx, [esp+287Ch+var_1F24]
0x7CE32D: push    edi
0x7CE32E: mov     ebp, offset aLighting2xVSpe; "lighting\\2x\\v\\Specular.v.hlsl"
0x7CE333: push    ecx
0x7CE334: mov     [esp+2884h+var_1F2C], ebp
0x7CE33B: mov     [esp+2884h+var_1F28], edi
0x7CE342: call    __memset
0x7CE347: push    3Ch ; '<'
0x7CE349: lea     edx, [esp+2888h+var_1ED0]
0x7CE350: push    edi
0x7CE351: push    edx
0x7CE352: mov     [esp+2890h+var_1EE0], ebp
0x7CE359: mov     [esp+2890h+var_1EDC], ebx
0x7CE360: mov     [esp+2890h+var_1ED8], esi
0x7CE367: mov     [esp+2890h+var_1ED4], edi
0x7CE36E: call    __memset
0x7CE373: push    3Ch ; '<'
0x7CE375: lea     eax, [esp+2894h+var_1E84]
0x7CE37C: push    edi
0x7CE37D: push    eax
0x7CE37E: mov     [esp+289Ch+var_1E94], ebp
0x7CE385: mov     [esp+289Ch+var_1E90], offset aProj_shadow; "PROJ_SHADOW"
0x7CE390: mov     [esp+289Ch+var_1E8C], esi
0x7CE397: mov     [esp+289Ch+var_1E88], edi
0x7CE39E: call    __memset
0x7CE3A3: push    34h ; '4'
0x7CE3A5: mov     [esp+28A0h+var_1E48], ebp
0x7CE3AC: mov     [esp+28A0h+var_1E44], ebx
0x7CE3B3: mov     [esp+28A0h+var_1E40], esi
0x7CE3BA: mov     [esp+28A0h+var_1E3C], offset aProj_shadow; "PROJ_SHADOW"
0x7CE3C5: mov     [esp+28A0h+var_1E38], esi
0x7CE3CC: mov     [esp+28A0h+var_1E34], edi
0x7CE3D3: push    edi
0x7CE3D4: lea     ecx, [esp+28A4h+var_1E30]
0x7CE3DB: push    ecx
0x7CE3DC: call    __memset
0x7CE3E1: push    3Ch ; '<'
0x7CE3E3: lea     edx, [esp+28ACh+var_1DEC]
0x7CE3EA: push    edi
0x7CE3EB: push    edx
0x7CE3EC: mov     [esp+28B4h+var_1DFC], ebp
0x7CE3F3: mov     [esp+28B4h+var_1DF8], offset aPoint; "POINT"
0x7CE3FE: mov     [esp+28B4h+var_1DF4], esi
0x7CE405: mov     [esp+28B4h+var_1DF0], edi
0x7CE40C: call    __memset
0x7CE411: push    34h ; '4'
0x7CE413: lea     eax, [esp+28B8h+var_1D98]
0x7CE41A: push    edi
0x7CE41B: push    eax
0x7CE41C: mov     [esp+28C0h+var_1DB0], ebp
0x7CE423: mov     [esp+28C0h+var_1DAC], ebx
0x7CE42A: mov     [esp+28C0h+var_1DA8], esi
0x7CE431: mov     [esp+28C0h+var_1DA4], offset aPoint; "POINT"
0x7CE43C: mov     [esp+28C0h+var_1DA0], esi
0x7CE443: mov     [esp+28C0h+var_1D9C], edi
0x7CE44A: call    __memset
0x7CE44F: add     esp, 48h
0x7CE452: push    3Ch ; '<'
0x7CE454: lea     ecx, [esp+287Ch+var_1D54]
0x7CE45B: push    edi
0x7CE45C: mov     ebp, offset aEnvmap; "ENVMAP"
0x7CE461: push    ecx
0x7CE462: mov     [esp+2884h+var_1D64], offset aLighting2xVEnv; "lighting\\2x\\v\\EnvMap.v.hlsl"
0x7CE46D: mov     [esp+2884h+var_1D60], ebp
0x7CE474: mov     [esp+2884h+var_1D5C], esi
0x7CE47B: mov     [esp+2884h+var_1D58], edi
0x7CE482: call    __memset
0x7CE487: push    34h ; '4'
0x7CE489: lea     edx, [esp+2888h+var_1D00]
0x7CE490: push    edi
0x7CE491: push    edx
0x7CE492: mov     [esp+2890h+var_1D18], offset aLighting2xVEnv; "lighting\\2x\\v\\EnvMap.v.hlsl"
0x7CE49D: mov     [esp+2890h+var_1D14], ebx
0x7CE4A4: mov     [esp+2890h+var_1D10], esi
0x7CE4AB: mov     [esp+2890h+var_1D0C], ebp
0x7CE4B2: mov     [esp+2890h+var_1D08], esi
0x7CE4B9: mov     [esp+2890h+var_1D04], edi
0x7CE4C0: call    __memset
0x7CE4C5: push    34h ; '4'
0x7CE4C7: lea     eax, [esp+2894h+var_1CB4]
0x7CE4CE: push    edi
0x7CE4CF: push    eax
0x7CE4D0: mov     [esp+289Ch+var_1CCC], offset aLighting2xVEnv; "lighting\\2x\\v\\EnvMap.v.hlsl"
0x7CE4DB: mov     [esp+289Ch+var_1CC8], ebp
0x7CE4E2: mov     [esp+289Ch+var_1CC4], esi
0x7CE4E9: mov     [esp+289Ch+var_1CC0], offset off_A90BE8
0x7CE4F4: mov     [esp+289Ch+var_1CBC], edi
0x7CE4FB: mov     [esp+289Ch+var_1CB8], edi
0x7CE502: call    __memset
0x7CE507: push    34h ; '4'
0x7CE509: lea     edx, [esp+28A0h+var_1C68]
0x7CE510: lea     ecx, [esp+28A0h+Dest]
0x7CE517: push    edi
0x7CE518: mov     ebp, offset aMaxdecals; "MAXDECALS"
0x7CE51D: push    edx
0x7CE51E: mov     [esp+28A8h+var_1C80], offset aLighting2xVDec; "lighting\\2x\\v\\decal.v.hlsl"
0x7CE529: mov     [esp+28A8h+var_1C7C], offset aDecal_0; "DECAL"
0x7CE534: mov     [esp+28A8h+var_1C78], esi
0x7CE53B: mov     [esp+28A8h+var_1C74], ebp
0x7CE542: mov     [esp+28A8h+var_1C70], ecx
0x7CE549: mov     [esp+28A8h+var_1C6C], edi
0x7CE550: call    __memset
0x7CE555: push    2Ch ; ','
0x7CE557: lea     eax, [esp+28ACh+Dest]
0x7CE55E: push    edi
0x7CE55F: lea     ecx, [esp+28B0h+var_1C14]
0x7CE566: mov     [esp+28B0h+var_1C34], offset aLighting2xVDec; "lighting\\2x\\v\\decal.v.hlsl"
0x7CE571: mov     [esp+28B0h+var_1C30], offset aDecal_0; "DECAL"
0x7CE57C: mov     [esp+28B0h+var_1C2C], esi
0x7CE583: mov     [esp+28B0h+var_1C28], offset aAlpha_0; "ALPHA"
0x7CE58E: mov     [esp+28B0h+var_1C24], esi
0x7CE595: mov     [esp+28B0h+var_1C20], ebp
0x7CE59C: mov     [esp+28B0h+var_1C1C], eax
0x7CE5A3: mov     [esp+28B0h+var_1C18], edi
0x7CE5AA: push    ecx
0x7CE5AB: call    __memset
0x7CE5B0: push    3Ch ; '<'
0x7CE5B2: lea     edx, [esp+28B8h+var_1BD8]
0x7CE5B9: push    edi
0x7CE5BA: mov     ebp, offset aLighting2xVLan; "lighting\\2x\\v\\land.v.hlsl"
0x7CE5BF: push    edx
0x7CE5C0: mov     [esp+28C0h+var_1BE8], ebp
0x7CE5C7: mov     [esp+28C0h+var_1BE4], offset aProj_shadow; "PROJ_SHADOW"
0x7CE5D2: mov     [esp+28C0h+var_1BE0], esi
0x7CE5D9: mov     [esp+28C0h+var_1BDC], edi
0x7CE5E0: call    __memset
0x7CE5E5: add     esp, 48h
0x7CE5E8: push    34h ; '4'
0x7CE5EA: mov     [esp+287Ch+var_1B9C], ebp
0x7CE5F1: lea     eax, [esp+287Ch+var_1B84]
0x7CE5F8: push    edi
0x7CE5F9: mov     ebp, offset aLandalpha; "LANDALPHA"
0x7CE5FE: push    eax
0x7CE5FF: mov     [esp+2884h+var_1B98], ebp
0x7CE606: mov     [esp+2884h+var_1B94], esi
0x7CE60D: mov     [esp+2884h+var_1B90], offset aProj_shadow; "PROJ_SHADOW"
0x7CE618: mov     [esp+2884h+var_1B8C], esi
0x7CE61F: mov     [esp+2884h+var_1B88], edi
0x7CE626: call    __memset
0x7CE62B: push    34h ; '4'
0x7CE62D: lea     ecx, [esp+2888h+var_1B38]
0x7CE634: push    edi
0x7CE635: push    ecx
0x7CE636: mov     [esp+2890h+var_1B50], offset aLighting2xVL_0; "lighting\\2x\\v\\landlighting.v.hlsl"
0x7CE641: mov     [esp+2890h+var_1B4C], offset aDiff; "DIFF"
0x7CE64C: mov     [esp+2890h+var_1B48], esi
0x7CE653: mov     [esp+2890h+var_1B44], offset aPtlight; "PTLIGHT"
0x7CE65E: mov     [esp+2890h+var_1B40], esi
0x7CE665: mov     [esp+2890h+var_1B3C], edi
0x7CE66C: call    __memset
0x7CE671: push    3Ch ; '<'
0x7CE673: lea     edx, [esp+2894h+var_1AF4]
0x7CE67A: push    edi
0x7CE67B: push    edx
0x7CE67C: mov     [esp+289Ch+var_1B04], offset aLighting2xVL_0; "lighting\\2x\\v\\landlighting.v.hlsl"
0x7CE687: mov     [esp+289Ch+var_1B00], offset aSpecular_0; "SPECULAR"
0x7CE692: mov     [esp+289Ch+var_1AFC], esi
0x7CE699: mov     [esp+289Ch+var_1AF8], edi
0x7CE6A0: call    __memset
0x7CE6A5: push    48h ; 'H'
0x7CE6A7: lea     eax, [esp+28A0h+var_1AB4]
0x7CE6AE: push    edi
0x7CE6AF: push    eax
0x7CE6B0: mov     [esp+28A8h+var_1AB8], edi
0x7CE6B7: call    __memset
0x7CE6BC: push    2Ch ; ','
0x7CE6BE: lea     ecx, [esp+28ACh+var_1A4C]
0x7CE6C5: push    edi
0x7CE6C6: push    ecx
0x7CE6C7: mov     [esp+28B4h+var_1A6C], offset aLighting2xVL_0; "lighting\\2x\\v\\landlighting.v.hlsl"
0x7CE6D2: mov     [esp+28B4h+var_1A68], ebp
0x7CE6D9: mov     [esp+28B4h+var_1A64], esi
0x7CE6E0: mov     [esp+28B4h+var_1A60], offset aDiff; "DIFF"
0x7CE6EB: mov     [esp+28B4h+var_1A5C], esi
0x7CE6F2: mov     [esp+28B4h+var_1A58], offset aPtlight; "PTLIGHT"
0x7CE6FD: mov     [esp+28B4h+var_1A54], esi
0x7CE704: mov     [esp+28B4h+var_1A50], edi
0x7CE70B: call    __memset
0x7CE710: push    34h ; '4'
0x7CE712: lea     edx, [esp+28B8h+var_1A08]
0x7CE719: push    edi
0x7CE71A: push    edx
0x7CE71B: mov     [esp+28C0h+var_1A20], offset aLighting2xVL_0; "lighting\\2x\\v\\landlighting.v.hlsl"
0x7CE726: mov     [esp+28C0h+var_1A1C], ebp
0x7CE72D: mov     [esp+28C0h+var_1A18], esi
0x7CE734: mov     [esp+28C0h+var_1A14], offset aSpecular_0; "SPECULAR"
0x7CE73F: mov     [esp+28C0h+var_1A10], esi
0x7CE746: mov     [esp+28C0h+var_1A0C], edi
0x7CE74D: call    __memset
0x7CE752: add     esp, 48h
0x7CE755: push    48h ; 'H'
0x7CE757: lea     eax, [esp+287Ch+var_19D0]
0x7CE75E: push    edi
0x7CE75F: push    eax
0x7CE760: mov     [esp+2884h+var_19D4], edi
0x7CE767: call    __memset
0x7CE76C: push    34h ; '4'
0x7CE76E: lea     ecx, [esp+2888h+var_1970]
0x7CE775: push    edi
0x7CE776: push    ecx
0x7CE777: mov     [esp+2890h+var_1988], offset aLighting2xVL_0; "lighting\\2x\\v\\landlighting.v.hlsl"
0x7CE782: mov     [esp+2890h+var_1984], offset aSpecular_0; "SPECULAR"
0x7CE78D: mov     [esp+2890h+var_1980], esi
0x7CE794: mov     [esp+2890h+var_197C], offset aProj_shadow; "PROJ_SHADOW"
0x7CE79F: mov     [esp+2890h+var_1978], esi
0x7CE7A6: mov     [esp+2890h+var_1974], edi
0x7CE7AD: call    __memset
0x7CE7B2: push    2Ch ; ','
0x7CE7B4: lea     edx, [esp+2894h+var_191C]
0x7CE7BB: push    edi
0x7CE7BC: push    edx
0x7CE7BD: mov     [esp+289Ch+var_193C], offset aLighting2xVL_0; "lighting\\2x\\v\\landlighting.v.hlsl"
0x7CE7C8: mov     [esp+289Ch+var_1938], ebp
0x7CE7CF: mov     [esp+289Ch+var_1934], esi
0x7CE7D6: mov     [esp+289Ch+var_1930], offset aSpecular_0; "SPECULAR"
0x7CE7E1: mov     [esp+289Ch+var_192C], esi
0x7CE7E8: mov     [esp+289Ch+var_1928], offset aProj_shadow; "PROJ_SHADOW"
0x7CE7F3: mov     [esp+289Ch+var_1924], esi
0x7CE7FA: mov     [esp+289Ch+var_1920], edi
0x7CE801: call    __memset
0x7CE806: push    3Ch ; '<'
0x7CE808: lea     eax, [esp+28A0h+var_18E0]
0x7CE80F: push    edi
0x7CE810: push    eax
0x7CE811: mov     [esp+28A8h+var_18F0], offset aLighting2xVDep; "lighting\\2x\\v\\depthmap.v.hlsl"
0x7CE81C: mov     [esp+28A8h+var_18EC], offset aDepthmap; "DEPTHMAP"
0x7CE827: mov     [esp+28A8h+var_18E8], esi
0x7CE82E: mov     [esp+28A8h+var_18E4], edi
0x7CE835: call    __memset
0x7CE83A: push    34h ; '4'
0x7CE83C: lea     ecx, [esp+28ACh+var_188C]
0x7CE843: push    edi
0x7CE844: push    ecx
0x7CE845: mov     [esp+28B4h+var_18A4], offset aLighting2xVDep; "lighting\\2x\\v\\depthmap.v.hlsl"
0x7CE850: mov     [esp+28B4h+var_18A0], offset aDepthmap; "DEPTHMAP"
0x7CE85B: mov     [esp+28B4h+var_189C], esi
0x7CE862: mov     [esp+28B4h+var_1898], offset aAlphatest; "ALPHATEST"
0x7CE86D: mov     [esp+28B4h+var_1894], esi
0x7CE874: mov     [esp+28B4h+var_1890], edi
0x7CE87B: call    __memset
0x7CE880: push    34h ; '4'
0x7CE882: lea     edx, [esp+28B8h+var_1840]
0x7CE889: push    edi
0x7CE88A: push    edx
0x7CE88B: mov     [esp+28C0h+var_1858], offset aLighting2xVDep; "lighting\\2x\\v\\depthmap.v.hlsl"
0x7CE896: mov     [esp+28C0h+var_1854], offset aDepthmap; "DEPTHMAP"
0x7CE8A1: mov     [esp+28C0h+var_1850], esi
0x7CE8A8: mov     [esp+28C0h+var_184C], ebx
0x7CE8AF: mov     [esp+28C0h+var_1848], esi
0x7CE8B6: mov     [esp+28C0h+var_1844], edi
0x7CE8BD: call    __memset
0x7CE8C2: add     esp, 48h
0x7CE8C5: push    2Ch ; ','
0x7CE8C7: lea     eax, [esp+287Ch+var_17EC]
0x7CE8CE: push    edi
0x7CE8CF: push    eax
0x7CE8D0: mov     [esp+2884h+var_180C], offset aLighting2xVDep; "lighting\\2x\\v\\depthmap.v.hlsl"
0x7CE8DB: mov     [esp+2884h+var_1808], offset aDepthmap; "DEPTHMAP"
0x7CE8E6: mov     [esp+2884h+var_1804], esi
0x7CE8ED: mov     [esp+2884h+var_1800], ebx
0x7CE8F4: mov     [esp+2884h+var_17FC], esi
0x7CE8FB: mov     [esp+2884h+var_17F8], offset aAlphatest; "ALPHATEST"
0x7CE906: mov     [esp+2884h+var_17F4], esi
0x7CE90D: mov     [esp+2884h+var_17F0], edi
0x7CE914: call    __memset
0x7CE919: push    34h ; '4'
0x7CE91B: lea     ecx, [esp+2888h+var_17A8]
0x7CE922: push    edi
0x7CE923: push    ecx
0x7CE924: mov     [esp+2890h+var_17C0], offset aLighting2xVDep; "lighting\\2x\\v\\depthmap.v.hlsl"
0x7CE92F: mov     [esp+2890h+var_17BC], offset aDepthmap; "DEPTHMAP"
0x7CE93A: mov     [esp+2890h+var_17B8], esi
0x7CE941: mov     [esp+2890h+var_17B4], offset aWaterdepth; "WATERDEPTH"
0x7CE94C: mov     [esp+2890h+var_17B0], esi
0x7CE953: mov     [esp+2890h+var_17AC], edi
0x7CE95A: call    __memset
0x7CE95F: mov     [esp+2890h+var_1774], offset aLighting2xVRen; "lighting\\2x\\v\\renderNormals.v.hlsl"
0x7CE96A: push    44h ; 'D'
0x7CE96C: lea     edx, [esp+2894h+var_176C]
0x7CE973: push    edi
0x7CE974: push    edx
0x7CE975: mov     [esp+289Ch+var_1770], edi
0x7CE97C: call    __memset
0x7CE981: push    3Ch ; '<'
0x7CE983: lea     eax, [esp+28A0h+var_1718]
0x7CE98A: push    edi
0x7CE98B: push    eax
0x7CE98C: mov     [esp+28A8h+var_1728], offset aLighting2xVRen; "lighting\\2x\\v\\renderNormals.v.hlsl"
0x7CE997: mov     [esp+28A8h+var_1724], ebx
0x7CE99E: mov     [esp+28A8h+var_1720], esi
0x7CE9A5: mov     [esp+28A8h+var_171C], edi
0x7CE9AC: call    __memset
0x7CE9B1: push    3Ch ; '<'
0x7CE9B3: lea     ecx, [esp+28ACh+var_16CC]
0x7CE9BA: push    edi
0x7CE9BB: push    ecx
0x7CE9BC: mov     [esp+28B4h+var_16DC], offset aLighting2xVRen; "lighting\\2x\\v\\renderNormals.v.hlsl"
0x7CE9C7: mov     [esp+28B4h+var_16D8], offset aFire; "FIRE"
0x7CE9D2: mov     [esp+28B4h+var_16D4], esi
0x7CE9D9: mov     [esp+28B4h+var_16D0], edi
0x7CE9E0: call    __memset
0x7CE9E5: push    3Ch ; '<'
0x7CE9E7: lea     edx, [esp+28B8h+var_1680]
0x7CE9EE: push    edi
0x7CE9EF: push    edx
0x7CE9F0: mov     [esp+28C0h+var_1690], offset aLighting2xVRen; "lighting\\2x\\v\\renderNormals.v.hlsl"
0x7CE9FB: mov     [esp+28C0h+var_168C], offset aClear_0; "CLEAR"
0x7CEA06: mov     [esp+28C0h+var_1688], esi
0x7CEA0D: mov     [esp+28C0h+var_1684], edi
0x7CEA14: call    __memset
0x7CEA19: add     esp, 48h
0x7CEA1C: push    34h ; '4'
0x7CEA1E: lea     eax, [esp+287Ch+var_162C]
0x7CEA25: push    edi
0x7CEA26: push    eax
0x7CEA27: mov     [esp+2884h+var_1644], offset aLighting2xVRen; "lighting\\2x\\v\\renderNormals.v.hlsl"
0x7CEA32: mov     [esp+2884h+var_1640], offset aClear_0; "CLEAR"
0x7CEA3D: mov     [esp+2884h+var_163C], esi
0x7CEA44: mov     [esp+2884h+var_1638], ebx
0x7CEA4B: mov     [esp+2884h+var_1634], esi
0x7CEA52: mov     [esp+2884h+var_1630], edi
0x7CEA59: call    __memset
0x7CEA5E: push    44h ; 'D'
0x7CEA60: lea     ecx, [esp+2888h+var_15F0]
0x7CEA67: push    edi
0x7CEA68: push    ecx
0x7CEA69: mov     [esp+2890h+var_15F8], offset aLighting2xVLan; "lighting\\2x\\v\\land.v.hlsl"
0x7CEA74: mov     [esp+2890h+var_15F4], edi
0x7CEA7B: call    __memset
0x7CEA80: push    3Ch ; '<'
0x7CEA82: lea     edx, [esp+2894h+var_159C]
0x7CEA89: push    edi
0x7CEA8A: push    edx
0x7CEA8B: mov     [esp+289Ch+var_15AC], offset aLighting2xVLan; "lighting\\2x\\v\\land.v.hlsl"
0x7CEA96: mov     [esp+289Ch+var_15A8], ebp
0x7CEA9D: mov     [esp+289Ch+var_15A4], esi
0x7CEAA4: mov     [esp+289Ch+var_15A0], edi
0x7CEAAB: call    __memset
0x7CEAB0: push    34h ; '4'
0x7CEAB2: lea     eax, [esp+28A0h+var_1548]
0x7CEAB9: push    edi
0x7CEABA: push    eax
0x7CEABB: mov     [esp+28A8h+var_1560], offset aLighting2xVLan; "lighting\\2x\\v\\land.v.hlsl"
0x7CEAC6: mov     [esp+28A8h+var_155C], ebp
0x7CEACD: mov     [esp+28A8h+var_1558], esi
0x7CEAD4: mov     [esp+28A8h+var_1554], offset aLandlo; "LANDLO"
0x7CEADF: mov     [esp+28A8h+var_1550], esi
0x7CEAE6: mov     [esp+28A8h+var_154C], edi
0x7CEAED: call    __memset
0x7CEAF2: push    34h ; '4'
0x7CEAF4: mov     [esp+28ACh+var_1514], offset aLighting2xVLan; "lighting\\2x\\v\\land.v.hlsl"
0x7CEAFF: mov     [esp+28ACh+var_1510], ebp
0x7CEB06: mov     [esp+28ACh+var_150C], esi
0x7CEB0D: mov     [esp+28ACh+var_1508], offset aSi; "SI"
0x7CEB18: mov     [esp+28ACh+var_1504], esi
0x7CEB1F: mov     [esp+28ACh+var_1500], edi
0x7CEB26: push    edi
0x7CEB27: lea     ecx, [esp+28B0h+var_14FC]
0x7CEB2E: push    ecx
0x7CEB2F: call    __memset
0x7CEB34: push    3Ch ; '<'
0x7CEB36: lea     edx, [esp+28B8h+var_14B8]
0x7CEB3D: push    edi
0x7CEB3E: push    edx
0x7CEB3F: mov     [esp+28C0h+var_14C8], offset aLighting2xVLan; "lighting\\2x\\v\\land.v.hlsl"
0x7CEB4A: mov     [esp+28C0h+var_14C4], offset aPtlight; "PTLIGHT"
0x7CEB55: mov     [esp+28C0h+var_14C0], esi
0x7CEB5C: mov     [esp+28C0h+var_14BC], edi
0x7CEB63: call    __memset
0x7CEB68: add     esp, 48h
0x7CEB6B: push    34h ; '4'
0x7CEB6D: lea     eax, [esp+287Ch+var_1464]
0x7CEB74: push    edi
0x7CEB75: push    eax
0x7CEB76: mov     [esp+2884h+var_147C], offset aLighting2xVLan; "lighting\\2x\\v\\land.v.hlsl"
0x7CEB81: mov     [esp+2884h+var_1478], ebp
0x7CEB88: mov     [esp+2884h+var_1474], esi
0x7CEB8F: mov     [esp+2884h+var_1470], offset aPtlight; "PTLIGHT"
0x7CEB9A: mov     [esp+2884h+var_146C], esi
0x7CEBA1: mov     [esp+2884h+var_1468], edi
0x7CEBA8: call    __memset
0x7CEBAD: push    44h ; 'D'
0x7CEBAF: lea     ecx, [esp+2888h+var_1428]
0x7CEBB6: push    edi
0x7CEBB7: mov     ebp, offset aLighting2xVLoc; "lighting\\2x\\v\\localMap.v.hlsl"
0x7CEBBC: push    ecx
0x7CEBBD: mov     [esp+2890h+var_1430], ebp
0x7CEBC4: mov     [esp+2890h+var_142C], edi
0x7CEBCB: call    __memset
0x7CEBD0: push    3Ch ; '<'
0x7CEBD2: lea     edx, [esp+2894h+var_13D4]
0x7CEBD9: push    edi
0x7CEBDA: push    edx
0x7CEBDB: mov     [esp+289Ch+var_13E4], ebp
0x7CEBE2: mov     [esp+289Ch+var_13E0], ebx
0x7CEBE9: mov     [esp+289Ch+var_13DC], esi
0x7CEBF0: mov     [esp+289Ch+var_13D8], edi
0x7CEBF7: call    __memset
0x7CEBFC: push    3Ch ; '<'
0x7CEBFE: lea     eax, [esp+28A0h+var_1388]
0x7CEC05: push    edi
0x7CEC06: push    eax
0x7CEC07: mov     [esp+28A8h+var_1398], ebp
0x7CEC0E: mov     [esp+28A8h+var_1394], offset aClear_0; "CLEAR"
0x7CEC19: mov     [esp+28A8h+var_1390], esi
0x7CEC20: mov     [esp+28A8h+var_138C], edi
0x7CEC27: call    __memset
0x7CEC2C: push    44h ; 'D'
0x7CEC2E: lea     ecx, [esp+28ACh+var_1344]
0x7CEC35: push    edi
0x7CEC36: mov     ebp, offset aLighting1xVTex; "lighting\\1x\\v\\texEffect.v.hlsl"
0x7CEC3B: push    ecx
0x7CEC3C: mov     [esp+28B4h+var_134C], ebp
0x7CEC43: mov     [esp+28B4h+var_1348], edi
0x7CEC4A: call    __memset
0x7CEC4F: push    3Ch ; '<'
0x7CEC51: lea     edx, [esp+28B8h+var_12F0]
0x7CEC58: push    edi
0x7CEC59: push    edx
0x7CEC5A: mov     [esp+28C0h+var_1300], ebp
0x7CEC61: mov     [esp+28C0h+var_12FC], ebx
0x7CEC68: mov     [esp+28C0h+var_12F8], esi
0x7CEC6F: mov     [esp+28C0h+var_12F4], edi
0x7CEC76: call    __memset
0x7CEC7B: add     esp, 48h
0x7CEC7E: push    3Ch ; '<'
0x7CEC80: lea     eax, [esp+287Ch+var_12A4]
0x7CEC87: push    edi
0x7CEC88: mov     ebp, offset aShadowmap; "SHADOWMAP"
0x7CEC8D: push    eax
0x7CEC8E: mov     [esp+2884h+var_12B4], offset aLighting2xVSim; "lighting\\2x\\v\\SimpleShadow.v.hlsl"
0x7CEC99: mov     [esp+2884h+var_12B0], ebp
0x7CECA0: mov     [esp+2884h+var_12AC], esi
0x7CECA7: mov     [esp+2884h+var_12A8], edi
0x7CECAE: call    __memset
0x7CECB3: mov     [esp+2884h+var_1268], offset aLighting2xVSim; "lighting\\2x\\v\\SimpleShadow.v.hlsl"
0x7CECBE: mov     [esp+2884h+var_1264], ebp
0x7CECC5: mov     [esp+2884h+var_1260], esi
0x7CECCC: mov     [esp+2884h+var_125C], ebx
0x7CECD3: push    34h ; '4'
0x7CECD5: lea     ecx, [esp+2888h+var_1250]
0x7CECDC: push    edi
0x7CECDD: push    ecx
0x7CECDE: mov     [esp+2890h+var_1258], esi
0x7CECE5: mov     [esp+2890h+var_1254], edi
0x7CECEC: call    __memset
0x7CECF1: push    2Ch ; ','
0x7CECF3: lea     edx, [esp+2894h+var_11FC]
0x7CECFA: push    edi
0x7CECFB: push    edx
0x7CECFC: mov     [esp+289Ch+var_121C], offset aLighting2xVSim; "lighting\\2x\\v\\SimpleShadow.v.hlsl"
0x7CED07: mov     [esp+289Ch+var_1218], ebp
0x7CED0E: mov     [esp+289Ch+var_1214], esi
0x7CED15: mov     [esp+289Ch+var_1210], offset aLand; "LAND"
0x7CED20: mov     [esp+289Ch+var_120C], esi
0x7CED27: mov     [esp+289Ch+var_1208], offset aVc; "VC"
0x7CED32: mov     [esp+289Ch+var_1204], esi
0x7CED39: mov     [esp+289Ch+var_1200], edi
0x7CED40: call    __memset
0x7CED45: add     esp, 24h
0x7CED48: xor     esi, esi
0x7CED4A: lea     ebx, [esp+2878h+var_B48]
0x7CED51: mov     eax, [ebx]
0x7CED53: cmp     eax, edi
0x7CED55: jz      loc_7CEDEC
0x7CED5B: lea     ecx, [esp+2878h+FileName]
0x7CED62: push    ecx; int
0x7CED63: push    eax; FullPath
0x7CED64: call    sub_801030
0x7CED69: push    esi
0x7CED6A: lea     edx, [esp+2884h+var_20C]
0x7CED71: push    offset aSls103i_vso; "SLS1%03i.vso"
0x7CED76: push    edx
0x7CED77: call    __sprintf
0x7CED7C: add     esp, 14h
0x7CED7F: push    edi; int
0x7CED80: push    edi; int
0x7CED81: lea     eax, [esp+2880h+var_20C]
0x7CED88: push    eax; int
0x7CED89: push    offset aVs_1_1; "vs_1_1"
0x7CED8E: lea     ecx, [ebx+4]
0x7CED91: push    ecx; int
0x7CED92: mov     ecx, [esp+288Ch+var_2864]
0x7CED96: lea     edx, [esp+288Ch+FileName]
0x7CED9D: push    edx; lpFileName
0x7CED9E: call    CreateVertexShader
0x7CEDA3: mov     ebp, ds:0B45290h[esi*4]
0x7CEDAA: cmp     ebp, eax
0x7CEDAC: mov     [esp+2878h+var_2868], eax
0x7CEDB0: jz      short loc_7CEDEC
0x7CEDB2: cmp     ebp, edi
0x7CEDB4: jz      short loc_7CEDD7
0x7CEDB6: lea     eax, [ebp+4]
0x7CEDB9: push    eax; lpAddend
0x7CEDBA: call    dword ptr ds:0A2807Ch
0x7CEDC0: test    eax, eax
0x7CEDC2: jnz     short loc_7CEDD3
0x7CEDC4: cmp     ebp, edi
0x7CEDC6: jz      short loc_7CEDD3
0x7CEDC8: mov     edx, [ebp+0]
0x7CEDCB: mov     eax, [edx]
0x7CEDCD: push    1
0x7CEDCF: mov     ecx, ebp
0x7CEDD1: call    eax
0x7CEDD3: mov     eax, [esp+2878h+var_2868]
0x7CEDD7: cmp     eax, edi
0x7CEDD9: mov     ds:0B45290h[esi*4], eax
0x7CEDE0: jz      short loc_7CEDEC
0x7CEDE2: add     eax, 4
0x7CEDE5: push    eax; lpAddend
0x7CEDE6: call    dword ptr ds:0A28078h
0x7CEDEC: add     esi, 1
0x7CEDEF: add     ebx, 4Ch ; 'L'
0x7CEDF2: cmp     esi, 1Fh
0x7CEDF5: jl      loc_7CED51
0x7CEDFB: lea     esi, [esp+2878h+var_11D0]
0x7CEE02: xor     ebx, ebx
0x7CEE04: mov     [esp+2878h+var_2868], esi
0x7CEE08: jmp     short loc_7CEE10
0x7CEE0A: align 10h
0x7CEE10: mov     eax, [esi]
0x7CEE12: cmp     eax, edi
0x7CEE14: jz      loc_7CEEA4
0x7CEE1A: lea     ecx, [esp+2878h+FileName]
0x7CEE21: push    ecx; int
0x7CEE22: push    eax; FullPath
0x7CEE23: call    sub_801030
0x7CEE28: push    ebx
0x7CEE29: lea     edx, [esp+2884h+var_20C]
0x7CEE30: push    offset aSls1s03i_vso; "SLS1S%03i.vso"
0x7CEE35: push    edx
0x7CEE36: call    __sprintf
0x7CEE3B: add     esp, 14h
0x7CEE3E: push    edi; int
0x7CEE3F: push    edi; int
0x7CEE40: lea     eax, [esp+2880h+var_20C]
0x7CEE47: push    eax; int
0x7CEE48: push    offset aVs_1_1; "vs_1_1"
0x7CEE4D: add     esi, 4
0x7CEE50: push    esi; int
0x7CEE51: lea     ecx, [esp+288Ch+FileName]
0x7CEE58: push    ecx; lpFileName
0x7CEE59: mov     ecx, [esp+2890h+var_2864]
0x7CEE5D: call    CreateVertexShader
0x7CEE62: mov     esi, ds:0B4530Ch[ebx*4]
0x7CEE69: mov     ebp, eax
0x7CEE6B: cmp     esi, ebp
0x7CEE6D: jz      short loc_7CEEA4
0x7CEE6F: cmp     esi, edi
0x7CEE71: jz      short loc_7CEE8F
0x7CEE73: lea     edx, [esi+4]
0x7CEE76: push    edx; lpAddend
0x7CEE77: call    dword ptr ds:0A2807Ch
0x7CEE7D: test    eax, eax
0x7CEE7F: jnz     short loc_7CEE8F
0x7CEE81: cmp     esi, edi
0x7CEE83: jz      short loc_7CEE8F
0x7CEE85: mov     eax, [esi]
0x7CEE87: mov     edx, [eax]
0x7CEE89: push    1
0x7CEE8B: mov     ecx, esi
0x7CEE8D: call    edx
0x7CEE8F: cmp     ebp, edi
0x7CEE91: mov     ds:0B4530Ch[ebx*4], ebp
0x7CEE98: jz      short loc_7CEEA4
0x7CEE9A: add     ebp, 4
0x7CEE9D: push    ebp; lpAddend
0x7CEE9E: call    dword ptr ds:0A28078h
0x7CEEA4: mov     esi, [esp+2878h+var_2868]
0x7CEEA8: add     ebx, 1
0x7CEEAB: add     esi, 4Ch ; 'L'
0x7CEEAE: cmp     ebx, 16h
0x7CEEB1: mov     [esp+2878h+var_2868], esi
0x7CEEB5: jl      loc_7CEE10
0x7CEEBB: cmp     dword ptr ds:0B42F48h, 2
0x7CEEC2: jl      loc_7CEFB0
0x7CEEC8: lea     esi, [esp+2878h+var_2860]
0x7CEECC: xor     ebx, ebx
0x7CEECE: mov     [esp+2878h+var_2868], esi
0x7CEED2: mov     eax, [esi]
0x7CEED4: cmp     eax, edi
0x7CEED6: jnz     short loc_7CEF0F
0x7CEED8: mov     esi, ds:0B45364h[ebx*4]
0x7CEEDF: cmp     esi, edi
0x7CEEE1: jz      loc_7CEF99
0x7CEEE7: lea     eax, [esi+4]
0x7CEEEA: push    eax; lpAddend
0x7CEEEB: call    dword ptr ds:0A2807Ch
0x7CEEF1: test    eax, eax
0x7CEEF3: jnz     short loc_7CEF03
0x7CEEF5: cmp     esi, edi
0x7CEEF7: jz      short loc_7CEF03
0x7CEEF9: mov     edx, [esi]
0x7CEEFB: mov     eax, [edx]
0x7CEEFD: push    1
0x7CEEFF: mov     ecx, esi
0x7CEF01: call    eax
0x7CEF03: mov     ds:0B45364h[ebx*4], edi
0x7CEF0A: jmp     loc_7CEF99
0x7CEF0F: lea     ecx, [esp+2878h+FileName]
0x7CEF16: push    ecx; int
0x7CEF17: push    eax; FullPath
0x7CEF18: call    sub_801030
0x7CEF1D: push    ebx
0x7CEF1E: lea     edx, [esp+2884h+var_20C]
0x7CEF25: push    offset aSls203i_vso; "SLS2%03i.vso"
0x7CEF2A: push    edx
0x7CEF2B: call    __sprintf
0x7CEF30: add     esp, 14h
0x7CEF33: push    edi; int
0x7CEF34: push    edi; int
0x7CEF35: lea     eax, [esp+2880h+var_20C]
0x7CEF3C: push    eax; int
0x7CEF3D: push    offset aVs_2_0; "vs_2_0"
0x7CEF42: add     esi, 4
0x7CEF45: push    esi; int
0x7CEF46: lea     ecx, [esp+288Ch+FileName]
0x7CEF4D: push    ecx; lpFileName
0x7CEF4E: mov     ecx, [esp+2890h+var_2864]
0x7CEF52: call    CreateVertexShader
0x7CEF57: mov     esi, ds:0B45364h[ebx*4]
0x7CEF5E: mov     ebp, eax
0x7CEF60: cmp     esi, ebp
0x7CEF62: jz      short loc_7CEF99
0x7CEF64: cmp     esi, edi
0x7CEF66: jz      short loc_7CEF84
0x7CEF68: lea     edx, [esi+4]
0x7CEF6B: push    edx; lpAddend
0x7CEF6C: call    dword ptr ds:0A2807Ch
0x7CEF72: test    eax, eax
0x7CEF74: jnz     short loc_7CEF84
0x7CEF76: cmp     esi, edi
0x7CEF78: jz      short loc_7CEF84
0x7CEF7A: mov     eax, [esi]
0x7CEF7C: mov     edx, [eax]
0x7CEF7E: push    1
0x7CEF80: mov     ecx, esi
0x7CEF82: call    edx
0x7CEF84: cmp     ebp, edi
0x7CEF86: mov     ds:0B45364h[ebx*4], ebp
0x7CEF8D: jz      short loc_7CEF99
0x7CEF8F: add     ebp, 4
0x7CEF92: push    ebp; lpAddend
0x7CEF93: call    dword ptr ds:0A28078h
0x7CEF99: mov     esi, [esp+2878h+var_2868]
0x7CEF9D: add     ebx, 1
0x7CEFA0: add     esi, 4Ch ; 'L'
0x7CEFA3: cmp     ebx, 4Ch ; 'L'
0x7CEFA6: mov     [esp+2878h+var_2868], esi
0x7CEFAA: jl      loc_7CEED2
0x7CEFB0: mov     ecx, [esp+2878h+var_4]
0x7CEFB7: pop     edi
0x7CEFB8: pop     esi
0x7CEFB9: pop     ebp
0x7CEFBA: pop     ebx
0x7CEFBB: xor     ecx, esp
0x7CEFBD: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7CEFC2: add     esp, 2868h
0x7CEFC8: retn
