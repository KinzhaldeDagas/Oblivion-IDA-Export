0x808190: sub     esp, 0B04h
0x808196: mov     eax, ds:0B30AACh
0x80819B: xor     eax, esp
0x80819D: mov     [esp+0B04h+var_4], eax
0x8081A4: push    ebx
0x8081A5: push    ebp
0x8081A6: push    esi
0x8081A7: push    edi
0x8081A8: xor     ebx, ebx
0x8081AA: push    3Ch ; '<'
0x8081AC: lea     eax, [esp+0B18h+var_AE4]
0x8081B0: push    ebx
0x8081B1: mov     ebp, offset aLighting2xPAdt; "lighting\\2x\\p\\ADTS.p.hlsl"
0x8081B6: mov     edi, offset aParallax; "PARALLAX"
0x8081BB: mov     esi, offset EmptyString
0x8081C0: push    eax
0x8081C1: mov     [esp+0B20h+var_AFC], ecx
0x8081C5: mov     [esp+0B20h+var_AF4], ebp
0x8081C9: mov     [esp+0B20h+var_AF0], edi
0x8081CD: mov     [esp+0B20h+var_AEC], esi
0x8081D1: mov     [esp+0B20h+var_AE8], ebx
0x8081D5: call    __memset
0x8081DA: push    34h ; '4'
0x8081DC: lea     ecx, [esp+0B24h+var_A90]
0x8081E3: push    ebx
0x8081E4: push    ecx
0x8081E5: mov     [esp+0B2Ch+var_AA8], ebp
0x8081EC: mov     [esp+0B2Ch+var_AA4], edi
0x8081F3: mov     [esp+0B2Ch+var_AA0], esi
0x8081FA: mov     [esp+0B2Ch+var_A9C], offset aSi; "SI"
0x808205: mov     [esp+0B2Ch+var_A98], esi
0x80820C: mov     [esp+0B2Ch+var_A94], ebx
0x808213: call    __memset
0x808218: push    34h ; '4'
0x80821A: lea     edx, [esp+0B30h+var_A44]
0x808221: push    ebx
0x808222: push    edx
0x808223: mov     [esp+0B38h+var_A5C], ebp
0x80822A: mov     [esp+0B38h+var_A58], edi
0x808231: mov     [esp+0B38h+var_A54], esi
0x808238: mov     [esp+0B38h+var_A50], offset aProj_shadow; "PROJ_SHADOW"
0x808243: mov     [esp+0B38h+var_A4C], esi
0x80824A: mov     [esp+0B38h+var_A48], ebx
0x808251: call    __memset
0x808256: push    2Ch ; ','
0x808258: lea     eax, [esp+0B3Ch+var_9F0]
0x80825F: push    ebx
0x808260: push    eax
0x808261: mov     [esp+0B44h+var_A10], ebp
0x808268: mov     [esp+0B44h+var_A0C], edi
0x80826F: mov     [esp+0B44h+var_A08], esi
0x808276: mov     [esp+0B44h+var_A04], offset aSi; "SI"
0x808281: mov     [esp+0B44h+var_A00], esi
0x808288: mov     [esp+0B44h+var_9FC], offset aProj_shadow; "PROJ_SHADOW"
0x808293: mov     [esp+0B44h+var_9F8], esi
0x80829A: mov     [esp+0B44h+var_9F4], ebx
0x8082A1: call    __memset
0x8082A6: push    34h ; '4'
0x8082A8: mov     [esp+0B48h+var_9C4], ebp
0x8082AF: lea     ecx, [esp+0B48h+var_9AC]
0x8082B6: push    ebx
0x8082B7: mov     ebp, offset aLights; "LIGHTS"
0x8082BC: push    ecx
0x8082BD: mov     [esp+0B50h+var_9C0], ebp
0x8082C4: mov     [esp+0B50h+var_9BC], offset a2_0; "2"
0x8082CF: mov     [esp+0B50h+var_9B8], edi
0x8082D6: mov     [esp+0B50h+var_9B4], esi
0x8082DD: mov     [esp+0B50h+var_9B0], ebx
0x8082E4: call    __memset
0x8082E9: push    2Ch ; ','
0x8082EB: lea     edx, [esp+0B54h+var_958]
0x8082F2: push    ebx
0x8082F3: push    edx
0x8082F4: mov     [esp+0B5Ch+var_978], offset aLighting2xPAdt; "lighting\\2x\\p\\ADTS.p.hlsl"
0x8082FF: mov     [esp+0B5Ch+var_974], ebp
0x808306: mov     [esp+0B5Ch+var_970], offset a2_0; "2"
0x808311: mov     [esp+0B5Ch+var_96C], edi
0x808318: mov     [esp+0B5Ch+var_968], esi
0x80831F: mov     [esp+0B5Ch+var_964], offset aSi; "SI"
0x80832A: mov     [esp+0B5Ch+var_960], esi
0x808331: mov     [esp+0B5Ch+var_95C], ebx
0x808338: call    __memset
0x80833D: add     esp, 48h
0x808340: mov     [esp+0B14h+var_92C], offset aLighting2xPAdt; "lighting\\2x\\p\\ADTS.p.hlsl"
0x80834B: mov     [esp+0B14h+var_928], ebp
0x808352: push    2Ch ; ','
0x808354: lea     eax, [esp+0B18h+var_90C]
0x80835B: push    ebx
0x80835C: push    eax
0x80835D: mov     [esp+0B20h+var_924], offset a2_0; "2"
0x808368: mov     [esp+0B20h+var_920], edi
0x80836F: mov     [esp+0B20h+var_91C], esi
0x808376: mov     [esp+0B20h+var_918], offset aProj_shadow; "PROJ_SHADOW"
0x808381: mov     [esp+0B20h+var_914], esi
0x808388: mov     [esp+0B20h+var_910], ebx
0x80838F: call    __memset
0x808394: xor     eax, eax
0x808396: mov     ecx, offset aLighting2xPAdt; "lighting\\2x\\p\\ADTS.p.hlsl"
0x80839B: push    34h ; '4'
0x80839D: mov     [esp+0B24h+var_8E0], ecx
0x8083A4: mov     [esp+0B24h+var_894], ecx
0x8083AB: lea     ecx, [esp+0B24h+var_87C]
0x8083B2: push    ebx
0x8083B3: push    ecx
0x8083B4: mov     [esp+0B2Ch+var_8DC], ebp
0x8083BB: mov     [esp+0B2Ch+var_8D8], offset a2_0; "2"
0x8083C6: mov     [esp+0B2Ch+var_8D4], edi
0x8083CD: mov     [esp+0B2Ch+var_8D0], esi
0x8083D4: mov     [esp+0B2Ch+var_8CC], offset aSi; "SI"
0x8083DF: mov     [esp+0B2Ch+var_8C8], esi
0x8083E6: mov     [esp+0B2Ch+var_8C4], offset aProj_shadow; "PROJ_SHADOW"
0x8083F1: mov     [esp+0B2Ch+var_8C0], esi
0x8083F8: mov     [esp+0B2Ch+var_8BC], ebx
0x8083FF: mov     [esp+0B2Ch+var_8B8], eax
0x808406: mov     [esp+0B2Ch+var_8B4], eax
0x80840D: mov     [esp+0B2Ch+var_8B0], eax
0x808414: mov     [esp+0B2Ch+var_8AC], eax
0x80841B: mov     [esp+0B2Ch+var_8A8], eax
0x808422: mov     [esp+0B2Ch+var_8A4], eax
0x808429: mov     [esp+0B2Ch+var_8A0], eax
0x808430: mov     [esp+0B2Ch+var_89C], eax
0x808437: mov     [esp+0B2Ch+var_898], eax
0x80843E: mov     [esp+0B2Ch+var_890], offset aSpecular_0; "SPECULAR"
0x808449: mov     [esp+0B2Ch+var_88C], esi
0x808450: mov     [esp+0B2Ch+var_888], edi
0x808457: mov     [esp+0B2Ch+var_884], esi
0x80845E: mov     [esp+0B2Ch+var_880], ebx
0x808465: call    __memset
0x80846A: push    2Ch ; ','
0x80846C: lea     edx, [esp+0B30h+var_828]
0x808473: push    ebx
0x808474: push    edx
0x808475: mov     [esp+0B38h+var_848], offset aLighting2xPAdt; "lighting\\2x\\p\\ADTS.p.hlsl"
0x808480: mov     [esp+0B38h+var_844], offset aSpecular_0; "SPECULAR"
0x80848B: mov     [esp+0B38h+var_840], esi
0x808492: mov     [esp+0B38h+var_83C], edi
0x808499: mov     [esp+0B38h+var_838], esi
0x8084A0: mov     [esp+0B38h+var_834], offset aSi; "SI"
0x8084AB: mov     [esp+0B38h+var_830], esi
0x8084B2: mov     [esp+0B38h+var_82C], ebx
0x8084B9: call    __memset
0x8084BE: push    2Ch ; ','
0x8084C0: lea     eax, [esp+0B3Ch+var_7DC]
0x8084C7: push    ebx
0x8084C8: push    eax
0x8084C9: mov     [esp+0B44h+var_7FC], offset aLighting2xPAdt; "lighting\\2x\\p\\ADTS.p.hlsl"
0x8084D4: mov     [esp+0B44h+var_7F8], offset aSpecular_0; "SPECULAR"
0x8084DF: mov     [esp+0B44h+var_7F4], esi
0x8084E6: mov     [esp+0B44h+var_7F0], edi
0x8084ED: mov     [esp+0B44h+var_7EC], esi
0x8084F4: mov     [esp+0B44h+var_7E8], offset aProj_shadow; "PROJ_SHADOW"
0x8084FF: mov     [esp+0B44h+var_7E4], esi
0x808506: mov     [esp+0B44h+var_7E0], ebx
0x80850D: call    __memset
0x808512: xor     eax, eax
0x808514: mov     [esp+0B44h+var_7B0], offset aLighting2xPAdt; "lighting\\2x\\p\\ADTS.p.hlsl"
0x80851F: mov     [esp+0B44h+var_7AC], offset aSpecular_0; "SPECULAR"
0x80852A: mov     [esp+0B44h+var_7A8], esi
0x808531: mov     [esp+0B44h+var_7A4], edi
0x808538: mov     [esp+0B44h+var_7A0], esi
0x80853F: mov     [esp+0B44h+var_79C], offset aSi; "SI"
0x80854A: mov     [esp+0B44h+var_798], esi
0x808551: mov     [esp+0B44h+var_794], offset aProj_shadow; "PROJ_SHADOW"
0x80855C: mov     [esp+0B44h+var_790], esi
0x808563: mov     [esp+0B44h+var_78C], ebx
0x80856A: mov     [esp+0B44h+var_788], eax
0x808571: push    34h ; '4'
0x808573: lea     ecx, [esp+0B48h+var_74C]
0x80857A: push    ebx
0x80857B: push    ecx
0x80857C: mov     [esp+0B50h+var_784], eax
0x808583: mov     [esp+0B50h+var_780], eax
0x80858A: mov     [esp+0B50h+var_77C], eax
0x808591: mov     [esp+0B50h+var_778], eax
0x808598: mov     [esp+0B50h+var_774], eax
0x80859F: mov     [esp+0B50h+var_770], eax
0x8085A6: mov     [esp+0B50h+var_76C], eax
0x8085AD: mov     [esp+0B50h+var_768], eax
0x8085B4: mov     [esp+0B50h+var_764], offset aLighting2xPAd_; "lighting\\2x\\p\\AD.p.hlsl"
0x8085BF: mov     [esp+0B50h+var_760], ebp
0x8085C6: mov     [esp+0B50h+var_75C], offset a2_0; "2"
0x8085D1: mov     [esp+0B50h+var_758], edi
0x8085D8: mov     [esp+0B50h+var_754], esi
0x8085DF: mov     [esp+0B50h+var_750], ebx
0x8085E6: call    __memset
0x8085EB: push    2Ch ; ','
0x8085ED: lea     edx, [esp+0B54h+var_6F8]
0x8085F4: push    ebx
0x8085F5: push    edx
0x8085F6: mov     [esp+0B5Ch+var_718], offset aLighting2xPAd_; "lighting\\2x\\p\\AD.p.hlsl"
0x808601: mov     [esp+0B5Ch+var_714], ebp
0x808608: mov     [esp+0B5Ch+var_710], offset a2_0; "2"
0x808613: mov     [esp+0B5Ch+var_70C], edi
0x80861A: mov     [esp+0B5Ch+var_708], esi
0x808621: mov     [esp+0B5Ch+var_704], offset aSi; "SI"
0x80862C: mov     [esp+0B5Ch+var_700], esi
0x808633: mov     [esp+0B5Ch+var_6FC], ebx
0x80863A: call    __memset
0x80863F: add     esp, 48h
0x808642: push    2Ch ; ','
0x808644: lea     eax, [esp+0B18h+var_6AC]
0x80864B: push    ebx
0x80864C: push    eax
0x80864D: mov     [esp+0B20h+var_6CC], offset aLighting2xPAd_; "lighting\\2x\\p\\AD.p.hlsl"
0x808658: mov     [esp+0B20h+var_6C8], ebp
0x80865F: mov     [esp+0B20h+var_6C4], offset a2_0; "2"
0x80866A: mov     [esp+0B20h+var_6C0], edi
0x808671: mov     [esp+0B20h+var_6BC], esi
0x808678: mov     [esp+0B20h+var_6B8], offset aProj_shadow; "PROJ_SHADOW"
0x808683: mov     [esp+0B20h+var_6B4], esi
0x80868A: mov     [esp+0B20h+var_6B0], ebx
0x808691: call    __memset
0x808696: xor     eax, eax
0x808698: mov     ecx, offset aLighting2xPAd_; "lighting\\2x\\p\\AD.p.hlsl"
0x80869D: push    34h ; '4'
0x80869F: mov     [esp+0B24h+var_680], ecx
0x8086A6: mov     [esp+0B24h+var_634], ecx
0x8086AD: lea     ecx, [esp+0B24h+var_61C]
0x8086B4: push    ebx
0x8086B5: push    ecx
0x8086B6: mov     [esp+0B2Ch+var_67C], ebp
0x8086BD: mov     [esp+0B2Ch+var_678], offset a2_0; "2"
0x8086C8: mov     [esp+0B2Ch+var_674], edi
0x8086CF: mov     [esp+0B2Ch+var_670], esi
0x8086D6: mov     [esp+0B2Ch+var_66C], offset aSi; "SI"
0x8086E1: mov     [esp+0B2Ch+var_668], esi
0x8086E8: mov     [esp+0B2Ch+var_664], offset aProj_shadow; "PROJ_SHADOW"
0x8086F3: mov     [esp+0B2Ch+var_660], esi
0x8086FA: mov     [esp+0B2Ch+var_65C], ebx
0x808701: mov     [esp+0B2Ch+var_658], eax
0x808708: mov     [esp+0B2Ch+var_654], eax
0x80870F: mov     [esp+0B2Ch+var_650], eax
0x808716: mov     [esp+0B2Ch+var_64C], eax
0x80871D: mov     [esp+0B2Ch+var_648], eax
0x808724: mov     [esp+0B2Ch+var_644], eax
0x80872B: mov     [esp+0B2Ch+var_640], eax
0x808732: mov     [esp+0B2Ch+var_63C], eax
0x808739: mov     [esp+0B2Ch+var_638], eax
0x808740: mov     [esp+0B2Ch+var_630], ebp
0x808747: mov     [esp+0B2Ch+var_62C], offset a3; "3"
0x808752: mov     [esp+0B2Ch+var_628], edi
0x808759: mov     [esp+0B2Ch+var_624], esi
0x808760: mov     [esp+0B2Ch+var_620], ebx
0x808767: call    __memset
0x80876C: mov     [esp+0B2Ch+var_5E8], offset aLighting2xPAd_; "lighting\\2x\\p\\AD.p.hlsl"
0x808777: mov     [esp+0B2Ch+var_5E4], ebp
0x80877E: mov     [esp+0B2Ch+var_5E0], offset a3; "3"
0x808789: push    2Ch ; ','
0x80878B: lea     edx, [esp+0B30h+var_5C8]
0x808792: push    ebx
0x808793: push    edx
0x808794: mov     [esp+0B38h+var_5DC], edi
0x80879B: mov     [esp+0B38h+var_5D8], esi
0x8087A2: mov     [esp+0B38h+var_5D4], offset aSi; "SI"
0x8087AD: mov     [esp+0B38h+var_5D0], esi
0x8087B4: mov     [esp+0B38h+var_5CC], ebx
0x8087BB: call    __memset
0x8087C0: push    2Ch ; ','
0x8087C2: lea     eax, [esp+0B3Ch+var_57C]
0x8087C9: push    ebx
0x8087CA: push    eax
0x8087CB: mov     [esp+0B44h+var_59C], offset aLighting2xPAd_; "lighting\\2x\\p\\AD.p.hlsl"
0x8087D6: mov     [esp+0B44h+var_598], ebp
0x8087DD: mov     [esp+0B44h+var_594], offset a3; "3"
0x8087E8: mov     [esp+0B44h+var_590], edi
0x8087EF: mov     [esp+0B44h+var_58C], esi
0x8087F6: mov     [esp+0B44h+var_588], offset aProj_shadow; "PROJ_SHADOW"
0x808801: mov     [esp+0B44h+var_584], esi
0x808808: mov     [esp+0B44h+var_580], ebx
0x80880F: call    __memset
0x808814: xor     eax, eax
0x808816: push    34h ; '4'
0x808818: lea     ecx, [esp+0B48h+var_4EC]
0x80881F: push    ebx
0x808820: push    ecx
0x808821: mov     [esp+0B50h+var_550], offset aLighting2xPAd_; "lighting\\2x\\p\\AD.p.hlsl"
0x80882C: mov     [esp+0B50h+var_54C], ebp
0x808833: mov     [esp+0B50h+var_548], offset a3; "3"
0x80883E: mov     [esp+0B50h+var_544], edi
0x808845: mov     [esp+0B50h+var_540], esi
0x80884C: mov     [esp+0B50h+var_53C], offset aSi; "SI"
0x808857: mov     [esp+0B50h+var_538], esi
0x80885E: mov     [esp+0B50h+var_534], offset aProj_shadow; "PROJ_SHADOW"
0x808869: mov     [esp+0B50h+var_530], esi
0x808870: mov     [esp+0B50h+var_52C], ebx
0x808877: mov     [esp+0B50h+var_528], eax
0x80887E: mov     [esp+0B50h+var_524], eax
0x808885: mov     [esp+0B50h+var_520], eax
0x80888C: mov     [esp+0B50h+var_51C], eax
0x808893: mov     [esp+0B50h+var_518], eax
0x80889A: mov     [esp+0B50h+var_514], eax
0x8088A1: mov     [esp+0B50h+var_510], eax
0x8088A8: mov     [esp+0B50h+var_50C], eax
0x8088AF: mov     [esp+0B50h+var_508], eax
0x8088B6: mov     [esp+0B50h+var_504], offset aLighting2xPDif; "lighting\\2x\\p\\DiffusePt.p.hlsl"
0x8088C1: mov     [esp+0B50h+var_500], ebp
0x8088C8: mov     [esp+0B50h+var_4FC], offset a2_0; "2"
0x8088D3: mov     [esp+0B50h+var_4F8], edi
0x8088DA: mov     [esp+0B50h+var_4F4], esi
0x8088E1: mov     [esp+0B50h+var_4F0], ebx
0x8088E8: call    __memset
0x8088ED: push    34h ; '4'
0x8088EF: lea     edx, [esp+0B54h+var_4A0]
0x8088F6: push    ebx
0x8088F7: push    edx
0x8088F8: mov     [esp+0B5Ch+var_4B8], offset aLighting2xPDif; "lighting\\2x\\p\\DiffusePt.p.hlsl"
0x808903: mov     [esp+0B5Ch+var_4B4], ebp
0x80890A: mov     [esp+0B5Ch+var_4B0], offset a3; "3"
0x808915: mov     [esp+0B5Ch+var_4AC], edi
0x80891C: mov     [esp+0B5Ch+var_4A8], esi
0x808923: mov     [esp+0B5Ch+var_4A4], ebx
0x80892A: call    __memset
0x80892F: add     esp, 48h
0x808932: push    3Ch ; '<'
0x808934: lea     eax, [esp+0B18h+var_45C]
0x80893B: push    ebx
0x80893C: push    eax
0x80893D: mov     [esp+0B20h+var_46C], offset aLighting2xPTex; "lighting\\2x\\p\\Texture.p.hlsl"
0x808948: mov     [esp+0B20h+var_468], edi
0x80894F: mov     [esp+0B20h+var_464], esi
0x808956: mov     [esp+0B20h+var_460], ebx
0x80895D: call    __memset
0x808962: push    3Ch ; '<'
0x808964: mov     [esp+0B24h+var_420], offset aLighting2xPSpe; "lighting\\2x\\p\\Specular.p.hlsl"
0x80896F: mov     [esp+0B24h+var_41C], edi
0x808976: mov     [esp+0B24h+var_418], esi
0x80897D: mov     [esp+0B24h+var_414], ebx
0x808984: push    ebx
0x808985: lea     ecx, [esp+0B28h+var_410]
0x80898C: push    ecx
0x80898D: call    __memset
0x808992: push    34h ; '4'
0x808994: lea     edx, [esp+0B30h+var_3BC]
0x80899B: push    ebx
0x80899C: push    edx
0x80899D: mov     [esp+0B38h+var_3D4], offset aLighting2xPSpe; "lighting\\2x\\p\\Specular.p.hlsl"
0x8089A8: mov     [esp+0B38h+var_3D0], edi
0x8089AF: mov     [esp+0B38h+var_3CC], esi
0x8089B6: mov     [esp+0B38h+var_3C8], offset aProj_shadow; "PROJ_SHADOW"
0x8089C1: mov     [esp+0B38h+var_3C4], esi
0x8089C8: mov     [esp+0B38h+var_3C0], ebx
0x8089CF: call    __memset
0x8089D4: push    34h ; '4'
0x8089D6: lea     eax, [esp+0B3Ch+var_370]
0x8089DD: push    ebx
0x8089DE: push    eax
0x8089DF: mov     [esp+0B44h+var_388], offset aLighting2xPSpe; "lighting\\2x\\p\\Specular.p.hlsl"
0x8089EA: mov     [esp+0B44h+var_384], offset aPoint; "POINT"
0x8089F5: mov     [esp+0B44h+var_380], esi
0x8089FC: mov     [esp+0B44h+var_37C], edi
0x808A03: mov     [esp+0B44h+var_378], esi
0x808A0A: mov     [esp+0B44h+var_374], ebx
0x808A11: call    __memset
0x808A16: push    2Ch ; ','
0x808A18: lea     ecx, [esp+0B48h+var_31C]
0x808A1F: push    ebx
0x808A20: push    ecx
0x808A21: mov     [esp+0B50h+var_33C], offset aLighting2xPAdt; "lighting\\2x\\p\\ADTS.p.hlsl"
0x808A2C: mov     [esp+0B50h+var_338], offset aSpecular_0; "SPECULAR"
0x808A37: mov     [esp+0B50h+var_334], esi
0x808A3E: mov     [esp+0B50h+var_330], ebp
0x808A45: mov     [esp+0B50h+var_32C], offset a2_0; "2"
0x808A50: mov     [esp+0B50h+var_328], edi
0x808A57: mov     [esp+0B50h+var_324], esi
0x808A5E: mov     [esp+0B50h+var_320], ebx
0x808A65: call    __memset
0x808A6A: add     esp, 3Ch
0x808A6D: xor     eax, eax
0x808A6F: mov     edx, offset aSpecular_0; "SPECULAR"
0x808A74: mov     ecx, offset a2_0; "2"
0x808A79: mov     [esp+0B14h+var_2F0], offset aLighting2xPAdt; "lighting\\2x\\p\\ADTS.p.hlsl"
0x808A84: mov     [esp+0B14h+var_2EC], edx
0x808A8B: mov     [esp+0B14h+var_2E8], esi
0x808A92: mov     [esp+0B14h+var_2E4], ebp
0x808A99: mov     [esp+0B14h+var_2E0], ecx
0x808AA0: mov     [esp+0B14h+var_2DC], edi
0x808AA7: mov     [esp+0B14h+var_2D8], esi
0x808AAE: mov     [esp+0B14h+var_2D4], offset aSi; "SI"
0x808AB9: mov     [esp+0B14h+var_2D0], esi
0x808AC0: mov     [esp+0B14h+var_2CC], ebx
0x808AC7: mov     [esp+0B14h+var_2C8], eax
0x808ACE: mov     [esp+0B14h+var_2C4], eax
0x808AD5: mov     [esp+0B14h+var_2C0], eax
0x808ADC: mov     [esp+0B14h+var_2BC], eax
0x808AE3: mov     [esp+0B14h+var_2B8], eax
0x808AEA: mov     [esp+0B14h+var_2B4], eax
0x808AF1: mov     [esp+0B14h+var_2B0], eax
0x808AF8: mov     [esp+0B14h+var_2AC], eax
0x808AFF: mov     [esp+0B14h+var_2A8], eax
0x808B06: mov     [esp+0B14h+var_2A4], offset aLighting2xPAdt; "lighting\\2x\\p\\ADTS.p.hlsl"
0x808B11: mov     [esp+0B14h+var_2A0], edx
0x808B18: mov     [esp+0B14h+var_29C], esi
0x808B1F: mov     [esp+0B14h+var_298], ebp
0x808B26: mov     [esp+0B14h+var_294], ecx
0x808B2D: mov     [esp+0B14h+var_290], edi
0x808B34: mov     [esp+0B14h+var_28C], esi
0x808B3B: mov     [esp+0B14h+var_288], offset aProj_shadow; "PROJ_SHADOW"
0x808B46: mov     [esp+0B14h+var_284], esi
0x808B4D: mov     [esp+0B14h+var_280], ebx
0x808B54: mov     [esp+0B14h+var_27C], eax
0x808B5B: mov     [esp+0B14h+var_278], eax
0x808B62: mov     [esp+0B14h+var_274], eax
0x808B69: mov     [esp+0B14h+var_270], eax
0x808B70: mov     [esp+0B14h+var_26C], eax
0x808B77: mov     [esp+0B14h+var_268], eax
0x808B7E: mov     [esp+0B14h+var_264], eax
0x808B85: mov     [esp+0B14h+var_260], eax
0x808B8C: mov     [esp+0B14h+var_25C], eax
0x808B93: mov     [esp+0B14h+var_258], offset aLighting2xPAdt; "lighting\\2x\\p\\ADTS.p.hlsl"
0x808B9E: mov     eax, ds:0B42F48h
0x808BA3: cmp     eax, 2
0x808BA6: mov     [esp+0B14h+var_254], edx
0x808BAD: mov     [esp+0B14h+var_250], esi
0x808BB4: mov     [esp+0B14h+var_24C], ebp
0x808BBB: mov     [esp+0B14h+var_248], ecx
0x808BC2: mov     [esp+0B14h+var_244], edi
0x808BC9: mov     [esp+0B14h+var_240], esi
0x808BD0: mov     [esp+0B14h+var_23C], offset aSi; "SI"
0x808BDB: mov     [esp+0B14h+var_238], esi
0x808BE2: mov     [esp+0B14h+var_234], offset aProj_shadow; "PROJ_SHADOW"
0x808BED: mov     [esp+0B14h+var_230], esi
0x808BF4: mov     [esp+0B14h+var_22C], ebx
0x808BFB: mov     [esp+0B14h+var_228], ebx
0x808C02: mov     [esp+0B14h+var_224], ebx
0x808C09: mov     [esp+0B14h+var_220], ebx
0x808C10: mov     [esp+0B14h+var_21C], ebx
0x808C17: mov     [esp+0B14h+var_218], ebx
0x808C1E: mov     [esp+0B14h+var_214], ebx
0x808C25: mov     [esp+0B14h+var_210], ebx
0x808C2C: mov     [esp+0B14h+var_AF8], eax
0x808C30: jl      loc_808DC8
0x808C36: mov     edx, [esp+0B14h+var_AFC]
0x808C3A: add     edx, 12Ch
0x808C40: mov     [esp+0B14h+var_B00], ebx
0x808C44: lea     ebp, [esp+0B14h+var_AF0]
0x808C48: mov     [esp+0B14h+var_B04], edx
0x808C4C: lea     esp, [esp+0]
0x808C50: mov     ecx, [ebp-4]
0x808C53: lea     eax, [esp+0B14h+FileName]
0x808C5A: push    eax; int
0x808C5B: push    ecx; FullPath
0x808C5C: call    sub_801030
0x808C61: mov     edx, [esp+0B1Ch+var_B00]
0x808C65: push    edx
0x808C66: lea     eax, [esp+0B20h+var_108]
0x808C6D: push    offset aPar203i_pso; "PAR2%03i.pso"
0x808C72: push    eax
0x808C73: call    __sprintf
0x808C78: add     esp, 14h
0x808C7B: push    ebx; int
0x808C7C: push    ebx; int
0x808C7D: lea     ecx, [esp+0B1Ch+var_108]
0x808C84: push    ecx; int
0x808C85: mov     ecx, [esp+0B20h+var_AFC]
0x808C89: push    offset aPs_2_0; "ps_2_0"
0x808C8E: push    ebp; int
0x808C8F: lea     edx, [esp+0B28h+FileName]
0x808C96: push    edx; lpFileName
0x808C97: call    CreatePixelShader
0x808C9C: mov     edi, eax
0x808C9E: mov     eax, [esp+0B14h+var_B04]
0x808CA2: mov     esi, [eax]
0x808CA4: cmp     esi, edi
0x808CA6: jz      short loc_808CDC
0x808CA8: cmp     esi, ebx
0x808CAA: jz      short loc_808CC8
0x808CAC: lea     ecx, [esi+4]
0x808CAF: push    ecx; lpAddend
0x808CB0: call    dword ptr ds:0A2807Ch
0x808CB6: test    eax, eax
0x808CB8: jnz     short loc_808CC8
0x808CBA: cmp     esi, ebx
0x808CBC: jz      short loc_808CC8
0x808CBE: mov     edx, [esi]
0x808CC0: mov     eax, [edx]
0x808CC2: push    1
0x808CC4: mov     ecx, esi
0x808CC6: call    eax
0x808CC8: cmp     edi, ebx
0x808CCA: mov     ecx, [esp+0B14h+var_B04]
0x808CCE: mov     [ecx], edi
0x808CD0: jz      short loc_808CDC
0x808CD2: add     edi, 4
0x808CD5: push    edi; lpAddend
0x808CD6: call    dword ptr ds:0A28078h
0x808CDC: mov     eax, [esp+0B14h+var_B00]
0x808CE0: add     [esp+0B14h+var_B04], 4
0x808CE5: add     eax, 1
0x808CE8: add     ebp, 4Ch ; 'L'
0x808CEB: cmp     eax, 1Ah
0x808CEE: mov     [esp+0B14h+var_B00], eax
0x808CF2: jl      loc_808C50
0x808CF8: cmp     [esp+0B14h+var_AF8], 5
0x808CFD: jl      loc_808DC8
0x808D03: mov     edx, [esp+0B14h+var_AFC]
0x808D07: add     edx, 194h
0x808D0D: mov     [esp+0B14h+var_B00], 1Ah
0x808D15: lea     ebp, [esp+0B14h+var_338]
0x808D1C: mov     [esp+0B14h+var_B04], edx
0x808D20: mov     ecx, [ebp-4]
0x808D23: lea     eax, [esp+0B14h+FileName]
0x808D2A: push    eax; int
0x808D2B: push    ecx; FullPath
0x808D2C: call    sub_801030
0x808D31: mov     edx, [esp+0B1Ch+var_B00]
0x808D35: push    edx
0x808D36: lea     eax, [esp+0B20h+var_108]
0x808D3D: push    offset aPar203i_pso; "PAR2%03i.pso"
0x808D42: push    eax
0x808D43: call    __sprintf
0x808D48: add     esp, 14h
0x808D4B: push    ebx; int
0x808D4C: push    ebx; int
0x808D4D: lea     ecx, [esp+0B1Ch+var_108]
0x808D54: push    ecx; int
0x808D55: mov     ecx, [esp+0B20h+var_AFC]
0x808D59: push    offset aPs_2_0; "ps_2_0"
0x808D5E: push    ebp; int
0x808D5F: lea     edx, [esp+0B28h+FileName]
0x808D66: push    edx; lpFileName
0x808D67: call    CreatePixelShader
0x808D6C: mov     edi, eax
0x808D6E: mov     eax, [esp+0B14h+var_B04]
0x808D72: mov     esi, [eax]
0x808D74: cmp     esi, edi
0x808D76: jz      short loc_808DAC
0x808D78: cmp     esi, ebx
0x808D7A: jz      short loc_808D98
0x808D7C: lea     ecx, [esi+4]
0x808D7F: push    ecx; lpAddend
0x808D80: call    dword ptr ds:0A2807Ch
0x808D86: test    eax, eax
0x808D88: jnz     short loc_808D98
0x808D8A: cmp     esi, ebx
0x808D8C: jz      short loc_808D98
0x808D8E: mov     edx, [esi]
0x808D90: mov     eax, [edx]
0x808D92: push    1
0x808D94: mov     ecx, esi
0x808D96: call    eax
0x808D98: cmp     edi, ebx
0x808D9A: mov     ecx, [esp+0B14h+var_B04]
0x808D9E: mov     [ecx], edi
0x808DA0: jz      short loc_808DAC
0x808DA2: add     edi, 4
0x808DA5: push    edi; lpAddend
0x808DA6: call    dword ptr ds:0A28078h
0x808DAC: mov     eax, [esp+0B14h+var_B00]
0x808DB0: add     [esp+0B14h+var_B04], 4
0x808DB5: add     eax, 1
0x808DB8: add     ebp, 4Ch ; 'L'
0x808DBB: cmp     eax, 1Eh
0x808DBE: mov     [esp+0B14h+var_B00], eax
0x808DC2: jl      loc_808D20
0x808DC8: mov     ecx, [esp+0B14h+var_4]
0x808DCF: pop     edi
0x808DD0: pop     esi
0x808DD1: pop     ebp
0x808DD2: pop     ebx
0x808DD3: xor     ecx, esp
0x808DD5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x808DDA: add     esp, 0B04h
0x808DE0: retn
