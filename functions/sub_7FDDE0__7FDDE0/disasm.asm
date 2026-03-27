0x7FDDE0: sub     esp, 0DCCh
0x7FDDE6: mov     eax, ds:0B30AACh
0x7FDDEB: xor     eax, esp
0x7FDDED: mov     [esp+0DCCh+var_4], eax
0x7FDDF4: push    ebx
0x7FDDF5: push    ebp
0x7FDDF6: push    esi
0x7FDDF7: push    edi
0x7FDDF8: xor     ebx, ebx
0x7FDDFA: push    3Ch ; '<'
0x7FDDFC: lea     eax, [esp+0DE0h+var_D90]
0x7FDE00: push    ebx
0x7FDE01: mov     ebp, offset aLighting3xSm_0; "lighting\\3x\\SM3Lighting.p.hlsl"
0x7FDE06: mov     edi, offset aMaxlights; "MAXLIGHTS"
0x7FDE0B: push    eax
0x7FDE0C: mov     [esp+0DE8h+var_DC8], ecx
0x7FDE10: mov     [esp+0DE8h+var_DA0], ebp
0x7FDE14: mov     [esp+0DE8h+var_D9C], edi
0x7FDE18: mov     [esp+0DE8h+var_D98], offset a9; "9"
0x7FDE20: mov     [esp+0DE8h+var_D94], ebx
0x7FDE24: call    __memset
0x7FDE29: push    34h ; '4'
0x7FDE2B: lea     ecx, [esp+0DECh+var_D3C]
0x7FDE32: push    ebx
0x7FDE33: mov     esi, offset a8; "8"
0x7FDE38: push    ecx
0x7FDE39: mov     [esp+0DF4h+var_D54], ebp
0x7FDE40: mov     [esp+0DF4h+var_D50], edi
0x7FDE47: mov     [esp+0DF4h+var_D4C], esi
0x7FDE4E: mov     [esp+0DF4h+var_D48], offset aSpecular_0; "SPECULAR"
0x7FDE59: mov     [esp+0DF4h+var_D44], ebx
0x7FDE60: mov     [esp+0DF4h+var_D40], ebx
0x7FDE67: call    __memset
0x7FDE6C: push    34h ; '4'
0x7FDE6E: lea     edx, [esp+0DF8h+var_CF0]
0x7FDE75: push    ebx
0x7FDE76: push    edx
0x7FDE77: mov     [esp+0E00h+var_D08], ebp
0x7FDE7E: mov     [esp+0E00h+var_D04], edi
0x7FDE85: mov     [esp+0E00h+var_D00], esi
0x7FDE8C: mov     [esp+0E00h+var_CFC], offset aHair_1; "HAIR"
0x7FDE97: mov     [esp+0E00h+var_CF8], offset a1; "1"
0x7FDEA2: mov     [esp+0E00h+var_CF4], ebx
0x7FDEA9: call    __memset
0x7FDEAE: push    2Ch ; ','
0x7FDEB0: lea     eax, [esp+0E04h+var_C9C]
0x7FDEB7: push    ebx
0x7FDEB8: push    eax
0x7FDEB9: mov     [esp+0E0Ch+var_CBC], ebp
0x7FDEC0: mov     [esp+0E0Ch+var_CB8], edi
0x7FDEC7: mov     [esp+0E0Ch+var_CB4], offset a7; "7"
0x7FDED2: mov     [esp+0E0Ch+var_CB0], offset aHair_1; "HAIR"
0x7FDEDD: mov     [esp+0E0Ch+var_CAC], offset a1; "1"
0x7FDEE8: mov     [esp+0E0Ch+var_CA8], offset aSpecular_0; "SPECULAR"
0x7FDEF3: mov     [esp+0E0Ch+var_CA4], ebx
0x7FDEFA: mov     [esp+0E0Ch+var_CA0], ebx
0x7FDF01: call    __memset
0x7FDF06: push    34h ; '4'
0x7FDF08: mov     [esp+0E10h+var_C68], esi
0x7FDF0F: lea     ecx, [esp+0E10h+var_C58]
0x7FDF16: push    ebx
0x7FDF17: mov     esi, offset EmptyString
0x7FDF1C: push    ecx
0x7FDF1D: mov     [esp+0E18h+var_C70], ebp
0x7FDF24: mov     [esp+0E18h+var_C6C], edi
0x7FDF2B: mov     [esp+0E18h+var_C64], offset aParallax; "PARALLAX"
0x7FDF36: mov     [esp+0E18h+var_C60], esi
0x7FDF3D: mov     [esp+0E18h+var_C5C], ebx
0x7FDF44: call    __memset
0x7FDF49: push    2Ch ; ','
0x7FDF4B: lea     edx, [esp+0E1Ch+var_C04]
0x7FDF52: push    ebx
0x7FDF53: push    edx
0x7FDF54: mov     [esp+0E24h+var_C24], ebp
0x7FDF5B: mov     [esp+0E24h+var_C20], edi
0x7FDF62: mov     [esp+0E24h+var_C1C], offset a8; "8"
0x7FDF6D: mov     [esp+0E24h+var_C18], offset aParallax; "PARALLAX"
0x7FDF78: mov     [esp+0E24h+var_C14], esi
0x7FDF7F: mov     [esp+0E24h+var_C10], offset aSpecular_0; "SPECULAR"
0x7FDF8A: mov     [esp+0E24h+var_C0C], ebx
0x7FDF91: mov     [esp+0E24h+var_C08], ebx
0x7FDF98: call    __memset
0x7FDF9D: add     esp, 48h
0x7FDFA0: mov     [esp+0DDCh+var_BD8], ebp
0x7FDFA7: mov     [esp+0DDCh+var_BD4], edi
0x7FDFAE: push    34h ; '4'
0x7FDFB0: lea     eax, [esp+0DE0h+var_BC0]
0x7FDFB7: push    ebx
0x7FDFB8: push    eax
0x7FDFB9: mov     [esp+0DE8h+var_BD0], offset a8; "8"
0x7FDFC4: mov     [esp+0DE8h+var_BCC], offset aFacegenblend; "FACEGENBLEND"
0x7FDFCF: mov     [esp+0DE8h+var_BC8], esi
0x7FDFD6: mov     [esp+0DE8h+var_BC4], ebx
0x7FDFDD: call    __memset
0x7FDFE2: push    2Ch ; ','
0x7FDFE4: lea     ecx, [esp+0DECh+var_B6C]
0x7FDFEB: push    ebx
0x7FDFEC: push    ecx
0x7FDFED: mov     [esp+0DF4h+var_B8C], ebp
0x7FDFF4: mov     [esp+0DF4h+var_B88], edi
0x7FDFFB: mov     [esp+0DF4h+var_B84], offset a8; "8"
0x7FE006: mov     [esp+0DF4h+var_B80], offset aFacegenblend; "FACEGENBLEND"
0x7FE011: mov     [esp+0DF4h+var_B7C], esi
0x7FE018: mov     [esp+0DF4h+var_B78], offset aSpecular_0; "SPECULAR"
0x7FE023: mov     [esp+0DF4h+var_B74], ebx
0x7FE02A: mov     [esp+0DF4h+var_B70], ebx
0x7FE031: call    __memset
0x7FE036: push    34h ; '4'
0x7FE038: lea     edx, [esp+0DF8h+var_B28]
0x7FE03F: push    ebx
0x7FE040: push    edx
0x7FE041: mov     [esp+0E00h+var_B40], ebp
0x7FE048: mov     [esp+0E00h+var_B3C], edi
0x7FE04F: mov     [esp+0E00h+var_B38], offset a8; "8"
0x7FE05A: mov     [esp+0E00h+var_B34], offset aGlow; "GLOW"
0x7FE065: mov     [esp+0E00h+var_B30], esi
0x7FE06C: mov     [esp+0E00h+var_B2C], ebx
0x7FE073: call    __memset
0x7FE078: push    2Ch ; ','
0x7FE07A: lea     eax, [esp+0E04h+var_AD4]
0x7FE081: push    ebx
0x7FE082: push    eax
0x7FE083: mov     [esp+0E0Ch+var_AF4], ebp
0x7FE08A: mov     [esp+0E0Ch+var_AF0], edi
0x7FE091: mov     [esp+0E0Ch+var_AEC], offset a8; "8"
0x7FE09C: mov     [esp+0E0Ch+var_AE8], offset aGlow; "GLOW"
0x7FE0A7: mov     [esp+0E0Ch+var_AE4], esi
0x7FE0AE: mov     [esp+0E0Ch+var_AE0], offset aSpecular_0; "SPECULAR"
0x7FE0B9: mov     [esp+0E0Ch+var_ADC], ebx
0x7FE0C0: mov     [esp+0E0Ch+var_AD8], ebx
0x7FE0C7: call    __memset
0x7FE0CC: push    34h ; '4'
0x7FE0CE: lea     ecx, [esp+0E10h+var_A90]
0x7FE0D5: push    ebx
0x7FE0D6: push    ecx
0x7FE0D7: mov     [esp+0E18h+var_AA8], ebp
0x7FE0DE: mov     [esp+0E18h+var_AA4], edi
0x7FE0E5: mov     [esp+0E18h+var_AA0], offset a8; "8"
0x7FE0F0: mov     [esp+0E18h+var_A9C], offset aProjshadow; "PROJSHADOW"
0x7FE0FB: mov     [esp+0E18h+var_A98], esi
0x7FE102: mov     [esp+0E18h+var_A94], ebx
0x7FE109: call    __memset
0x7FE10E: push    2Ch ; ','
0x7FE110: lea     edx, [esp+0E1Ch+var_A3C]
0x7FE117: push    ebx
0x7FE118: push    edx
0x7FE119: mov     [esp+0E24h+var_A5C], ebp
0x7FE120: mov     [esp+0E24h+var_A58], edi
0x7FE127: mov     [esp+0E24h+var_A54], offset a8; "8"
0x7FE132: mov     [esp+0E24h+var_A50], offset aSpecular_0; "SPECULAR"
0x7FE13D: mov     [esp+0E24h+var_A4C], ebx
0x7FE144: mov     [esp+0E24h+var_A48], offset aProjshadow; "PROJSHADOW"
0x7FE14F: mov     [esp+0E24h+var_A44], esi
0x7FE156: mov     [esp+0E24h+var_A40], ebx
0x7FE15D: call    __memset
0x7FE162: add     esp, 48h
0x7FE165: push    2Ch ; ','
0x7FE167: mov     [esp+0DE0h+var_A10], ebp
0x7FE16E: mov     [esp+0DE0h+var_A0C], edi
0x7FE175: mov     [esp+0DE0h+var_A08], offset a8; "8"
0x7FE180: mov     [esp+0DE0h+var_A04], offset aHair_1; "HAIR"
0x7FE18B: mov     [esp+0DE0h+var_A00], offset a1; "1"
0x7FE196: mov     [esp+0DE0h+var_9FC], offset aProjshadow; "PROJSHADOW"
0x7FE1A1: mov     [esp+0DE0h+var_9F8], esi
0x7FE1A8: mov     [esp+0DE0h+var_9F4], ebx
0x7FE1AF: push    ebx
0x7FE1B0: lea     eax, [esp+0DE4h+var_9F0]
0x7FE1B7: push    eax
0x7FE1B8: call    __memset
0x7FE1BD: xor     eax, eax
0x7FE1BF: mov     ecx, offset aProjshadow; "PROJSHADOW"
0x7FE1C4: push    2Ch ; ','
0x7FE1C6: mov     [esp+0DECh+var_9A8], ecx
0x7FE1CD: mov     [esp+0DECh+var_964], ecx
0x7FE1D4: lea     ecx, [esp+0DECh+var_958]
0x7FE1DB: push    ebx
0x7FE1DC: push    ecx
0x7FE1DD: mov     [esp+0DF4h+var_9C4], ebp
0x7FE1E4: mov     [esp+0DF4h+var_9C0], edi
0x7FE1EB: mov     [esp+0DF4h+var_9BC], offset a7; "7"
0x7FE1F6: mov     [esp+0DF4h+var_9B8], offset aHair_1; "HAIR"
0x7FE201: mov     [esp+0DF4h+var_9B4], offset a1; "1"
0x7FE20C: mov     [esp+0DF4h+var_9B0], offset aSpecular_0; "SPECULAR"
0x7FE217: mov     [esp+0DF4h+var_9AC], ebx
0x7FE21E: mov     [esp+0DF4h+var_9A4], esi
0x7FE225: mov     [esp+0DF4h+var_9A0], ebx
0x7FE22C: mov     [esp+0DF4h+var_99C], eax
0x7FE233: mov     [esp+0DF4h+var_998], eax
0x7FE23A: mov     [esp+0DF4h+var_994], eax
0x7FE241: mov     [esp+0DF4h+var_990], eax
0x7FE248: mov     [esp+0DF4h+var_98C], eax
0x7FE24F: mov     [esp+0DF4h+var_988], eax
0x7FE256: mov     [esp+0DF4h+var_984], eax
0x7FE25D: mov     [esp+0DF4h+var_980], eax
0x7FE264: mov     [esp+0DF4h+var_97C], eax
0x7FE26B: mov     [esp+0DF4h+var_978], ebp
0x7FE272: mov     [esp+0DF4h+var_974], edi
0x7FE279: mov     [esp+0DF4h+var_970], offset a8; "8"
0x7FE284: mov     [esp+0DF4h+var_96C], offset aParallax; "PARALLAX"
0x7FE28F: mov     [esp+0DF4h+var_968], esi
0x7FE296: mov     [esp+0DF4h+var_960], esi
0x7FE29D: mov     [esp+0DF4h+var_95C], ebx
0x7FE2A4: call    __memset
0x7FE2A9: xor     eax, eax
0x7FE2AB: mov     edx, offset a8; "8"
0x7FE2B0: push    2Ch ; ','
0x7FE2B2: mov     [esp+0DF8h+var_924], edx
0x7FE2B9: mov     [esp+0DF8h+var_8D8], edx
0x7FE2C0: mov     ecx, offset aProjshadow; "PROJSHADOW"
0x7FE2C5: lea     edx, [esp+0DF8h+var_8C0]
0x7FE2CC: push    ebx
0x7FE2CD: push    edx
0x7FE2CE: mov     [esp+0E00h+var_92C], ebp
0x7FE2D5: mov     [esp+0E00h+var_928], edi
0x7FE2DC: mov     [esp+0E00h+var_920], offset aParallax; "PARALLAX"
0x7FE2E7: mov     [esp+0E00h+var_91C], esi
0x7FE2EE: mov     [esp+0E00h+var_918], offset aSpecular_0; "SPECULAR"
0x7FE2F9: mov     [esp+0E00h+var_914], ebx
0x7FE300: mov     [esp+0E00h+var_910], ecx
0x7FE307: mov     [esp+0E00h+var_90C], esi
0x7FE30E: mov     [esp+0E00h+var_908], ebx
0x7FE315: mov     [esp+0E00h+var_904], eax
0x7FE31C: mov     [esp+0E00h+var_900], eax
0x7FE323: mov     [esp+0E00h+var_8FC], eax
0x7FE32A: mov     [esp+0E00h+var_8F8], eax
0x7FE331: mov     [esp+0E00h+var_8F4], eax
0x7FE338: mov     [esp+0E00h+var_8F0], eax
0x7FE33F: mov     [esp+0E00h+var_8EC], eax
0x7FE346: mov     [esp+0E00h+var_8E8], eax
0x7FE34D: mov     [esp+0E00h+var_8E4], eax
0x7FE354: mov     [esp+0E00h+var_8E0], ebp
0x7FE35B: mov     [esp+0E00h+var_8DC], edi
0x7FE362: mov     [esp+0E00h+var_8D4], offset aFacegenblend; "FACEGENBLEND"
0x7FE36D: mov     [esp+0E00h+var_8D0], esi
0x7FE374: mov     [esp+0E00h+var_8CC], ecx
0x7FE37B: mov     [esp+0E00h+var_8C8], esi
0x7FE382: mov     [esp+0E00h+var_8C4], ebx
0x7FE389: call    __memset
0x7FE38E: mov     ecx, offset a8; "8"
0x7FE393: mov     [esp+0E00h+var_894], ebp
0x7FE39A: mov     [esp+0E00h+var_890], edi
0x7FE3A1: mov     [esp+0E00h+var_88C], ecx
0x7FE3A8: mov     [esp+0E00h+var_888], offset aFacegenblend; "FACEGENBLEND"
0x7FE3B3: mov     [esp+0E00h+var_884], esi
0x7FE3BA: mov     [esp+0E00h+var_880], offset aSpecular_0; "SPECULAR"
0x7FE3C5: mov     [esp+0E00h+var_87C], ebx
0x7FE3CC: mov     edx, offset aProjshadow; "PROJSHADOW"
0x7FE3D1: xor     eax, eax
0x7FE3D3: push    2Ch ; ','
0x7FE3D5: mov     [esp+0E04h+var_86C], eax
0x7FE3DC: mov     [esp+0E04h+var_868], eax
0x7FE3E3: mov     [esp+0E04h+var_864], eax
0x7FE3EA: mov     [esp+0E04h+var_860], eax
0x7FE3F1: mov     [esp+0E04h+var_85C], eax
0x7FE3F8: mov     [esp+0E04h+var_858], eax
0x7FE3FF: mov     [esp+0E04h+var_854], eax
0x7FE406: mov     [esp+0E04h+var_850], eax
0x7FE40D: mov     [esp+0E04h+var_84C], eax
0x7FE414: lea     eax, [esp+0E04h+var_828]
0x7FE41B: push    ebx
0x7FE41C: push    eax
0x7FE41D: mov     [esp+0E0Ch+var_878], edx
0x7FE424: mov     [esp+0E0Ch+var_874], esi
0x7FE42B: mov     [esp+0E0Ch+var_870], ebx
0x7FE432: mov     [esp+0E0Ch+var_848], ebp
0x7FE439: mov     [esp+0E0Ch+var_844], edi
0x7FE440: mov     [esp+0E0Ch+var_840], ecx
0x7FE447: mov     [esp+0E0Ch+var_83C], offset aGlow; "GLOW"
0x7FE452: mov     [esp+0E0Ch+var_838], esi
0x7FE459: mov     [esp+0E0Ch+var_834], edx
0x7FE460: mov     [esp+0E0Ch+var_830], esi
0x7FE467: mov     [esp+0E0Ch+var_82C], ebx
0x7FE46E: call    __memset
0x7FE473: xor     eax, eax
0x7FE475: push    3Ch ; '<'
0x7FE477: mov     [esp+0E10h+var_7FC], ebp
0x7FE47E: mov     [esp+0E10h+var_7F8], edi
0x7FE485: lea     ecx, [esp+0E10h+var_7A0]
0x7FE48C: push    ebx
0x7FE48D: mov     ebp, offset a8; "8"
0x7FE492: mov     edi, offset aSm3; "SM3"
0x7FE497: push    ecx
0x7FE498: mov     [esp+0E18h+var_7F4], ebp
0x7FE49F: mov     [esp+0E18h+var_7F0], offset aGlow; "GLOW"
0x7FE4AA: mov     [esp+0E18h+var_7EC], esi
0x7FE4B1: mov     [esp+0E18h+var_7E8], offset aSpecular_0; "SPECULAR"
0x7FE4BC: mov     [esp+0E18h+var_7E4], ebx
0x7FE4C3: mov     [esp+0E18h+var_7E0], offset aProjshadow; "PROJSHADOW"
0x7FE4CE: mov     [esp+0E18h+var_7DC], esi
0x7FE4D5: mov     [esp+0E18h+var_7D8], ebx
0x7FE4DC: mov     [esp+0E18h+var_7D4], eax
0x7FE4E3: mov     [esp+0E18h+var_7D0], eax
0x7FE4EA: mov     [esp+0E18h+var_7CC], eax
0x7FE4F1: mov     [esp+0E18h+var_7C8], eax
0x7FE4F8: mov     [esp+0E18h+var_7C4], eax
0x7FE4FF: mov     [esp+0E18h+var_7C0], eax
0x7FE506: mov     [esp+0E18h+var_7BC], eax
0x7FE50D: mov     [esp+0E18h+var_7B8], eax
0x7FE514: mov     [esp+0E18h+var_7B4], eax
0x7FE51B: mov     [esp+0E18h+var_7B0], offset aLighting2xPEnv; "lighting\\2x\\p\\EnvMap.p.hlsl"
0x7FE526: mov     [esp+0E18h+var_7AC], edi
0x7FE52D: mov     [esp+0E18h+var_7A8], esi
0x7FE534: mov     [esp+0E18h+var_7A4], ebx
0x7FE53B: call    __memset
0x7FE540: push    34h ; '4'
0x7FE542: lea     edx, [esp+0E1Ch+var_74C]
0x7FE549: push    ebx
0x7FE54A: push    edx
0x7FE54B: mov     [esp+0E24h+var_764], offset aLighting2xPEnv; "lighting\\2x\\p\\EnvMap.p.hlsl"
0x7FE556: mov     [esp+0E24h+var_760], edi
0x7FE55D: mov     [esp+0E24h+var_75C], esi
0x7FE564: mov     [esp+0E24h+var_758], offset aWindow_0; "WINDOW"
0x7FE56F: mov     [esp+0E24h+var_754], ebx
0x7FE576: mov     [esp+0E24h+var_750], ebx
0x7FE57D: call    __memset
0x7FE582: add     esp, 48h
0x7FE585: push    34h ; '4'
0x7FE587: lea     eax, [esp+0DE0h+var_700]
0x7FE58E: push    ebx
0x7FE58F: push    eax
0x7FE590: mov     [esp+0DE8h+var_718], offset aLighting2xPEnv; "lighting\\2x\\p\\EnvMap.p.hlsl"
0x7FE59B: mov     [esp+0DE8h+var_714], edi
0x7FE5A2: mov     [esp+0DE8h+var_710], esi
0x7FE5A9: mov     [esp+0DE8h+var_70C], offset off_A90BE8
0x7FE5B4: mov     [esp+0DE8h+var_708], ebx
0x7FE5BB: mov     [esp+0DE8h+var_704], ebx
0x7FE5C2: call    __memset
0x7FE5C7: mov     [esp+0DE8h+var_6CC], offset aLighting3xSm_1; "lighting\\3x\\SM3SimpleShadow.p.hlsl"
0x7FE5D2: push    34h ; '4'
0x7FE5D4: lea     ecx, [esp+0DECh+var_6B4]
0x7FE5DB: push    ebx
0x7FE5DC: push    ecx
0x7FE5DD: mov     [esp+0DF4h+var_6C8], offset aSoftshadow; "SOFTSHADOW"
0x7FE5E8: mov     [esp+0DF4h+var_6C4], offset a4; "4"
0x7FE5F3: mov     [esp+0DF4h+var_6C0], offset aDepthbias; "DEPTHBIAS"
0x7FE5FE: mov     [esp+0DF4h+var_6BC], offset a2; "-2"
0x7FE609: mov     [esp+0DF4h+var_6B8], ebx
0x7FE610: call    __memset
0x7FE615: push    34h ; '4'
0x7FE617: lea     edx, [esp+0DF8h+var_668]
0x7FE61E: push    ebx
0x7FE61F: push    edx
0x7FE620: mov     [esp+0E00h+var_680], offset aLighting2xPD_0; "lighting\\2x\\p\\Decal.p.hlsl"
0x7FE62B: mov     [esp+0E00h+var_67C], edi
0x7FE632: mov     [esp+0E00h+var_678], ebx
0x7FE639: mov     [esp+0E00h+var_674], offset aMaxdecals; "MAXDECALS"
0x7FE644: mov     [esp+0E00h+var_670], ebp
0x7FE64B: mov     [esp+0E00h+var_66C], ebx
0x7FE652: call    __memset
0x7FE657: push    2Ch ; ','
0x7FE659: lea     eax, [esp+0E04h+var_614]
0x7FE660: push    ebx
0x7FE661: push    eax
0x7FE662: mov     [esp+0E0Ch+var_634], offset aLighting2xPD_0; "lighting\\2x\\p\\Decal.p.hlsl"
0x7FE66D: mov     [esp+0E0Ch+var_630], edi
0x7FE674: mov     [esp+0E0Ch+var_62C], ebx
0x7FE67B: mov     [esp+0E0Ch+var_628], offset aMaxdecals; "MAXDECALS"
0x7FE686: mov     [esp+0E0Ch+var_624], ebp
0x7FE68D: mov     [esp+0E0Ch+var_620], offset aAlpha_0; "ALPHA"
0x7FE698: mov     [esp+0E0Ch+var_61C], ebx
0x7FE69F: mov     [esp+0E0Ch+var_618], ebx
0x7FE6A6: call    __memset
0x7FE6AB: push    44h ; 'D'
0x7FE6AD: lea     ecx, [esp+0E10h+var_5E0]
0x7FE6B4: push    ebx
0x7FE6B5: mov     ebp, offset aLighting3xSm_2; "lighting\\3x\\SM3DepthMap.p.hlsl"
0x7FE6BA: push    ecx
0x7FE6BB: mov     [esp+0E18h+var_5E8], ebp
0x7FE6C2: mov     [esp+0E18h+var_5E4], ebx
0x7FE6C9: call    __memset
0x7FE6CE: push    44h ; 'D'
0x7FE6D0: lea     edx, [esp+0E1Ch+var_594]
0x7FE6D7: push    ebx
0x7FE6D8: push    edx
0x7FE6D9: mov     [esp+0E24h+var_59C], ebp
0x7FE6E0: mov     [esp+0E24h+var_598], ebx
0x7FE6E7: call    __memset
0x7FE6EC: add     esp, 48h
0x7FE6EF: push    3Ch ; '<'
0x7FE6F1: lea     eax, [esp+0DE0h+var_540]
0x7FE6F8: push    ebx
0x7FE6F9: mov     ebp, offset aLighting2xPRen; "lighting\\2x\\p\\renderNormals.p.hlsl"
0x7FE6FE: push    eax
0x7FE6FF: mov     [esp+0DE8h+var_550], ebp
0x7FE706: mov     [esp+0DE8h+var_54C], edi
0x7FE70D: mov     [esp+0DE8h+var_548], ebx
0x7FE714: mov     [esp+0DE8h+var_544], ebx
0x7FE71B: call    __memset
0x7FE720: push    3Ch ; '<'
0x7FE722: lea     ecx, [esp+0DECh+var_4F4]
0x7FE729: push    ebx
0x7FE72A: push    ecx
0x7FE72B: mov     [esp+0DF4h+var_504], ebp
0x7FE732: mov     [esp+0DF4h+var_500], edi
0x7FE739: mov     [esp+0DF4h+var_4FC], ebx
0x7FE740: mov     [esp+0DF4h+var_4F8], ebx
0x7FE747: call    __memset
0x7FE74C: push    34h ; '4'
0x7FE74E: lea     edx, [esp+0DF8h+var_4A0]
0x7FE755: push    ebx
0x7FE756: push    edx
0x7FE757: mov     [esp+0E00h+var_4B8], ebp
0x7FE75E: mov     [esp+0E00h+var_4B4], edi
0x7FE765: mov     [esp+0E00h+var_4B0], ebx
0x7FE76C: mov     [esp+0E00h+var_4AC], offset aFire; "FIRE"
0x7FE777: mov     [esp+0E00h+var_4A8], esi
0x7FE77E: mov     [esp+0E00h+var_4A4], ebx
0x7FE785: call    __memset
0x7FE78A: mov     [esp+0E00h+var_46C], ebp
0x7FE791: push    34h ; '4'
0x7FE793: lea     eax, [esp+0E04h+var_454]
0x7FE79A: push    ebx
0x7FE79B: push    eax
0x7FE79C: mov     [esp+0E0Ch+var_468], edi
0x7FE7A3: mov     [esp+0E0Ch+var_464], ebx
0x7FE7AA: mov     [esp+0E0Ch+var_460], offset aClear_0; "CLEAR"
0x7FE7B5: mov     [esp+0E0Ch+var_45C], esi
0x7FE7BC: mov     [esp+0E0Ch+var_458], ebx
0x7FE7C3: call    __memset
0x7FE7C8: push    34h ; '4'
0x7FE7CA: mov     [esp+0E10h+var_420], ebp
0x7FE7D1: lea     ecx, [esp+0E10h+var_408]
0x7FE7D8: push    ebx
0x7FE7D9: mov     ebp, offset aClear_0; "CLEAR"
0x7FE7DE: push    ecx
0x7FE7DF: mov     [esp+0E18h+var_41C], edi
0x7FE7E6: mov     [esp+0E18h+var_418], ebx
0x7FE7ED: mov     [esp+0E18h+var_414], ebp
0x7FE7F4: mov     [esp+0E18h+var_410], esi
0x7FE7FB: mov     [esp+0E18h+var_40C], ebx
0x7FE802: call    __memset
0x7FE807: push    3Ch ; '<'
0x7FE809: lea     edx, [esp+0E1Ch+var_3C4]
0x7FE810: push    ebx
0x7FE811: push    edx
0x7FE812: mov     [esp+0E24h+var_3D4], offset aLighting2xPLoc; "lighting\\2x\\p\\localMap.p.hlsl"
0x7FE81D: mov     [esp+0E24h+var_3D0], edi
0x7FE824: mov     [esp+0E24h+var_3CC], ebx
0x7FE82B: mov     [esp+0E24h+var_3C8], ebx
0x7FE832: call    __memset
0x7FE837: add     esp, 48h
0x7FE83A: push    34h ; '4'
0x7FE83C: lea     eax, [esp+0DE0h+var_370]
0x7FE843: push    ebx
0x7FE844: push    eax
0x7FE845: mov     [esp+0DE8h+var_388], offset aLighting2xPLoc; "lighting\\2x\\p\\localMap.p.hlsl"
0x7FE850: mov     [esp+0DE8h+var_384], edi
0x7FE857: mov     [esp+0DE8h+var_380], ebx
0x7FE85E: mov     [esp+0DE8h+var_37C], ebp
0x7FE865: mov     [esp+0DE8h+var_378], ebx
0x7FE86C: mov     [esp+0DE8h+var_374], ebx
0x7FE873: call    __memset
0x7FE878: push    3Ch ; '<'
0x7FE87A: lea     ecx, [esp+0DECh+var_32C]
0x7FE881: push    ebx
0x7FE882: mov     ebp, offset aLighting1xPTex; "lighting\\1x\\p\\texEffect.p.hlsl"
0x7FE887: mov     edi, offset aHq; "HQ"
0x7FE88C: push    ecx
0x7FE88D: mov     [esp+0DF4h+var_33C], ebp
0x7FE894: mov     [esp+0DF4h+var_338], edi
0x7FE89B: mov     [esp+0DF4h+var_334], esi
0x7FE8A2: mov     [esp+0DF4h+var_330], ebx
0x7FE8A9: call    __memset
0x7FE8AE: push    3Ch ; '<'
0x7FE8B0: lea     edx, [esp+0DF8h+var_2E0]
0x7FE8B7: push    ebx
0x7FE8B8: push    edx
0x7FE8B9: mov     [esp+0E00h+var_2F0], ebp
0x7FE8C0: mov     [esp+0E00h+var_2EC], edi
0x7FE8C7: mov     [esp+0E00h+var_2E8], esi
0x7FE8CE: mov     [esp+0E00h+var_2E4], ebx
0x7FE8D5: call    __memset
0x7FE8DA: push    44h ; 'D'
0x7FE8DC: lea     eax, [esp+0E04h+var_29C]
0x7FE8E3: push    ebx
0x7FE8E4: mov     esi, offset aLighting3xSm_3; "lighting\\3x\\SM3ZOnly.p.hlsl"
0x7FE8E9: push    eax
0x7FE8EA: mov     [esp+0E0Ch+var_2A4], esi
0x7FE8F1: mov     [esp+0E0Ch+var_2A0], ebx
0x7FE8F8: call    __memset
0x7FE8FD: push    44h ; 'D'
0x7FE8FF: lea     ecx, [esp+0E10h+var_250]
0x7FE906: push    ebx
0x7FE907: push    ecx
0x7FE908: mov     [esp+0E18h+var_258], esi
0x7FE90F: mov     [esp+0E18h+var_254], ebx
0x7FE916: call    __memset
0x7FE91B: push    ebx
0x7FE91C: call    sub_7B4780
0x7FE921: add     esp, 40h
0x7FE924: mov     dx, ds:0A93280h
0x7FE92B: mov     cx, ds:0A900F0h
0x7FE932: mov     ebp, eax
0x7FE934: mov     al, ds:0A93282h
0x7FE939: mov     word ptr [esp+0DDCh+var_DA8], dx
0x7FE93E: mov     dl, ds:0A900F2h
0x7FE944: mov     byte ptr [esp+0DDCh+var_DA8+2], al
0x7FE948: mov     ax, ds:0A9327Ch
0x7FE94E: mov     [esp+0DDCh+var_DB0], cx
0x7FE953: mov     cl, ds:0A9327Eh
0x7FE959: lea     edi, [esp+0DDCh+var_D98]
0x7FE95D: mov     [esp+0DDCh+Str1], ebp
0x7FE961: mov     [esp+0DDCh+var_DAE], dl
0x7FE965: mov     [esp+0DDCh+var_DB8], ax
0x7FE96A: mov     [esp+0DDCh+var_DB6], cl
0x7FE96E: mov     [esp+0DDCh+var_DBC], 38h ; '8'
0x7FE975: mov     [esp+0DDCh+var_DBA], bl
0x7FE979: mov     [esp+0DDCh+var_DB4], 37h ; '7'
0x7FE980: mov     [esp+0DDCh+var_DB2], bl
0x7FE984: mov     [esp+0DDCh+var_DC0], 34h ; '4'
0x7FE98B: mov     [esp+0DDCh+var_DBE], bl
0x7FE98F: mov     [esp+0DDCh+var_DAC], 32h ; '2'
0x7FE996: mov     [esp+0DDCh+var_DAA], bl
0x7FE99A: xor     esi, esi
0x7FE99C: mov     [esp+0DDCh+var_DC4], edi
0x7FE9A0: jmp     short loc_7FE9AA
0x7FE9A2: mov     ebp, [esp+0DDCh+Str1]
0x7FE9A6: mov     edi, [esp+0DDCh+var_DC4]
0x7FE9AA: mov     eax, [edi-8]
0x7FE9AD: lea     edx, [esp+0DDCh+FileName]
0x7FE9B4: push    edx; int
0x7FE9B5: push    eax; FullPath
0x7FE9B6: call    sub_801030
0x7FE9BB: push    esi
0x7FE9BC: lea     ecx, [esp+0DE8h+var_20C]
0x7FE9C3: push    offset aSm303i_pso; "SM3%03i.pso"
0x7FE9C8: push    ecx
0x7FE9C9: call    __sprintf
0x7FE9CE: push    ebx
0x7FE9CF: call    sub_404F00
0x7FE9D4: add     esp, 18h
0x7FE9D7: cmp     eax, 7
0x7FE9DA: jnz     loc_7FEA7D
0x7FE9E0: cmp     esi, 14h
0x7FE9E3: jge     short loc_7FE9EB
0x7FE9E5: lea     edx, [esp+0DDCh+var_DA8]
0x7FE9E9: mov     [edi], edx
0x7FE9EB: cmp     esi, 2
0x7FE9EE: jz      short loc_7FE9FF
0x7FE9F0: cmp     esi, 3
0x7FE9F3: jz      short loc_7FE9FF
0x7FE9F5: cmp     esi, 0Ch
0x7FE9F8: jz      short loc_7FE9FF
0x7FE9FA: cmp     esi, 0Dh
0x7FE9FD: jnz     short loc_7FEA06
0x7FE9FF: lea     eax, [esp+0DDCh+var_DAC]
0x7FEA03: mov     [edi+8], eax
0x7FEA06: cmp     esi, ebx
0x7FEA08: jz      short loc_7FEA6E
0x7FEA0A: cmp     esi, 2
0x7FEA0D: jz      short loc_7FEA6E
0x7FEA0F: cmp     esi, 4
0x7FEA12: jz      short loc_7FEA6E
0x7FEA14: cmp     esi, 8
0x7FEA17: jz      short loc_7FEA6E
0x7FEA19: cmp     esi, 0Ch
0x7FEA1C: jz      short loc_7FEA6E
0x7FEA1E: cmp     esi, 0Eh
0x7FEA21: jz      short loc_7FEA6E
0x7FEA23: cmp     esi, 12h
0x7FEA26: jz      short loc_7FEA6E
0x7FEA28: cmp     esi, 1
0x7FEA2B: jz      short loc_7FEA5F
0x7FEA2D: cmp     esi, 5
0x7FEA30: jz      short loc_7FEA5F
0x7FEA32: cmp     esi, 6
0x7FEA35: jz      short loc_7FEA5F
0x7FEA37: cmp     esi, 9
0x7FEA3A: jz      short loc_7FEA5F
0x7FEA3C: cmp     esi, 0Bh
0x7FEA3F: jz      short loc_7FEA5F
0x7FEA41: cmp     esi, 0Fh
0x7FEA44: jz      short loc_7FEA5F
0x7FEA46: cmp     esi, 10h
0x7FEA49: jz      short loc_7FEA5F
0x7FEA4B: cmp     esi, 14h
0x7FEA4E: jge     short loc_7FEA74
0x7FEA50: lea     ecx, [esp+0DDCh+var_DBC]
0x7FEA54: push    1
0x7FEA56: mov     [edi], ecx
0x7FEA58: push    2
0x7FEA5A: jmp     loc_7FEB10
0x7FEA5F: lea     edx, [esp+0DDCh+var_DB8]
0x7FEA63: push    1
0x7FEA65: mov     [edi], edx
0x7FEA67: push    2
0x7FEA69: jmp     loc_7FEB10
0x7FEA6E: lea     eax, [esp+0DDCh+var_DB0]
0x7FEA72: mov     [edi], eax
0x7FEA74: push    1
0x7FEA76: push    2
0x7FEA78: jmp     loc_7FEB10
0x7FEA7D: cmp     eax, 5
0x7FEA80: jnz     loc_7FEB0E
0x7FEA86: cmp     esi, ebx
0x7FEA88: jz      short loc_7FEACF
0x7FEA8A: cmp     esi, 4
0x7FEA8D: jz      short loc_7FEACF
0x7FEA8F: cmp     esi, eax
0x7FEA91: jz      short loc_7FEACF
0x7FEA93: cmp     esi, 8
0x7FEA96: jz      short loc_7FEACF
0x7FEA98: cmp     esi, 0Bh
0x7FEA9B: jz      short loc_7FEACF
0x7FEA9D: cmp     esi, 0Eh
0x7FEAA0: jz      short loc_7FEACF
0x7FEAA2: cmp     esi, 0Fh
0x7FEAA5: jz      short loc_7FEACF
0x7FEAA7: cmp     esi, 10h
0x7FEAAA: jz      short loc_7FEACF
0x7FEAAC: cmp     esi, 11h
0x7FEAAF: jz      short loc_7FEACF
0x7FEAB1: cmp     esi, 9
0x7FEAB4: jz      short loc_7FEACF
0x7FEAB6: cmp     esi, 0Ch
0x7FEAB9: jz      short loc_7FEACF
0x7FEABB: cmp     esi, 12h
0x7FEABE: jz      short loc_7FEACF
0x7FEAC0: cmp     esi, 13h
0x7FEAC3: jz      short loc_7FEACF
0x7FEAC5: cmp     esi, 6
0x7FEAC8: jz      short loc_7FEACF
0x7FEACA: cmp     esi, 7
0x7FEACD: jnz     short loc_7FEAD5
0x7FEACF: lea     ecx, [esp+0DDCh+var_DB4]
0x7FEAD3: mov     [edi], ecx
0x7FEAD5: mov     ecx, [esp+0DDCh+var_DC8]
0x7FEAD9: push    ebx; int
0x7FEADA: push    ebx; int
0x7FEADB: lea     edx, [esp+0DE4h+var_20C]
0x7FEAE2: push    edx; int
0x7FEAE3: push    ebp; Str1
0x7FEAE4: add     edi, 0FFFFFFFCh
0x7FEAE7: push    edi; int
0x7FEAE8: lea     eax, [esp+0DF0h+FileName]
0x7FEAEF: push    eax; lpFileName
0x7FEAF0: call    CreatePixelShader
0x7FEAF5: mov     ebp, ds:0B46ED8h[esi*4]
0x7FEAFC: cmp     ebp, eax
0x7FEAFE: mov     [esp+0DDCh+var_DCC], eax
0x7FEB02: jz      short loc_7FEB77
0x7FEB04: cmp     ebp, ebx
0x7FEB06: jz      short loc_7FEB62
0x7FEB08: lea     ecx, [ebp+4]
0x7FEB0B: push    ecx
0x7FEB0C: jmp     short loc_7FEB45
0x7FEB0E: push    ebx; int
0x7FEB0F: push    ebx; int
0x7FEB10: lea     ecx, [esp+0DE4h+var_20C]
0x7FEB17: push    ecx; int
0x7FEB18: mov     ecx, [esp+0DE8h+var_DC8]
0x7FEB1C: push    ebp; Str1
0x7FEB1D: add     edi, 0FFFFFFFCh
0x7FEB20: push    edi; int
0x7FEB21: lea     edx, [esp+0DF0h+FileName]
0x7FEB28: push    edx; lpFileName
0x7FEB29: call    CreatePixelShader
0x7FEB2E: mov     ebp, ds:0B46ED8h[esi*4]
0x7FEB35: cmp     ebp, eax
0x7FEB37: mov     [esp+0DDCh+var_DCC], eax
0x7FEB3B: jz      short loc_7FEB77
0x7FEB3D: cmp     ebp, ebx
0x7FEB3F: jz      short loc_7FEB62
0x7FEB41: lea     eax, [ebp+4]
0x7FEB44: push    eax; lpAddend
0x7FEB45: call    dword ptr ds:0A2807Ch
0x7FEB4B: test    eax, eax
0x7FEB4D: jnz     short loc_7FEB5E
0x7FEB4F: cmp     ebp, ebx
0x7FEB51: jz      short loc_7FEB5E
0x7FEB53: mov     edx, [ebp+0]
0x7FEB56: mov     eax, [edx]
0x7FEB58: push    1
0x7FEB5A: mov     ecx, ebp
0x7FEB5C: call    eax
0x7FEB5E: mov     eax, [esp+0DDCh+var_DCC]
0x7FEB62: cmp     eax, ebx
0x7FEB64: mov     ds:0B46ED8h[esi*4], eax
0x7FEB6B: jz      short loc_7FEB77
0x7FEB6D: add     eax, 4
0x7FEB70: push    eax; lpAddend
0x7FEB71: call    dword ptr ds:0A28078h
0x7FEB77: cmp     esi, 14h
0x7FEB7A: jge     loc_7FEC03
0x7FEB80: push    esi
0x7FEB81: lea     ecx, [esp+0DE0h+var_20C]
0x7FEB88: push    offset aSm3ll03i_pso; "SM3LL%03i.pso"
0x7FEB8D: push    ecx
0x7FEB8E: call    __sprintf
0x7FEB93: mov     eax, [esp+0DE8h+var_DC4]
0x7FEB97: add     esp, 0Ch
0x7FEB9A: push    ebx; int
0x7FEB9B: push    ebx; int
0x7FEB9C: lea     edx, [esp+0DE4h+var_DC0]
0x7FEBA0: mov     [eax], edx
0x7FEBA2: mov     edx, [esp+0DE4h+Str1]
0x7FEBA6: lea     ecx, [esp+0DE4h+var_20C]
0x7FEBAD: push    ecx; int
0x7FEBAE: mov     ecx, [esp+0DE8h+var_DC8]
0x7FEBB2: push    edx; Str1
0x7FEBB3: push    edi; int
0x7FEBB4: lea     eax, [esp+0DF0h+FileName]
0x7FEBBB: push    eax; lpFileName
0x7FEBBC: call    CreatePixelShader
0x7FEBC1: mov     edi, ds:0B46C20h[esi*4]
0x7FEBC8: mov     ebp, eax
0x7FEBCA: cmp     edi, ebp
0x7FEBCC: jz      short loc_7FEC03
0x7FEBCE: cmp     edi, ebx
0x7FEBD0: jz      short loc_7FEBEE
0x7FEBD2: lea     ecx, [edi+4]
0x7FEBD5: push    ecx; lpAddend
0x7FEBD6: call    dword ptr ds:0A2807Ch
0x7FEBDC: test    eax, eax
0x7FEBDE: jnz     short loc_7FEBEE
0x7FEBE0: cmp     edi, ebx
0x7FEBE2: jz      short loc_7FEBEE
0x7FEBE4: mov     edx, [edi]
0x7FEBE6: mov     eax, [edx]
0x7FEBE8: push    1
0x7FEBEA: mov     ecx, edi
0x7FEBEC: call    eax
0x7FEBEE: cmp     ebp, ebx
0x7FEBF0: mov     ds:0B46C20h[esi*4], ebp
0x7FEBF7: jz      short loc_7FEC03
0x7FEBF9: add     ebp, 4
0x7FEBFC: push    ebp; lpAddend
0x7FEBFD: call    dword ptr ds:0A28078h
0x7FEC03: add     [esp+0DDCh+var_DC4], 4Ch ; 'L'
0x7FEC08: add     esi, 1
0x7FEC0B: cmp     esi, 27h ; '''
0x7FEC0E: jl      loc_7FE9A2
0x7FEC14: mov     ecx, [esp+0DDCh+var_4]
0x7FEC1B: pop     edi
0x7FEC1C: pop     esi
0x7FEC1D: pop     ebp
0x7FEC1E: pop     ebx
0x7FEC1F: xor     ecx, esp
0x7FEC21: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7FEC26: add     esp, 0DCCh
0x7FEC2C: retn
