0x7CEFD0: mov     eax, 2B2Ch
0x7CEFD5: call    __alloca_probe
0x7CEFDA: mov     eax, ds:0B30AACh
0x7CEFDF: xor     eax, esp
0x7CEFE1: mov     [esp+2B2Ch+var_4], eax
0x7CEFE8: fld     dword ptr ds:0B2C2BCh
0x7CEFEE: push    ebx
0x7CEFEF: push    ebp
0x7CEFF0: push    esi
0x7CEFF1: push    edi
0x7CEFF2: lea     eax, [esp+2B3Ch+DstBuf]
0x7CEFF9: push    eax; DstBuf
0x7CEFFA: push    0Ch; NumOfDigits
0x7CEFFC: sub     esp, 8
0x7CEFFF: fstp    [esp+2B4Ch+Val]; Val
0x7CF002: mov     [esp+2B4Ch+var_2B28], ecx
0x7CF006: call    __gcvt
0x7CF00B: fld     dword ptr ds:0B2C2C0h
0x7CF011: add     esp, 10h
0x7CF014: lea     ecx, [esp+2B3Ch+var_2C4]
0x7CF01B: push    ecx; DstBuf
0x7CF01C: push    0Ch; NumOfDigits
0x7CF01E: sub     esp, 8
0x7CF021: fstp    [esp+2B4Ch+Val]; Val
0x7CF024: call    __gcvt
0x7CF029: mov     eax, ds:0B42E88h
0x7CF02E: push    0Ah; Radix
0x7CF030: lea     edx, [esp+2B50h+Dest]
0x7CF037: push    edx; Dest
0x7CF038: push    eax; Value
0x7CF039: call    __itoa
0x7CF03E: xor     edi, edi
0x7CF040: push    44h ; 'D'
0x7CF042: lea     ecx, [esp+2B5Ch+var_12C0]
0x7CF049: push    edi
0x7CF04A: mov     ebx, offset aLighting1xPBas; "lighting\\1x\\p\\base.p.hlsl"
0x7CF04F: push    ecx
0x7CF050: mov     [esp+2B64h+var_12C8], ebx
0x7CF057: mov     [esp+2B64h+var_12C4], edi
0x7CF05E: call    __memset
0x7CF063: push    44h ; 'D'
0x7CF065: lea     edx, [esp+2B68h+var_1274]
0x7CF06C: push    edi
0x7CF06D: push    edx
0x7CF06E: mov     [esp+2B70h+var_127C], offset aLighting1xPDif; "lighting\\1x\\p\\diffusePt.p.hlsl"
0x7CF079: mov     [esp+2B70h+var_1278], edi
0x7CF080: call    __memset
0x7CF085: push    44h ; 'D'
0x7CF087: lea     eax, [esp+2B74h+var_1228]
0x7CF08E: push    edi
0x7CF08F: push    eax
0x7CF090: mov     [esp+2B7Ch+var_1230], offset aLighting1xPD_0; "lighting\\1x\\p\\diffuseDir.p.hlsl"
0x7CF09B: mov     [esp+2B7Ch+var_122C], edi
0x7CF0A2: call    __memset
0x7CF0A7: add     esp, 40h
0x7CF0AA: push    3Ch ; '<'
0x7CF0AC: lea     ecx, [esp+2B40h+var_11D4]
0x7CF0B3: push    edi
0x7CF0B4: mov     ebp, offset off_A8F8C4
0x7CF0B9: mov     esi, offset EmptyString
0x7CF0BE: push    ecx
0x7CF0BF: mov     [esp+2B48h+var_11E4], ebx
0x7CF0C6: mov     [esp+2B48h+var_11E0], ebp
0x7CF0CD: mov     [esp+2B48h+var_11DC], esi
0x7CF0D4: mov     [esp+2B48h+var_11D8], edi
0x7CF0DB: call    __memset
0x7CF0E0: push    34h ; '4'
0x7CF0E2: lea     edx, [esp+2B4Ch+var_1180]
0x7CF0E9: push    edi
0x7CF0EA: push    edx
0x7CF0EB: mov     [esp+2B54h+var_1198], ebx
0x7CF0F2: mov     [esp+2B54h+var_1194], ebp
0x7CF0F9: mov     [esp+2B54h+var_1190], esi
0x7CF100: mov     [esp+2B54h+var_118C], offset aVc; "VC"
0x7CF10B: mov     [esp+2B54h+var_1188], esi
0x7CF112: mov     [esp+2B54h+var_1184], edi
0x7CF119: call    __memset
0x7CF11E: push    34h ; '4'
0x7CF120: mov     [esp+2B58h+var_114C], ebx
0x7CF127: mov     [esp+2B58h+var_1148], ebp
0x7CF12E: mov     [esp+2B58h+var_1144], esi
0x7CF135: mov     [esp+2B58h+var_1140], offset aFacegenblend; "FACEGENBLEND"
0x7CF140: mov     [esp+2B58h+var_113C], esi
0x7CF147: mov     [esp+2B58h+var_1138], edi
0x7CF14E: push    edi
0x7CF14F: lea     eax, [esp+2B5Ch+var_1134]
0x7CF156: push    eax
0x7CF157: call    __memset
0x7CF15C: push    34h ; '4'
0x7CF15E: lea     ecx, [esp+2B64h+var_10E8]
0x7CF165: push    edi
0x7CF166: push    ecx
0x7CF167: mov     [esp+2B6Ch+var_1100], ebx
0x7CF16E: mov     [esp+2B6Ch+var_10FC], ebp
0x7CF175: mov     [esp+2B6Ch+var_10F8], esi
0x7CF17C: mov     [esp+2B6Ch+var_10F4], offset aHair_1; "HAIR"
0x7CF187: mov     [esp+2B6Ch+var_10F0], esi
0x7CF18E: mov     [esp+2B6Ch+var_10EC], edi
0x7CF195: call    __memset
0x7CF19A: push    3Ch ; '<'
0x7CF19C: lea     eax, [esp+2B70h+var_10A4]
0x7CF1A3: lea     edx, [esp+2B70h+DstBuf]
0x7CF1AA: push    edi
0x7CF1AB: mov     ebx, offset aSpecmult; "SPECMULT"
0x7CF1B0: push    eax
0x7CF1B1: mov     [esp+2B78h+var_10B4], offset aLighting1xPSpe; "lighting\\1x\\p\\specularPt.p.hlsl"
0x7CF1BC: mov     [esp+2B78h+var_10B0], ebx
0x7CF1C3: mov     [esp+2B78h+var_10AC], edx
0x7CF1CA: mov     [esp+2B78h+var_10A8], edi
0x7CF1D1: call    __memset
0x7CF1D6: push    3Ch ; '<'
0x7CF1D8: lea     edx, [esp+2B7Ch+var_1058]
0x7CF1DF: lea     ecx, [esp+2B7Ch+DstBuf]
0x7CF1E6: push    edi
0x7CF1E7: push    edx
0x7CF1E8: mov     [esp+2B84h+var_1068], offset aLighting1xPS_0; "lighting\\1x\\p\\specularDir.p.hlsl"
0x7CF1F3: mov     [esp+2B84h+var_1064], ebx
0x7CF1FA: mov     [esp+2B84h+var_1060], ecx
0x7CF201: mov     [esp+2B84h+var_105C], edi
0x7CF208: call    __memset
0x7CF20D: add     esp, 48h
0x7CF210: push    44h ; 'D'
0x7CF212: lea     eax, [esp+2B40h+var_1014]
0x7CF219: push    edi
0x7CF21A: mov     ebx, offset aLighting1xPAmb; "lighting\\1x\\p\\ambDiffDirTexture.p.hl"...
0x7CF21F: push    eax
0x7CF220: mov     [esp+2B48h+var_101C], ebx
0x7CF227: mov     [esp+2B48h+var_1018], edi
0x7CF22E: call    __memset
0x7CF233: push    3Ch ; '<'
0x7CF235: lea     ecx, [esp+2B4Ch+var_FC0]
0x7CF23C: push    edi
0x7CF23D: mov     ebp, offset off_A90D88
0x7CF242: push    ecx
0x7CF243: mov     [esp+2B54h+var_FD0], ebx
0x7CF24A: mov     [esp+2B54h+var_FCC], ebp
0x7CF251: mov     [esp+2B54h+var_FC8], esi
0x7CF258: mov     [esp+2B54h+var_FC4], edi
0x7CF25F: call    __memset
0x7CF264: push    3Ch ; '<'
0x7CF266: lea     edx, [esp+2B58h+var_F74]
0x7CF26D: push    edi
0x7CF26E: push    edx
0x7CF26F: mov     [esp+2B60h+var_F84], ebx
0x7CF276: mov     [esp+2B60h+var_F80], offset aAlpha_0; "ALPHA"
0x7CF281: mov     [esp+2B60h+var_F7C], esi
0x7CF288: mov     [esp+2B60h+var_F78], edi
0x7CF28F: call    __memset
0x7CF294: push    34h ; '4'
0x7CF296: lea     eax, [esp+2B64h+var_F20]
0x7CF29D: push    edi
0x7CF29E: push    eax
0x7CF29F: mov     [esp+2B6Ch+var_F38], ebx
0x7CF2A6: mov     [esp+2B6Ch+var_F34], offset aAlpha_0; "ALPHA"
0x7CF2B1: mov     [esp+2B6Ch+var_F30], esi
0x7CF2B8: mov     [esp+2B6Ch+var_F2C], ebp
0x7CF2BF: mov     [esp+2B6Ch+var_F28], esi
0x7CF2C6: mov     [esp+2B6Ch+var_F24], edi
0x7CF2CD: call    __memset
0x7CF2D2: push    3Ch ; '<'
0x7CF2D4: push    edi
0x7CF2D5: lea     ecx, [esp+2B74h+var_EDC]
0x7CF2DC: mov     [esp+2B74h+var_EEC], ebx
0x7CF2E3: mov     [esp+2B74h+var_EE8], offset aVc; "VC"
0x7CF2EE: mov     [esp+2B74h+var_EE4], esi
0x7CF2F5: mov     [esp+2B74h+var_EE0], edi
0x7CF2FC: push    ecx
0x7CF2FD: call    __memset
0x7CF302: push    34h ; '4'
0x7CF304: lea     edx, [esp+2B7Ch+var_E88]
0x7CF30B: push    edi
0x7CF30C: push    edx
0x7CF30D: mov     [esp+2B84h+var_EA0], ebx
0x7CF314: mov     [esp+2B84h+var_E9C], offset aVc; "VC"
0x7CF31F: mov     [esp+2B84h+var_E98], esi
0x7CF326: mov     [esp+2B84h+var_E94], ebp
0x7CF32D: mov     [esp+2B84h+var_E90], esi
0x7CF334: mov     [esp+2B84h+var_E8C], edi
0x7CF33B: call    __memset
0x7CF340: add     esp, 48h
0x7CF343: push    34h ; '4'
0x7CF345: lea     eax, [esp+2B40h+var_E3C]
0x7CF34C: push    edi
0x7CF34D: push    eax
0x7CF34E: mov     [esp+2B48h+var_E54], ebx
0x7CF355: mov     [esp+2B48h+var_E50], offset aVc; "VC"
0x7CF360: mov     [esp+2B48h+var_E4C], esi
0x7CF367: mov     [esp+2B48h+var_E48], offset aAlpha_0; "ALPHA"
0x7CF372: mov     [esp+2B48h+var_E44], esi
0x7CF379: mov     [esp+2B48h+var_E40], edi
0x7CF380: call    __memset
0x7CF385: push    2Ch ; ','
0x7CF387: lea     ecx, [esp+2B4Ch+var_DE8]
0x7CF38E: push    edi
0x7CF38F: push    ecx
0x7CF390: mov     [esp+2B54h+var_E08], ebx
0x7CF397: mov     [esp+2B54h+var_E04], offset aVc; "VC"
0x7CF3A2: mov     [esp+2B54h+var_E00], esi
0x7CF3A9: mov     [esp+2B54h+var_DFC], offset aAlpha_0; "ALPHA"
0x7CF3B4: mov     [esp+2B54h+var_DF8], esi
0x7CF3BB: mov     [esp+2B54h+var_DF4], ebp
0x7CF3C2: mov     [esp+2B54h+var_DF0], esi
0x7CF3C9: mov     [esp+2B54h+var_DEC], edi
0x7CF3D0: call    __memset
0x7CF3D5: push    3Ch ; '<'
0x7CF3D7: lea     edx, [esp+2B58h+var_DAC]
0x7CF3DE: push    edi
0x7CF3DF: push    edx
0x7CF3E0: mov     [esp+2B60h+var_DBC], ebx
0x7CF3E7: mov     [esp+2B60h+var_DB8], offset aFacegenblend; "FACEGENBLEND"
0x7CF3F2: mov     [esp+2B60h+var_DB4], esi
0x7CF3F9: mov     [esp+2B60h+var_DB0], edi
0x7CF400: call    __memset
0x7CF405: push    34h ; '4'
0x7CF407: lea     eax, [esp+2B64h+var_D58]
0x7CF40E: push    edi
0x7CF40F: push    eax
0x7CF410: mov     [esp+2B6Ch+var_D70], ebx
0x7CF417: mov     [esp+2B6Ch+var_D6C], offset aFacegenblend; "FACEGENBLEND"
0x7CF422: mov     [esp+2B6Ch+var_D68], esi
0x7CF429: mov     [esp+2B6Ch+var_D64], ebp
0x7CF430: mov     [esp+2B6Ch+var_D60], esi
0x7CF437: mov     [esp+2B6Ch+var_D5C], edi
0x7CF43E: call    __memset
0x7CF443: push    34h ; '4'
0x7CF445: lea     ecx, [esp+2B70h+var_D0C]
0x7CF44C: push    edi
0x7CF44D: push    ecx
0x7CF44E: mov     [esp+2B78h+var_D24], ebx
0x7CF455: mov     [esp+2B78h+var_D20], offset aFacegenblend; "FACEGENBLEND"
0x7CF460: mov     [esp+2B78h+var_D1C], esi
0x7CF467: mov     [esp+2B78h+var_D18], offset aAlpha_0; "ALPHA"
0x7CF472: mov     [esp+2B78h+var_D14], esi
0x7CF479: mov     [esp+2B78h+var_D10], edi
0x7CF480: call    __memset
0x7CF485: push    2Ch ; ','
0x7CF487: lea     edx, [esp+2B7Ch+var_CB8]
0x7CF48E: push    edi
0x7CF48F: push    edx
0x7CF490: mov     [esp+2B84h+var_CD8], ebx
0x7CF497: mov     [esp+2B84h+var_CD4], offset aFacegenblend; "FACEGENBLEND"
0x7CF4A2: mov     [esp+2B84h+var_CD0], esi
0x7CF4A9: mov     [esp+2B84h+var_CCC], ebp
0x7CF4B0: mov     [esp+2B84h+var_CC8], esi
0x7CF4B7: mov     [esp+2B84h+var_CC4], offset aAlpha_0; "ALPHA"
0x7CF4C2: mov     [esp+2B84h+var_CC0], esi
0x7CF4C9: mov     [esp+2B84h+var_CBC], edi
0x7CF4D0: call    __memset
0x7CF4D5: add     esp, 48h
0x7CF4D8: push    3Ch ; '<'
0x7CF4DA: lea     eax, [esp+2B40h+var_C7C]
0x7CF4E1: push    edi
0x7CF4E2: mov     ebp, offset aSi; "SI"
0x7CF4E7: push    eax
0x7CF4E8: mov     [esp+2B48h+var_C8C], ebx
0x7CF4EF: mov     [esp+2B48h+var_C88], ebp
0x7CF4F6: mov     [esp+2B48h+var_C84], esi
0x7CF4FD: mov     [esp+2B48h+var_C80], edi
0x7CF504: call    __memset
0x7CF509: push    34h ; '4'
0x7CF50B: lea     ecx, [esp+2B4Ch+var_C28]
0x7CF512: push    edi
0x7CF513: push    ecx
0x7CF514: mov     [esp+2B54h+var_C40], ebx
0x7CF51B: mov     [esp+2B54h+var_C3C], ebp
0x7CF522: mov     [esp+2B54h+var_C38], esi
0x7CF529: mov     [esp+2B54h+var_C34], offset off_A90D88
0x7CF534: mov     [esp+2B54h+var_C30], esi
0x7CF53B: mov     [esp+2B54h+var_C2C], edi
0x7CF542: call    __memset
0x7CF547: push    34h ; '4'
0x7CF549: lea     edx, [esp+2B58h+var_BDC]
0x7CF550: push    edi
0x7CF551: push    edx
0x7CF552: mov     [esp+2B60h+var_BF4], ebx
0x7CF559: mov     [esp+2B60h+var_BF0], ebp
0x7CF560: mov     [esp+2B60h+var_BEC], esi
0x7CF567: mov     [esp+2B60h+var_BE8], offset aAlpha_0; "ALPHA"
0x7CF572: mov     [esp+2B60h+var_BE4], esi
0x7CF579: mov     [esp+2B60h+var_BE0], edi
0x7CF580: call    __memset
0x7CF585: push    2Ch ; ','
0x7CF587: lea     eax, [esp+2B64h+var_B88]
0x7CF58E: push    edi
0x7CF58F: push    eax
0x7CF590: mov     [esp+2B6Ch+var_BA8], ebx
0x7CF597: mov     [esp+2B6Ch+var_BA4], ebp
0x7CF59E: mov     [esp+2B6Ch+var_BA0], esi
0x7CF5A5: mov     [esp+2B6Ch+var_B9C], offset aAlpha_0; "ALPHA"
0x7CF5B0: mov     [esp+2B6Ch+var_B98], esi
0x7CF5B7: mov     [esp+2B6Ch+var_B94], offset off_A90D88
0x7CF5C2: mov     [esp+2B6Ch+var_B90], esi
0x7CF5C9: mov     [esp+2B6Ch+var_B8C], edi
0x7CF5D0: call    __memset
0x7CF5D5: push    34h ; '4'
0x7CF5D7: lea     ecx, [esp+2B70h+var_B44]
0x7CF5DE: push    edi
0x7CF5DF: push    ecx
0x7CF5E0: mov     [esp+2B78h+var_B5C], ebx
0x7CF5E7: mov     [esp+2B78h+var_B58], ebp
0x7CF5EE: mov     [esp+2B78h+var_B54], esi
0x7CF5F5: mov     [esp+2B78h+var_B50], offset aVc; "VC"
0x7CF600: mov     [esp+2B78h+var_B4C], esi
0x7CF607: mov     [esp+2B78h+var_B48], edi
0x7CF60E: call    __memset
0x7CF613: push    2Ch ; ','
0x7CF615: lea     edx, [esp+2B7Ch+var_AF0]
0x7CF61C: push    edi
0x7CF61D: push    edx
0x7CF61E: mov     [esp+2B84h+var_B10], ebx
0x7CF625: mov     [esp+2B84h+var_B0C], ebp
0x7CF62C: mov     [esp+2B84h+var_B08], esi
0x7CF633: mov     [esp+2B84h+var_B04], offset aVc; "VC"
0x7CF63E: mov     [esp+2B84h+var_B00], esi
0x7CF645: mov     [esp+2B84h+var_AFC], offset off_A90D88
0x7CF650: mov     [esp+2B84h+var_AF8], esi
0x7CF657: mov     [esp+2B84h+var_AF4], edi
0x7CF65E: call    __memset
0x7CF663: add     esp, 48h
0x7CF666: push    2Ch ; ','
0x7CF668: mov     [esp+2B40h+var_AC4], ebx
0x7CF66F: mov     [esp+2B40h+var_AC0], ebp
0x7CF676: mov     [esp+2B40h+var_ABC], esi
0x7CF67D: mov     [esp+2B40h+var_AB8], offset aVc; "VC"
0x7CF688: mov     [esp+2B40h+var_AB4], esi
0x7CF68F: mov     [esp+2B40h+var_AB0], offset aAlpha_0; "ALPHA"
0x7CF69A: mov     [esp+2B40h+var_AAC], esi
0x7CF6A1: mov     [esp+2B40h+var_AA8], edi
0x7CF6A8: push    edi
0x7CF6A9: lea     eax, [esp+2B44h+var_AA4]
0x7CF6B0: push    eax
0x7CF6B1: call    __memset
0x7CF6B6: push    44h ; 'D'
0x7CF6B8: mov     [esp+2B4Ch+var_A78], ebx
0x7CF6BF: lea     ecx, [esp+2B4Ch+var_A24]
0x7CF6C6: push    edi
0x7CF6C7: mov     ebx, offset off_A90D88
0x7CF6CC: push    ecx
0x7CF6CD: mov     [esp+2B54h+var_A74], ebp
0x7CF6D4: mov     [esp+2B54h+var_A70], esi
0x7CF6DB: mov     [esp+2B54h+var_A6C], offset aVc; "VC"
0x7CF6E6: mov     [esp+2B54h+var_A68], esi
0x7CF6ED: mov     [esp+2B54h+var_A64], offset aAlpha_0; "ALPHA"
0x7CF6F8: mov     [esp+2B54h+var_A60], esi
0x7CF6FF: mov     [esp+2B54h+var_A5C], ebx
0x7CF706: mov     [esp+2B54h+var_A58], esi
0x7CF70D: mov     [esp+2B54h+var_A54], edi
0x7CF714: mov     [esp+2B54h+var_A50], edi
0x7CF71B: mov     [esp+2B54h+var_A4C], edi
0x7CF722: mov     [esp+2B54h+var_A48], edi
0x7CF729: mov     [esp+2B54h+var_A44], edi
0x7CF730: mov     [esp+2B54h+var_A40], edi
0x7CF737: mov     [esp+2B54h+var_A3C], edi
0x7CF73E: mov     [esp+2B54h+var_A38], edi
0x7CF745: mov     [esp+2B54h+var_A34], edi
0x7CF74C: mov     [esp+2B54h+var_A30], edi
0x7CF753: mov     [esp+2B54h+var_A2C], offset aLighting1xPA_0; "lighting\\1x\\p\\ambDiffDirAndPt.p.hlsl"
0x7CF75E: mov     [esp+2B54h+var_A28], edi
0x7CF765: call    __memset
0x7CF76A: push    3Ch ; '<'
0x7CF76C: lea     edx, [esp+2B58h+var_9D0]
0x7CF773: push    edi
0x7CF774: push    edx
0x7CF775: mov     [esp+2B60h+var_9E0], offset aLighting1xPBas; "lighting\\1x\\p\\base.p.hlsl"
0x7CF780: mov     [esp+2B60h+var_9DC], ebx
0x7CF787: mov     [esp+2B60h+var_9D8], esi
0x7CF78E: mov     [esp+2B60h+var_9D4], edi
0x7CF795: call    __memset
0x7CF79A: push    34h ; '4'
0x7CF79C: lea     eax, [esp+2B64h+var_97C]
0x7CF7A3: push    edi
0x7CF7A4: push    eax
0x7CF7A5: mov     [esp+2B6Ch+var_994], offset aLighting1xPBas; "lighting\\1x\\p\\base.p.hlsl"
0x7CF7B0: mov     [esp+2B6Ch+var_990], ebx
0x7CF7B7: mov     [esp+2B6Ch+var_98C], esi
0x7CF7BE: mov     [esp+2B6Ch+var_988], offset off_A8F8C4
0x7CF7C9: mov     [esp+2B6Ch+var_984], esi
0x7CF7D0: mov     [esp+2B6Ch+var_980], edi
0x7CF7D7: call    __memset
0x7CF7DC: push    44h ; 'D'
0x7CF7DE: lea     ecx, [esp+2B70h+var_940]
0x7CF7E5: push    edi
0x7CF7E6: mov     ebx, offset aLighting1xPEnv; "lighting\\1x\\p\\envmap.p.hlsl"
0x7CF7EB: push    ecx
0x7CF7EC: mov     [esp+2B78h+var_948], ebx
0x7CF7F3: mov     [esp+2B78h+var_944], edi
0x7CF7FA: call    __memset
0x7CF7FF: push    3Ch ; '<'
0x7CF801: lea     edx, [esp+2B7Ch+var_8EC]
0x7CF808: push    edi
0x7CF809: push    edx
0x7CF80A: mov     [esp+2B84h+var_8FC], ebx
0x7CF811: mov     [esp+2B84h+var_8F8], offset aVc; "VC"
0x7CF81C: mov     [esp+2B84h+var_8F4], esi
0x7CF823: mov     [esp+2B84h+var_8F0], edi
0x7CF82A: call    __memset
0x7CF82F: add     esp, 48h
0x7CF832: push    44h ; 'D'
0x7CF834: lea     eax, [esp+2B40h+var_8A8]
0x7CF83B: push    edi
0x7CF83C: push    eax
0x7CF83D: mov     [esp+2B48h+var_8B0], offset aLighting1xPVer; "lighting\\1x\\p\\vertDir.p.hlsl"
0x7CF848: mov     [esp+2B48h+var_8AC], edi
0x7CF84F: call    __memset
0x7CF854: push    44h ; 'D'
0x7CF856: push    edi
0x7CF857: lea     ecx, [esp+2B50h+var_85C]
0x7CF85E: mov     [esp+2B50h+var_864], offset aLighting1xPV_0; "lighting\\1x\\p\\vertDirAndPt.p.hlsl"
0x7CF869: mov     [esp+2B50h+var_860], edi
0x7CF870: push    ecx
0x7CF871: call    __memset
0x7CF876: push    34h ; '4'
0x7CF878: lea     eax, [esp+2B58h+var_800]
0x7CF87F: lea     edx, [esp+2B58h+var_2C4]
0x7CF886: push    edi
0x7CF887: mov     ebx, offset aLighting1xPSi_; "lighting\\1x\\p\\SI.p.hlsl"
0x7CF88C: push    eax
0x7CF88D: mov     [esp+2B60h+var_818], ebx
0x7CF894: mov     [esp+2B60h+var_814], offset aAmbient_0; "AMBIENT"
0x7CF89F: mov     [esp+2B60h+var_810], esi
0x7CF8A6: mov     [esp+2B60h+var_80C], offset aEmmitmult; "EMMITMULT"
0x7CF8B1: mov     [esp+2B60h+var_808], edx
0x7CF8B8: mov     [esp+2B60h+var_804], edi
0x7CF8BF: call    __memset
0x7CF8C4: push    3Ch ; '<'
0x7CF8C6: lea     edx, [esp+2B64h+var_7BC]
0x7CF8CD: lea     ecx, [esp+2B64h+var_2C4]
0x7CF8D4: push    edi
0x7CF8D5: push    edx
0x7CF8D6: mov     [esp+2B6Ch+var_7CC], ebx
0x7CF8DD: mov     [esp+2B6Ch+var_7C8], offset aEmmitmult; "EMMITMULT"
0x7CF8E8: mov     [esp+2B6Ch+var_7C4], ecx
0x7CF8EF: mov     [esp+2B6Ch+var_7C0], edi
0x7CF8F6: call    __memset
0x7CF8FB: push    3Ch ; '<'
0x7CF8FD: lea     eax, [esp+2B70h+var_770]
0x7CF904: push    edi
0x7CF905: push    eax
0x7CF906: mov     [esp+2B78h+var_780], ebx
0x7CF90D: mov     [esp+2B78h+var_77C], offset aSiblock; "SIBLOCK"
0x7CF918: mov     [esp+2B78h+var_778], edi
0x7CF91F: mov     [esp+2B78h+var_774], edi
0x7CF926: call    __memset
0x7CF92B: push    44h ; 'D'
0x7CF92D: lea     ecx, [esp+2B7Ch+var_72C]
0x7CF934: push    edi
0x7CF935: push    ecx
0x7CF936: mov     [esp+2B84h+var_734], offset aLighting1xPBas; "lighting\\1x\\p\\base.p.hlsl"
0x7CF941: mov     [esp+2B84h+var_730], edi
0x7CF948: call    __memset
0x7CF94D: add     esp, 48h
0x7CF950: push    44h ; 'D'
0x7CF952: lea     edx, [esp+2B40h+var_6E0]
0x7CF959: push    edi
0x7CF95A: mov     ebx, offset aLighting1xPLan; "lighting\\1x\\p\\land.p.hlsl"
0x7CF95F: push    edx
0x7CF960: mov     [esp+2B48h+var_6E8], ebx
0x7CF967: mov     [esp+2B48h+var_6E4], edi
0x7CF96E: call    __memset
0x7CF973: push    3Ch ; '<'
0x7CF975: lea     eax, [esp+2B4Ch+var_68C]
0x7CF97C: push    edi
0x7CF97D: push    eax
0x7CF97E: mov     [esp+2B54h+var_69C], ebx
0x7CF985: mov     [esp+2B54h+var_698], offset aLandalpha; "LANDALPHA"
0x7CF990: mov     [esp+2B54h+var_694], esi
0x7CF997: mov     [esp+2B54h+var_690], edi
0x7CF99E: call    __memset
0x7CF9A3: push    3Ch ; '<'
0x7CF9A5: lea     ecx, [esp+2B58h+var_640]
0x7CF9AC: push    edi
0x7CF9AD: push    ecx
0x7CF9AE: mov     [esp+2B60h+var_650], ebx
0x7CF9B5: mov     [esp+2B60h+var_64C], ebp
0x7CF9BC: mov     [esp+2B60h+var_648], esi
0x7CF9C3: mov     [esp+2B60h+var_644], edi
0x7CF9CA: call    __memset
0x7CF9CF: push    34h ; '4'
0x7CF9D1: lea     edx, [esp+2B64h+var_5EC]
0x7CF9D8: push    edi
0x7CF9D9: push    edx
0x7CF9DA: mov     [esp+2B6Ch+var_604], ebx
0x7CF9E1: mov     [esp+2B6Ch+var_600], offset aLandalpha; "LANDALPHA"
0x7CF9EC: mov     [esp+2B6Ch+var_5FC], esi
0x7CF9F3: mov     [esp+2B6Ch+var_5F8], ebp
0x7CF9FA: mov     [esp+2B6Ch+var_5F4], esi
0x7CFA01: mov     [esp+2B6Ch+var_5F0], edi
0x7CFA08: call    __memset
0x7CFA0D: mov     [esp+2B6Ch+var_5B8], ebx
0x7CFA14: mov     [esp+2B6Ch+var_5B4], offset aPtlight; "PTLIGHT"
0x7CFA1F: mov     [esp+2B6Ch+var_5B0], esi
0x7CFA26: push    3Ch ; '<'
0x7CFA28: lea     eax, [esp+2B70h+var_5A8]
0x7CFA2F: push    edi
0x7CFA30: push    eax
0x7CFA31: mov     [esp+2B78h+var_5AC], edi
0x7CFA38: call    __memset
0x7CFA3D: push    34h ; '4'
0x7CFA3F: lea     ecx, [esp+2B7Ch+var_554]
0x7CFA46: push    edi
0x7CFA47: push    ecx
0x7CFA48: mov     [esp+2B84h+var_56C], ebx
0x7CFA4F: mov     [esp+2B84h+var_568], offset aLandalpha; "LANDALPHA"
0x7CFA5A: mov     [esp+2B84h+var_564], esi
0x7CFA61: mov     [esp+2B84h+var_560], offset aPtlight; "PTLIGHT"
0x7CFA6C: mov     [esp+2B84h+var_55C], esi
0x7CFA73: mov     [esp+2B84h+var_558], edi
0x7CFA7A: call    __memset
0x7CFA7F: add     esp, 48h
0x7CFA82: push    48h ; 'H'
0x7CFA84: lea     edx, [esp+2B40h+var_51C]
0x7CFA8B: push    edi
0x7CFA8C: push    edx
0x7CFA8D: mov     [esp+2B48h+var_520], edi
0x7CFA94: call    __memset
0x7CFA99: push    44h ; 'D'
0x7CFA9B: lea     eax, [esp+2B4Ch+var_2B18]
0x7CFA9F: push    edi
0x7CFAA0: mov     ebx, offset aLighting2xPAdt; "lighting\\2x\\p\\ADTS.p.hlsl"
0x7CFAA5: push    eax
0x7CFAA6: mov     [esp+2B54h+var_2B20], ebx
0x7CFAAA: mov     [esp+2B54h+var_2B1C], edi
0x7CFAAE: call    __memset
0x7CFAB3: push    34h ; '4'
0x7CFAB5: lea     ecx, [esp+2B58h+var_2ABC]
0x7CFABC: push    edi
0x7CFABD: push    ecx
0x7CFABE: mov     [esp+2B60h+var_2AD4], ebx
0x7CFAC5: mov     [esp+2B60h+var_2AD0], offset aModelspacenorm; "MODELSPACENORM"
0x7CFAD0: mov     [esp+2B60h+var_2ACC], esi
0x7CFAD7: mov     [esp+2B60h+var_2AC8], offset aLodlandclip; "LODLANDCLIP"
0x7CFAE2: mov     [esp+2B60h+var_2AC4], esi
0x7CFAE9: mov     [esp+2B60h+var_2AC0], edi
0x7CFAF0: call    __memset
0x7CFAF5: push    3Ch ; '<'
0x7CFAF7: lea     edx, [esp+2B64h+var_2A78]
0x7CFAFE: push    edi
0x7CFAFF: push    edx
0x7CFB00: mov     [esp+2B6Ch+var_2A88], ebx
0x7CFB07: mov     [esp+2B6Ch+var_2A84], ebp
0x7CFB0E: mov     [esp+2B6Ch+var_2A80], esi
0x7CFB15: mov     [esp+2B6Ch+var_2A7C], edi
0x7CFB1C: call    __memset
0x7CFB21: push    3Ch ; '<'
0x7CFB23: lea     eax, [esp+2B70h+var_2A2C]
0x7CFB2A: push    edi
0x7CFB2B: push    eax
0x7CFB2C: mov     [esp+2B78h+var_2A3C], ebx
0x7CFB33: mov     [esp+2B78h+var_2A38], offset aProj_shadow; "PROJ_SHADOW"
0x7CFB3E: mov     [esp+2B78h+var_2A34], esi
0x7CFB45: mov     [esp+2B78h+var_2A30], edi
0x7CFB4C: call    __memset
0x7CFB51: push    2Ch ; ','
0x7CFB53: lea     ecx, [esp+2B7Ch+var_29D0]
0x7CFB5A: push    edi
0x7CFB5B: push    ecx
0x7CFB5C: mov     [esp+2B84h+var_29F0], ebx
0x7CFB63: mov     [esp+2B84h+var_29EC], offset aModelspacenorm; "MODELSPACENORM"
0x7CFB6E: mov     [esp+2B84h+var_29E8], esi
0x7CFB75: mov     [esp+2B84h+var_29E4], offset aProj_shadow; "PROJ_SHADOW"
0x7CFB80: mov     [esp+2B84h+var_29E0], esi
0x7CFB87: mov     [esp+2B84h+var_29DC], offset aLodlandclip; "LODLANDCLIP"
0x7CFB92: mov     [esp+2B84h+var_29D8], esi
0x7CFB99: mov     [esp+2B84h+var_29D4], edi
0x7CFBA0: call    __memset
0x7CFBA5: add     esp, 48h
0x7CFBA8: mov     [esp+2B3Ch+var_29A4], ebx
0x7CFBAF: mov     [esp+2B3Ch+var_29A0], ebp
0x7CFBB6: mov     [esp+2B3Ch+var_299C], esi
0x7CFBBD: mov     [esp+2B3Ch+var_2998], offset aProj_shadow; "PROJ_SHADOW"
0x7CFBC8: mov     [esp+2B3Ch+var_2994], esi
0x7CFBCF: mov     [esp+2B3Ch+var_2990], edi
0x7CFBD6: push    34h ; '4'
0x7CFBD8: lea     edx, [esp+2B40h+var_298C]
0x7CFBDF: push    edi
0x7CFBE0: push    edx
0x7CFBE1: call    __memset
0x7CFBE6: push    3Ch ; '<'
0x7CFBE8: lea     eax, [esp+2B4Ch+var_2948]
0x7CFBEF: push    edi
0x7CFBF0: push    eax
0x7CFBF1: mov     [esp+2B54h+var_2958], ebx
0x7CFBF8: mov     [esp+2B54h+var_2954], offset aStbb; "STBB"
0x7CFC03: mov     [esp+2B54h+var_2950], esi
0x7CFC0A: mov     [esp+2B54h+var_294C], edi
0x7CFC11: call    __memset
0x7CFC16: push    3Ch ; '<'
0x7CFC18: lea     ecx, [esp+2B58h+var_28FC]
0x7CFC1F: push    edi
0x7CFC20: push    ecx
0x7CFC21: mov     [esp+2B60h+var_290C], ebx
0x7CFC28: mov     [esp+2B60h+var_2908], offset aHair_1; "HAIR"
0x7CFC33: mov     [esp+2B60h+var_2904], esi
0x7CFC3A: mov     [esp+2B60h+var_2900], edi
0x7CFC41: call    __memset
0x7CFC46: push    34h ; '4'
0x7CFC48: lea     edx, [esp+2B64h+var_28A8]
0x7CFC4F: push    edi
0x7CFC50: push    edx
0x7CFC51: mov     [esp+2B6Ch+var_28C0], ebx
0x7CFC58: mov     [esp+2B6Ch+var_28BC], offset aHair_1; "HAIR"
0x7CFC63: mov     [esp+2B6Ch+var_28B8], esi
0x7CFC6A: mov     [esp+2B6Ch+var_28B4], offset aProj_shadow; "PROJ_SHADOW"
0x7CFC75: mov     [esp+2B6Ch+var_28B0], esi
0x7CFC7C: mov     [esp+2B6Ch+var_28AC], edi
0x7CFC83: call    __memset
0x7CFC88: push    3Ch ; '<'
0x7CFC8A: lea     eax, [esp+2B70h+var_2864]
0x7CFC91: push    edi
0x7CFC92: push    eax
0x7CFC93: mov     [esp+2B78h+var_2874], ebx
0x7CFC9A: mov     [esp+2B78h+var_2870], offset aLights; "LIGHTS"
0x7CFCA5: mov     [esp+2B78h+var_286C], offset a2_0; "2"
0x7CFCB0: mov     [esp+2B78h+var_2868], edi
0x7CFCB7: call    __memset
0x7CFCBC: push    34h ; '4'
0x7CFCBE: lea     ecx, [esp+2B7Ch+var_2810]
0x7CFCC5: push    edi
0x7CFCC6: push    ecx
0x7CFCC7: mov     [esp+2B84h+var_2828], ebx
0x7CFCCE: mov     [esp+2B84h+var_2824], offset aLights; "LIGHTS"
0x7CFCD9: mov     [esp+2B84h+var_2820], offset a2_0; "2"
0x7CFCE4: mov     [esp+2B84h+var_281C], ebp
0x7CFCEB: mov     [esp+2B84h+var_2818], esi
0x7CFCF2: mov     [esp+2B84h+var_2814], edi
0x7CFCF9: call    __memset
0x7CFCFE: add     esp, 48h
0x7CFD01: push    34h ; '4'
0x7CFD03: lea     edx, [esp+2B40h+var_27C4]
0x7CFD0A: push    edi
0x7CFD0B: push    edx
0x7CFD0C: mov     [esp+2B48h+var_27DC], ebx
0x7CFD13: mov     [esp+2B48h+var_27D8], offset aLights; "LIGHTS"
0x7CFD1E: mov     [esp+2B48h+var_27D4], offset a2_0; "2"
0x7CFD29: mov     [esp+2B48h+var_27D0], offset aHair_1; "HAIR"
0x7CFD34: mov     [esp+2B48h+var_27CC], esi
0x7CFD3B: mov     [esp+2B48h+var_27C8], edi
0x7CFD42: call    __memset
0x7CFD47: push    34h ; '4'
0x7CFD49: lea     eax, [esp+2B4Ch+var_2778]
0x7CFD50: push    edi
0x7CFD51: push    eax
0x7CFD52: mov     [esp+2B54h+var_2790], ebx
0x7CFD59: mov     [esp+2B54h+var_278C], offset aLights; "LIGHTS"
0x7CFD64: mov     [esp+2B54h+var_2788], offset a2_0; "2"
0x7CFD6F: mov     [esp+2B54h+var_2784], offset aProj_shadow; "PROJ_SHADOW"
0x7CFD7A: mov     [esp+2B54h+var_2780], esi
0x7CFD81: mov     [esp+2B54h+var_277C], edi
0x7CFD88: call    __memset
0x7CFD8D: mov     [esp+2B54h+var_2744], ebx
0x7CFD94: mov     [esp+2B54h+var_2740], offset aLights; "LIGHTS"
0x7CFD9F: mov     [esp+2B54h+var_273C], offset a2_0; "2"
0x7CFDAA: mov     [esp+2B54h+var_2738], ebp
0x7CFDB1: push    2Ch ; ','
0x7CFDB3: lea     ecx, [esp+2B58h+var_2724]
0x7CFDBA: push    edi
0x7CFDBB: push    ecx
0x7CFDBC: mov     [esp+2B60h+var_2734], esi
0x7CFDC3: mov     [esp+2B60h+var_2730], offset aProj_shadow; "PROJ_SHADOW"
0x7CFDCE: mov     [esp+2B60h+var_272C], esi
0x7CFDD5: mov     [esp+2B60h+var_2728], edi
0x7CFDDC: call    __memset
0x7CFDE1: push    2Ch ; ','
0x7CFDE3: lea     edx, [esp+2B64h+var_26D8]
0x7CFDEA: push    edi
0x7CFDEB: push    edx
0x7CFDEC: mov     [esp+2B6Ch+var_26F8], ebx
0x7CFDF3: mov     [esp+2B6Ch+var_26F4], offset aLights; "LIGHTS"
0x7CFDFE: mov     [esp+2B6Ch+var_26F0], offset a2_0; "2"
0x7CFE09: mov     [esp+2B6Ch+var_26EC], offset aHair_1; "HAIR"
0x7CFE14: mov     [esp+2B6Ch+var_26E8], esi
0x7CFE1B: mov     [esp+2B6Ch+var_26E4], offset aProj_shadow; "PROJ_SHADOW"
0x7CFE26: mov     [esp+2B6Ch+var_26E0], esi
0x7CFE2D: mov     [esp+2B6Ch+var_26DC], edi
0x7CFE34: call    __memset
0x7CFE39: push    3Ch ; '<'
0x7CFE3B: lea     eax, [esp+2B70h+var_269C]
0x7CFE42: push    edi
0x7CFE43: push    eax
0x7CFE44: mov     [esp+2B78h+var_26AC], ebx
0x7CFE4B: mov     [esp+2B78h+var_26A8], offset aSpecular_0; "SPECULAR"
0x7CFE56: mov     [esp+2B78h+var_26A4], esi
0x7CFE5D: mov     [esp+2B78h+var_26A0], edi
0x7CFE64: call    __memset
0x7CFE69: push    34h ; '4'
0x7CFE6B: lea     ecx, [esp+2B7Ch+var_2648]
0x7CFE72: push    edi
0x7CFE73: push    ecx
0x7CFE74: mov     [esp+2B84h+var_2660], ebx
0x7CFE7B: mov     [esp+2B84h+var_265C], offset aSpecular_0; "SPECULAR"
0x7CFE86: mov     [esp+2B84h+var_2658], esi
0x7CFE8D: mov     [esp+2B84h+var_2654], ebp
0x7CFE94: mov     [esp+2B84h+var_2650], esi
0x7CFE9B: mov     [esp+2B84h+var_264C], edi
0x7CFEA2: call    __memset
0x7CFEA7: add     esp, 48h
0x7CFEAA: push    34h ; '4'
0x7CFEAC: lea     edx, [esp+2B40h+var_25FC]
0x7CFEB3: push    edi
0x7CFEB4: push    edx
0x7CFEB5: mov     [esp+2B48h+var_2614], ebx
0x7CFEBC: mov     [esp+2B48h+var_2610], offset aSpecular_0; "SPECULAR"
0x7CFEC7: mov     [esp+2B48h+var_260C], esi
0x7CFECE: mov     [esp+2B48h+var_2608], offset aHair_1; "HAIR"
0x7CFED9: mov     [esp+2B48h+var_2604], esi
0x7CFEE0: mov     [esp+2B48h+var_2600], edi
0x7CFEE7: call    __memset
0x7CFEEC: push    34h ; '4'
0x7CFEEE: lea     eax, [esp+2B4Ch+var_25B0]
0x7CFEF5: push    edi
0x7CFEF6: push    eax
0x7CFEF7: mov     [esp+2B54h+var_25C8], ebx
0x7CFEFE: mov     [esp+2B54h+var_25C4], offset aSpecular_0; "SPECULAR"
0x7CFF09: mov     [esp+2B54h+var_25C0], esi
0x7CFF10: mov     [esp+2B54h+var_25BC], offset aProj_shadow; "PROJ_SHADOW"
0x7CFF1B: mov     [esp+2B54h+var_25B8], esi
0x7CFF22: mov     [esp+2B54h+var_25B4], edi
0x7CFF29: call    __memset
0x7CFF2E: push    2Ch ; ','
0x7CFF30: lea     ecx, [esp+2B58h+var_255C]
0x7CFF37: push    edi
0x7CFF38: push    ecx
0x7CFF39: mov     [esp+2B60h+var_257C], ebx
0x7CFF40: mov     [esp+2B60h+var_2578], offset aSpecular_0; "SPECULAR"
0x7CFF4B: mov     [esp+2B60h+var_2574], esi
0x7CFF52: mov     [esp+2B60h+var_2570], ebp
0x7CFF59: mov     [esp+2B60h+var_256C], esi
0x7CFF60: mov     [esp+2B60h+var_2568], offset aProj_shadow; "PROJ_SHADOW"
0x7CFF6B: mov     [esp+2B60h+var_2564], esi
0x7CFF72: mov     [esp+2B60h+var_2560], edi
0x7CFF79: call    __memset
0x7CFF7E: mov     [esp+2B60h+var_2530], ebx
0x7CFF85: mov     [esp+2B60h+var_252C], offset aSpecular_0; "SPECULAR"
0x7CFF90: mov     [esp+2B60h+var_2528], esi
0x7CFF97: push    2Ch ; ','
0x7CFF99: lea     edx, [esp+2B64h+var_2510]
0x7CFFA0: push    edi
0x7CFFA1: push    edx
0x7CFFA2: mov     [esp+2B6Ch+var_2524], offset aHair_1; "HAIR"
0x7CFFAD: mov     [esp+2B6Ch+var_2520], esi
0x7CFFB4: mov     [esp+2B6Ch+var_251C], offset aProj_shadow; "PROJ_SHADOW"
0x7CFFBF: mov     [esp+2B6Ch+var_2518], esi
0x7CFFC6: mov     [esp+2B6Ch+var_2514], edi
0x7CFFCD: call    __memset
0x7CFFD2: push    34h ; '4'
0x7CFFD4: lea     eax, [esp+2B70h+var_24CC]
0x7CFFDB: push    edi
0x7CFFDC: push    eax
0x7CFFDD: mov     [esp+2B78h+var_24E4], ebx
0x7CFFE4: mov     [esp+2B78h+var_24E0], offset aSpecular_0; "SPECULAR"
0x7CFFEF: mov     [esp+2B78h+var_24DC], esi
0x7CFFF6: mov     [esp+2B78h+var_24D8], offset aLights; "LIGHTS"
0x7D0001: mov     [esp+2B78h+var_24D4], offset a2_0; "2"
0x7D000C: mov     [esp+2B78h+var_24D0], edi
0x7D0013: call    __memset
0x7D0018: push    2Ch ; ','
0x7D001A: mov     [esp+2B7Ch+var_2498], ebx
0x7D0021: lea     ecx, [esp+2B7Ch+var_2478]
0x7D0028: push    edi
0x7D0029: mov     ebx, offset aLights; "LIGHTS"
0x7D002E: push    ecx
0x7D002F: mov     [esp+2B84h+var_2494], offset aSpecular_0; "SPECULAR"
0x7D003A: mov     [esp+2B84h+var_2490], esi
0x7D0041: mov     [esp+2B84h+var_248C], ebx
0x7D0048: mov     [esp+2B84h+var_2488], offset a2_0; "2"
0x7D0053: mov     [esp+2B84h+var_2484], ebp
0x7D005A: mov     [esp+2B84h+var_2480], esi
0x7D0061: mov     [esp+2B84h+var_247C], edi
0x7D0068: call    __memset
0x7D006D: add     esp, 48h
0x7D0070: push    48h ; 'H'
0x7D0072: lea     edx, [esp+2B40h+var_2448]
0x7D0079: push    edi
0x7D007A: push    edx
0x7D007B: mov     [esp+2B48h+var_244C], edi
0x7D0082: call    __memset
0x7D0087: push    48h ; 'H'
0x7D0089: lea     eax, [esp+2B4Ch+var_23FC]
0x7D0090: push    edi
0x7D0091: push    eax
0x7D0092: mov     [esp+2B54h+var_2400], edi
0x7D0099: call    __memset
0x7D009E: push    48h ; 'H'
0x7D00A0: lea     ecx, [esp+2B58h+var_23B0]
0x7D00A7: push    edi
0x7D00A8: push    ecx
0x7D00A9: mov     [esp+2B60h+var_23B4], edi
0x7D00B0: call    __memset
0x7D00B5: push    48h ; 'H'
0x7D00B7: lea     edx, [esp+2B64h+var_2364]
0x7D00BE: push    edi
0x7D00BF: push    edx
0x7D00C0: mov     [esp+2B6Ch+var_2368], edi
0x7D00C7: call    __memset
0x7D00CC: push    3Ch ; '<'
0x7D00CE: lea     eax, [esp+2B70h+var_230C]
0x7D00D5: push    edi
0x7D00D6: push    eax
0x7D00D7: mov     [esp+2B78h+var_231C], offset aLighting2xPAd_; "lighting\\2x\\p\\AD.p.hlsl"
0x7D00E2: mov     [esp+2B78h+var_2318], ebx
0x7D00E9: mov     [esp+2B78h+var_2314], offset a2_0; "2"
0x7D00F4: mov     [esp+2B78h+var_2310], edi
0x7D00FB: call    __memset
0x7D0100: push    34h ; '4'
0x7D0102: lea     ecx, [esp+2B7Ch+var_22B8]
0x7D0109: push    edi
0x7D010A: push    ecx
0x7D010B: mov     [esp+2B84h+var_22D0], offset aLighting2xPAd_; "lighting\\2x\\p\\AD.p.hlsl"
0x7D0116: mov     [esp+2B84h+var_22CC], ebx
0x7D011D: mov     [esp+2B84h+var_22C8], offset a2_0; "2"
0x7D0128: mov     [esp+2B84h+var_22C4], ebp
0x7D012F: mov     [esp+2B84h+var_22C0], esi
0x7D0136: mov     [esp+2B84h+var_22BC], edi
0x7D013D: call    __memset
0x7D0142: add     esp, 48h
0x7D0145: push    34h ; '4'
0x7D0147: lea     edx, [esp+2B40h+var_226C]
0x7D014E: push    edi
0x7D014F: push    edx
0x7D0150: mov     [esp+2B48h+var_2284], offset aLighting2xPAd_; "lighting\\2x\\p\\AD.p.hlsl"
0x7D015B: mov     [esp+2B48h+var_2280], ebx
0x7D0162: mov     [esp+2B48h+var_227C], offset a2_0; "2"
0x7D016D: mov     [esp+2B48h+var_2278], offset aProj_shadow; "PROJ_SHADOW"
0x7D0178: mov     [esp+2B48h+var_2274], esi
0x7D017F: mov     [esp+2B48h+var_2270], edi
0x7D0186: call    __memset
0x7D018B: push    2Ch ; ','
0x7D018D: lea     eax, [esp+2B4Ch+var_2218]
0x7D0194: push    edi
0x7D0195: push    eax
0x7D0196: mov     [esp+2B54h+var_2238], offset aLighting2xPAd_; "lighting\\2x\\p\\AD.p.hlsl"
0x7D01A1: mov     [esp+2B54h+var_2234], ebx
0x7D01A8: mov     [esp+2B54h+var_2230], offset a2_0; "2"
0x7D01B3: mov     [esp+2B54h+var_222C], ebp
0x7D01BA: mov     [esp+2B54h+var_2228], esi
0x7D01C1: mov     [esp+2B54h+var_2224], offset aProj_shadow; "PROJ_SHADOW"
0x7D01CC: mov     [esp+2B54h+var_2220], esi
0x7D01D3: mov     [esp+2B54h+var_221C], edi
0x7D01DA: call    __memset
0x7D01DF: push    3Ch ; '<'
0x7D01E1: lea     ecx, [esp+2B58h+var_21DC]
0x7D01E8: push    edi
0x7D01E9: push    ecx
0x7D01EA: mov     [esp+2B60h+var_21EC], offset aLighting2xPAd_; "lighting\\2x\\p\\AD.p.hlsl"
0x7D01F5: mov     [esp+2B60h+var_21E8], ebx
0x7D01FC: mov     [esp+2B60h+var_21E4], offset a3; "3"
0x7D0207: mov     [esp+2B60h+var_21E0], edi
0x7D020E: call    __memset
0x7D0213: push    34h ; '4'
0x7D0215: lea     edx, [esp+2B64h+var_2188]
0x7D021C: push    edi
0x7D021D: push    edx
0x7D021E: mov     [esp+2B6Ch+var_21A0], offset aLighting2xPAd_; "lighting\\2x\\p\\AD.p.hlsl"
0x7D0229: mov     [esp+2B6Ch+var_219C], ebx
0x7D0230: mov     [esp+2B6Ch+var_2198], offset a3; "3"
0x7D023B: mov     [esp+2B6Ch+var_2194], ebp
0x7D0242: mov     [esp+2B6Ch+var_2190], esi
0x7D0249: mov     [esp+2B6Ch+var_218C], edi
0x7D0250: call    __memset
0x7D0255: push    34h ; '4'
0x7D0257: lea     eax, [esp+2B70h+var_213C]
0x7D025E: push    edi
0x7D025F: push    eax
0x7D0260: mov     [esp+2B78h+var_2154], offset aLighting2xPAd_; "lighting\\2x\\p\\AD.p.hlsl"
0x7D026B: mov     [esp+2B78h+var_2150], ebx
0x7D0272: mov     [esp+2B78h+var_214C], offset a3; "3"
0x7D027D: mov     [esp+2B78h+var_2148], offset aProj_shadow; "PROJ_SHADOW"
0x7D0288: mov     [esp+2B78h+var_2144], esi
0x7D028F: mov     [esp+2B78h+var_2140], edi
0x7D0296: call    __memset
0x7D029B: push    2Ch ; ','
0x7D029D: lea     ecx, [esp+2B7Ch+var_20E8]
0x7D02A4: push    edi
0x7D02A5: push    ecx
0x7D02A6: mov     [esp+2B84h+var_2108], offset aLighting2xPAd_; "lighting\\2x\\p\\AD.p.hlsl"
0x7D02B1: mov     [esp+2B84h+var_2104], ebx
0x7D02B8: mov     [esp+2B84h+var_2100], offset a3; "3"
0x7D02C3: mov     [esp+2B84h+var_20FC], ebp
0x7D02CA: mov     [esp+2B84h+var_20F8], esi
0x7D02D1: mov     [esp+2B84h+var_20F4], offset aProj_shadow; "PROJ_SHADOW"
0x7D02DC: mov     [esp+2B84h+var_20F0], esi
0x7D02E3: mov     [esp+2B84h+var_20EC], edi
0x7D02EA: call    __memset
0x7D02EF: add     esp, 48h
0x7D02F2: push    3Ch ; '<'
0x7D02F4: lea     edx, [esp+2B40h+var_20AC]
0x7D02FB: push    edi
0x7D02FC: push    edx
0x7D02FD: mov     [esp+2B48h+var_20BC], offset aLighting2xPDif; "lighting\\2x\\p\\DiffusePt.p.hlsl"
0x7D0308: mov     [esp+2B48h+var_20B8], ebx
0x7D030F: mov     [esp+2B48h+var_20B4], offset a2_0; "2"
0x7D031A: mov     [esp+2B48h+var_20B0], edi
0x7D0321: call    __memset
0x7D0326: mov     [esp+2B48h+var_2070], offset aLighting2xPDif; "lighting\\2x\\p\\DiffusePt.p.hlsl"
0x7D0331: mov     [esp+2B48h+var_206C], ebx
0x7D0338: mov     [esp+2B48h+var_2068], offset a3; "3"
0x7D0343: push    3Ch ; '<'
0x7D0345: lea     eax, [esp+2B4Ch+var_2060]
0x7D034C: push    edi
0x7D034D: push    eax
0x7D034E: mov     [esp+2B54h+var_2064], edi
0x7D0355: call    __memset
0x7D035A: push    44h ; 'D'
0x7D035C: lea     ecx, [esp+2B58h+var_201C]
0x7D0363: push    edi
0x7D0364: mov     ebx, offset aLighting2xPSpe; "lighting\\2x\\p\\Specular.p.hlsl"
0x7D0369: push    ecx
0x7D036A: mov     [esp+2B60h+var_2024], ebx
0x7D0371: mov     [esp+2B60h+var_2020], edi
0x7D0378: call    __memset
0x7D037D: push    3Ch ; '<'
0x7D037F: lea     edx, [esp+2B64h+var_1FC8]
0x7D0386: push    edi
0x7D0387: push    edx
0x7D0388: mov     [esp+2B6Ch+var_1FD8], ebx
0x7D038F: mov     [esp+2B6Ch+var_1FD4], offset aHair_1; "HAIR"
0x7D039A: mov     [esp+2B6Ch+var_1FD0], esi
0x7D03A1: mov     [esp+2B6Ch+var_1FCC], edi
0x7D03A8: call    __memset
0x7D03AD: push    3Ch ; '<'
0x7D03AF: lea     eax, [esp+2B70h+var_1F7C]
0x7D03B6: push    edi
0x7D03B7: push    eax
0x7D03B8: mov     [esp+2B78h+var_1F8C], ebx
0x7D03BF: mov     [esp+2B78h+var_1F88], offset aProj_shadow; "PROJ_SHADOW"
0x7D03CA: mov     [esp+2B78h+var_1F84], esi
0x7D03D1: mov     [esp+2B78h+var_1F80], edi
0x7D03D8: call    __memset
0x7D03DD: push    34h ; '4'
0x7D03DF: lea     ecx, [esp+2B7Ch+var_1F28]
0x7D03E6: push    edi
0x7D03E7: push    ecx
0x7D03E8: mov     [esp+2B84h+var_1F40], ebx
0x7D03EF: mov     [esp+2B84h+var_1F3C], offset aProj_shadow; "PROJ_SHADOW"
0x7D03FA: mov     [esp+2B84h+var_1F38], esi
0x7D0401: mov     [esp+2B84h+var_1F34], offset aHair_1; "HAIR"
0x7D040C: mov     [esp+2B84h+var_1F30], esi
0x7D0413: mov     [esp+2B84h+var_1F2C], edi
0x7D041A: call    __memset
0x7D041F: add     esp, 48h
0x7D0422: push    3Ch ; '<'
0x7D0424: lea     edx, [esp+2B40h+var_1EE4]
0x7D042B: push    edi
0x7D042C: push    edx
0x7D042D: mov     [esp+2B48h+var_1EF4], ebx
0x7D0434: mov     [esp+2B48h+var_1EF0], offset aPoint; "POINT"
0x7D043F: mov     [esp+2B48h+var_1EEC], esi
0x7D0446: mov     [esp+2B48h+var_1EE8], edi
0x7D044D: call    __memset
0x7D0452: push    34h ; '4'
0x7D0454: lea     eax, [esp+2B4Ch+var_1E90]
0x7D045B: push    edi
0x7D045C: push    eax
0x7D045D: mov     [esp+2B54h+var_1EA8], ebx
0x7D0464: mov     [esp+2B54h+var_1EA4], offset aPoint; "POINT"
0x7D046F: mov     [esp+2B54h+var_1EA0], esi
0x7D0476: mov     [esp+2B54h+var_1E9C], offset aHair_1; "HAIR"
0x7D0481: mov     [esp+2B54h+var_1E98], esi
0x7D0488: mov     [esp+2B54h+var_1E94], edi
0x7D048F: call    __memset
0x7D0494: push    44h ; 'D'
0x7D0496: lea     ecx, [esp+2B58h+var_1E54]
0x7D049D: push    edi
0x7D049E: mov     ebx, offset aLighting2xPEnv; "lighting\\2x\\p\\EnvMap.p.hlsl"
0x7D04A3: push    ecx
0x7D04A4: mov     [esp+2B60h+var_1E5C], ebx
0x7D04AB: mov     [esp+2B60h+var_1E58], edi
0x7D04B2: call    __memset
0x7D04B7: push    3Ch ; '<'
0x7D04B9: lea     edx, [esp+2B64h+var_1E00]
0x7D04C0: push    edi
0x7D04C1: push    edx
0x7D04C2: mov     [esp+2B6Ch+var_1E10], ebx
0x7D04C9: mov     [esp+2B6Ch+var_1E0C], offset aWindow_0; "WINDOW"
0x7D04D4: mov     [esp+2B6Ch+var_1E08], esi
0x7D04DB: mov     [esp+2B6Ch+var_1E04], edi
0x7D04E2: call    __memset
0x7D04E7: push    3Ch ; '<'
0x7D04E9: lea     eax, [esp+2B70h+var_1DB4]
0x7D04F0: push    edi
0x7D04F1: push    eax
0x7D04F2: mov     [esp+2B78h+var_1DC4], ebx
0x7D04F9: mov     [esp+2B78h+var_1DC0], offset off_A90BE8
0x7D0504: mov     [esp+2B78h+var_1DBC], edi
0x7D050B: mov     [esp+2B78h+var_1DB8], edi
0x7D0512: call    __memset
0x7D0517: push    34h ; '4'
0x7D0519: lea     edx, [esp+2B7Ch+var_1D60]
0x7D0520: lea     ecx, [esp+2B7Ch+Dest]
0x7D0527: push    edi
0x7D0528: mov     ebx, offset aMaxdecals; "MAXDECALS"
0x7D052D: push    edx
0x7D052E: mov     [esp+2B84h+var_1D78], offset aLighting2xPDec; "lighting\\2x\\p\\decal.p.hlsl"
0x7D0539: mov     [esp+2B84h+var_1D74], offset aDecal_0; "DECAL"
0x7D0544: mov     [esp+2B84h+var_1D70], esi
0x7D054B: mov     [esp+2B84h+var_1D6C], ebx
0x7D0552: mov     [esp+2B84h+var_1D68], ecx
0x7D0559: mov     [esp+2B84h+var_1D64], edi
0x7D0560: call    __memset
0x7D0565: add     esp, 48h
0x7D0568: push    2Ch ; ','
0x7D056A: lea     ecx, [esp+2B40h+var_1D0C]
0x7D0571: lea     eax, [esp+2B40h+Dest]
0x7D0578: push    edi
0x7D0579: push    ecx
0x7D057A: mov     [esp+2B48h+var_1D2C], offset aLighting2xPDec; "lighting\\2x\\p\\decal.p.hlsl"
0x7D0585: mov     [esp+2B48h+var_1D28], offset aDecal_0; "DECAL"
0x7D0590: mov     [esp+2B48h+var_1D24], esi
0x7D0597: mov     [esp+2B48h+var_1D20], offset aAlpha_0; "ALPHA"
0x7D05A2: mov     [esp+2B48h+var_1D1C], esi
0x7D05A9: mov     [esp+2B48h+var_1D18], ebx
0x7D05B0: mov     [esp+2B48h+var_1D14], eax
0x7D05B7: mov     [esp+2B48h+var_1D10], edi
0x7D05BE: call    __memset
0x7D05C3: push    3Ch ; '<'
0x7D05C5: lea     edx, [esp+2B4Ch+var_1CD0]
0x7D05CC: push    edi
0x7D05CD: mov     ebx, offset aLighting2xPLan; "lighting\\2x\\p\\land.p.hlsl"
0x7D05D2: push    edx
0x7D05D3: mov     [esp+2B54h+var_1CE0], ebx
0x7D05DA: mov     [esp+2B54h+var_1CDC], offset aProj_shadow; "PROJ_SHADOW"
0x7D05E5: mov     [esp+2B54h+var_1CD8], esi
0x7D05EC: mov     [esp+2B54h+var_1CD4], edi
0x7D05F3: call    __memset
0x7D05F8: push    34h ; '4'
0x7D05FA: lea     eax, [esp+2B58h+var_1C7C]
0x7D0601: push    edi
0x7D0602: push    eax
0x7D0603: mov     [esp+2B60h+var_1C94], ebx
0x7D060A: mov     [esp+2B60h+var_1C90], offset aProj_shadow; "PROJ_SHADOW"
0x7D0615: mov     [esp+2B60h+var_1C8C], esi
0x7D061C: mov     [esp+2B60h+var_1C88], offset aLandalpha; "LANDALPHA"
0x7D0627: mov     [esp+2B60h+var_1C84], esi
0x7D062E: mov     [esp+2B60h+var_1C80], edi
0x7D0635: call    __memset
0x7D063A: push    34h ; '4'
0x7D063C: lea     ecx, [esp+2B64h+var_1C30]
0x7D0643: push    edi
0x7D0644: push    ecx
0x7D0645: mov     [esp+2B6Ch+var_1C48], offset aLighting2xPL_0; "lighting\\2x\\p\\landlighting.p.hlsl"
0x7D0650: mov     [esp+2B6Ch+var_1C44], offset aDiff; "DIFF"
0x7D065B: mov     [esp+2B6Ch+var_1C40], esi
0x7D0662: mov     [esp+2B6Ch+var_1C3C], offset aPtlight; "PTLIGHT"
0x7D066D: mov     [esp+2B6Ch+var_1C38], esi
0x7D0674: mov     [esp+2B6Ch+var_1C34], edi
0x7D067B: call    __memset
0x7D0680: push    3Ch ; '<'
0x7D0682: lea     edx, [esp+2B70h+var_1BEC]
0x7D0689: push    edi
0x7D068A: push    edx
0x7D068B: mov     [esp+2B78h+var_1BFC], offset aLighting2xPL_0; "lighting\\2x\\p\\landlighting.p.hlsl"
0x7D0696: mov     [esp+2B78h+var_1BF8], offset aSpecular_0; "SPECULAR"
0x7D06A1: mov     [esp+2B78h+var_1BF4], esi
0x7D06A8: mov     [esp+2B78h+var_1BF0], edi
0x7D06AF: call    __memset
0x7D06B4: push    48h ; 'H'
0x7D06B6: mov     [esp+2B7Ch+var_1BB0], edi
0x7D06BD: push    edi
0x7D06BE: lea     eax, [esp+2B80h+var_1BAC]
0x7D06C5: push    eax
0x7D06C6: call    __memset
0x7D06CB: add     esp, 48h
0x7D06CE: push    2Ch ; ','
0x7D06D0: lea     ecx, [esp+2B40h+var_1B44]
0x7D06D7: push    edi
0x7D06D8: push    ecx
0x7D06D9: mov     [esp+2B48h+var_1B64], offset aLighting2xPL_0; "lighting\\2x\\p\\landlighting.p.hlsl"
0x7D06E4: mov     [esp+2B48h+var_1B60], offset aLandalpha; "LANDALPHA"
0x7D06EF: mov     [esp+2B48h+var_1B5C], esi
0x7D06F6: mov     [esp+2B48h+var_1B58], offset aDiff; "DIFF"
0x7D0701: mov     [esp+2B48h+var_1B54], esi
0x7D0708: mov     [esp+2B48h+var_1B50], offset aPtlight; "PTLIGHT"
0x7D0713: mov     [esp+2B48h+var_1B4C], esi
0x7D071A: mov     [esp+2B48h+var_1B48], edi
0x7D0721: call    __memset
0x7D0726: push    34h ; '4'
0x7D0728: lea     edx, [esp+2B4Ch+var_1B00]
0x7D072F: push    edi
0x7D0730: push    edx
0x7D0731: mov     [esp+2B54h+var_1B18], offset aLighting2xPL_0; "lighting\\2x\\p\\landlighting.p.hlsl"
0x7D073C: mov     [esp+2B54h+var_1B14], offset aLandalpha; "LANDALPHA"
0x7D0747: mov     [esp+2B54h+var_1B10], esi
0x7D074E: mov     [esp+2B54h+var_1B0C], offset aSpecular_0; "SPECULAR"
0x7D0759: mov     [esp+2B54h+var_1B08], esi
0x7D0760: mov     [esp+2B54h+var_1B04], edi
0x7D0767: call    __memset
0x7D076C: push    48h ; 'H'
0x7D076E: lea     eax, [esp+2B58h+var_1AC8]
0x7D0775: push    edi
0x7D0776: push    eax
0x7D0777: mov     [esp+2B60h+var_1ACC], edi
0x7D077E: call    __memset
0x7D0783: push    34h ; '4'
0x7D0785: lea     ecx, [esp+2B64h+var_1A68]
0x7D078C: push    edi
0x7D078D: push    ecx
0x7D078E: mov     [esp+2B6Ch+var_1A80], offset aLighting2xPL_0; "lighting\\2x\\p\\landlighting.p.hlsl"
0x7D0799: mov     [esp+2B6Ch+var_1A7C], offset aSpecular_0; "SPECULAR"
0x7D07A4: mov     [esp+2B6Ch+var_1A78], esi
0x7D07AB: mov     [esp+2B6Ch+var_1A74], offset aProj_shadow; "PROJ_SHADOW"
0x7D07B6: mov     [esp+2B6Ch+var_1A70], esi
0x7D07BD: mov     [esp+2B6Ch+var_1A6C], edi
0x7D07C4: call    __memset
0x7D07C9: push    2Ch ; ','
0x7D07CB: lea     edx, [esp+2B70h+var_1A14]
0x7D07D2: push    edi
0x7D07D3: push    edx
0x7D07D4: mov     [esp+2B78h+var_1A34], offset aLighting2xPL_0; "lighting\\2x\\p\\landlighting.p.hlsl"
0x7D07DF: mov     [esp+2B78h+var_1A30], offset aLandalpha; "LANDALPHA"
0x7D07EA: mov     [esp+2B78h+var_1A2C], esi
0x7D07F1: mov     [esp+2B78h+var_1A28], offset aSpecular_0; "SPECULAR"
0x7D07FC: mov     [esp+2B78h+var_1A24], esi
0x7D0803: mov     [esp+2B78h+var_1A20], offset aProj_shadow; "PROJ_SHADOW"
0x7D080E: mov     [esp+2B78h+var_1A1C], esi
0x7D0815: mov     [esp+2B78h+var_1A18], edi
0x7D081C: call    __memset
0x7D0821: push    3Ch ; '<'
0x7D0823: lea     eax, [esp+2B7Ch+var_19D8]
0x7D082A: push    edi
0x7D082B: push    eax
0x7D082C: mov     [esp+2B84h+var_19E8], offset aLighting2xPDep; "lighting\\2x\\p\\depthmap.p.hlsl"
0x7D0837: mov     [esp+2B84h+var_19E4], offset aDepthmap; "DEPTHMAP"
0x7D0842: mov     [esp+2B84h+var_19E0], esi
0x7D0849: mov     [esp+2B84h+var_19DC], edi
0x7D0850: call    __memset
0x7D0855: add     esp, 48h
0x7D0858: push    34h ; '4'
0x7D085A: lea     ecx, [esp+2B40h+var_1984]
0x7D0861: push    edi
0x7D0862: push    ecx
0x7D0863: mov     [esp+2B48h+var_199C], offset aLighting2xPDep; "lighting\\2x\\p\\depthmap.p.hlsl"
0x7D086E: mov     [esp+2B48h+var_1998], offset aDepthmap; "DEPTHMAP"
0x7D0879: mov     [esp+2B48h+var_1994], esi
0x7D0880: mov     [esp+2B48h+var_1990], offset aAlphatest; "ALPHATEST"
0x7D088B: mov     [esp+2B48h+var_198C], esi
0x7D0892: mov     [esp+2B48h+var_1988], edi
0x7D0899: call    __memset
0x7D089E: mov     [esp+2B48h+var_1950], offset aLighting2xPDep; "lighting\\2x\\p\\depthmap.p.hlsl"
0x7D08A9: mov     [esp+2B48h+var_194C], offset aDepthmap; "DEPTHMAP"
0x7D08B4: push    34h ; '4'
0x7D08B6: lea     edx, [esp+2B4Ch+var_1938]
0x7D08BD: push    edi
0x7D08BE: push    edx
0x7D08BF: mov     [esp+2B54h+var_1948], esi
0x7D08C6: mov     [esp+2B54h+var_1944], offset aSkin_1; "SKIN"
0x7D08D1: mov     [esp+2B54h+var_1940], esi
0x7D08D8: mov     [esp+2B54h+var_193C], edi
0x7D08DF: call    __memset
0x7D08E4: push    2Ch ; ','
0x7D08E6: lea     eax, [esp+2B58h+var_18E4]
0x7D08ED: push    edi
0x7D08EE: push    eax
0x7D08EF: mov     [esp+2B60h+var_1904], offset aLighting2xPDep; "lighting\\2x\\p\\depthmap.p.hlsl"
0x7D08FA: mov     [esp+2B60h+var_1900], offset aDepthmap; "DEPTHMAP"
0x7D0905: mov     [esp+2B60h+var_18FC], esi
0x7D090C: mov     [esp+2B60h+var_18F8], offset aSkin_1; "SKIN"
0x7D0917: mov     [esp+2B60h+var_18F4], esi
0x7D091E: mov     [esp+2B60h+var_18F0], offset aAlphatest; "ALPHATEST"
0x7D0929: mov     [esp+2B60h+var_18EC], esi
0x7D0930: mov     [esp+2B60h+var_18E8], edi
0x7D0937: call    __memset
0x7D093C: push    34h ; '4'
0x7D093E: lea     ecx, [esp+2B64h+var_18A0]
0x7D0945: push    edi
0x7D0946: push    ecx
0x7D0947: mov     [esp+2B6Ch+var_18B8], offset aLighting2xPDep; "lighting\\2x\\p\\depthmap.p.hlsl"
0x7D0952: mov     [esp+2B6Ch+var_18B4], offset aDepthmap; "DEPTHMAP"
0x7D095D: mov     [esp+2B6Ch+var_18B0], esi
0x7D0964: mov     [esp+2B6Ch+var_18AC], offset aWaterdepth; "WATERDEPTH"
0x7D096F: mov     [esp+2B6Ch+var_18A8], esi
0x7D0976: mov     [esp+2B6Ch+var_18A4], edi
0x7D097D: call    __memset
0x7D0982: push    44h ; 'D'
0x7D0984: lea     edx, [esp+2B70h+var_1864]
0x7D098B: push    edi
0x7D098C: push    edx
0x7D098D: mov     [esp+2B78h+var_186C], offset aLighting2xPRen; "lighting\\2x\\p\\renderNormals.p.hlsl"
0x7D0998: mov     [esp+2B78h+var_1868], edi
0x7D099F: call    __memset
0x7D09A4: push    3Ch ; '<'
0x7D09A6: lea     eax, [esp+2B7Ch+var_1810]
0x7D09AD: push    edi
0x7D09AE: push    eax
0x7D09AF: mov     [esp+2B84h+var_1820], offset aLighting2xPRen; "lighting\\2x\\p\\renderNormals.p.hlsl"
0x7D09BA: mov     [esp+2B84h+var_181C], offset aFire; "FIRE"
0x7D09C5: mov     [esp+2B84h+var_1818], esi
0x7D09CC: mov     [esp+2B84h+var_1814], edi
0x7D09D3: call    __memset
0x7D09D8: add     esp, 48h
0x7D09DB: push    3Ch ; '<'
0x7D09DD: lea     ecx, [esp+2B40h+var_17C4]
0x7D09E4: push    edi
0x7D09E5: push    ecx
0x7D09E6: mov     [esp+2B48h+var_17D4], offset aLighting2xPRen; "lighting\\2x\\p\\renderNormals.p.hlsl"
0x7D09F1: mov     [esp+2B48h+var_17D0], offset aClear_0; "CLEAR"
0x7D09FC: mov     [esp+2B48h+var_17CC], esi
0x7D0A03: mov     [esp+2B48h+var_17C8], edi
0x7D0A0A: call    __memset
0x7D0A0F: push    44h ; 'D'
0x7D0A11: lea     edx, [esp+2B4Ch+var_1780]
0x7D0A18: push    edi
0x7D0A19: push    edx
0x7D0A1A: mov     [esp+2B54h+var_1788], ebx
0x7D0A21: mov     [esp+2B54h+var_1784], edi
0x7D0A28: call    __memset
0x7D0A2D: push    3Ch ; '<'
0x7D0A2F: lea     eax, [esp+2B58h+var_172C]
0x7D0A36: push    edi
0x7D0A37: push    eax
0x7D0A38: mov     [esp+2B60h+var_173C], ebx
0x7D0A3F: mov     [esp+2B60h+var_1738], offset aLandalpha; "LANDALPHA"
0x7D0A4A: mov     [esp+2B60h+var_1734], esi
0x7D0A51: mov     [esp+2B60h+var_1730], edi
0x7D0A58: call    __memset
0x7D0A5D: mov     [esp+2B60h+var_16F0], ebx
0x7D0A64: mov     [esp+2B60h+var_16EC], offset aLandalpha; "LANDALPHA"
0x7D0A6F: mov     [esp+2B60h+var_16E8], esi
0x7D0A76: mov     [esp+2B60h+var_16E4], offset aLandlo; "LANDLO"
0x7D0A81: mov     [esp+2B60h+var_16E0], esi
0x7D0A88: mov     [esp+2B60h+var_16DC], edi
0x7D0A8F: push    34h ; '4'
0x7D0A91: lea     ecx, [esp+2B64h+var_16D8]
0x7D0A98: push    edi
0x7D0A99: push    ecx
0x7D0A9A: call    __memset
0x7D0A9F: push    3Ch ; '<'
0x7D0AA1: lea     edx, [esp+2B70h+var_1694]
0x7D0AA8: push    edi
0x7D0AA9: push    edx
0x7D0AAA: mov     [esp+2B78h+var_16A4], ebx
0x7D0AB1: mov     [esp+2B78h+var_16A0], ebp
0x7D0AB8: mov     [esp+2B78h+var_169C], esi
0x7D0ABF: mov     [esp+2B78h+var_1698], edi
0x7D0AC6: call    __memset
0x7D0ACB: push    34h ; '4'
0x7D0ACD: lea     eax, [esp+2B7Ch+var_1640]
0x7D0AD4: push    edi
0x7D0AD5: push    eax
0x7D0AD6: mov     [esp+2B84h+var_1658], ebx
0x7D0ADD: mov     [esp+2B84h+var_1654], offset aLandalpha; "LANDALPHA"
0x7D0AE8: mov     [esp+2B84h+var_1650], esi
0x7D0AEF: mov     [esp+2B84h+var_164C], ebp
0x7D0AF6: mov     [esp+2B84h+var_1648], esi
0x7D0AFD: mov     [esp+2B84h+var_1644], edi
0x7D0B04: call    __memset
0x7D0B09: add     esp, 48h
0x7D0B0C: push    3Ch ; '<'
0x7D0B0E: lea     ecx, [esp+2B40h+var_15FC]
0x7D0B15: push    edi
0x7D0B16: mov     ebp, offset aPtlight; "PTLIGHT"
0x7D0B1B: push    ecx
0x7D0B1C: mov     [esp+2B48h+var_160C], ebx
0x7D0B23: mov     [esp+2B48h+var_1608], ebp
0x7D0B2A: mov     [esp+2B48h+var_1604], esi
0x7D0B31: mov     [esp+2B48h+var_1600], edi
0x7D0B38: call    __memset
0x7D0B3D: push    34h ; '4'
0x7D0B3F: lea     edx, [esp+2B4Ch+var_15A8]
0x7D0B46: push    edi
0x7D0B47: push    edx
0x7D0B48: mov     [esp+2B54h+var_15C0], ebx
0x7D0B4F: mov     [esp+2B54h+var_15BC], offset aLandalpha; "LANDALPHA"
0x7D0B5A: mov     [esp+2B54h+var_15B8], esi
0x7D0B61: mov     [esp+2B54h+var_15B4], ebp
0x7D0B68: mov     [esp+2B54h+var_15B0], esi
0x7D0B6F: mov     [esp+2B54h+var_15AC], edi
0x7D0B76: call    __memset
0x7D0B7B: push    44h ; 'D'
0x7D0B7D: lea     eax, [esp+2B58h+var_156C]
0x7D0B84: push    edi
0x7D0B85: mov     ebx, offset aLighting2xPLoc; "lighting\\2x\\p\\localMap.p.hlsl"
0x7D0B8A: push    eax
0x7D0B8B: mov     [esp+2B60h+var_1574], ebx
0x7D0B92: mov     [esp+2B60h+var_1570], edi
0x7D0B99: call    __memset
0x7D0B9E: push    3Ch ; '<'
0x7D0BA0: lea     ecx, [esp+2B64h+var_1518]
0x7D0BA7: push    edi
0x7D0BA8: push    ecx
0x7D0BA9: mov     [esp+2B6Ch+var_1528], ebx
0x7D0BB0: mov     [esp+2B6Ch+var_1524], offset aClear_0; "CLEAR"
0x7D0BBB: mov     [esp+2B6Ch+var_1520], esi
0x7D0BC2: mov     [esp+2B6Ch+var_151C], edi
0x7D0BC9: call    __memset
0x7D0BCE: push    3Ch ; '<'
0x7D0BD0: lea     edx, [esp+2B70h+var_14CC]
0x7D0BD7: push    edi
0x7D0BD8: push    edx
0x7D0BD9: mov     [esp+2B78h+var_14DC], offset aLighting1xPTex; "lighting\\1x\\p\\texEffect.p.hlsl"
0x7D0BE4: mov     [esp+2B78h+var_14D8], offset aHq; "HQ"
0x7D0BEF: mov     [esp+2B78h+var_14D4], esi
0x7D0BF6: mov     [esp+2B78h+var_14D0], edi
0x7D0BFD: call    __memset
0x7D0C02: mov     ebp, offset aDepthbias; "DEPTHBIAS"
0x7D0C07: mov     ebx, offset a0_1; "-0.1"
0x7D0C0C: add     esp, 3Ch
0x7D0C0F: mov     [esp+2B3Ch+var_1490], offset aLighting2xPSim; "lighting\\2x\\p\\SimpleShadow.p.hlsl"
0x7D0C1A: mov     [esp+2B3Ch+var_148C], offset aShadowmap; "SHADOWMAP"
0x7D0C25: mov     [esp+2B3Ch+var_1488], esi
0x7D0C2C: mov     [esp+2B3Ch+var_1484], ebp
0x7D0C33: mov     [esp+2B3Ch+var_1480], ebx
0x7D0C3A: mov     ecx, offset a1; "1"
0x7D0C3F: mov     edx, offset aSample; "SAMPLE"
0x7D0C44: mov     eax, offset aPasses; "PASSES"
0x7D0C49: mov     [esp+2B3Ch+var_147C], edx
0x7D0C50: mov     [esp+2B3Ch+var_1478], ecx
0x7D0C57: mov     [esp+2B3Ch+var_1474], eax
0x7D0C5E: mov     [esp+2B3Ch+var_1470], ecx
0x7D0C65: mov     [esp+2B3Ch+var_146C], edi
0x7D0C6C: mov     [esp+2B3Ch+var_1468], edi
0x7D0C73: mov     [esp+2B3Ch+var_1464], edi
0x7D0C7A: mov     [esp+2B3Ch+var_1460], edi
0x7D0C81: mov     [esp+2B3Ch+var_145C], edi
0x7D0C88: mov     [esp+2B3Ch+var_1458], edi
0x7D0C8F: mov     [esp+2B3Ch+var_1454], edi
0x7D0C96: mov     [esp+2B3Ch+var_1450], edi
0x7D0C9D: mov     [esp+2B3Ch+var_144C], edi
0x7D0CA4: mov     [esp+2B3Ch+var_1448], edi
0x7D0CAB: mov     [esp+2B3Ch+var_1444], offset aLighting2xPSim; "lighting\\2x\\p\\SimpleShadow.p.hlsl"
0x7D0CB6: mov     [esp+2B3Ch+var_1440], offset aShadowmap; "SHADOWMAP"
0x7D0CC1: mov     [esp+2B3Ch+var_143C], esi
0x7D0CC8: mov     [esp+2B3Ch+var_1438], ebp
0x7D0CCF: mov     [esp+2B3Ch+var_1434], ebx
0x7D0CD6: mov     [esp+2B3Ch+var_1430], edx
0x7D0CDD: mov     [esp+2B3Ch+var_142C], ecx
0x7D0CE4: mov     [esp+2B3Ch+var_1428], eax
0x7D0CEB: mov     [esp+2B3Ch+var_1424], ecx
0x7D0CF2: mov     [esp+2B3Ch+var_1420], offset aAlphatest; "ALPHATEST"
0x7D0CFD: mov     [esp+2B3Ch+var_141C], esi
0x7D0D04: mov     [esp+2B3Ch+var_1418], edi
0x7D0D0B: mov     [esp+2B3Ch+var_1414], edi
0x7D0D12: mov     [esp+2B3Ch+var_1410], edi
0x7D0D19: mov     [esp+2B3Ch+var_140C], edi
0x7D0D20: mov     [esp+2B3Ch+var_1408], edi
0x7D0D27: mov     [esp+2B3Ch+var_1404], edi
0x7D0D2E: mov     [esp+2B3Ch+var_1400], edi
0x7D0D35: mov     [esp+2B3Ch+var_13FC], edi
0x7D0D3C: mov     [esp+2B3Ch+var_13F8], offset aLighting2xPSim; "lighting\\2x\\p\\SimpleShadow.p.hlsl"
0x7D0D47: mov     [esp+2B3Ch+var_13F4], offset aShadowmap; "SHADOWMAP"
0x7D0D52: mov     [esp+2B3Ch+var_13F0], esi
0x7D0D59: mov     [esp+2B3Ch+var_13EC], ebp
0x7D0D60: mov     [esp+2B3Ch+var_13E8], ebx
0x7D0D67: mov     [esp+2B3Ch+var_13E4], edx
0x7D0D6E: mov     [esp+2B3Ch+var_13E0], offset a4; "4"
0x7D0D79: mov     [esp+2B3Ch+var_13DC], eax
0x7D0D80: mov     [esp+2B3Ch+var_13D8], ecx
0x7D0D87: mov     [esp+2B3Ch+var_13D4], edi
0x7D0D8E: mov     [esp+2B3Ch+var_13D0], edi
0x7D0D95: mov     [esp+2B3Ch+var_13CC], edi
0x7D0D9C: mov     [esp+2B3Ch+var_13C8], edi
0x7D0DA3: mov     [esp+2B3Ch+var_13C4], edi
0x7D0DAA: mov     [esp+2B3Ch+var_13C0], edi
0x7D0DB1: mov     [esp+2B3Ch+var_13BC], edi
0x7D0DB8: mov     [esp+2B3Ch+var_13B8], edi
0x7D0DBF: mov     [esp+2B3Ch+var_13B4], edi
0x7D0DC6: mov     [esp+2B3Ch+var_13B0], edi
0x7D0DCD: mov     [esp+2B3Ch+var_13AC], offset aLighting2xPSim; "lighting\\2x\\p\\SimpleShadow.p.hlsl"
0x7D0DD8: mov     [esp+2B3Ch+var_13A8], offset aShadowmap; "SHADOWMAP"
0x7D0DE3: mov     [esp+2B3Ch+var_13A4], esi
0x7D0DEA: mov     [esp+2B3Ch+var_13A0], ebp
0x7D0DF1: mov     [esp+2B3Ch+var_139C], ebx
0x7D0DF8: mov     [esp+2B3Ch+var_1398], edx
0x7D0DFF: mov     [esp+2B3Ch+var_1394], offset a4; "4"
0x7D0E0A: mov     [esp+2B3Ch+var_1390], eax
0x7D0E11: mov     [esp+2B3Ch+var_138C], ecx
0x7D0E18: mov     [esp+2B3Ch+var_1388], offset aAlphatest; "ALPHATEST"
0x7D0E23: mov     [esp+2B3Ch+var_1384], esi
0x7D0E2A: mov     [esp+2B3Ch+var_1380], edi
0x7D0E31: mov     [esp+2B3Ch+var_137C], edi
0x7D0E38: mov     [esp+2B3Ch+var_1378], edi
0x7D0E3F: mov     [esp+2B3Ch+var_1374], edi
0x7D0E46: mov     [esp+2B3Ch+var_1370], edi
0x7D0E4D: mov     [esp+2B3Ch+var_136C], edi
0x7D0E54: mov     [esp+2B3Ch+var_1368], edi
0x7D0E5B: mov     [esp+2B3Ch+var_1364], edi
0x7D0E62: mov     [esp+2B3Ch+var_1360], offset aLighting2xPSim; "lighting\\2x\\p\\SimpleShadow.p.hlsl"
0x7D0E6D: mov     [esp+2B3Ch+var_135C], offset aShadowmap; "SHADOWMAP"
0x7D0E78: mov     [esp+2B3Ch+var_1358], esi
0x7D0E7F: mov     [esp+2B3Ch+var_1354], ebp
0x7D0E86: mov     [esp+2B3Ch+var_1350], ebx
0x7D0E8D: mov     [esp+2B3Ch+var_134C], edx
0x7D0E94: mov     [esp+2B3Ch+var_1348], offset a4; "4"
0x7D0E9F: mov     ecx, offset a2_0; "2"
0x7D0EA4: mov     [esp+2B3Ch+var_130C], esi
0x7D0EAB: mov     [esp+2B3Ch+var_1304], ebx
0x7D0EB2: mov     [esp+2B3Ch+var_12EC], esi
0x7D0EB9: mov     [esp+2B3Ch+var_1344], eax
0x7D0EC0: mov     [esp+2B3Ch+var_1340], ecx
0x7D0EC7: mov     [esp+2B3Ch+var_133C], edi
0x7D0ECE: mov     [esp+2B3Ch+var_1338], edi
0x7D0ED5: mov     [esp+2B3Ch+var_1334], edi
0x7D0EDC: mov     [esp+2B3Ch+var_1330], edi
0x7D0EE3: mov     [esp+2B3Ch+var_132C], edi
0x7D0EEA: mov     [esp+2B3Ch+var_1328], edi
0x7D0EF1: mov     [esp+2B3Ch+var_1324], edi
0x7D0EF8: mov     [esp+2B3Ch+var_1320], edi
0x7D0EFF: mov     [esp+2B3Ch+var_131C], edi
0x7D0F06: mov     [esp+2B3Ch+var_1318], edi
0x7D0F0D: mov     [esp+2B3Ch+var_1314], offset aLighting2xPSim; "lighting\\2x\\p\\SimpleShadow.p.hlsl"
0x7D0F18: mov     [esp+2B3Ch+var_1310], offset aShadowmap; "SHADOWMAP"
0x7D0F23: mov     [esp+2B3Ch+var_1308], ebp
0x7D0F2A: mov     [esp+2B3Ch+var_1300], edx
0x7D0F31: mov     [esp+2B3Ch+var_12FC], offset a4; "4"
0x7D0F3C: mov     [esp+2B3Ch+var_12F8], eax
0x7D0F43: mov     [esp+2B3Ch+var_12F4], ecx
0x7D0F4A: mov     [esp+2B3Ch+var_12F0], offset aAlphatest; "ALPHATEST"
0x7D0F55: mov     [esp+2B3Ch+var_12E8], edi
0x7D0F5C: mov     [esp+2B3Ch+var_12E4], edi
0x7D0F63: mov     [esp+2B3Ch+var_12E0], edi
0x7D0F6A: mov     [esp+2B3Ch+var_12DC], edi
0x7D0F71: mov     [esp+2B3Ch+var_12D8], edi
0x7D0F78: mov     [esp+2B3Ch+var_12D4], edi
0x7D0F7F: mov     [esp+2B3Ch+var_12D0], edi
0x7D0F86: mov     [esp+2B3Ch+var_12CC], edi
0x7D0F8D: xor     esi, esi
0x7D0F8F: lea     ebx, [esp+2B3Ch+var_12C8]
0x7D0F96: mov     eax, [ebx]
0x7D0F98: cmp     eax, edi
0x7D0F9A: jz      loc_7D1032
0x7D0FA0: lea     ecx, [esp+2B3Ch+FileName]
0x7D0FA7: push    ecx; int
0x7D0FA8: push    eax; FullPath
0x7D0FA9: call    sub_801030
0x7D0FAE: push    esi
0x7D0FAF: lea     edx, [esp+2B48h+var_4CC]
0x7D0FB6: push    offset aSls103i_pso; "SLS1%03i.pso"
0x7D0FBB: push    edx
0x7D0FBC: call    __sprintf
0x7D0FC1: add     esp, 14h
0x7D0FC4: push    1; int
0x7D0FC6: push    edi; int
0x7D0FC7: lea     eax, [esp+2B44h+var_4CC]
0x7D0FCE: push    eax; int
0x7D0FCF: push    offset aPs_2_0; "ps_2_0"
0x7D0FD4: lea     ecx, [ebx+4]
0x7D0FD7: push    ecx; int
0x7D0FD8: mov     ecx, [esp+2B50h+var_2B28]
0x7D0FDC: lea     edx, [esp+2B50h+FileName]
0x7D0FE3: push    edx; lpFileName
0x7D0FE4: call    CreatePixelShader
0x7D0FE9: mov     ebp, ds:0B45088h[esi*4]
0x7D0FF0: cmp     ebp, eax
0x7D0FF2: mov     [esp+2B3Ch+var_2B2C], eax
0x7D0FF6: jz      short loc_7D1032
0x7D0FF8: cmp     ebp, edi
0x7D0FFA: jz      short loc_7D101D
0x7D0FFC: lea     eax, [ebp+4]
0x7D0FFF: push    eax; lpAddend
0x7D1000: call    dword ptr ds:0A2807Ch
0x7D1006: test    eax, eax
0x7D1008: jnz     short loc_7D1019
0x7D100A: cmp     ebp, edi
0x7D100C: jz      short loc_7D1019
0x7D100E: mov     edx, [ebp+0]
0x7D1011: mov     eax, [edx]
0x7D1013: push    1
0x7D1015: mov     ecx, ebp
0x7D1017: call    eax
0x7D1019: mov     eax, [esp+2B3Ch+var_2B2C]
0x7D101D: cmp     eax, edi
0x7D101F: mov     ds:0B45088h[esi*4], eax
0x7D1026: jz      short loc_7D1032
0x7D1028: add     eax, 4
0x7D102B: push    eax; lpAddend
0x7D102C: call    dword ptr ds:0A28078h
0x7D1032: add     esi, 1
0x7D1035: add     ebx, 4Ch ; 'L'
0x7D1038: cmp     esi, 2Fh ; '/'
0x7D103B: jl      loc_7D0F96
0x7D1041: mov     ecx, ds:0B42F48h
0x7D1047: cmp     ecx, 2
0x7D104A: mov     dword ptr [esp+2B3Ch+var_2B24], ecx
0x7D104E: jl      loc_7D1151
0x7D1054: lea     ebx, [esp+2B3Ch+var_2B20]
0x7D1058: xor     esi, esi
0x7D105A: mov     [esp+2B3Ch+var_2B2C], ebx
0x7D105E: jmp     short loc_7D1064
0x7D1060: mov     ecx, dword ptr [esp+2B3Ch+var_2B24]
0x7D1064: mov     eax, [ebx]
0x7D1066: cmp     eax, edi
0x7D1068: jnz     short loc_7D10A1
0x7D106A: mov     ebx, ds:0B45144h[esi*4]
0x7D1071: cmp     ebx, edi
0x7D1073: jz      loc_7D113A
0x7D1079: lea     ecx, [ebx+4]
0x7D107C: push    ecx; lpAddend
0x7D107D: call    dword ptr ds:0A2807Ch
0x7D1083: test    eax, eax
0x7D1085: jnz     short loc_7D1095
0x7D1087: cmp     ebx, edi
0x7D1089: jz      short loc_7D1095
0x7D108B: mov     edx, [ebx]
0x7D108D: mov     eax, [edx]
0x7D108F: push    1
0x7D1091: mov     ecx, ebx
0x7D1093: call    eax
0x7D1095: mov     ds:0B45144h[esi*4], edi
0x7D109C: jmp     loc_7D113A
0x7D10A1: cmp     esi, 4Dh ; 'M'
0x7D10A4: jle     short loc_7D10AF
0x7D10A6: cmp     ecx, 5
0x7D10A9: jl      loc_7D113A
0x7D10AF: lea     ecx, [esp+2B3Ch+FileName]
0x7D10B6: push    ecx; int
0x7D10B7: push    eax; FullPath
0x7D10B8: call    sub_801030
0x7D10BD: push    esi
0x7D10BE: lea     edx, [esp+2B48h+var_4CC]
0x7D10C5: push    offset aSls203i_pso; "SLS2%03i.pso"
0x7D10CA: push    edx
0x7D10CB: call    __sprintf
0x7D10D0: add     esp, 14h
0x7D10D3: push    1; int
0x7D10D5: push    edi; int
0x7D10D6: lea     eax, [esp+2B44h+var_4CC]
0x7D10DD: push    eax; int
0x7D10DE: push    offset aPs_2_0; "ps_2_0"
0x7D10E3: add     ebx, 4
0x7D10E6: push    ebx; int
0x7D10E7: lea     ecx, [esp+2B50h+FileName]
0x7D10EE: push    ecx; lpFileName
0x7D10EF: mov     ecx, [esp+2B54h+var_2B28]
0x7D10F3: call    CreatePixelShader
0x7D10F8: mov     ebx, ds:0B45144h[esi*4]
0x7D10FF: mov     ebp, eax
0x7D1101: cmp     ebx, ebp
0x7D1103: jz      short loc_7D113A
0x7D1105: cmp     ebx, edi
0x7D1107: jz      short loc_7D1125
0x7D1109: lea     edx, [ebx+4]
0x7D110C: push    edx; lpAddend
0x7D110D: call    dword ptr ds:0A2807Ch
0x7D1113: test    eax, eax
0x7D1115: jnz     short loc_7D1125
0x7D1117: cmp     ebx, edi
0x7D1119: jz      short loc_7D1125
0x7D111B: mov     eax, [ebx]
0x7D111D: mov     edx, [eax]
0x7D111F: push    1
0x7D1121: mov     ecx, ebx
0x7D1123: call    edx
0x7D1125: cmp     ebp, edi
0x7D1127: mov     ds:0B45144h[esi*4], ebp
0x7D112E: jz      short loc_7D113A
0x7D1130: add     ebp, 4
0x7D1133: push    ebp; lpAddend
0x7D1134: call    dword ptr ds:0A28078h
0x7D113A: mov     ebx, [esp+2B3Ch+var_2B2C]
0x7D113E: add     esi, 1
0x7D1141: add     ebx, 4Ch ; 'L'
0x7D1144: cmp     esi, 52h ; 'R'
0x7D1147: mov     [esp+2B3Ch+var_2B2C], ebx
0x7D114B: jl      loc_7D1060
0x7D1151: mov     ecx, [esp+2B3Ch+var_4]
0x7D1158: pop     edi
0x7D1159: pop     esi
0x7D115A: pop     ebp
0x7D115B: pop     ebx
0x7D115C: xor     ecx, esp
0x7D115E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7D1163: add     esp, 2B2Ch
0x7D1169: retn
