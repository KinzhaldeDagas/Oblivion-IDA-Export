0x6AF880: mov     eax, [esp+arg_0]
0x6AF884: sub     esp, 24h
0x6AF887: push    ebx
0x6AF888: xor     ebx, ebx
0x6AF88A: cmp     eax, ebx
0x6AF88C: jz      loc_6AFFCC
0x6AF892: mov     ecx, ds:0B3C20Ch
0x6AF898: cmp     ecx, ds:0B16304h
0x6AF89E: jnb     loc_6AFFCC
0x6AF8A4: cmp     ds:0B3C0F0h, ebx
0x6AF8AA: jnz     short loc_6AF8BB
0x6AF8AC: mov     edx, ds:0B33398h
0x6AF8B2: mov     ecx, [edx+24h]
0x6AF8B5: mov     ds:0B3C0F0h, ecx
0x6AF8BB: mov     ecx, [eax+58h]
0x6AF8BE: mov     edx, [ecx]
0x6AF8C0: mov     eax, [edx+0ECh]
0x6AF8C6: push    ebp
0x6AF8C7: push    edi
0x6AF8C8: push    1
0x6AF8CA: mov     [esp+34h+var_21], bl
0x6AF8CE: xor     edi, edi
0x6AF8D0: xor     ebp, ebp
0x6AF8D2: mov     [esp+34h+var_20], ebx
0x6AF8D6: call    eax
0x6AF8D8: cmp     eax, ebx
0x6AF8DA: jz      short loc_6AF8E1
0x6AF8DC: mov     eax, [eax+8]
0x6AF8DF: jmp     short loc_6AF8E3
0x6AF8E1: xor     eax, eax
0x6AF8E3: cmp     eax, ebx
0x6AF8E5: jz      short loc_6AF904
0x6AF8E7: push    ebx; int
0x6AF8E8: push    offset ??_R0?AVTESObjectWEAP@@@8; struct TypeDescriptor *
0x6AF8ED: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x6AF8F2: push    ebx; int
0x6AF8F3: push    eax; void *
0x6AF8F4: call    OblivionDynamicCast
0x6AF8F9: add     esp, 14h
0x6AF8FC: mov     ebx, eax
0x6AF8FE: mov     dword ptr [esp+30h+var_1C], eax
0x6AF902: jmp     short loc_6AF908
0x6AF904: mov     dword ptr [esp+30h+var_1C], ebx
0x6AF908: mov     ecx, [esp+30h+arg_0]
0x6AF90C: mov     edx, [ecx]
0x6AF90E: mov     eax, [edx+174h]
0x6AF914: push    esi
0x6AF915: call    eax
0x6AF917: cmp     byte ptr ds:0B333B8h, 0
0x6AF91E: mov     ecx, [eax]
0x6AF920: mov     edx, [eax+4]
0x6AF923: mov     eax, [eax+8]
0x6AF926: mov     esi, ds:0B3C0F0h
0x6AF92C: mov     [esp+34h+var_C], ecx
0x6AF930: mov     [esp+34h+var_8], edx
0x6AF934: mov     [esp+34h+var_4], eax
0x6AF938: jz      loc_6AF9D2
0x6AF93E: fld     dword ptr [esi+80h]
0x6AF944: fstp    dword ptr [esp+34h+var_1C+4]
0x6AF948: fld     dword ptr [esi+84h]
0x6AF94E: fstp    [esp+34h+var_14]
0x6AF952: fld     dword ptr [esi+88h]
0x6AF958: fstp    [esp+34h+var_10]
0x6AF95C: fld     dword ptr [esp+34h+var_1C+4]
0x6AF960: fsub    [esp+34h+var_C]
0x6AF964: fstp    dword ptr [esp+34h+var_1C+4]
0x6AF968: fld     [esp+34h+var_14]
0x6AF96C: fsub    [esp+34h+var_8]
0x6AF970: fstp    [esp+34h+var_14]
0x6AF974: fld     [esp+34h+var_10]
0x6AF978: fsub    [esp+34h+var_4]
0x6AF97C: fstp    [esp+34h+var_10]
0x6AF980: fld     dword ptr [esp+34h+var_1C+4]
0x6AF984: fld     [esp+34h+var_14]
0x6AF988: fld     [esp+34h+var_10]
0x6AF98C: fld     st(1)
0x6AF98E: fmulp   st(2), st
0x6AF990: fld     st(2)
0x6AF992: fmulp   st(3), st
0x6AF994: fxch    st(1)
0x6AF996: faddp   st(2), st
0x6AF998: fmul    st, st
0x6AF99A: faddp   st(1), st
0x6AF99C: fstp    dword ptr [esp+34h+var_1C+4]
0x6AF9A0: fld     dword ptr [esp+34h+var_1C+4]
0x6AF9A4: call    __CIsqrt
0x6AF9A9: fstp    dword ptr [esp+34h+var_1C+4]
0x6AF9AD: fld     dword ptr [esp+34h+var_1C+4]
0x6AF9B1: fld     dword ptr ds:0B162FCh
0x6AF9B7: fmul    qword ptr ds:0A2FAA0h
0x6AF9BD: fstp    dword ptr [esp+34h+var_1C+4]
0x6AF9C1: fld     dword ptr [esp+34h+var_1C+4]
0x6AF9C5: fcompp
0x6AF9C7: fnstsw  ax
0x6AF9C9: test    ah, 5
0x6AF9CC: jnp     loc_6AFFC9
0x6AF9D2: cmp     [esp+34h+arg_C], edi
0x6AF9D6: jnz     loc_6AFB48
0x6AF9DC: test    ebx, ebx
0x6AF9DE: jz      loc_6AFAA6
0x6AF9E4: cmp     byte ptr ds:0B162ECh, 0
0x6AF9EB: jz      short loc_6AFA4D
0x6AF9ED: fld     dword ptr [ebx+94h]
0x6AF9F3: mov     ecx, offset fMediumWeaponSpeedMax_Audio
0x6AF9F8: fstp    [esp+34h+var_20]
0x6AF9FC: call    GameSetting_GetSafeFloatPointer
0x6AFA01: fld     [esp+34h+var_20]
0x6AFA05: fld     dword ptr [eax]
0x6AFA07: fcompp
0x6AFA09: fnstsw  ax
0x6AFA0B: test    ah, 5
0x6AFA0E: jnp     loc_6AFABB
0x6AFA14: mov     ecx, offset fMediumWeaponSpeedMax_Audio
0x6AFA19: call    GameSetting_GetSafeFloatPointer
0x6AFA1E: fld     [esp+34h+var_20]
0x6AFA22: fld     dword ptr [eax]
0x6AFA24: fcompp
0x6AFA26: fnstsw  ax
0x6AFA28: test    ah, 41h
0x6AFA2B: jnz     short loc_6AFA46
0x6AFA2D: mov     ecx, offset fLargeWeaponSpeedMax_Audio
0x6AFA32: call    GameSetting_GetSafeFloatPointer
0x6AFA37: fld     [esp+34h+var_20]
0x6AFA3B: fld     dword ptr [eax]
0x6AFA3D: fcompp
0x6AFA3F: fnstsw  ax
0x6AFA41: test    ah, 5
0x6AFA44: jnp     short loc_6AFA9F
0x6AFA46: push    offset aWpnswishlarge; "WPNSwishLarge"
0x6AFA4B: jmp     short loc_6AFAC0
0x6AFA4D: fld     dword ptr [ebx+7Ch]
0x6AFA50: mov     ecx, offset unk_B162CC
0x6AFA55: fstp    [esp+34h+var_20]
0x6AFA59: call    GameSetting_GetSafeFloatPointer
0x6AFA5E: fld     [esp+34h+var_20]
0x6AFA62: fld     dword ptr [eax]
0x6AFA64: fcompp
0x6AFA66: fnstsw  ax
0x6AFA68: test    ah, 41h
0x6AFA6B: jz      short loc_6AFABB
0x6AFA6D: mov     ecx, offset unk_B162CC
0x6AFA72: call    GameSetting_GetSafeFloatPointer
0x6AFA77: fld     [esp+34h+var_20]
0x6AFA7B: fld     dword ptr [eax]
0x6AFA7D: fcompp
0x6AFA7F: fnstsw  ax
0x6AFA81: test    ah, 5
0x6AFA84: jp      short loc_6AFA46
0x6AFA86: mov     ecx, offset fLargeWeaponWeightMin_Audio
0x6AFA8B: call    GameSetting_GetSafeFloatPointer
0x6AFA90: fld     [esp+34h+var_20]
0x6AFA94: fld     dword ptr [eax]
0x6AFA96: fcompp
0x6AFA98: fnstsw  ax
0x6AFA9A: test    ah, 41h
0x6AFA9D: jnz     short loc_6AFA46
0x6AFA9F: push    offset aWpnswishmedium; "WPNSwishMedium"
0x6AFAA4: jmp     short loc_6AFAC0
0x6AFAA6: push    1
0x6AFAA8: push    4102h
0x6AFAAD: push    offset aWpnswishhand; "WPNSwishHand"
0x6AFAB2: mov     ecx, esi
0x6AFAB4: call    PlaySound???
0x6AFAB9: jmp     short loc_6AFAE9
0x6AFABB: push    offset aWpnswishsmall; "WPNSwishSmall"
0x6AFAC0: mov     ecx, ds:0B33A98h
0x6AFAC6: call    sub_447490
0x6AFACB: test    eax, eax
0x6AFACD: jz      loc_6AFFC9
0x6AFAD3: mov     eax, [eax+0Ch]
0x6AFAD6: mov     ecx, ds:0B3C0F0h
0x6AFADC: push    1
0x6AFADE: push    4102h
0x6AFAE3: push    eax
0x6AFAE4: call    OSGLobals_PlaySound
0x6AFAE9: mov     esi, eax
0x6AFAEB: test    esi, esi
0x6AFAED: jz      loc_6AFFC9
0x6AFAF3: fld     [esp+34h+var_4]
0x6AFAF7: sub     esp, 0Ch
0x6AFAFA: fstp    [esp+40h+var_38]; float
0x6AFAFE: mov     ecx, esi
0x6AFB00: fld     [esp+40h+var_8]
0x6AFB04: fstp    [esp+40h+var_3C]; float
0x6AFB08: fld     [esp+40h+var_C]
0x6AFB0C: fstp    [esp+40h+var_40]; float
0x6AFB0F: call    sub_6B7360
0x6AFB14: mov     ecx, [esp+34h+arg_0]
0x6AFB18: mov     edx, [esi]
0x6AFB1A: push    ecx
0x6AFB1B: mov     ecx, ds:0B3C0F0h
0x6AFB21: push    edx
0x6AFB22: call    sub_6AC3E0
0x6AFB27: push    0
0x6AFB29: mov     ecx, esi
0x6AFB2B: call    sub_6B7190
0x6AFB30: mov     ecx, esi; this
0x6AFB32: call    sub_6B73E0
0x6AFB37: push    esi
0x6AFB38: call    FormHeapFree
0x6AFB3D: add     esp, 4
0x6AFB40: pop     esi
0x6AFB41: pop     edi
0x6AFB42: pop     ebp
0x6AFB43: pop     ebx
0x6AFB44: add     esp, 24h
0x6AFB47: retn
0x6AFB48: mov     esi, [esp+34h+arg_C]
0x6AFB4C: mov     eax, [esi]
0x6AFB4E: mov     edx, [eax+174h]
0x6AFB54: mov     ecx, esi
0x6AFB56: call    edx
0x6AFB58: mov     ecx, [eax]
0x6AFB5A: mov     edx, [eax+4]
0x6AFB5D: mov     eax, [eax+8]
0x6AFB60: mov     [esp+34h+var_4], eax
0x6AFB64: mov     eax, [esp+34h+arg_14]
0x6AFB68: test    eax, eax
0x6AFB6A: mov     [esp+34h+var_C], ecx
0x6AFB6E: mov     [esp+34h+var_8], edx
0x6AFB72: jl      short loc_6AFB8A
0x6AFB74: mov     ecx, ds:0B33A98h
0x6AFB7A: jz      short loc_6AFB83
0x6AFB7C: push    offset aPhyarmorhithea; "PHYArmorHitHeavy"
0x6AFB81: jmp     short loc_6AFBB3
0x6AFB83: push    offset aPhyarmorhitlig; "PHYArmorHitLight"
0x6AFB88: jmp     short loc_6AFBB3
0x6AFB8A: mov     eax, dword ptr [esp+34h+arg_18]
0x6AFB8E: test    eax, eax
0x6AFB90: jl      short loc_6AFBD4
0x6AFB92: sub     eax, 0
0x6AFB95: jz      short loc_6AFBA3
0x6AFB97: sub     eax, 1
0x6AFB9A: jnz     short loc_6AFBD4
0x6AFB9C: push    offset aWpnblockshield; "WPNBlockShieldHeavy"
0x6AFBA1: jmp     short loc_6AFBA8
0x6AFBA3: push    offset aWpnblockshie_0; "WPNBlockShieldLight"
0x6AFBA8: mov     ecx, ds:0B33A98h
0x6AFBAE: mov     [esp+38h+var_21], 1
0x6AFBB3: call    sub_447490
0x6AFBB8: test    eax, eax
0x6AFBBA: jz      short loc_6AFBD4
0x6AFBBC: mov     eax, [eax+0Ch]
0x6AFBBF: mov     ecx, ds:0B3C0F0h
0x6AFBC5: push    1
0x6AFBC7: push    4102h
0x6AFBCC: push    eax
0x6AFBCD: call    OSGLobals_PlaySound
0x6AFBD2: mov     ebp, eax
0x6AFBD4: cmp     [esp+34h+arg_1C], 0
0x6AFBD9: mov     [esp+34h+var_22], 0
0x6AFBDE: jnz     short loc_6AFC40
0x6AFBE0: mov     ecx, esi; this
0x6AFBE2: call    Actor_IsCreature
0x6AFBE7: test    al, al
0x6AFBE9: jz      short loc_6AFBFB
0x6AFBEB: cmp     byte ptr [esi+104h], 2
0x6AFBF2: jnz     short loc_6AFBFB
0x6AFBF4: push    offset aPhydamagebone; "PHYDamageBone"
0x6AFBF9: jmp     short loc_6AFC17
0x6AFBFB: mov     ecx, esi; this
0x6AFBFD: call    Actor_IsCreature
0x6AFC02: test    al, al
0x6AFC04: mov     [esp+34h+var_22], 1
0x6AFC09: jz      short loc_6AFC12
0x6AFC0B: push    offset aPhydamagefur; "PHYDamageFur"
0x6AFC10: jmp     short loc_6AFC17
0x6AFC12: push    offset aPhydamageflesh; "PHYDamageFlesh"
0x6AFC17: mov     ecx, ds:0B33A98h
0x6AFC1D: call    sub_447490
0x6AFC22: test    eax, eax
0x6AFC24: jz      short loc_6AFC40
0x6AFC26: mov     eax, [eax+0Ch]
0x6AFC29: mov     ecx, ds:0B3C0F0h
0x6AFC2F: push    1
0x6AFC31: push    4102h
0x6AFC36: push    eax
0x6AFC37: call    OSGLobals_PlaySound
0x6AFC3C: mov     [esp+34h+var_20], eax
0x6AFC40: mov     esi, [esp+34h+arg_10]
0x6AFC44: xor     bl, bl
0x6AFC46: test    esi, esi
0x6AFC48: jge     short loc_6AFCAD
0x6AFC4A: mov     ecx, [esp+34h+arg_0]; this
0x6AFC4E: call    Actor_IsCreature
0x6AFC53: test    al, al
0x6AFC55: jz      short loc_6AFCAD
0x6AFC57: mov     ecx, [esp+34h+arg_0]
0x6AFC5B: mov     edx, [ecx]
0x6AFC5D: mov     eax, [edx+170h]
0x6AFC63: call    eax
0x6AFC65: push    0; int
0x6AFC67: push    offset ??_R0?AVTESCreature@@@8; struct TypeDescriptor *
0x6AFC6C: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x6AFC71: push    0; int
0x6AFC73: push    eax; void *
0x6AFC74: call    OblivionDynamicCast
0x6AFC79: add     esp, 14h
0x6AFC7C: push    9
0x6AFC7E: mov     ecx, eax
0x6AFC80: call    sub_51CEC0
0x6AFC85: test    eax, eax
0x6AFC87: jz      short loc_6AFCAD
0x6AFC89: mov     ecx, ds:0B3C0F0h
0x6AFC8F: test    ecx, ecx
0x6AFC91: jz      short loc_6AFCAD
0x6AFC93: mov     eax, [eax+0Ch]
0x6AFC96: push    1
0x6AFC98: push    4102h
0x6AFC9D: push    eax
0x6AFC9E: call    OSGLobals_PlaySound
0x6AFCA3: mov     edi, eax
0x6AFCA5: test    edi, edi
0x6AFCA7: jnz     loc_6AFD50
0x6AFCAD: cmp     esi, 5; switch 6 cases
0x6AFCB0: ja      short def_6AFCB2; jumptable 006AFCB2 default case, case 4
0x6AFCB2: jmp     ds:jpt_6AFCB2[esi*4]; switch jump
0x6AFCB9: cmp     [esp+34h+arg_20], 0; jumptable 006AFCB2 cases 0,1
0x6AFCBE: mov     bl, 1
0x6AFCC0: jz      short loc_6AFCC9
0x6AFCC2: push    offset aWpnhitbladefle; "WPNHitBladeFleshEnchanted"
0x6AFCC7: jmp     short loc_6AFD1D
0x6AFCC9: cmp     [esp+34h+var_22], 0
0x6AFCCE: jz      short loc_6AFCDE
0x6AFCD0: cmp     [esp+34h+var_21], 0
0x6AFCD5: jnz     short loc_6AFCDE
0x6AFCD7: push    offset aWpnhitbladef_0; "WPNHitBladeFlesh"
0x6AFCDC: jmp     short loc_6AFD1D
0x6AFCDE: push    offset aWpnhitblade; "WPNHitBlade"
0x6AFCE3: jmp     short loc_6AFD1D
0x6AFCE5: cmp     [esp+34h+arg_20], 0; jumptable 006AFCB2 cases 2,3
0x6AFCEA: mov     bl, 1
0x6AFCEC: jz      short loc_6AFCF5
0x6AFCEE: push    offset aWpnhitbluntfle; "WPNHitBluntFleshEnchanted"
0x6AFCF3: jmp     short loc_6AFD1D
0x6AFCF5: cmp     [esp+34h+var_22], 0
0x6AFCFA: jz      short loc_6AFD0A
0x6AFCFC: cmp     [esp+34h+var_21], 0
0x6AFD01: jnz     short loc_6AFD0A
0x6AFD03: push    offset aWpnhitbluntf_0; "WPNHitBluntFlesh"
0x6AFD08: jmp     short loc_6AFD1D
0x6AFD0A: push    offset aWpnhitblunt; "WPNHitBlunt"
0x6AFD0F: jmp     short loc_6AFD1D
0x6AFD11: push    offset aWpnhitarrow; jumptable 006AFCB2 case 5
0x6AFD16: jmp     short loc_6AFD1D
0x6AFD18: push    offset aWpnhithand; jumptable 006AFCB2 default case, case 4
0x6AFD1D: mov     ecx, ds:0B33A98h
0x6AFD23: call    sub_447490
0x6AFD28: test    eax, eax
0x6AFD2A: jz      loc_6AFDE2
0x6AFD30: mov     eax, [eax+0Ch]
0x6AFD33: mov     ecx, ds:0B3C0F0h
0x6AFD39: push    1
0x6AFD3B: push    4102h
0x6AFD40: push    eax
0x6AFD41: call    OSGLobals_PlaySound
0x6AFD46: mov     edi, eax
0x6AFD48: test    edi, edi
0x6AFD4A: jz      loc_6AFDE2
0x6AFD50: fld     [esp+34h+var_4]
0x6AFD54: sub     esp, 0Ch
0x6AFD57: fstp    [esp+40h+var_38]; float
0x6AFD5B: mov     ecx, edi
0x6AFD5D: fld     [esp+40h+var_8]
0x6AFD61: fstp    [esp+40h+var_3C]; float
0x6AFD65: fld     [esp+40h+var_C]
0x6AFD69: fstp    [esp+40h+var_40]; float
0x6AFD6C: call    sub_6B7360
0x6AFD71: mov     ecx, [esp+34h+arg_0]
0x6AFD75: cmp     dword ptr [ecx+58h], 0
0x6AFD79: jz      short loc_6AFDAF
0x6AFD7B: cmp     dword ptr [esp+34h+var_1C], 0
0x6AFD80: jz      short loc_6AFDAF
0x6AFD82: fld     dword ptr ds:0A2FAACh
0x6AFD88: push    ecx
0x6AFD89: fstp    [esp+38h+var_38]; float
0x6AFD8C: call    Rand5
0x6AFD91: fsubr   qword ptr ds:0A68610h
0x6AFD97: mov     ecx, edi
0x6AFD99: fadd    qword ptr ds:0A2F928h
0x6AFD9F: fstp    [esp+38h+arg_0]
0x6AFDA3: fld     [esp+38h+arg_0]
0x6AFDA7: fstp    [esp+38h+var_38]; float
0x6AFDAA: call    sub_6B7310
0x6AFDAF: call    sub_517DD0
0x6AFDB4: fmul    qword ptr ds:0A77428h
0x6AFDBA: push    ecx
0x6AFDBB: mov     ecx, edi
0x6AFDBD: fstp    [esp+38h+arg_0]
0x6AFDC1: fld     [esp+38h+arg_0]
0x6AFDC5: fstp    [esp+38h+var_38]; float
0x6AFDC8: call    sub_6B7280
0x6AFDCD: mov     esi, [esp+34h+arg_C]
0x6AFDD1: mov     edx, [edi]
0x6AFDD3: mov     ecx, ds:0B3C0F0h
0x6AFDD9: push    esi
0x6AFDDA: push    edx
0x6AFDDB: call    sub_6AC3E0
0x6AFDE0: jmp     short loc_6AFDE6
0x6AFDE2: mov     esi, [esp+34h+arg_C]
0x6AFDE6: test    bl, bl
0x6AFDE8: jz      short loc_6AFE1B
0x6AFDEA: cmp     [esp+34h+var_22], 0
0x6AFDEF: jz      short loc_6AFE1B
0x6AFDF1: mov     ebx, [esp+34h+var_20]
0x6AFDF5: test    ebx, ebx
0x6AFDF7: jz      loc_6AFEE7
0x6AFDFD: mov     ecx, ebx
0x6AFDFF: call    sub_6B73C0
0x6AFE04: mov     ecx, ebx; this
0x6AFE06: call    sub_6B73E0
0x6AFE0B: push    ebx
0x6AFE0C: call    FormHeapFree
0x6AFE11: add     esp, 4
0x6AFE14: xor     ebx, ebx
0x6AFE16: jmp     loc_6AFEE7
0x6AFE1B: mov     ebx, [esp+34h+var_20]
0x6AFE1F: test    ebx, ebx
0x6AFE21: jz      loc_6AFEE7
0x6AFE27: fldz
0x6AFE29: fld     [esp+34h+arg_4]
0x6AFE2D: fcom    st(1)
0x6AFE2F: fnstsw  ax
0x6AFE31: fstp    st(1)
0x6AFE33: test    ah, 41h
0x6AFE36: jnz     loc_6AFEE5
0x6AFE3C: push    8
0x6AFE3E: fstp    [esp+38h+var_1C+4]
0x6AFE42: mov     ecx, esi
0x6AFE44: call    Actor_GetBaseCalcAVi
0x6AFE49: mov     [esp+34h+arg_0], eax
0x6AFE4D: fild    [esp+34h+arg_0]
0x6AFE51: fdivr   [esp+34h+var_1C+4]
0x6AFE55: fstp    [esp+34h+arg_0]
0x6AFE59: fld1
0x6AFE5B: fcom    [esp+34h+arg_0]
0x6AFE5F: fnstsw  ax
0x6AFE61: test    ah, 5
0x6AFE64: jp      short loc_6AFE6C
0x6AFE66: fstp    [esp+34h+arg_0]
0x6AFE6A: jmp     short loc_6AFE6E
0x6AFE6C: fstp    st
0x6AFE6E: call    sub_517DF0
0x6AFE73: fmul    qword ptr ds:0A77428h
0x6AFE79: push    ecx
0x6AFE7A: mov     ecx, ebx
0x6AFE7C: fstp    dword ptr [esp+38h+var_1C+4]
0x6AFE80: fld     dword ptr [esp+38h+var_1C+4]
0x6AFE84: fstp    [esp+38h+var_38]; float
0x6AFE87: call    sub_6B7280
0x6AFE8C: fld     [esp+34h+var_4]
0x6AFE90: sub     esp, 0Ch
0x6AFE93: fstp    [esp+40h+var_38]; float
0x6AFE97: mov     ecx, ebx
0x6AFE99: fld     [esp+40h+var_8]
0x6AFE9D: fstp    [esp+40h+var_3C]; float
0x6AFEA1: fld     [esp+40h+var_C]
0x6AFEA5: fstp    [esp+40h+var_40]; float
0x6AFEA8: call    sub_6B7360
0x6AFEAD: fld     [esp+34h+arg_0]
0x6AFEB1: push    ecx
0x6AFEB2: fdiv    qword ptr ds:0A3F3E8h
0x6AFEB8: mov     ecx, ebx
0x6AFEBA: fld1
0x6AFEBC: fsubrp  st(1), st
0x6AFEBE: fsub    qword ptr ds:0A68610h
0x6AFEC4: fstp    [esp+38h+arg_0]
0x6AFEC8: fld     [esp+38h+arg_0]
0x6AFECC: fstp    [esp+38h+var_38]; float
0x6AFECF: call    sub_6B7310
0x6AFED4: mov     eax, [ebx]
0x6AFED6: mov     ecx, ds:0B3C0F0h
0x6AFEDC: push    esi
0x6AFEDD: push    eax
0x6AFEDE: call    sub_6AC3E0
0x6AFEE3: jmp     short loc_6AFEE7
0x6AFEE5: fstp    st
0x6AFEE7: test    ebp, ebp
0x6AFEE9: jz      loc_6AFF77
0x6AFEEF: fld     [esp+34h+var_4]
0x6AFEF3: sub     esp, 0Ch
0x6AFEF6: fstp    [esp+40h+var_38]; float
0x6AFEFA: mov     ecx, ebp
0x6AFEFC: fld     [esp+40h+var_8]
0x6AFF00: fstp    [esp+40h+var_3C]; float
0x6AFF04: fld     [esp+40h+var_C]
0x6AFF08: fstp    [esp+40h+var_40]; float
0x6AFF0B: call    sub_6B7360
0x6AFF10: push    4
0x6AFF12: call    Rand3
0x6AFF17: sub     eax, 2
0x6AFF1A: mov     [esp+38h+arg_0], eax
0x6AFF1E: fild    [esp+38h+arg_0]
0x6AFF22: mov     ecx, ebp
0x6AFF24: fdiv    qword ptr ds:0A37478h
0x6AFF2A: fadd    qword ptr ds:0A2F928h
0x6AFF30: fstp    [esp+38h+arg_0]
0x6AFF34: fld     [esp+38h+arg_0]
0x6AFF38: fstp    [esp+38h+var_38]; float
0x6AFF3B: call    sub_6B7310
0x6AFF40: mov     ecx, [ebp+0]
0x6AFF43: push    esi
0x6AFF44: push    ecx
0x6AFF45: mov     ecx, ds:0B3C0F0h
0x6AFF4B: call    sub_6AC3E0
0x6AFF50: call    sub_517DE0
0x6AFF55: fmul    qword ptr ds:0A77428h
0x6AFF5B: push    ecx
0x6AFF5C: mov     ecx, ebp
0x6AFF5E: fstp    [esp+38h+arg_0]
0x6AFF62: fld     [esp+38h+arg_0]
0x6AFF66: fstp    [esp+38h+var_38]; float
0x6AFF69: call    sub_6B7280
0x6AFF6E: push    0
0x6AFF70: mov     ecx, ebp
0x6AFF72: call    sub_6B71C0
0x6AFF77: test    ebx, ebx
0x6AFF79: jz      short loc_6AFF84
0x6AFF7B: push    0
0x6AFF7D: mov     ecx, ebx
0x6AFF7F: call    sub_6B71C0
0x6AFF84: test    edi, edi
0x6AFF86: jz      short loc_6AFFA1
0x6AFF88: push    0
0x6AFF8A: mov     ecx, edi
0x6AFF8C: call    sub_6B71C0
0x6AFF91: mov     ecx, edi; this
0x6AFF93: call    sub_6B73E0
0x6AFF98: push    edi
0x6AFF99: call    FormHeapFree
0x6AFF9E: add     esp, 4
0x6AFFA1: test    ebx, ebx
0x6AFFA3: jz      short loc_6AFFB5
0x6AFFA5: mov     ecx, ebx; this
0x6AFFA7: call    sub_6B73E0
0x6AFFAC: push    ebx
0x6AFFAD: call    FormHeapFree
0x6AFFB2: add     esp, 4
0x6AFFB5: test    ebp, ebp
0x6AFFB7: jz      short loc_6AFFC9
0x6AFFB9: mov     ecx, ebp; this
0x6AFFBB: call    sub_6B73E0
0x6AFFC0: push    ebp
0x6AFFC1: call    FormHeapFree
0x6AFFC6: add     esp, 4
0x6AFFC9: pop     esi
0x6AFFCA: pop     edi
0x6AFFCB: pop     ebp
0x6AFFCC: pop     ebx
0x6AFFCD: add     esp, 24h
0x6AFFD0: retn
