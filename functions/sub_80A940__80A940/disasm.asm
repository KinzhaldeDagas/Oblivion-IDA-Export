0x80A940: sub     esp, 510h
0x80A946: mov     eax, ds:0B30AACh
0x80A94B: xor     eax, esp
0x80A94D: mov     [esp+510h+var_4], eax
0x80A954: push    ebx
0x80A955: push    ebp
0x80A956: push    esi
0x80A957: push    edi
0x80A958: xor     ebp, ebp
0x80A95A: push    3Ch ; '<'
0x80A95C: lea     eax, [esp+524h+var_4F4]
0x80A960: push    ebp
0x80A961: mov     ebx, offset aLighting2xPAdt; "lighting\\2x\\p\\ADTS.p.hlsl"
0x80A966: mov     edi, offset aFacegenblend; "FACEGENBLEND"
0x80A96B: mov     esi, offset EmptyString
0x80A970: push    eax
0x80A971: mov     [esp+52Ch+var_508], ecx
0x80A975: mov     [esp+52Ch+var_504], ebx
0x80A979: mov     [esp+52Ch+var_500], edi
0x80A97D: mov     [esp+52Ch+var_4FC], esi
0x80A981: mov     [esp+52Ch+var_4F8], ebp
0x80A985: call    __memset
0x80A98A: push    34h ; '4'
0x80A98C: lea     ecx, [esp+530h+var_4A0]
0x80A993: push    ebp
0x80A994: push    ecx
0x80A995: mov     [esp+538h+var_4B8], ebx
0x80A99C: mov     [esp+538h+var_4B4], edi
0x80A9A3: mov     [esp+538h+var_4B0], esi
0x80A9AA: mov     [esp+538h+var_4AC], offset aProj_shadow; "PROJ_SHADOW"
0x80A9B5: mov     [esp+538h+var_4A8], esi
0x80A9BC: mov     [esp+538h+var_4A4], ebp
0x80A9C3: call    __memset
0x80A9C8: push    34h ; '4'
0x80A9CA: mov     [esp+53Ch+var_46C], ebx
0x80A9D1: lea     edx, [esp+53Ch+var_454]
0x80A9D8: push    ebp
0x80A9D9: mov     ebx, offset aLights; "LIGHTS"
0x80A9DE: push    edx
0x80A9DF: mov     [esp+544h+var_468], ebx
0x80A9E6: mov     [esp+544h+var_464], offset a2_0; "2"
0x80A9F1: mov     [esp+544h+var_460], edi
0x80A9F8: mov     [esp+544h+var_45C], esi
0x80A9FF: mov     [esp+544h+var_458], ebp
0x80AA06: call    __memset
0x80AA0B: push    2Ch ; ','
0x80AA0D: lea     eax, [esp+548h+var_400]
0x80AA14: push    ebp
0x80AA15: push    eax
0x80AA16: mov     [esp+550h+var_420], offset aLighting2xPAdt; "lighting\\2x\\p\\ADTS.p.hlsl"
0x80AA21: mov     [esp+550h+var_41C], ebx
0x80AA28: mov     [esp+550h+var_418], offset a2_0; "2"
0x80AA33: mov     [esp+550h+var_414], edi
0x80AA3A: mov     [esp+550h+var_410], esi
0x80AA41: mov     [esp+550h+var_40C], offset aProj_shadow; "PROJ_SHADOW"
0x80AA4C: mov     [esp+550h+var_408], esi
0x80AA53: mov     [esp+550h+var_404], ebp
0x80AA5A: call    __memset
0x80AA5F: push    34h ; '4'
0x80AA61: lea     ecx, [esp+554h+var_3BC]
0x80AA68: push    ebp
0x80AA69: push    ecx
0x80AA6A: mov     [esp+55Ch+var_3D4], offset aLighting2xPAd_; "lighting\\2x\\p\\AD.p.hlsl"
0x80AA75: mov     [esp+55Ch+var_3D0], ebx
0x80AA7C: mov     [esp+55Ch+var_3CC], offset a2_0; "2"
0x80AA87: mov     [esp+55Ch+var_3C8], edi
0x80AA8E: mov     [esp+55Ch+var_3C4], esi
0x80AA95: mov     [esp+55Ch+var_3C0], ebp
0x80AA9C: call    __memset
0x80AAA1: push    2Ch ; ','
0x80AAA3: lea     edx, [esp+560h+var_368]
0x80AAAA: push    ebp
0x80AAAB: push    edx
0x80AAAC: mov     [esp+568h+var_388], offset aLighting2xPAd_; "lighting\\2x\\p\\AD.p.hlsl"
0x80AAB7: mov     [esp+568h+var_384], ebx
0x80AABE: mov     [esp+568h+var_380], offset a2_0; "2"
0x80AAC9: mov     [esp+568h+var_37C], edi
0x80AAD0: mov     [esp+568h+var_378], esi
0x80AAD7: mov     [esp+568h+var_374], offset aProj_shadow; "PROJ_SHADOW"
0x80AAE2: mov     [esp+568h+var_370], esi
0x80AAE9: mov     [esp+568h+var_36C], ebp
0x80AAF0: call    __memset
0x80AAF5: add     esp, 48h
0x80AAF8: mov     [esp+520h+var_33C], offset aLighting2xPAd_; "lighting\\2x\\p\\AD.p.hlsl"
0x80AB03: mov     [esp+520h+var_338], ebx
0x80AB0A: push    34h ; '4'
0x80AB0C: lea     eax, [esp+524h+var_324]
0x80AB13: push    ebp
0x80AB14: push    eax
0x80AB15: mov     [esp+52Ch+var_334], offset a3; "3"
0x80AB20: mov     [esp+52Ch+var_330], edi
0x80AB27: mov     [esp+52Ch+var_32C], esi
0x80AB2E: mov     [esp+52Ch+var_328], ebp
0x80AB35: call    __memset
0x80AB3A: push    2Ch ; ','
0x80AB3C: lea     ecx, [esp+530h+var_2D0]
0x80AB43: push    ebp
0x80AB44: push    ecx
0x80AB45: mov     [esp+538h+var_2F0], offset aLighting2xPAd_; "lighting\\2x\\p\\AD.p.hlsl"
0x80AB50: mov     [esp+538h+var_2EC], ebx
0x80AB57: mov     [esp+538h+var_2E8], offset a3; "3"
0x80AB62: mov     [esp+538h+var_2E4], edi
0x80AB69: mov     [esp+538h+var_2E0], esi
0x80AB70: mov     [esp+538h+var_2DC], offset aProj_shadow; "PROJ_SHADOW"
0x80AB7B: mov     [esp+538h+var_2D8], esi
0x80AB82: mov     [esp+538h+var_2D4], ebp
0x80AB89: call    __memset
0x80AB8E: push    34h ; '4'
0x80AB90: lea     edx, [esp+53Ch+var_28C]
0x80AB97: push    ebp
0x80AB98: push    edx
0x80AB99: mov     [esp+544h+var_2A4], offset aLighting2xPDif; "lighting\\2x\\p\\DiffusePt.p.hlsl"
0x80ABA4: mov     [esp+544h+var_2A0], ebx
0x80ABAB: mov     [esp+544h+var_29C], offset a2_0; "2"
0x80ABB6: mov     [esp+544h+var_298], edi
0x80ABBD: mov     [esp+544h+var_294], esi
0x80ABC4: mov     [esp+544h+var_290], ebp
0x80ABCB: call    __memset
0x80ABD0: push    34h ; '4'
0x80ABD2: lea     eax, [esp+548h+var_240]
0x80ABD9: push    ebp
0x80ABDA: push    eax
0x80ABDB: mov     [esp+550h+var_258], offset aLighting2xPDif; "lighting\\2x\\p\\DiffusePt.p.hlsl"
0x80ABE6: mov     [esp+550h+var_254], ebx
0x80ABED: mov     [esp+550h+var_250], offset a3; "3"
0x80ABF8: mov     [esp+550h+var_24C], edi
0x80ABFF: mov     [esp+550h+var_248], esi
0x80AC06: mov     [esp+550h+var_244], ebp
0x80AC0D: call    __memset
0x80AC12: add     esp, 30h
0x80AC15: cmp     dword ptr ds:0B42F48h, 2
0x80AC1C: jl      loc_80ACE8
0x80AC22: mov     ecx, [esp+520h+var_508]
0x80AC26: add     ecx, 0ECh ; 'ì'
0x80AC2C: mov     [esp+520h+var_50C], ebp
0x80AC30: lea     ebx, [esp+520h+var_500]
0x80AC34: mov     [esp+520h+var_510], ecx
0x80AC38: jmp     short loc_80AC40
0x80AC3A: align 10h
0x80AC40: mov     eax, [ebx-4]
0x80AC43: lea     edx, [esp+520h+FileName]
0x80AC4A: push    edx; int
0x80AC4B: push    eax; FullPath
0x80AC4C: call    sub_801030
0x80AC51: mov     ecx, [esp+528h+var_50C]
0x80AC55: push    ecx
0x80AC56: lea     edx, [esp+52Ch+var_108]
0x80AC5D: push    offset aSkin203i_pso; "SKIN2%03i.pso"
0x80AC62: push    edx
0x80AC63: call    __sprintf
0x80AC68: add     esp, 14h
0x80AC6B: push    ebp; int
0x80AC6C: push    ebp; int
0x80AC6D: lea     eax, [esp+528h+var_108]
0x80AC74: push    eax; int
0x80AC75: push    offset aPs_2_0; "ps_2_0"
0x80AC7A: push    ebx; int
0x80AC7B: lea     ecx, [esp+534h+FileName]
0x80AC82: push    ecx; lpFileName
0x80AC83: mov     ecx, [esp+538h+var_508]
0x80AC87: call    CreatePixelShader
0x80AC8C: mov     edx, [esp+520h+var_510]
0x80AC90: mov     esi, [edx]
0x80AC92: mov     edi, eax
0x80AC94: cmp     esi, edi
0x80AC96: jz      short loc_80ACCC
0x80AC98: cmp     esi, ebp
0x80AC9A: jz      short loc_80ACB8
0x80AC9C: lea     eax, [esi+4]
0x80AC9F: push    eax; lpAddend
0x80ACA0: call    dword ptr ds:0A2807Ch
0x80ACA6: test    eax, eax
0x80ACA8: jnz     short loc_80ACB8
0x80ACAA: cmp     esi, ebp
0x80ACAC: jz      short loc_80ACB8
0x80ACAE: mov     edx, [esi]
0x80ACB0: mov     eax, [edx]
0x80ACB2: push    1
0x80ACB4: mov     ecx, esi
0x80ACB6: call    eax
0x80ACB8: cmp     edi, ebp
0x80ACBA: mov     ecx, [esp+520h+var_510]
0x80ACBE: mov     [ecx], edi
0x80ACC0: jz      short loc_80ACCC
0x80ACC2: add     edi, 4
0x80ACC5: push    edi; lpAddend
0x80ACC6: call    dword ptr ds:0A28078h
0x80ACCC: mov     eax, [esp+520h+var_50C]
0x80ACD0: add     [esp+520h+var_510], 4
0x80ACD5: add     eax, 1
0x80ACD8: add     ebx, 4Ch ; 'L'
0x80ACDB: cmp     eax, 0Ah
0x80ACDE: mov     [esp+520h+var_50C], eax
0x80ACE2: jl      loc_80AC40
0x80ACE8: mov     ecx, [esp+520h+var_4]
0x80ACEF: pop     edi
0x80ACF0: pop     esi
0x80ACF1: pop     ebp
0x80ACF2: pop     ebx
0x80ACF3: xor     ecx, esp
0x80ACF5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x80ACFA: add     esp, 510h
0x80AD00: retn
