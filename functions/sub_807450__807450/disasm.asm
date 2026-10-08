0x807450: sub     esp, 0CC8h; MoonSugarEffect decode: ParallaxShader vertex-program loader. IDA initially split this at 0x808000; vtable +0xAC points here. Loads 0x24 PAR2*.vso vs_2_0 variants into this+0x9C from lighting\2x\v ADTS/AD/DiffusePt/Texture/Specular HLSL with PARALLAX/SKIN/LIGHTS/PROJ_SHADOW defines.
0x807456: mov     eax, ds:0B30AACh
0x80745B: xor     eax, esp
0x80745D: mov     [esp+0CC8h+var_4], eax
0x807464: push    ebx
0x807465: push    ebp
0x807466: push    esi
0x807467: push    edi
0x807468: xor     ebx, ebx
0x80746A: push    3Ch ; '<'
0x80746C: lea     eax, [esp+0CDCh+var_CAC]
0x807470: push    ebx
0x807471: mov     ebp, offset aLighting2xVAdt; "lighting\\2x\\v\\ADTS.v.hlsl"
0x807476: mov     edi, offset aParallax; "PARALLAX"
0x80747B: mov     esi, offset EmptyString
0x807480: push    eax
0x807481: mov     [esp+0CE4h+var_CC0], ecx
0x807485: mov     [esp+0CE4h+var_CBC], ebp
0x807489: mov     [esp+0CE4h+var_CB8], edi
0x80748D: mov     [esp+0CE4h+var_CB4], esi
0x807491: mov     [esp+0CE4h+var_CB0], ebx
0x807495: call    __memset
0x80749A: push    34h ; '4'
0x80749C: lea     ecx, [esp+0CE8h+var_C58]
0x8074A3: push    ebx
0x8074A4: push    ecx
0x8074A5: mov     [esp+0CF0h+var_C70], ebp
0x8074AC: mov     [esp+0CF0h+var_C6C], offset aSkin_1; "SKIN"
0x8074B7: mov     [esp+0CF0h+var_C68], esi
0x8074BE: mov     [esp+0CF0h+var_C64], edi
0x8074C5: mov     [esp+0CF0h+var_C60], esi
0x8074CC: mov     [esp+0CF0h+var_C5C], ebx
0x8074D3: call    __memset
0x8074D8: push    34h ; '4'
0x8074DA: lea     edx, [esp+0CF4h+var_C0C]
0x8074E1: push    ebx
0x8074E2: push    edx
0x8074E3: mov     [esp+0CFCh+var_C24], ebp
0x8074EA: mov     [esp+0CFCh+var_C20], edi
0x8074F1: mov     [esp+0CFCh+var_C1C], esi
0x8074F8: mov     [esp+0CFCh+var_C18], offset aProj_shadow; "PROJ_SHADOW"
0x807503: mov     [esp+0CFCh+var_C14], esi
0x80750A: mov     [esp+0CFCh+var_C10], ebx
0x807511: call    __memset
0x807516: push    2Ch ; ','
0x807518: lea     eax, [esp+0D00h+var_BB8]
0x80751F: push    ebx
0x807520: push    eax
0x807521: mov     [esp+0D08h+var_BD8], ebp
0x807528: mov     [esp+0D08h+var_BD4], offset aSkin_1; "SKIN"
0x807533: mov     [esp+0D08h+var_BD0], esi
0x80753A: mov     [esp+0D08h+var_BCC], edi
0x807541: mov     [esp+0D08h+var_BC8], esi
0x807548: mov     [esp+0D08h+var_BC4], offset aProj_shadow; "PROJ_SHADOW"
0x807553: mov     [esp+0D08h+var_BC0], esi
0x80755A: mov     [esp+0D08h+var_BBC], ebx
0x807561: call    __memset
0x807566: push    34h ; '4'
0x807568: mov     [esp+0D0Ch+var_B8C], ebp
0x80756F: lea     ecx, [esp+0D0Ch+var_B74]
0x807576: push    ebx
0x807577: mov     ebp, offset aLights; "LIGHTS"
0x80757C: push    ecx
0x80757D: mov     [esp+0D14h+var_B88], ebp
0x807584: mov     [esp+0D14h+var_B84], offset a2_0; "2"
0x80758F: mov     [esp+0D14h+var_B80], edi
0x807596: mov     [esp+0D14h+var_B7C], esi
0x80759D: mov     [esp+0D14h+var_B78], ebx
0x8075A4: call    __memset
0x8075A9: push    2Ch ; ','
0x8075AB: lea     edx, [esp+0D18h+var_B20]
0x8075B2: push    ebx
0x8075B3: push    edx
0x8075B4: mov     [esp+0D20h+var_B40], offset aLighting2xVAdt; "lighting\\2x\\v\\ADTS.v.hlsl"
0x8075BF: mov     [esp+0D20h+var_B3C], offset aSkin_1; "SKIN"
0x8075CA: mov     [esp+0D20h+var_B38], esi
0x8075D1: mov     [esp+0D20h+var_B34], ebp
0x8075D8: mov     [esp+0D20h+var_B30], offset a2_0; "2"
0x8075E3: mov     [esp+0D20h+var_B2C], edi
0x8075EA: mov     [esp+0D20h+var_B28], esi
0x8075F1: mov     [esp+0D20h+var_B24], ebx
0x8075F8: call    __memset
0x8075FD: add     esp, 48h
0x807600: mov     [esp+0CD8h+var_AF4], offset aLighting2xVAdt; "lighting\\2x\\v\\ADTS.v.hlsl"
0x80760B: mov     [esp+0CD8h+var_AF0], ebp
0x807612: push    2Ch ; ','
0x807614: lea     eax, [esp+0CDCh+var_AD4]
0x80761B: push    ebx
0x80761C: push    eax
0x80761D: mov     [esp+0CE4h+var_AEC], offset a2_0; "2"
0x807628: mov     [esp+0CE4h+var_AE8], edi
0x80762F: mov     [esp+0CE4h+var_AE4], esi
0x807636: mov     [esp+0CE4h+var_AE0], offset aProj_shadow; "PROJ_SHADOW"
0x807641: mov     [esp+0CE4h+var_ADC], esi
0x807648: mov     [esp+0CE4h+var_AD8], ebx
0x80764F: call    __memset
0x807654: xor     eax, eax
0x807656: mov     ecx, offset aLighting2xVAdt; "lighting\\2x\\v\\ADTS.v.hlsl"
0x80765B: push    34h ; '4'
0x80765D: mov     [esp+0CE8h+var_AA8], ecx
0x807664: mov     [esp+0CE8h+var_A5C], ecx
0x80766B: lea     ecx, [esp+0CE8h+var_A44]
0x807672: push    ebx
0x807673: push    ecx
0x807674: mov     [esp+0CF0h+var_AA4], offset aSkin_1; "SKIN"
0x80767F: mov     [esp+0CF0h+var_AA0], esi
0x807686: mov     [esp+0CF0h+var_A9C], ebp
0x80768D: mov     [esp+0CF0h+var_A98], offset a2_0; "2"
0x807698: mov     [esp+0CF0h+var_A94], edi
0x80769F: mov     [esp+0CF0h+var_A90], esi
0x8076A6: mov     [esp+0CF0h+var_A8C], offset aProj_shadow; "PROJ_SHADOW"
0x8076B1: mov     [esp+0CF0h+var_A88], esi
0x8076B8: mov     [esp+0CF0h+var_A84], ebx
0x8076BF: mov     [esp+0CF0h+var_A80], eax
0x8076C6: mov     [esp+0CF0h+var_A7C], eax
0x8076CD: mov     [esp+0CF0h+var_A78], eax
0x8076D4: mov     [esp+0CF0h+var_A74], eax
0x8076DB: mov     [esp+0CF0h+var_A70], eax
0x8076E2: mov     [esp+0CF0h+var_A6C], eax
0x8076E9: mov     [esp+0CF0h+var_A68], eax
0x8076F0: mov     [esp+0CF0h+var_A64], eax
0x8076F7: mov     [esp+0CF0h+var_A60], eax
0x8076FE: mov     [esp+0CF0h+var_A58], offset aSpecular_0; "SPECULAR"
0x807709: mov     [esp+0CF0h+var_A54], esi
0x807710: mov     [esp+0CF0h+var_A50], edi
0x807717: mov     [esp+0CF0h+var_A4C], esi
0x80771E: mov     [esp+0CF0h+var_A48], ebx
0x807725: call    __memset
0x80772A: push    2Ch ; ','
0x80772C: lea     edx, [esp+0CF4h+var_9F0]
0x807733: push    ebx
0x807734: push    edx
0x807735: mov     [esp+0CFCh+var_A10], offset aLighting2xVAdt; "lighting\\2x\\v\\ADTS.v.hlsl"
0x807740: mov     [esp+0CFCh+var_A0C], offset aSpecular_0; "SPECULAR"
0x80774B: mov     [esp+0CFCh+var_A08], esi
0x807752: mov     [esp+0CFCh+var_A04], offset aSkin_1; "SKIN"
0x80775D: mov     [esp+0CFCh+var_A00], esi
0x807764: mov     [esp+0CFCh+var_9FC], edi
0x80776B: mov     [esp+0CFCh+var_9F8], esi
0x807772: mov     [esp+0CFCh+var_9F4], ebx
0x807779: call    __memset
0x80777E: push    2Ch ; ','
0x807780: lea     eax, [esp+0D00h+var_9A4]
0x807787: push    ebx
0x807788: push    eax
0x807789: mov     [esp+0D08h+var_9C4], offset aLighting2xVAdt; "lighting\\2x\\v\\ADTS.v.hlsl"
0x807794: mov     [esp+0D08h+var_9C0], offset aSpecular_0; "SPECULAR"
0x80779F: mov     [esp+0D08h+var_9BC], esi
0x8077A6: mov     [esp+0D08h+var_9B8], edi
0x8077AD: mov     [esp+0D08h+var_9B4], esi
0x8077B4: mov     [esp+0D08h+var_9B0], offset aProj_shadow; "PROJ_SHADOW"
0x8077BF: mov     [esp+0D08h+var_9AC], esi
0x8077C6: mov     [esp+0D08h+var_9A8], ebx
0x8077CD: call    __memset
0x8077D2: mov     edx, offset aLighting2xVAdt; "lighting\\2x\\v\\ADTS.v.hlsl"
0x8077D7: mov     ecx, offset aSpecular_0; "SPECULAR"
0x8077DC: mov     [esp+0D08h+var_978], edx
0x8077E3: mov     [esp+0D08h+var_974], ecx
0x8077EA: mov     [esp+0D08h+var_970], esi
0x8077F1: mov     [esp+0D08h+var_96C], offset aSkin_1; "SKIN"
0x8077FC: mov     [esp+0D08h+var_968], esi
0x807803: mov     [esp+0D08h+var_964], edi
0x80780A: mov     [esp+0D08h+var_960], esi
0x807811: mov     [esp+0D08h+var_95C], offset aProj_shadow; "PROJ_SHADOW"
0x80781C: mov     [esp+0D08h+var_958], esi
0x807823: mov     [esp+0D08h+var_954], ebx
0x80782A: xor     eax, eax
0x80782C: push    2Ch ; ','
0x80782E: mov     [esp+0D0Ch+var_928], ecx
0x807835: lea     ecx, [esp+0D0Ch+var_90C]
0x80783C: push    ebx
0x80783D: push    ecx
0x80783E: mov     [esp+0D14h+var_950], eax
0x807845: mov     [esp+0D14h+var_94C], eax
0x80784C: mov     [esp+0D14h+var_948], eax
0x807853: mov     [esp+0D14h+var_944], eax
0x80785A: mov     [esp+0D14h+var_940], eax
0x807861: mov     [esp+0D14h+var_93C], eax
0x807868: mov     [esp+0D14h+var_938], eax
0x80786F: mov     [esp+0D14h+var_934], eax
0x807876: mov     [esp+0D14h+var_930], eax
0x80787D: mov     [esp+0D14h+var_92C], edx
0x807884: mov     [esp+0D14h+var_924], esi
0x80788B: mov     [esp+0D14h+var_920], ebp
0x807892: mov     [esp+0D14h+var_91C], offset a2_0; "2"
0x80789D: mov     [esp+0D14h+var_918], edi
0x8078A4: mov     [esp+0D14h+var_914], esi
0x8078AB: mov     [esp+0D14h+var_910], ebx
0x8078B2: call    __memset
0x8078B7: xor     eax, eax
0x8078B9: mov     edx, offset aSpecular_0; "SPECULAR"
0x8078BE: mov     ecx, offset a2_0; "2"
0x8078C3: mov     [esp+0D14h+var_8E0], offset aLighting2xVAdt; "lighting\\2x\\v\\ADTS.v.hlsl"
0x8078CE: mov     [esp+0D14h+var_8DC], edx
0x8078D5: mov     [esp+0D14h+var_8D8], esi
0x8078DC: mov     [esp+0D14h+var_8D4], offset aSkin_1; "SKIN"
0x8078E7: mov     [esp+0D14h+var_8D0], esi
0x8078EE: mov     [esp+0D14h+var_8CC], ebp
0x8078F5: mov     [esp+0D14h+var_8C8], ecx
0x8078FC: mov     [esp+0D14h+var_8C4], edi
0x807903: mov     [esp+0D14h+var_8C0], esi
0x80790A: mov     [esp+0D14h+var_8BC], ebx
0x807911: mov     [esp+0D14h+var_8B8], eax
0x807918: mov     [esp+0D14h+var_8B4], eax
0x80791F: mov     [esp+0D14h+var_8B0], eax
0x807926: mov     [esp+0D14h+var_8AC], eax
0x80792D: mov     [esp+0D14h+var_8A8], eax
0x807934: mov     [esp+0D14h+var_8A4], eax
0x80793B: mov     [esp+0D14h+var_8A0], eax
0x807942: mov     [esp+0D14h+var_89C], eax
0x807949: mov     [esp+0D14h+var_898], eax
0x807950: mov     [esp+0D14h+var_894], offset aLighting2xVAdt; "lighting\\2x\\v\\ADTS.v.hlsl"
0x80795B: mov     [esp+0D14h+var_890], edx
0x807962: mov     [esp+0D14h+var_88C], esi
0x807969: mov     [esp+0D14h+var_888], ebp
0x807970: mov     [esp+0D14h+var_884], ecx
0x807977: mov     [esp+0D14h+var_880], edi
0x80797E: mov     [esp+0D14h+var_87C], esi
0x807985: mov     [esp+0D14h+var_878], offset aProj_shadow; "PROJ_SHADOW"
0x807990: mov     [esp+0D14h+var_874], esi
0x807997: mov     [esp+0D14h+var_870], ebx
0x80799E: mov     [esp+0D14h+var_86C], eax
0x8079A5: mov     [esp+0D14h+var_868], eax
0x8079AC: mov     [esp+0D14h+var_864], eax
0x8079B3: mov     [esp+0D14h+var_860], eax
0x8079BA: mov     [esp+0D14h+var_85C], eax
0x8079C1: mov     [esp+0D14h+var_858], eax
0x8079C8: mov     [esp+0D14h+var_854], eax
0x8079CF: mov     [esp+0D14h+var_850], eax
0x8079D6: mov     [esp+0D14h+var_84C], eax
0x8079DD: mov     [esp+0D14h+var_848], offset aLighting2xVAdt; "lighting\\2x\\v\\ADTS.v.hlsl"
0x8079E8: mov     [esp+0D14h+var_844], edx
0x8079EF: mov     [esp+0D14h+var_840], esi
0x8079F6: mov     [esp+0D14h+var_83C], offset aSkin_1; "SKIN"
0x807A01: mov     [esp+0D14h+var_838], esi
0x807A08: mov     [esp+0D14h+var_834], ebp
0x807A0F: mov     [esp+0D14h+var_830], ecx
0x807A16: mov     [esp+0D14h+var_82C], edi
0x807A1D: mov     [esp+0D14h+var_828], esi
0x807A24: mov     [esp+0D14h+var_824], offset aProj_shadow; "PROJ_SHADOW"
0x807A2F: mov     [esp+0D14h+var_820], esi
0x807A36: mov     [esp+0D14h+var_81C], ebx
0x807A3D: mov     [esp+0D14h+var_818], ebx
0x807A44: mov     [esp+0D14h+var_814], ebx
0x807A4B: mov     [esp+0D14h+var_810], ebx
0x807A52: mov     [esp+0D14h+var_80C], ebx
0x807A59: mov     [esp+0D14h+var_808], ebx
0x807A60: push    34h ; '4'
0x807A62: lea     edx, [esp+0D18h+var_7E4]
0x807A69: push    ebx
0x807A6A: push    edx
0x807A6B: mov     [esp+0D20h+var_804], ebx
0x807A72: mov     [esp+0D20h+var_800], ebx
0x807A79: mov     [esp+0D20h+var_7FC], offset aLighting2xVAd_; "lighting\\2x\\v\\AD.v.hlsl"
0x807A84: mov     [esp+0D20h+var_7F8], ebp
0x807A8B: mov     [esp+0D20h+var_7F4], ecx
0x807A92: mov     [esp+0D20h+var_7F0], edi
0x807A99: mov     [esp+0D20h+var_7EC], esi
0x807AA0: mov     [esp+0D20h+var_7E8], ebx
0x807AA7: call    __memset
0x807AAC: add     esp, 48h
0x807AAF: push    2Ch ; ','
0x807AB1: lea     eax, [esp+0CDCh+var_790]
0x807AB8: push    ebx
0x807AB9: push    eax
0x807ABA: mov     [esp+0CE4h+var_7B0], offset aLighting2xVAd_; "lighting\\2x\\v\\AD.v.hlsl"
0x807AC5: mov     [esp+0CE4h+var_7AC], offset aSkin_1; "SKIN"
0x807AD0: mov     [esp+0CE4h+var_7A8], esi
0x807AD7: mov     [esp+0CE4h+var_7A4], ebp
0x807ADE: mov     [esp+0CE4h+var_7A0], offset a2_0; "2"
0x807AE9: mov     [esp+0CE4h+var_79C], edi
0x807AF0: mov     [esp+0CE4h+var_798], esi
0x807AF7: mov     [esp+0CE4h+var_794], ebx
0x807AFE: call    __memset
0x807B03: push    2Ch ; ','
0x807B05: lea     ecx, [esp+0CE8h+var_744]
0x807B0C: push    ebx
0x807B0D: push    ecx
0x807B0E: mov     [esp+0CF0h+var_764], offset aLighting2xVAd_; "lighting\\2x\\v\\AD.v.hlsl"
0x807B19: mov     [esp+0CF0h+var_760], ebp
0x807B20: mov     [esp+0CF0h+var_75C], offset a2_0; "2"
0x807B2B: mov     [esp+0CF0h+var_758], edi
0x807B32: mov     [esp+0CF0h+var_754], esi
0x807B39: mov     [esp+0CF0h+var_750], offset aProj_shadow; "PROJ_SHADOW"
0x807B44: mov     [esp+0CF0h+var_74C], esi
0x807B4B: mov     [esp+0CF0h+var_748], ebx
0x807B52: call    __memset
0x807B57: xor     eax, eax
0x807B59: push    34h ; '4'
0x807B5B: mov     ecx, offset aLighting2xVAd_; "lighting\\2x\\v\\AD.v.hlsl"
0x807B60: lea     edx, [esp+0CF4h+var_6B4]
0x807B67: push    ebx
0x807B68: push    edx
0x807B69: mov     [esp+0CFCh+var_718], ecx
0x807B70: mov     [esp+0CFCh+var_714], offset aSkin_1; "SKIN"
0x807B7B: mov     [esp+0CFCh+var_710], esi
0x807B82: mov     [esp+0CFCh+var_70C], ebp
0x807B89: mov     [esp+0CFCh+var_708], offset a2_0; "2"
0x807B94: mov     [esp+0CFCh+var_704], edi
0x807B9B: mov     [esp+0CFCh+var_700], esi
0x807BA2: mov     [esp+0CFCh+var_6FC], offset aProj_shadow; "PROJ_SHADOW"
0x807BAD: mov     [esp+0CFCh+var_6F8], esi
0x807BB4: mov     [esp+0CFCh+var_6F4], ebx
0x807BBB: mov     [esp+0CFCh+var_6F0], eax
0x807BC2: mov     [esp+0CFCh+var_6EC], eax
0x807BC9: mov     [esp+0CFCh+var_6E8], eax
0x807BD0: mov     [esp+0CFCh+var_6E4], eax
0x807BD7: mov     [esp+0CFCh+var_6E0], eax
0x807BDE: mov     [esp+0CFCh+var_6DC], eax
0x807BE5: mov     [esp+0CFCh+var_6D8], eax
0x807BEC: mov     [esp+0CFCh+var_6D4], eax
0x807BF3: mov     [esp+0CFCh+var_6D0], eax
0x807BFA: mov     [esp+0CFCh+var_6CC], ecx
0x807C01: mov     [esp+0CFCh+var_6C8], ebp
0x807C08: mov     [esp+0CFCh+var_6C4], offset a3; "3"
0x807C13: mov     [esp+0CFCh+var_6C0], edi
0x807C1A: mov     [esp+0CFCh+var_6BC], esi
0x807C21: mov     [esp+0CFCh+var_6B8], ebx
0x807C28: call    __memset
0x807C2D: mov     [esp+0CFCh+var_680], offset aLighting2xVAd_; "lighting\\2x\\v\\AD.v.hlsl"
0x807C38: mov     [esp+0CFCh+var_67C], offset aSkin_1; "SKIN"
0x807C43: mov     [esp+0CFCh+var_678], esi
0x807C4A: mov     [esp+0CFCh+var_674], ebp
0x807C51: mov     [esp+0CFCh+var_670], offset a3; "3"
0x807C5C: mov     [esp+0CFCh+var_66C], edi
0x807C63: mov     [esp+0CFCh+var_668], esi
0x807C6A: mov     [esp+0CFCh+var_664], ebx
0x807C71: push    2Ch ; ','
0x807C73: lea     eax, [esp+0D00h+var_660]
0x807C7A: push    ebx
0x807C7B: push    eax
0x807C7C: call    __memset
0x807C81: push    2Ch ; ','
0x807C83: lea     ecx, [esp+0D0Ch+var_614]
0x807C8A: push    ebx
0x807C8B: push    ecx
0x807C8C: mov     [esp+0D14h+var_634], offset aLighting2xVAd_; "lighting\\2x\\v\\AD.v.hlsl"
0x807C97: mov     [esp+0D14h+var_630], ebp
0x807C9E: mov     [esp+0D14h+var_62C], offset a3; "3"
0x807CA9: mov     [esp+0D14h+var_628], edi
0x807CB0: mov     [esp+0D14h+var_624], esi
0x807CB7: mov     [esp+0D14h+var_620], offset aProj_shadow; "PROJ_SHADOW"
0x807CC2: mov     [esp+0D14h+var_61C], esi
0x807CC9: mov     [esp+0D14h+var_618], ebx
0x807CD0: call    __memset
0x807CD5: xor     eax, eax
0x807CD7: push    34h ; '4'
0x807CD9: lea     edx, [esp+0D18h+var_584]
0x807CE0: push    ebx
0x807CE1: push    edx
0x807CE2: mov     [esp+0D20h+var_5E8], offset aLighting2xVAd_; "lighting\\2x\\v\\AD.v.hlsl"
0x807CED: mov     [esp+0D20h+var_5E4], offset aSkin_1; "SKIN"
0x807CF8: mov     [esp+0D20h+var_5E0], esi
0x807CFF: mov     [esp+0D20h+var_5DC], ebp
0x807D06: mov     [esp+0D20h+var_5D8], offset a3; "3"
0x807D11: mov     [esp+0D20h+var_5D4], edi
0x807D18: mov     [esp+0D20h+var_5D0], esi
0x807D1F: mov     [esp+0D20h+var_5CC], offset aProj_shadow; "PROJ_SHADOW"
0x807D2A: mov     [esp+0D20h+var_5C8], esi
0x807D31: mov     [esp+0D20h+var_5C4], ebx
0x807D38: mov     [esp+0D20h+var_5C0], eax
0x807D3F: mov     [esp+0D20h+var_5BC], eax
0x807D46: mov     [esp+0D20h+var_5B8], eax
0x807D4D: mov     [esp+0D20h+var_5B4], eax
0x807D54: mov     [esp+0D20h+var_5B0], eax
0x807D5B: mov     [esp+0D20h+var_5AC], eax
0x807D62: mov     [esp+0D20h+var_5A8], eax
0x807D69: mov     [esp+0D20h+var_5A4], eax
0x807D70: mov     [esp+0D20h+var_5A0], eax
0x807D77: mov     [esp+0D20h+var_59C], offset aLighting2xVDif; "lighting\\2x\\v\\DiffusePt.v.hlsl"
0x807D82: mov     [esp+0D20h+var_598], ebp
0x807D89: mov     [esp+0D20h+var_594], offset a2_0; "2"
0x807D94: mov     [esp+0D20h+var_590], edi
0x807D9B: mov     [esp+0D20h+var_58C], esi
0x807DA2: mov     [esp+0D20h+var_588], ebx
0x807DA9: call    __memset
0x807DAE: add     esp, 48h
0x807DB1: push    2Ch ; ','
0x807DB3: lea     eax, [esp+0CDCh+var_530]
0x807DBA: push    ebx
0x807DBB: push    eax
0x807DBC: mov     [esp+0CE4h+var_550], offset aLighting2xVDif; "lighting\\2x\\v\\DiffusePt.v.hlsl"
0x807DC7: mov     [esp+0CE4h+var_54C], offset aSkin_1; "SKIN"
0x807DD2: mov     [esp+0CE4h+var_548], esi
0x807DD9: mov     [esp+0CE4h+var_544], ebp
0x807DE0: mov     [esp+0CE4h+var_540], offset a2_0; "2"
0x807DEB: mov     [esp+0CE4h+var_53C], edi
0x807DF2: mov     [esp+0CE4h+var_538], esi
0x807DF9: mov     [esp+0CE4h+var_534], ebx
0x807E00: call    __memset
0x807E05: push    34h ; '4'
0x807E07: lea     ecx, [esp+0CE8h+var_4EC]
0x807E0E: push    ebx
0x807E0F: push    ecx
0x807E10: mov     [esp+0CF0h+var_504], offset aLighting2xVDif; "lighting\\2x\\v\\DiffusePt.v.hlsl"
0x807E1B: mov     [esp+0CF0h+var_500], ebp
0x807E22: mov     [esp+0CF0h+var_4FC], offset a3; "3"
0x807E2D: mov     [esp+0CF0h+var_4F8], edi
0x807E34: mov     [esp+0CF0h+var_4F4], esi
0x807E3B: mov     [esp+0CF0h+var_4F0], ebx
0x807E42: call    __memset
0x807E47: mov     [esp+0CF0h+var_4B8], offset aLighting2xVDif; "lighting\\2x\\v\\DiffusePt.v.hlsl"
0x807E52: mov     [esp+0CF0h+var_4B4], offset aSkin_1; "SKIN"
0x807E5D: mov     [esp+0CF0h+var_4B0], esi
0x807E64: mov     [esp+0CF0h+var_4AC], ebp
0x807E6B: mov     [esp+0CF0h+var_4A8], offset a2_0; "2"
0x807E76: mov     [esp+0CF0h+var_4A4], edi
0x807E7D: mov     [esp+0CF0h+var_4A0], esi
0x807E84: mov     [esp+0CF0h+var_49C], ebx
0x807E8B: push    2Ch ; ','
0x807E8D: lea     edx, [esp+0CF4h+var_498]
0x807E94: push    ebx
0x807E95: push    edx
0x807E96: call    __memset
0x807E9B: push    3Ch ; '<'
0x807E9D: lea     eax, [esp+0D00h+var_45C]
0x807EA4: push    ebx
0x807EA5: mov     ebp, offset aLighting2xVTex; "lighting\\2x\\v\\Texture.v.hlsl"
0x807EAA: push    eax
0x807EAB: mov     [esp+0D08h+var_46C], ebp
0x807EB2: mov     [esp+0D08h+var_468], edi
0x807EB9: mov     [esp+0D08h+var_464], esi
0x807EC0: mov     [esp+0D08h+var_460], ebx
0x807EC7: call    __memset
0x807ECC: push    34h ; '4'
0x807ECE: lea     ecx, [esp+0D0Ch+var_408]
0x807ED5: push    ebx
0x807ED6: push    ecx
0x807ED7: mov     [esp+0D14h+var_420], ebp
0x807EDE: mov     [esp+0D14h+var_41C], offset aSkin_1; "SKIN"
0x807EE9: mov     [esp+0D14h+var_418], esi
0x807EF0: mov     [esp+0D14h+var_414], edi
0x807EF7: mov     [esp+0D14h+var_410], esi
0x807EFE: mov     [esp+0D14h+var_40C], ebx
0x807F05: call    __memset
0x807F0A: push    3Ch ; '<'
0x807F0C: lea     edx, [esp+0D18h+var_3C4]
0x807F13: push    ebx
0x807F14: mov     ebp, offset aLighting2xVSpe; "lighting\\2x\\v\\Specular.v.hlsl"
0x807F19: push    edx
0x807F1A: mov     [esp+0D20h+var_3D4], ebp
0x807F21: mov     [esp+0D20h+var_3D0], edi
0x807F28: mov     [esp+0D20h+var_3CC], esi
0x807F2F: mov     [esp+0D20h+var_3C8], ebx
0x807F36: call    __memset
0x807F3B: add     esp, 48h
0x807F3E: push    34h ; '4'
0x807F40: lea     eax, [esp+0CDCh+var_370]
0x807F47: push    ebx
0x807F48: push    eax
0x807F49: mov     [esp+0CE4h+var_388], ebp
0x807F50: mov     [esp+0CE4h+var_384], offset aSkin_1; "SKIN"
0x807F5B: mov     [esp+0CE4h+var_380], esi
0x807F62: mov     [esp+0CE4h+var_37C], edi
0x807F69: mov     [esp+0CE4h+var_378], esi
0x807F70: mov     [esp+0CE4h+var_374], ebx
0x807F77: call    __memset
0x807F7C: push    34h ; '4'
0x807F7E: lea     ecx, [esp+0CE8h+var_324]
0x807F85: push    ebx
0x807F86: push    ecx
0x807F87: mov     [esp+0CF0h+var_33C], ebp
0x807F8E: mov     [esp+0CF0h+var_338], edi
0x807F95: mov     [esp+0CF0h+var_334], esi
0x807F9C: mov     [esp+0CF0h+var_330], offset aProj_shadow; "PROJ_SHADOW"
0x807FA7: mov     [esp+0CF0h+var_32C], esi
0x807FAE: mov     [esp+0CF0h+var_328], ebx
0x807FB5: call    __memset
0x807FBA: push    2Ch ; ','
0x807FBC: lea     edx, [esp+0CF4h+var_2D0]
0x807FC3: push    ebx
0x807FC4: push    edx
0x807FC5: mov     [esp+0CFCh+var_2F0], ebp
0x807FCC: mov     [esp+0CFCh+var_2EC], offset aSkin_1; "SKIN"
0x807FD7: mov     [esp+0CFCh+var_2E8], esi
0x807FDE: mov     [esp+0CFCh+var_2E4], edi
0x807FE5: mov     [esp+0CFCh+var_2E0], esi
0x807FEC: mov     [esp+0CFCh+var_2DC], offset aProj_shadow; "PROJ_SHADOW"
0x807FF7: mov     [esp+0CFCh+var_2D8], esi
0x807FFE: mov     [esp+0CFCh+var_2D4], ebx
0x808005: call    __memset
0x80800A: push    34h ; '4'
0x80800C: mov     [esp+0D00h+var_2A4], ebp
0x808013: mov     [esp+0D00h+var_2A0], offset aPoint; "POINT"
0x80801E: mov     [esp+0D00h+var_29C], esi
0x808025: mov     [esp+0D00h+var_298], edi
0x80802C: mov     [esp+0D00h+var_294], esi
0x808033: mov     [esp+0D00h+var_290], ebx
0x80803A: push    ebx
0x80803B: lea     eax, [esp+0D04h+var_28C]
0x808042: push    eax
0x808043: call    __memset
0x808048: push    2Ch ; ','
0x80804A: lea     ecx, [esp+0D0Ch+var_238]
0x808051: push    ebx
0x808052: push    ecx
0x808053: mov     [esp+0D14h+var_258], ebp
0x80805A: mov     [esp+0D14h+var_254], offset aPoint; "POINT"
0x808065: mov     [esp+0D14h+var_250], esi
0x80806C: mov     [esp+0D14h+var_24C], offset aSkin_1; "SKIN"
0x808077: mov     [esp+0D14h+var_248], esi
0x80807E: mov     [esp+0D14h+var_244], edi
0x808085: mov     [esp+0D14h+var_240], esi
0x80808C: mov     [esp+0D14h+var_23C], ebx
0x808093: call    __memset
0x808098: add     esp, 3Ch
0x80809B: cmp     dword ptr ds:0B42F48h, 2
0x8080A2: jl      loc_808168
0x8080A8: mov     edx, [esp+0CD8h+var_CC0]
0x8080AC: add     edx, 9Ch ; 'œ'
0x8080B2: mov     [esp+0CD8h+var_CC4], ebx
0x8080B6: lea     ebp, [esp+0CD8h+var_CB8]
0x8080BA: mov     [esp+0CD8h+var_CC8], edx; MoonSugarEffect decode: Parallax vertex loader writes retained wrappers starting at object+0x9C; slot index 0x10 becomes object+0xDC / this[0x37] and loads PAR2016.vso.
0x8080BE: mov     edi, edi
0x8080C0: mov     ecx, [ebp-4]
0x8080C3: lea     eax, [esp+0CD8h+var_20C]
0x8080CA: push    eax
0x8080CB: push    ecx
0x8080CC: call    sub_801030
0x8080D1: mov     edx, [esp+0CE0h+var_CC4]
0x8080D5: push    edx
0x8080D6: lea     eax, [esp+0CE4h+var_108]
0x8080DD: push    offset aPar203i_vso; "PAR2%03i.vso"
0x8080E2: push    eax
0x8080E3: call    __sprintf
0x8080E8: add     esp, 14h
0x8080EB: push    ebx
0x8080EC: push    ebx
0x8080ED: lea     ecx, [esp+0CE0h+var_108]
0x8080F4: push    ecx
0x8080F5: mov     ecx, [esp+0CE4h+var_CC0]
0x8080F9: push    offset aVs_2_0; "vs_2_0"
0x8080FE: push    ebp
0x8080FF: lea     edx, [esp+0CECh+var_20C]
0x808106: push    edx
0x808107: call    CreateVertexShader; Oblivion authoritative VS loader: reads native D3D9 shader package/cache bytecode before IDirect3DDevice9::CreateVertexShader. DirectX10OBSE hashes/dumps/disassembles this bytecode and can generate fail-closed SM4 companions, including SM3 modifier normalization and cN[a0.*] relative constant indexing for skinned shaders.
0x80810C: mov     edi, eax
0x80810E: mov     eax, [esp+0CD8h+var_CC8]
0x808112: mov     esi, [eax]
0x808114: cmp     esi, edi
0x808116: jz      short loc_80814C
0x808118: cmp     esi, ebx
0x80811A: jz      short loc_808138
0x80811C: lea     ecx, [esi+4]
0x80811F: push    ecx
0x808120: call    dword ptr ds:0A2807Ch
0x808126: test    eax, eax
0x808128: jnz     short loc_808138
0x80812A: cmp     esi, ebx
0x80812C: jz      short loc_808138
0x80812E: mov     edx, [esi]
0x808130: mov     eax, [edx]
0x808132: push    1
0x808134: mov     ecx, esi
0x808136: call    eax
0x808138: cmp     edi, ebx
0x80813A: mov     ecx, [esp+0CD8h+var_CC8]
0x80813E: mov     [ecx], edi
0x808140: jz      short loc_80814C
0x808142: add     edi, 4
0x808145: push    edi
0x808146: call    dword ptr ds:0A28078h
0x80814C: mov     eax, [esp+0CD8h+var_CC4]
0x808150: add     [esp+0CD8h+var_CC8], 4
0x808155: add     eax, 1
0x808158: add     ebp, 4Ch ; 'L'
0x80815B: cmp     eax, 24h ; '$'
0x80815E: mov     [esp+0CD8h+var_CC4], eax
0x808162: jl      loc_8080C0
0x808168: mov     ecx, [esp+0CD8h+var_4]
0x80816F: pop     edi
0x808170: pop     esi
0x808171: pop     ebp
0x808172: pop     ebx
0x808173: xor     ecx, esp
0x808175: call    @__security_check_cookie@4; __security_check_cookie(x)
0x80817A: add     esp, 0CC8h
0x808180: retn
