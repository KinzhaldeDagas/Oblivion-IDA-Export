0x80FCE0: sub     esp, 0A68h
0x80FCE6: mov     eax, ds:0B30AACh
0x80FCEB: xor     eax, esp
0x80FCED: mov     [esp+0A68h+var_4], eax
0x80FCF4: push    ebx
0x80FCF5: push    ebp
0x80FCF6: push    esi
0x80FCF7: push    edi
0x80FCF8: xor     ebx, ebx
0x80FCFA: push    3Ch ; '<'
0x80FCFC: lea     eax, [esp+0A7Ch+var_4F4]
0x80FD03: push    ebx
0x80FD04: mov     edi, offset aTree; "TREE"
0x80FD09: mov     esi, offset EmptyString
0x80FD0E: push    eax
0x80FD0F: mov     [esp+0A84h+var_A60], ecx
0x80FD13: mov     [esp+0A84h+var_504], offset aLighting1xVBas; "lighting\\1x\\v\\base.v.hlsl"
0x80FD1E: mov     [esp+0A84h+var_500], edi
0x80FD25: mov     [esp+0A84h+var_4FC], esi
0x80FD2C: mov     [esp+0A84h+var_4F8], ebx
0x80FD33: call    __memset
0x80FD38: push    34h ; '4'
0x80FD3A: lea     ecx, [esp+0A88h+var_4A0]
0x80FD41: push    ebx
0x80FD42: mov     ebp, offset aVc; "VC"
0x80FD47: push    ecx
0x80FD48: mov     [esp+0A90h+var_4B8], offset aLighting1xVAmb; "lighting\\1x\\v\\ambDiffuseDirTexture.v"...
0x80FD53: mov     [esp+0A90h+var_4B4], edi
0x80FD5A: mov     [esp+0A90h+var_4B0], esi
0x80FD61: mov     [esp+0A90h+var_4AC], ebp
0x80FD68: mov     [esp+0A90h+var_4A8], esi
0x80FD6F: mov     [esp+0A90h+var_4A4], ebx
0x80FD76: call    __memset
0x80FD7B: push    34h ; '4'
0x80FD7D: lea     edx, [esp+0A94h+var_454]
0x80FD84: push    ebx
0x80FD85: push    edx
0x80FD86: mov     [esp+0A9Ch+var_46C], offset aLighting1xVAmb; "lighting\\1x\\v\\ambDiffuseDirTexture.v"...
0x80FD91: mov     [esp+0A9Ch+var_468], edi
0x80FD98: mov     [esp+0A9Ch+var_464], esi
0x80FD9F: mov     [esp+0A9Ch+var_460], ebp
0x80FDA6: mov     [esp+0A9Ch+var_45C], esi
0x80FDAD: mov     [esp+0A9Ch+var_458], ebx
0x80FDB4: call    __memset
0x80FDB9: push    3Ch ; '<'
0x80FDBB: lea     eax, [esp+0AA0h+var_410]
0x80FDC2: push    ebx
0x80FDC3: push    eax
0x80FDC4: mov     [esp+0AA8h+var_420], offset aLighting1xVA_0; "lighting\\1x\\v\\ambDiffuseDirAndPt.v.h"...
0x80FDCF: mov     [esp+0AA8h+var_41C], edi
0x80FDD6: mov     [esp+0AA8h+var_418], esi
0x80FDDD: mov     [esp+0AA8h+var_414], ebx
0x80FDE4: call    __memset
0x80FDE9: push    3Ch ; '<'
0x80FDEB: lea     ecx, [esp+0AACh+var_3C4]
0x80FDF2: push    ebx
0x80FDF3: push    ecx
0x80FDF4: mov     [esp+0AB4h+var_3D4], offset aLighting1xVD_0; "lighting\\1x\\v\\diffuseDir.v.hlsl"
0x80FDFF: mov     [esp+0AB4h+var_3D0], edi
0x80FE06: mov     [esp+0AB4h+var_3CC], esi
0x80FE0D: mov     [esp+0AB4h+var_3C8], ebx
0x80FE14: call    __memset
0x80FE19: push    3Ch ; '<'
0x80FE1B: lea     edx, [esp+0AB8h+var_378]
0x80FE22: push    ebx
0x80FE23: push    edx
0x80FE24: mov     [esp+0AC0h+var_388], offset aLighting1xVDif; "lighting\\1x\\v\\diffusePt.v.hlsl"
0x80FE2F: mov     [esp+0AC0h+var_384], edi
0x80FE36: mov     [esp+0AC0h+var_380], esi
0x80FE3D: mov     [esp+0AC0h+var_37C], ebx
0x80FE44: call    __memset
0x80FE49: add     esp, 48h
0x80FE4C: push    34h ; '4'
0x80FE4E: lea     eax, [esp+0A7Ch+var_324]
0x80FE55: push    ebx
0x80FE56: push    eax
0x80FE57: mov     [esp+0A84h+var_33C], offset aLighting1xVBas; "lighting\\1x\\v\\base.v.hlsl"
0x80FE62: mov     [esp+0A84h+var_338], edi
0x80FE69: mov     [esp+0A84h+var_334], esi
0x80FE70: mov     [esp+0A84h+var_330], ebp
0x80FE77: mov     [esp+0A84h+var_32C], esi
0x80FE7E: mov     [esp+0A84h+var_328], ebx
0x80FE85: call    __memset
0x80FE8A: mov     [esp+0A84h+var_2F0], offset aLighting1xVS_0; "lighting\\1x\\v\\specularDir.v.hlsl"
0x80FE95: mov     [esp+0A84h+var_2EC], edi
0x80FE9C: push    3Ch ; '<'
0x80FE9E: lea     ecx, [esp+0A88h+var_2E0]
0x80FEA5: push    ebx
0x80FEA6: push    ecx
0x80FEA7: mov     [esp+0A90h+var_2E8], esi
0x80FEAE: mov     [esp+0A90h+var_2E4], ebx
0x80FEB5: call    __memset
0x80FEBA: push    3Ch ; '<'
0x80FEBC: lea     edx, [esp+0A94h+var_294]
0x80FEC3: push    ebx
0x80FEC4: push    edx
0x80FEC5: mov     [esp+0A9Ch+var_2A4], offset aLighting1xVSpe; "lighting\\1x\\v\\specularPt.v.hlsl"
0x80FED0: mov     [esp+0A9Ch+var_2A0], edi
0x80FED7: mov     [esp+0A9Ch+var_29C], esi
0x80FEDE: mov     [esp+0A9Ch+var_298], ebx
0x80FEE5: call    __memset
0x80FEEA: push    34h ; '4'
0x80FEEC: lea     eax, [esp+0AA0h+var_240]
0x80FEF3: push    ebx
0x80FEF4: push    eax
0x80FEF5: mov     [esp+0AA8h+var_258], offset aLighting1xVBas; "lighting\\1x\\v\\base.v.hlsl"
0x80FF00: mov     [esp+0AA8h+var_254], edi
0x80FF07: mov     [esp+0AA8h+var_250], esi
0x80FF0E: mov     [esp+0AA8h+var_24C], offset off_A90D88
0x80FF19: mov     [esp+0AA8h+var_248], esi
0x80FF20: mov     [esp+0AA8h+var_244], ebx
0x80FF27: call    __memset
0x80FF2C: push    34h ; '4'
0x80FF2E: lea     ecx, [esp+0AACh+var_A44]
0x80FF32: push    ebx
0x80FF33: mov     ebp, offset aLights; "LIGHTS"
0x80FF38: push    ecx
0x80FF39: mov     [esp+0AB4h+var_A5C], offset aLighting2xVAd_; "lighting\\2x\\v\\AD.v.hlsl"
0x80FF41: mov     [esp+0AB4h+var_A58], ebp
0x80FF45: mov     [esp+0AB4h+var_A54], offset a2_0; "2"
0x80FF4D: mov     [esp+0AB4h+var_A50], edi
0x80FF51: mov     [esp+0AB4h+var_A4C], esi
0x80FF55: mov     [esp+0AB4h+var_A48], ebx
0x80FF59: call    __memset
0x80FF5E: push    2Ch ; ','
0x80FF60: lea     edx, [esp+0AB8h+var_9F0]
0x80FF67: push    ebx
0x80FF68: push    edx
0x80FF69: mov     [esp+0AC0h+var_A10], offset aLighting2xVAd_; "lighting\\2x\\v\\AD.v.hlsl"
0x80FF74: mov     [esp+0AC0h+var_A0C], ebp
0x80FF7B: mov     [esp+0AC0h+var_A08], offset a2_0; "2"
0x80FF86: mov     [esp+0AC0h+var_A04], offset aProj_shadow; "PROJ_SHADOW"
0x80FF91: mov     [esp+0AC0h+var_A00], esi
0x80FF98: mov     [esp+0AC0h+var_9FC], edi
0x80FF9F: mov     [esp+0AC0h+var_9F8], esi
0x80FFA6: mov     [esp+0AC0h+var_9F4], ebx
0x80FFAD: call    __memset
0x80FFB2: add     esp, 48h
0x80FFB5: push    34h ; '4'
0x80FFB7: lea     eax, [esp+0A7Ch+var_9AC]
0x80FFBE: push    ebx
0x80FFBF: push    eax
0x80FFC0: mov     [esp+0A84h+var_9C4], offset aLighting2xVAd_; "lighting\\2x\\v\\AD.v.hlsl"
0x80FFCB: mov     [esp+0A84h+var_9C0], ebp
0x80FFD2: mov     [esp+0A84h+var_9BC], offset a3; "3"
0x80FFDD: mov     [esp+0A84h+var_9B8], edi
0x80FFE4: mov     [esp+0A84h+var_9B4], esi
0x80FFEB: mov     [esp+0A84h+var_9B0], ebx
0x80FFF2: call    __memset
0x80FFF7: push    2Ch ; ','
0x80FFF9: lea     ecx, [esp+0A88h+var_958]
0x810000: push    ebx
0x810001: push    ecx
0x810002: mov     [esp+0A90h+var_978], offset aLighting2xVAd_; "lighting\\2x\\v\\AD.v.hlsl"
0x81000D: mov     [esp+0A90h+var_974], ebp
0x810014: mov     [esp+0A90h+var_970], offset a3; "3"
0x81001F: mov     [esp+0A90h+var_96C], offset aProj_shadow; "PROJ_SHADOW"
0x81002A: mov     [esp+0A90h+var_968], esi
0x810031: mov     [esp+0A90h+var_964], edi
0x810038: mov     [esp+0A90h+var_960], esi
0x81003F: mov     [esp+0A90h+var_95C], ebx
0x810046: call    __memset
0x81004B: mov     [esp+0A90h+var_92C], offset aLighting2xVAdt; "lighting\\2x\\v\\ADTS.v.hlsl"
0x810056: mov     [esp+0A90h+var_928], edi
0x81005D: mov     [esp+0A90h+var_924], esi
0x810064: mov     [esp+0A90h+var_920], ebx
0x81006B: push    3Ch ; '<'
0x81006D: lea     edx, [esp+0A94h+var_91C]
0x810074: push    ebx
0x810075: push    edx
0x810076: call    __memset
0x81007B: push    34h ; '4'
0x81007D: lea     eax, [esp+0AA0h+var_8C8]
0x810084: push    ebx
0x810085: push    eax
0x810086: mov     [esp+0AA8h+var_8E0], offset aLighting2xVAdt; "lighting\\2x\\v\\ADTS.v.hlsl"
0x810091: mov     [esp+0AA8h+var_8DC], offset aProj_shadow; "PROJ_SHADOW"
0x81009C: mov     [esp+0AA8h+var_8D8], esi
0x8100A3: mov     [esp+0AA8h+var_8D4], edi
0x8100AA: mov     [esp+0AA8h+var_8D0], esi
0x8100B1: mov     [esp+0AA8h+var_8CC], ebx
0x8100B8: call    __memset
0x8100BD: push    34h ; '4'
0x8100BF: lea     ecx, [esp+0AACh+var_87C]
0x8100C6: push    ebx
0x8100C7: push    ecx
0x8100C8: mov     [esp+0AB4h+var_894], offset aLighting2xVAdt; "lighting\\2x\\v\\ADTS.v.hlsl"
0x8100D3: mov     [esp+0AB4h+var_890], ebp
0x8100DA: mov     [esp+0AB4h+var_88C], offset a2_0; "2"
0x8100E5: mov     [esp+0AB4h+var_888], edi
0x8100EC: mov     [esp+0AB4h+var_884], esi
0x8100F3: mov     [esp+0AB4h+var_880], ebx
0x8100FA: call    __memset
0x8100FF: push    2Ch ; ','
0x810101: lea     edx, [esp+0AB8h+var_828]
0x810108: push    ebx
0x810109: push    edx
0x81010A: mov     [esp+0AC0h+var_848], offset aLighting2xVAdt; "lighting\\2x\\v\\ADTS.v.hlsl"
0x810115: mov     [esp+0AC0h+var_844], ebp
0x81011C: mov     [esp+0AC0h+var_840], offset a2_0; "2"
0x810127: mov     [esp+0AC0h+var_83C], offset aProj_shadow; "PROJ_SHADOW"
0x810132: mov     [esp+0AC0h+var_838], esi
0x810139: mov     [esp+0AC0h+var_834], edi
0x810140: mov     [esp+0AC0h+var_830], esi
0x810147: mov     [esp+0AC0h+var_82C], ebx
0x81014E: call    __memset
0x810153: add     esp, 48h
0x810156: push    34h ; '4'
0x810158: lea     eax, [esp+0A7Ch+var_7E4]
0x81015F: push    ebx
0x810160: push    eax
0x810161: mov     [esp+0A84h+var_7FC], offset aLighting2xVAdt; "lighting\\2x\\v\\ADTS.v.hlsl"
0x81016C: mov     [esp+0A84h+var_7F8], offset aSpecular_0; "SPECULAR"
0x810177: mov     [esp+0A84h+var_7F4], esi
0x81017E: mov     [esp+0A84h+var_7F0], edi
0x810185: mov     [esp+0A84h+var_7EC], esi
0x81018C: mov     [esp+0A84h+var_7E8], ebx
0x810193: call    __memset
0x810198: push    2Ch ; ','
0x81019A: lea     ecx, [esp+0A88h+var_790]
0x8101A1: push    ebx
0x8101A2: push    ecx
0x8101A3: mov     [esp+0A90h+var_7B0], offset aLighting2xVAdt; "lighting\\2x\\v\\ADTS.v.hlsl"
0x8101AE: mov     [esp+0A90h+var_7AC], offset aSpecular_0; "SPECULAR"
0x8101B9: mov     [esp+0A90h+var_7A8], esi
0x8101C0: mov     [esp+0A90h+var_7A4], offset aProj_shadow; "PROJ_SHADOW"
0x8101CB: mov     [esp+0A90h+var_7A0], esi
0x8101D2: mov     [esp+0A90h+var_79C], edi
0x8101D9: mov     [esp+0A90h+var_798], esi
0x8101E0: mov     [esp+0A90h+var_794], ebx
0x8101E7: call    __memset
0x8101EC: push    2Ch ; ','
0x8101EE: lea     edx, [esp+0A94h+var_744]
0x8101F5: push    ebx
0x8101F6: push    edx
0x8101F7: mov     [esp+0A9Ch+var_764], offset aLighting2xVAdt; "lighting\\2x\\v\\ADTS.v.hlsl"
0x810202: mov     [esp+0A9Ch+var_760], offset aSpecular_0; "SPECULAR"
0x81020D: mov     [esp+0A9Ch+var_75C], esi
0x810214: mov     [esp+0A9Ch+var_758], ebp
0x81021B: mov     [esp+0A9Ch+var_754], offset a2_0; "2"
0x810226: mov     [esp+0A9Ch+var_750], edi
0x81022D: mov     [esp+0A9Ch+var_74C], esi
0x810234: mov     [esp+0A9Ch+var_748], ebx
0x81023B: call    __memset
0x810240: mov     [esp+0A9Ch+var_718], offset aLighting2xVAdt; "lighting\\2x\\v\\ADTS.v.hlsl"
0x81024B: mov     [esp+0A9Ch+var_714], offset aSpecular_0; "SPECULAR"
0x810256: mov     [esp+0A9Ch+var_710], esi
0x81025D: xor     eax, eax
0x81025F: push    34h ; '4'
0x810261: mov     [esp+0AA0h+var_6F0], eax
0x810268: mov     [esp+0AA0h+var_6EC], eax
0x81026F: mov     [esp+0AA0h+var_6E8], eax
0x810276: mov     [esp+0AA0h+var_6E4], eax
0x81027D: mov     [esp+0AA0h+var_6E0], eax
0x810284: mov     [esp+0AA0h+var_6DC], eax
0x81028B: mov     [esp+0AA0h+var_6D8], eax
0x810292: mov     [esp+0AA0h+var_6D4], eax
0x810299: mov     [esp+0AA0h+var_6D0], eax
0x8102A0: mov     ecx, offset a2_0; "2"
0x8102A5: lea     eax, [esp+0AA0h+var_6B4]
0x8102AC: push    ebx
0x8102AD: push    eax
0x8102AE: mov     [esp+0AA8h+var_70C], ebp
0x8102B5: mov     [esp+0AA8h+var_708], ecx
0x8102BC: mov     [esp+0AA8h+var_704], offset aProj_shadow; "PROJ_SHADOW"
0x8102C7: mov     [esp+0AA8h+var_700], esi
0x8102CE: mov     [esp+0AA8h+var_6FC], edi
0x8102D5: mov     [esp+0AA8h+var_6F8], esi
0x8102DC: mov     [esp+0AA8h+var_6F4], ebx
0x8102E3: mov     [esp+0AA8h+var_6CC], offset aLighting2xVDif; "lighting\\2x\\v\\DiffusePt.v.hlsl"
0x8102EE: mov     [esp+0AA8h+var_6C8], ebp
0x8102F5: mov     [esp+0AA8h+var_6C4], ecx
0x8102FC: mov     [esp+0AA8h+var_6C0], edi
0x810303: mov     [esp+0AA8h+var_6BC], esi
0x81030A: mov     [esp+0AA8h+var_6B8], ebx
0x810311: call    __memset
0x810316: push    34h ; '4'
0x810318: lea     ecx, [esp+0AACh+var_668]
0x81031F: push    ebx
0x810320: push    ecx
0x810321: mov     [esp+0AB4h+var_680], offset aLighting2xVDif; "lighting\\2x\\v\\DiffusePt.v.hlsl"
0x81032C: mov     [esp+0AB4h+var_67C], ebp
0x810333: mov     [esp+0AB4h+var_678], offset a3; "3"
0x81033E: mov     [esp+0AB4h+var_674], edi
0x810345: mov     [esp+0AB4h+var_670], esi
0x81034C: mov     [esp+0AB4h+var_66C], ebx
0x810353: call    __memset
0x810358: push    3Ch ; '<'
0x81035A: lea     edx, [esp+0AB8h+var_624]
0x810361: push    ebx
0x810362: mov     ebp, offset aLighting2xVSpe; "lighting\\2x\\v\\Specular.v.hlsl"
0x810367: push    edx
0x810368: mov     [esp+0AC0h+var_634], ebp
0x81036F: mov     [esp+0AC0h+var_630], edi
0x810376: mov     [esp+0AC0h+var_62C], esi
0x81037D: mov     [esp+0AC0h+var_628], ebx
0x810384: call    __memset
0x810389: add     esp, 48h
0x81038C: push    34h ; '4'
0x81038E: lea     eax, [esp+0A7Ch+var_5D0]
0x810395: push    ebx
0x810396: push    eax
0x810397: mov     [esp+0A84h+var_5E8], ebp
0x81039E: mov     [esp+0A84h+var_5E4], offset aProj_shadow; "PROJ_SHADOW"
0x8103A9: mov     [esp+0A84h+var_5E0], esi
0x8103B0: mov     [esp+0A84h+var_5DC], edi
0x8103B7: mov     [esp+0A84h+var_5D8], esi
0x8103BE: mov     [esp+0A84h+var_5D4], ebx
0x8103C5: call    __memset
0x8103CA: push    34h ; '4'
0x8103CC: lea     ecx, [esp+0A88h+var_584]
0x8103D3: push    ebx
0x8103D4: push    ecx
0x8103D5: mov     [esp+0A90h+var_59C], ebp
0x8103DC: mov     [esp+0A90h+var_598], offset aPoint; "POINT"
0x8103E7: mov     [esp+0A90h+var_594], esi
0x8103EE: mov     [esp+0A90h+var_590], edi
0x8103F5: mov     [esp+0A90h+var_58C], esi
0x8103FC: mov     [esp+0A90h+var_588], ebx
0x810403: call    __memset
0x810408: push    34h ; '4'
0x81040A: mov     [esp+0A94h+var_550], offset aLighting2xVSim; "lighting\\2x\\v\\SimpleShadow.v.hlsl"
0x810415: mov     [esp+0A94h+var_54C], offset aShadowmap; "SHADOWMAP"
0x810420: mov     [esp+0A94h+var_548], esi
0x810427: mov     [esp+0A94h+var_544], edi
0x81042E: mov     [esp+0A94h+var_540], esi
0x810435: mov     [esp+0A94h+var_53C], ebx
0x81043C: push    ebx
0x81043D: lea     edx, [esp+0A98h+var_538]
0x810444: push    edx
0x810445: call    __memset
0x81044A: mov     edi, [esp+0A9Ch+var_A60]
0x81044E: xor     ebp, ebp
0x810450: lea     esi, [esp+0A9Ch+var_504]
0x810457: add     esp, 24h
0x81045A: mov     [esp+0A78h+var_A64], ebp
0x81045E: mov     [esp+0A78h+var_A68], esi
0x810462: add     edi, 9Ch ; 'œ'
0x810468: jmp     short loc_810470
0x81046A: align 10h
0x810470: mov     eax, [esi]
0x810472: cmp     eax, ebx
0x810474: jz      loc_8104FC
0x81047A: lea     ecx, [esp+0A78h+FileName]
0x810481: push    ecx; int
0x810482: push    eax; FullPath
0x810483: call    sub_801030
0x810488: push    ebp
0x810489: lea     edx, [esp+0A84h+var_20C]
0x810490: push    offset aStb103i_vso; "STB1%03i.vso"
0x810495: push    edx
0x810496: call    __sprintf
0x81049B: add     esp, 14h
0x81049E: push    ebx; int
0x81049F: push    ebx; int
0x8104A0: lea     eax, [esp+0A80h+var_20C]
0x8104A7: push    eax; int
0x8104A8: push    offset aVs_1_1; "vs_1_1"
0x8104AD: add     esi, 4
0x8104B0: push    esi; int
0x8104B1: lea     ecx, [esp+0A8Ch+FileName]
0x8104B8: push    ecx; lpFileName
0x8104B9: mov     ecx, [esp+0A90h+var_A60]
0x8104BD: call    CreateVertexShader
0x8104C2: mov     esi, [edi]
0x8104C4: mov     ebp, eax
0x8104C6: cmp     esi, ebp
0x8104C8: jz      short loc_810520
0x8104CA: cmp     esi, ebx
0x8104CC: jz      short loc_8104EA
0x8104CE: lea     edx, [esi+4]
0x8104D1: push    edx; lpAddend
0x8104D2: call    dword ptr ds:0A2807Ch
0x8104D8: test    eax, eax
0x8104DA: jnz     short loc_8104EA
0x8104DC: cmp     esi, ebx
0x8104DE: jz      short loc_8104EA
0x8104E0: mov     eax, [esi]
0x8104E2: mov     edx, [eax]
0x8104E4: push    1
0x8104E6: mov     ecx, esi
0x8104E8: call    edx
0x8104EA: cmp     ebp, ebx
0x8104EC: mov     [edi], ebp
0x8104EE: jz      short loc_810520
0x8104F0: add     ebp, 4
0x8104F3: push    ebp; lpAddend
0x8104F4: call    dword ptr ds:0A28078h
0x8104FA: jmp     short loc_810520
0x8104FC: mov     esi, [edi]
0x8104FE: cmp     esi, ebx
0x810500: jz      short loc_810520
0x810502: lea     eax, [esi+4]
0x810505: push    eax; lpAddend
0x810506: call    dword ptr ds:0A2807Ch
0x81050C: test    eax, eax
0x81050E: jnz     short loc_81051E
0x810510: cmp     esi, ebx
0x810512: jz      short loc_81051E
0x810514: mov     edx, [esi]
0x810516: mov     eax, [edx]
0x810518: push    1
0x81051A: mov     ecx, esi
0x81051C: call    eax
0x81051E: mov     [edi], ebx
0x810520: mov     ebp, [esp+0A78h+var_A64]
0x810524: mov     esi, [esp+0A78h+var_A68]
0x810528: add     ebp, 1
0x81052B: add     esi, 4Ch ; 'L'
0x81052E: add     edi, 4
0x810531: cmp     ebp, 0Ah
0x810534: mov     [esp+0A78h+var_A64], ebp
0x810538: mov     [esp+0A78h+var_A68], esi
0x81053C: jl      loc_810470
0x810542: cmp     dword ptr ds:0B42F48h, 2
0x810549: jl      loc_81060D
0x81054F: mov     ecx, [esp+0A78h+var_A60]
0x810553: add     ecx, 0C4h ; 'Ä'
0x810559: mov     [esp+0A78h+var_A64], ebx
0x81055D: lea     ebp, [esp+0A78h+var_A58]
0x810561: mov     [esp+0A78h+var_A68], ecx
0x810565: mov     eax, [ebp-4]
0x810568: lea     edx, [esp+0A78h+FileName]
0x81056F: push    edx; int
0x810570: push    eax; FullPath
0x810571: call    sub_801030
0x810576: mov     ecx, [esp+0A80h+var_A64]
0x81057A: push    ecx
0x81057B: lea     edx, [esp+0A84h+var_20C]
0x810582: push    offset aStb203i_vso; "STB2%03i.vso"
0x810587: push    edx
0x810588: call    __sprintf
0x81058D: add     esp, 14h
0x810590: push    ebx; int
0x810591: push    ebx; int
0x810592: lea     eax, [esp+0A80h+var_20C]
0x810599: push    eax; int
0x81059A: push    offset aVs_2_0; "vs_2_0"
0x81059F: push    ebp; int
0x8105A0: lea     ecx, [esp+0A8Ch+FileName]
0x8105A7: push    ecx; lpFileName
0x8105A8: mov     ecx, [esp+0A90h+var_A60]
0x8105AC: call    CreateVertexShader
0x8105B1: mov     edx, [esp+0A78h+var_A68]
0x8105B5: mov     esi, [edx]
0x8105B7: mov     edi, eax
0x8105B9: cmp     esi, edi
0x8105BB: jz      short loc_8105F1
0x8105BD: cmp     esi, ebx
0x8105BF: jz      short loc_8105DD
0x8105C1: lea     eax, [esi+4]
0x8105C4: push    eax; lpAddend
0x8105C5: call    dword ptr ds:0A2807Ch
0x8105CB: test    eax, eax
0x8105CD: jnz     short loc_8105DD
0x8105CF: cmp     esi, ebx
0x8105D1: jz      short loc_8105DD
0x8105D3: mov     edx, [esi]
0x8105D5: mov     eax, [edx]
0x8105D7: push    1
0x8105D9: mov     ecx, esi
0x8105DB: call    eax
0x8105DD: cmp     edi, ebx
0x8105DF: mov     ecx, [esp+0A78h+var_A68]
0x8105E3: mov     [ecx], edi
0x8105E5: jz      short loc_8105F1
0x8105E7: add     edi, 4
0x8105EA: push    edi; lpAddend
0x8105EB: call    dword ptr ds:0A28078h
0x8105F1: mov     eax, [esp+0A78h+var_A64]
0x8105F5: add     [esp+0A78h+var_A68], 4
0x8105FA: add     eax, 1
0x8105FD: add     ebp, 4Ch ; 'L'
0x810600: cmp     eax, 12h
0x810603: mov     [esp+0A78h+var_A64], eax
0x810607: jl      loc_810565
0x81060D: mov     ecx, [esp+0A78h+var_4]
0x810614: pop     edi
0x810615: pop     esi
0x810616: pop     ebp
0x810617: pop     ebx
0x810618: xor     ecx, esp
0x81061A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x81061F: add     esp, 0A68h
0x810625: retn
