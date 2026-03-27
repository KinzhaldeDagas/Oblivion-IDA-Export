0x7FD560: sub     esp, 0B98h
0x7FD566: mov     eax, ds:0B30AACh
0x7FD56B: xor     eax, esp
0x7FD56D: mov     [esp+0B98h+var_4], eax
0x7FD574: push    ebx
0x7FD575: push    ebp
0x7FD576: push    esi
0x7FD577: push    edi
0x7FD578: xor     esi, esi
0x7FD57A: push    44h ; 'D'
0x7FD57C: lea     eax, [esp+0BACh+var_B84]
0x7FD580: push    esi
0x7FD581: mov     ebx, offset aLighting3xSm3l; "lighting\\3x\\SM3Lighting.v.hlsl"
0x7FD586: push    eax
0x7FD587: mov     [esp+0BB4h+var_B94], ecx
0x7FD58B: mov     [esp+0BB4h+var_B8C], ebx
0x7FD58F: mov     [esp+0BB4h+var_B88], esi
0x7FD593: call    __memset
0x7FD598: push    3Ch ; '<'
0x7FD59A: lea     ecx, [esp+0BB8h+var_B30]
0x7FD5A1: push    esi
0x7FD5A2: mov     ebp, offset aSkin_1; "SKIN"
0x7FD5A7: mov     edi, offset EmptyString
0x7FD5AC: push    ecx
0x7FD5AD: mov     [esp+0BC0h+var_B40], ebx
0x7FD5B4: mov     [esp+0BC0h+var_B3C], ebp
0x7FD5BB: mov     [esp+0BC0h+var_B38], edi
0x7FD5C2: mov     [esp+0BC0h+var_B34], esi
0x7FD5C9: call    __memset
0x7FD5CE: push    3Ch ; '<'
0x7FD5D0: lea     edx, [esp+0BC4h+var_AE4]
0x7FD5D7: push    esi
0x7FD5D8: push    edx
0x7FD5D9: mov     [esp+0BCCh+var_AF4], ebx
0x7FD5E0: mov     [esp+0BCCh+var_AF0], offset aVc; "VC"
0x7FD5EB: mov     [esp+0BCCh+var_AEC], edi
0x7FD5F2: mov     [esp+0BCCh+var_AE8], esi
0x7FD5F9: call    __memset
0x7FD5FE: push    34h ; '4'
0x7FD600: lea     eax, [esp+0BD0h+var_A90]
0x7FD607: push    esi
0x7FD608: push    eax
0x7FD609: mov     [esp+0BD8h+var_AA8], ebx
0x7FD610: mov     [esp+0BD8h+var_AA4], ebp
0x7FD617: mov     [esp+0BD8h+var_AA0], edi
0x7FD61E: mov     [esp+0BD8h+var_A9C], offset aVc; "VC"
0x7FD629: mov     [esp+0BD8h+var_A98], edi
0x7FD630: mov     [esp+0BD8h+var_A94], esi
0x7FD637: call    __memset
0x7FD63C: push    3Ch ; '<'
0x7FD63E: lea     ecx, [esp+0BDCh+var_A4C]
0x7FD645: push    esi
0x7FD646: push    ecx
0x7FD647: mov     [esp+0BE4h+var_A5C], ebx
0x7FD64E: mov     [esp+0BE4h+var_A58], offset aProjshadow; "PROJSHADOW"
0x7FD659: mov     [esp+0BE4h+var_A54], edi
0x7FD660: mov     [esp+0BE4h+var_A50], esi
0x7FD667: call    __memset
0x7FD66C: push    34h ; '4'
0x7FD66E: lea     edx, [esp+0BE8h+var_9F8]
0x7FD675: push    esi
0x7FD676: push    edx
0x7FD677: mov     [esp+0BF0h+var_A10], ebx
0x7FD67E: mov     [esp+0BF0h+var_A0C], ebp
0x7FD685: mov     [esp+0BF0h+var_A08], edi
0x7FD68C: mov     [esp+0BF0h+var_A04], offset aProjshadow; "PROJSHADOW"
0x7FD697: mov     [esp+0BF0h+var_A00], edi
0x7FD69E: mov     [esp+0BF0h+var_9FC], esi
0x7FD6A5: call    __memset
0x7FD6AA: add     esp, 48h
0x7FD6AD: push    34h ; '4'
0x7FD6AF: lea     eax, [esp+0BACh+var_9AC]
0x7FD6B6: push    esi
0x7FD6B7: push    eax
0x7FD6B8: mov     [esp+0BB4h+var_9C4], ebx
0x7FD6BF: mov     [esp+0BB4h+var_9C0], offset aVc; "VC"
0x7FD6CA: mov     [esp+0BB4h+var_9BC], edi
0x7FD6D1: mov     [esp+0BB4h+var_9B8], offset aProjshadow; "PROJSHADOW"
0x7FD6DC: mov     [esp+0BB4h+var_9B4], edi
0x7FD6E3: mov     [esp+0BB4h+var_9B0], esi
0x7FD6EA: call    __memset
0x7FD6EF: mov     [esp+0BB4h+var_978], ebx
0x7FD6F6: mov     [esp+0BB4h+var_974], ebp
0x7FD6FD: mov     [esp+0BB4h+var_970], edi
0x7FD704: mov     [esp+0BB4h+var_96C], offset aVc; "VC"
0x7FD70F: push    2Ch ; ','
0x7FD711: lea     ecx, [esp+0BB8h+var_958]
0x7FD718: push    esi
0x7FD719: push    ecx
0x7FD71A: mov     [esp+0BC0h+var_968], edi
0x7FD721: mov     [esp+0BC0h+var_964], offset aProjshadow; "PROJSHADOW"
0x7FD72C: mov     [esp+0BC0h+var_960], edi
0x7FD733: mov     [esp+0BC0h+var_95C], esi
0x7FD73A: call    __memset
0x7FD73F: push    34h ; '4'
0x7FD741: lea     edx, [esp+0BC4h+var_914]
0x7FD748: push    esi
0x7FD749: mov     ebx, offset aSm3; "SM3"
0x7FD74E: push    edx
0x7FD74F: mov     [esp+0BCCh+var_92C], offset aLighting2xVEnv; "lighting\\2x\\v\\EnvMap.v.hlsl"
0x7FD75A: mov     [esp+0BCCh+var_928], ebx
0x7FD761: mov     [esp+0BCCh+var_924], edi
0x7FD768: mov     [esp+0BCCh+var_920], offset aEnvmap; "ENVMAP"
0x7FD773: mov     [esp+0BCCh+var_91C], esi
0x7FD77A: mov     [esp+0BCCh+var_918], esi
0x7FD781: call    __memset
0x7FD786: push    2Ch ; ','
0x7FD788: lea     eax, [esp+0BD0h+var_8C0]
0x7FD78F: push    esi
0x7FD790: push    eax
0x7FD791: mov     [esp+0BD8h+var_8E0], offset aLighting2xVEnv; "lighting\\2x\\v\\EnvMap.v.hlsl"
0x7FD79C: mov     [esp+0BD8h+var_8DC], ebx
0x7FD7A3: mov     [esp+0BD8h+var_8D8], edi
0x7FD7AA: mov     [esp+0BD8h+var_8D4], offset aEnvmap; "ENVMAP"
0x7FD7B5: mov     [esp+0BD8h+var_8D0], esi
0x7FD7BC: mov     [esp+0BD8h+var_8CC], offset aVc; "VC"
0x7FD7C7: mov     [esp+0BD8h+var_8C8], edi
0x7FD7CE: mov     [esp+0BD8h+var_8C4], esi
0x7FD7D5: call    __memset
0x7FD7DA: push    2Ch ; ','
0x7FD7DC: lea     ecx, [esp+0BDCh+var_874]
0x7FD7E3: push    esi
0x7FD7E4: push    ecx
0x7FD7E5: mov     [esp+0BE4h+var_894], offset aLighting2xVEnv; "lighting\\2x\\v\\EnvMap.v.hlsl"
0x7FD7F0: mov     [esp+0BE4h+var_890], ebx
0x7FD7F7: mov     [esp+0BE4h+var_88C], edi
0x7FD7FE: mov     [esp+0BE4h+var_888], offset aEnvmap; "ENVMAP"
0x7FD809: mov     [esp+0BE4h+var_884], esi
0x7FD810: mov     [esp+0BE4h+var_880], ebp
0x7FD817: mov     [esp+0BE4h+var_87C], edi
0x7FD81E: mov     [esp+0BE4h+var_878], esi
0x7FD825: call    __memset
0x7FD82A: xor     eax, eax
0x7FD82C: mov     edx, offset aEnvmap; "ENVMAP"
0x7FD831: push    2Ch ; ','
0x7FD833: mov     ecx, offset aLighting2xVEnv; "lighting\\2x\\v\\EnvMap.v.hlsl"
0x7FD838: mov     [esp+0BE8h+var_83C], edx
0x7FD83F: mov     [esp+0BE8h+var_7F0], edx
0x7FD846: push    esi
0x7FD847: lea     edx, [esp+0BECh+var_7DC]
0x7FD84E: mov     [esp+0BECh+var_848], ecx
0x7FD855: mov     [esp+0BECh+var_844], ebx
0x7FD85C: mov     [esp+0BECh+var_840], edi
0x7FD863: mov     [esp+0BECh+var_838], esi
0x7FD86A: mov     [esp+0BECh+var_834], ebp
0x7FD871: mov     [esp+0BECh+var_830], edi
0x7FD878: mov     [esp+0BECh+var_82C], offset aVc; "VC"
0x7FD883: mov     [esp+0BECh+var_828], edi
0x7FD88A: mov     [esp+0BECh+var_824], esi
0x7FD891: mov     [esp+0BECh+var_820], eax
0x7FD898: mov     [esp+0BECh+var_81C], eax
0x7FD89F: mov     [esp+0BECh+var_818], eax
0x7FD8A6: mov     [esp+0BECh+var_814], eax
0x7FD8AD: mov     [esp+0BECh+var_810], eax
0x7FD8B4: mov     [esp+0BECh+var_80C], eax
0x7FD8BB: mov     [esp+0BECh+var_808], eax
0x7FD8C2: mov     [esp+0BECh+var_804], eax
0x7FD8C9: mov     [esp+0BECh+var_800], eax
0x7FD8D0: mov     [esp+0BECh+var_7FC], ecx
0x7FD8D7: mov     [esp+0BECh+var_7F8], ebx
0x7FD8DE: mov     [esp+0BECh+var_7F4], edi
0x7FD8E5: mov     [esp+0BECh+var_7EC], esi
0x7FD8EC: mov     [esp+0BECh+var_7E8], offset off_A90BE8
0x7FD8F7: mov     [esp+0BECh+var_7E4], esi
0x7FD8FE: mov     [esp+0BECh+var_7E0], esi
0x7FD905: push    edx
0x7FD906: call    __memset
0x7FD90B: add     esp, 48h
0x7FD90E: push    44h ; 'D'
0x7FD910: lea     eax, [esp+0BACh+var_7A8]
0x7FD917: push    esi
0x7FD918: push    eax
0x7FD919: mov     [esp+0BB4h+var_7B0], offset aLighting3xSm3s; "lighting\\3x\\SM3SimpleShadow.v.hlsl"
0x7FD924: mov     [esp+0BB4h+var_7AC], esi
0x7FD92B: call    __memset
0x7FD930: push    3Ch ; '<'
0x7FD932: lea     ecx, [esp+0BB8h+var_754]
0x7FD939: push    esi
0x7FD93A: push    ecx
0x7FD93B: mov     [esp+0BC0h+var_764], offset aLighting3xSm3s; "lighting\\3x\\SM3SimpleShadow.v.hlsl"
0x7FD946: mov     [esp+0BC0h+var_760], offset aVc; "VC"
0x7FD951: mov     [esp+0BC0h+var_75C], esi
0x7FD958: mov     [esp+0BC0h+var_758], esi
0x7FD95F: call    __memset
0x7FD964: push    3Ch ; '<'
0x7FD966: lea     edx, [esp+0BC4h+var_708]
0x7FD96D: push    esi
0x7FD96E: push    edx
0x7FD96F: mov     [esp+0BCCh+var_718], offset aLighting3xSm3s; "lighting\\3x\\SM3SimpleShadow.v.hlsl"
0x7FD97A: mov     [esp+0BCCh+var_714], ebp
0x7FD981: mov     [esp+0BCCh+var_710], edi
0x7FD988: mov     [esp+0BCCh+var_70C], esi
0x7FD98F: call    __memset
0x7FD994: push    34h ; '4'
0x7FD996: lea     eax, [esp+0BD0h+var_6B4]
0x7FD99D: push    esi
0x7FD99E: push    eax
0x7FD99F: mov     [esp+0BD8h+var_6CC], offset aLighting3xSm3s; "lighting\\3x\\SM3SimpleShadow.v.hlsl"
0x7FD9AA: mov     [esp+0BD8h+var_6C8], ebp
0x7FD9B1: mov     [esp+0BD8h+var_6C4], edi
0x7FD9B8: mov     [esp+0BD8h+var_6C0], offset aVc; "VC"
0x7FD9C3: mov     [esp+0BD8h+var_6BC], esi
0x7FD9CA: mov     [esp+0BD8h+var_6B8], esi
0x7FD9D1: call    __memset
0x7FD9D6: push    34h ; '4'
0x7FD9D8: lea     ecx, [esp+0BDCh+var_668]
0x7FD9DF: push    esi
0x7FD9E0: push    ecx
0x7FD9E1: mov     [esp+0BE4h+var_680], offset aLighting2xVD_0; "lighting\\2x\\v\\Decal.v.hlsl"
0x7FD9EC: mov     [esp+0BE4h+var_67C], ebx
0x7FD9F3: mov     [esp+0BE4h+var_678], esi
0x7FD9FA: mov     [esp+0BE4h+var_674], offset aMaxdecals; "MAXDECALS"
0x7FDA05: mov     [esp+0BE4h+var_670], offset a8; "8"
0x7FDA10: mov     [esp+0BE4h+var_66C], esi
0x7FDA17: call    __memset
0x7FDA1C: push    44h ; 'D'
0x7FDA1E: lea     edx, [esp+0BE8h+var_62C]
0x7FDA25: push    esi
0x7FDA26: push    edx
0x7FDA27: mov     [esp+0BF0h+var_634], offset aLighting3xSm3d; "lighting\\3x\\SM3DepthMap.v.hlsl"
0x7FDA32: mov     [esp+0BF0h+var_630], esi
0x7FDA39: call    __memset
0x7FDA3E: add     esp, 48h
0x7FDA41: push    3Ch ; '<'
0x7FDA43: lea     eax, [esp+0BACh+var_5D8]
0x7FDA4A: push    esi
0x7FDA4B: push    eax
0x7FDA4C: mov     [esp+0BB4h+var_5E8], offset aLighting3xSm3d; "lighting\\3x\\SM3DepthMap.v.hlsl"
0x7FDA57: mov     [esp+0BB4h+var_5E4], ebp
0x7FDA5E: mov     [esp+0BB4h+var_5E0], edi
0x7FDA65: mov     [esp+0BB4h+var_5DC], esi
0x7FDA6C: call    __memset
0x7FDA71: push    3Ch ; '<'
0x7FDA73: lea     ecx, [esp+0BB8h+var_58C]
0x7FDA7A: push    esi
0x7FDA7B: push    ecx
0x7FDA7C: mov     [esp+0BC0h+var_59C], offset aLighting2xVRen; "lighting\\2x\\v\\renderNormals.v.hlsl"
0x7FDA87: mov     [esp+0BC0h+var_598], ebx
0x7FDA8E: mov     [esp+0BC0h+var_594], esi
0x7FDA95: mov     [esp+0BC0h+var_590], esi
0x7FDA9C: call    __memset
0x7FDAA1: mov     [esp+0BC0h+var_550], offset aLighting2xVRen; "lighting\\2x\\v\\renderNormals.v.hlsl"
0x7FDAAC: mov     [esp+0BC0h+var_54C], ebx
0x7FDAB3: mov     [esp+0BC0h+var_548], esi
0x7FDABA: mov     [esp+0BC0h+var_544], ebp
0x7FDAC1: mov     [esp+0BC0h+var_540], edi
0x7FDAC8: mov     [esp+0BC0h+var_53C], esi
0x7FDACF: push    34h ; '4'
0x7FDAD1: lea     edx, [esp+0BC4h+var_538]
0x7FDAD8: push    esi
0x7FDAD9: push    edx
0x7FDADA: call    __memset
0x7FDADF: push    34h ; '4'
0x7FDAE1: lea     eax, [esp+0BD0h+var_4EC]
0x7FDAE8: push    esi
0x7FDAE9: push    eax
0x7FDAEA: mov     [esp+0BD8h+var_504], offset aLighting2xVRen; "lighting\\2x\\v\\renderNormals.v.hlsl"
0x7FDAF5: mov     [esp+0BD8h+var_500], ebx
0x7FDAFC: mov     [esp+0BD8h+var_4FC], esi
0x7FDB03: mov     [esp+0BD8h+var_4F8], offset aFire; "FIRE"
0x7FDB0E: mov     [esp+0BD8h+var_4F4], edi
0x7FDB15: mov     [esp+0BD8h+var_4F0], esi
0x7FDB1C: call    __memset
0x7FDB21: push    34h ; '4'
0x7FDB23: lea     ecx, [esp+0BDCh+var_4A0]
0x7FDB2A: push    esi
0x7FDB2B: push    ecx
0x7FDB2C: mov     [esp+0BE4h+var_4B8], offset aLighting2xVRen; "lighting\\2x\\v\\renderNormals.v.hlsl"
0x7FDB37: mov     [esp+0BE4h+var_4B4], ebx
0x7FDB3E: mov     [esp+0BE4h+var_4B0], esi
0x7FDB45: mov     [esp+0BE4h+var_4AC], offset aClear_0; "CLEAR"
0x7FDB50: mov     [esp+0BE4h+var_4A8], edi
0x7FDB57: mov     [esp+0BE4h+var_4A4], esi
0x7FDB5E: call    __memset
0x7FDB63: push    2Ch ; ','
0x7FDB65: lea     edx, [esp+0BE8h+var_44C]
0x7FDB6C: push    esi
0x7FDB6D: push    edx
0x7FDB6E: mov     [esp+0BF0h+var_46C], offset aLighting2xVRen; "lighting\\2x\\v\\renderNormals.v.hlsl"
0x7FDB79: mov     [esp+0BF0h+var_468], ebx
0x7FDB80: mov     [esp+0BF0h+var_464], esi
0x7FDB87: mov     [esp+0BF0h+var_460], offset aClear_0; "CLEAR"
0x7FDB92: mov     [esp+0BF0h+var_45C], edi
0x7FDB99: mov     [esp+0BF0h+var_458], ebp
0x7FDBA0: mov     [esp+0BF0h+var_454], edi
0x7FDBA7: mov     [esp+0BF0h+var_450], esi
0x7FDBAE: call    __memset
0x7FDBB3: add     esp, 48h
0x7FDBB6: push    3Ch ; '<'
0x7FDBB8: lea     eax, [esp+0BACh+var_410]
0x7FDBBF: push    esi
0x7FDBC0: push    eax
0x7FDBC1: mov     [esp+0BB4h+var_420], offset aLighting2xVLoc; "lighting\\2x\\v\\localMap.v.hlsl"
0x7FDBCC: mov     [esp+0BB4h+var_41C], ebx
0x7FDBD3: mov     [esp+0BB4h+var_418], esi
0x7FDBDA: mov     [esp+0BB4h+var_414], esi
0x7FDBE1: call    __memset
0x7FDBE6: push    34h ; '4'
0x7FDBE8: lea     ecx, [esp+0BB8h+var_3BC]
0x7FDBEF: push    esi
0x7FDBF0: push    ecx
0x7FDBF1: mov     [esp+0BC0h+var_3D4], offset aLighting2xVLoc; "lighting\\2x\\v\\localMap.v.hlsl"
0x7FDBFC: mov     [esp+0BC0h+var_3D0], ebx
0x7FDC03: mov     [esp+0BC0h+var_3CC], esi
0x7FDC0A: mov     [esp+0BC0h+var_3C8], ebp
0x7FDC11: mov     [esp+0BC0h+var_3C4], edi
0x7FDC18: mov     [esp+0BC0h+var_3C0], esi
0x7FDC1F: call    __memset
0x7FDC24: push    34h ; '4'
0x7FDC26: lea     edx, [esp+0BC4h+var_370]
0x7FDC2D: push    esi
0x7FDC2E: push    edx
0x7FDC2F: mov     [esp+0BCCh+var_388], offset aLighting2xVLoc; "lighting\\2x\\v\\localMap.v.hlsl"
0x7FDC3A: mov     [esp+0BCCh+var_384], ebx
0x7FDC41: mov     [esp+0BCCh+var_380], esi
0x7FDC48: mov     [esp+0BCCh+var_37C], offset aClear_0; "CLEAR"
0x7FDC53: mov     [esp+0BCCh+var_378], edi
0x7FDC5A: mov     [esp+0BCCh+var_374], esi
0x7FDC61: call    __memset
0x7FDC66: push    44h ; 'D'
0x7FDC68: lea     eax, [esp+0BD0h+var_334]
0x7FDC6F: push    esi
0x7FDC70: mov     ebx, offset aLighting1xVTex; "lighting\\1x\\v\\texEffect.v.hlsl"
0x7FDC75: push    eax
0x7FDC76: mov     [esp+0BD8h+var_33C], ebx
0x7FDC7D: mov     [esp+0BD8h+var_338], esi
0x7FDC84: call    __memset
0x7FDC89: mov     [esp+0BD8h+var_2F0], ebx
0x7FDC90: push    3Ch ; '<'
0x7FDC92: lea     ecx, [esp+0BDCh+var_2E0]
0x7FDC99: push    esi
0x7FDC9A: push    ecx
0x7FDC9B: mov     [esp+0BE4h+var_2EC], ebp
0x7FDCA2: mov     [esp+0BE4h+var_2E8], edi
0x7FDCA9: mov     [esp+0BE4h+var_2E4], esi
0x7FDCB0: call    __memset
0x7FDCB5: push    44h ; 'D'
0x7FDCB7: lea     edx, [esp+0BE8h+var_29C]
0x7FDCBE: push    esi
0x7FDCBF: mov     ebx, offset aLighting3xSm3z; "lighting\\3x\\SM3ZOnly.v.hlsl"
0x7FDCC4: push    edx
0x7FDCC5: mov     [esp+0BF0h+var_2A4], ebx
0x7FDCCC: mov     [esp+0BF0h+var_2A0], esi
0x7FDCD3: call    __memset
0x7FDCD8: add     esp, 48h
0x7FDCDB: push    3Ch ; '<'
0x7FDCDD: lea     eax, [esp+0BACh+var_248]
0x7FDCE4: push    esi
0x7FDCE5: push    eax
0x7FDCE6: mov     [esp+0BB4h+var_258], ebx
0x7FDCED: mov     [esp+0BB4h+var_254], ebp
0x7FDCF4: mov     [esp+0BB4h+var_250], edi
0x7FDCFB: mov     [esp+0BB4h+var_24C], esi
0x7FDD02: call    __memset
0x7FDD07: add     esp, 0Ch
0x7FDD0A: call    sub_7B47E0
0x7FDD0F: mov     [esp+0BA8h+var_B90], eax
0x7FDD13: xor     edi, edi
0x7FDD15: lea     ebx, [esp+0BA8h+var_B88]
0x7FDD19: lea     esp, [esp+0]
0x7FDD20: mov     edx, [ebx-4]
0x7FDD23: lea     ecx, [esp+0BA8h+FileName]
0x7FDD2A: push    ecx; int
0x7FDD2B: push    edx; FullPath
0x7FDD2C: call    sub_801030
0x7FDD31: push    edi
0x7FDD32: lea     eax, [esp+0BB4h+var_20C]
0x7FDD39: push    offset aSm303i_vso; "SM3%03i.vso"
0x7FDD3E: push    eax
0x7FDD3F: call    __sprintf
0x7FDD44: mov     edx, [esp+0BBCh+var_B90]
0x7FDD48: add     esp, 14h
0x7FDD4B: push    esi; int
0x7FDD4C: push    esi; int
0x7FDD4D: lea     ecx, [esp+0BB0h+var_20C]
0x7FDD54: push    ecx; int
0x7FDD55: mov     ecx, [esp+0BB4h+var_B94]
0x7FDD59: push    edx; int
0x7FDD5A: push    ebx; int
0x7FDD5B: lea     eax, [esp+0BBCh+FileName]
0x7FDD62: push    eax; lpFileName
0x7FDD63: call    CreateVertexShader
0x7FDD68: mov     ebp, ds:0B47288h[edi*4]
0x7FDD6F: cmp     ebp, eax
0x7FDD71: mov     [esp+0BA8h+var_B98], eax
0x7FDD75: jz      short loc_7FDDB1
0x7FDD77: cmp     ebp, esi
0x7FDD79: jz      short loc_7FDD9C
0x7FDD7B: lea     ecx, [ebp+4]
0x7FDD7E: push    ecx; lpAddend
0x7FDD7F: call    dword ptr ds:0A2807Ch
0x7FDD85: test    eax, eax
0x7FDD87: jnz     short loc_7FDD98
0x7FDD89: cmp     ebp, esi
0x7FDD8B: jz      short loc_7FDD98
0x7FDD8D: mov     edx, [ebp+0]
0x7FDD90: mov     eax, [edx]
0x7FDD92: push    1
0x7FDD94: mov     ecx, ebp
0x7FDD96: call    eax
0x7FDD98: mov     eax, [esp+0BA8h+var_B98]
0x7FDD9C: cmp     eax, esi
0x7FDD9E: mov     ds:0B47288h[edi*4], eax
0x7FDDA5: jz      short loc_7FDDB1
0x7FDDA7: add     eax, 4
0x7FDDAA: push    eax; lpAddend
0x7FDDAB: call    dword ptr ds:0A28078h
0x7FDDB1: add     edi, 1
0x7FDDB4: add     ebx, 4Ch ; 'L'
0x7FDDB7: cmp     edi, 20h ; ' '
0x7FDDBA: jl      loc_7FDD20
0x7FDDC0: mov     ecx, [esp+0BA8h+var_4]
0x7FDDC7: pop     edi
0x7FDDC8: pop     esi
0x7FDDC9: pop     ebp
0x7FDDCA: pop     ebx
0x7FDDCB: xor     ecx, esp
0x7FDDCD: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7FDDD2: add     esp, 0B98h
0x7FDDD8: retn
