0x7B4290: push    esi
0x7B4291: mov     esi, [esp+4+arg_0]
0x7B4295: cmp     esi, 1Bh
0x7B4298: ja      loc_7B44A4
0x7B429E: xor     ecx, ecx
0x7B42A0: cmp     ds:0B42EC0h[esi*4], ecx
0x7B42A7: jnz     GetShaderDefinition___def_7B42B9; jumptable 007B42B9 default case
0x7B42AD: lea     eax, [esi-1]; switch 27 cases
0x7B42B0: cmp     eax, 1Ah
0x7B42B3: ja      GetShaderDefinition___def_7B42B9; jumptable 007B42B9 default case
0x7B42B9: jmp     ds:jpt_7B42B9[eax*4]; switch jump
0x7B42C0: call    sub_7CBDC0; jumptable 007B42B9 case 1
0x7B42C5: mov     ds:0B42EC0h[esi*4], eax
0x7B42CC: pop     esi
0x7B42CD: retn
0x7B42CE: call    sub_7E9840; jumptable 007B42B9 case 2
0x7B42D3: mov     ds:0B42EC0h[esi*4], eax
0x7B42DA: pop     esi
0x7B42DB: retn
0x7B42DC: call    sub_8122A0; jumptable 007B42B9 case 3
0x7B42E1: mov     ds:0B42EC0h[esi*4], eax
0x7B42E8: pop     esi
0x7B42E9: retn
0x7B42EA: push    1; jumptable 007B42B9 case 4
0x7B42EC: call    GetShaderDefinition
0x7B42F1: add     esp, 4
0x7B42F4: call    sub_810B90
0x7B42F9: mov     ds:0B42EC0h[esi*4], eax
0x7B4300: pop     esi
0x7B4301: retn
0x7B4302: call    sub_80EE10; jumptable 007B42B9 case 5
0x7B4307: mov     ds:0B42EC0h[esi*4], eax
0x7B430E: pop     esi
0x7B430F: retn
0x7B4310: call    sub_7F1410; jumptable 007B42B9 case 6
0x7B4315: mov     ds:0B42EC0h[esi*4], eax
0x7B431C: pop     esi
0x7B431D: retn
0x7B431E: cmp     dword ptr ds:0B42F48h, 2; jumptable 007B42B9 case 7
0x7B4325: jl      short loc_7B4335
0x7B4327: call    BlurShader
0x7B432C: mov     ds:0B42EC0h[esi*4], eax
0x7B4333: pop     esi
0x7B4334: retn
0x7B4335: call    BlurshaderOld
0x7B433A: mov     ds:0B42EC0h[esi*4], eax
0x7B4341: pop     esi
0x7B4342: retn
0x7B4343: cmp     ds:0B43070h, cl; jumptable 007B42B9 case 8
0x7B4349: jz      short loc_7B4359
0x7B434B: call    HdrShader
0x7B4350: mov     ds:0B42EC0h[esi*4], eax
0x7B4357: pop     esi
0x7B4358: retn
0x7B4359: mov     ds:0B42EC0h[esi*4], ecx
0x7B4360: mov     eax, ecx
0x7B4362: pop     esi
0x7B4363: retn
0x7B4364: call    DebugShader; jumptable 007B42B9 case 9
0x7B4369: mov     ds:0B42EC0h[esi*4], eax
0x7B4370: pop     esi
0x7B4371: retn
0x7B4372: call    SkyShader; jumptable 007B42B9 case 10
0x7B4377: mov     ds:0B42EC0h[esi*4], eax
0x7B437E: pop     esi
0x7B437F: retn
0x7B4380: cmp     dword ptr ds:0B42F48h, 2; jumptable 007B42B9 case 11
0x7B4387: jl      short loc_7B4359
0x7B4389: call    HitShader
0x7B438E: mov     ds:0B42EC0h[esi*4], eax
0x7B4395: pop     esi
0x7B4396: retn
0x7B4397: call    HairShader; jumptable 007B42B9 case 13
0x7B439C: mov     ds:0B42EC0h[esi*4], eax
0x7B43A3: pop     esi
0x7B43A4: retn
0x7B43A5: call    SkinShader; jumptable 007B42B9 case 14
0x7B43AA: mov     ds:0B42EC0h[esi*4], eax
0x7B43B1: pop     esi
0x7B43B2: retn
0x7B43B3: call    ParallaxShader; jumptable 007B42B9 case 15
0x7B43B8: mov     ds:0B42EC0h[esi*4], eax
0x7B43BF: pop     esi
0x7B43C0: retn
0x7B43C1: call    GeometryDecalShader; jumptable 007B42B9 case 16
0x7B43C6: mov     ds:0B42EC0h[esi*4], eax
0x7B43CD: pop     esi
0x7B43CE: retn
0x7B43CF: call    Watershader; jumptable 007B42B9 case 17
0x7B43D4: mov     ds:0B42EC0h[esi*4], eax
0x7B43DB: pop     esi
0x7B43DC: retn
0x7B43DD: call    NightEyeShader; jumptable 007B42B9 case 18
0x7B43E2: mov     ds:0B42EC0h[esi*4], eax
0x7B43E9: pop     esi
0x7B43EA: retn
0x7B43EB: call    WaterShaderHeightMap; jumptable 007B42B9 case 19
0x7B43F0: mov     ds:0B42EC0h[esi*4], eax
0x7B43F7: pop     esi
0x7B43F8: retn
0x7B43F9: call    WaterShaderDisplacement; jumptable 007B42B9 case 20
0x7B43FE: mov     ds:0B42EC0h[esi*4], eax
0x7B4405: pop     esi
0x7B4406: retn
0x7B4407: cmp     dword ptr ds:0B42F48h, 2; jumptable 007B42B9 case 21
0x7B440E: jl      loc_7B4359
0x7B4414: call    RefractionShader
0x7B4419: mov     ds:0B42EC0h[esi*4], eax
0x7B4420: pop     esi
0x7B4421: retn
0x7B4422: call    ParticleShader; jumptable 007B42B9 case 22
0x7B4427: mov     ds:0B42EC0h[esi*4], eax
0x7B442E: pop     esi
0x7B442F: retn
0x7B4430: call    BoltShader; jumptable 007B42B9 case 23
0x7B4435: mov     ds:0B42EC0h[esi*4], eax
0x7B443C: pop     esi
0x7B443D: retn
0x7B443E: call    CopyShader; jumptable 007B42B9 case 12
0x7B4443: mov     ds:0B42EC0h[esi*4], eax
0x7B444A: pop     esi
0x7B444B: retn
0x7B444C: cmp     dword ptr ds:0B42F48h, 2; jumptable 007B42B9 case 24
0x7B4453: jl      loc_7B4359
0x7B4459: call    MapShader
0x7B445E: mov     ds:0B42EC0h[esi*4], eax
0x7B4465: pop     esi
0x7B4466: retn
0x7B4467: call    MenuBackGroundShader; jumptable 007B42B9 case 25
0x7B446C: mov     ds:0B42EC0h[esi*4], eax
0x7B4473: pop     esi
0x7B4474: retn
0x7B4475: cmp     ds:0B42EA5h, cl; jumptable 007B42B9 case 26
0x7B447B: jz      loc_7B4359
0x7B4481: call    LighteningShaders?
0x7B4486: mov     ds:0B42EC0h[esi*4], eax
0x7B448D: pop     esi
0x7B448E: retn
0x7B448F: call    PrecipShader?; jumptable 007B42B9 case 27
0x7B4494: mov     ds:0B42EC0h[esi*4], eax
0x7B449B: mov     eax, ds:0B42EC0h[esi*4]; jumptable 007B42B9 default case
0x7B44A2: pop     esi
0x7B44A3: retn
0x7B44A4: xor     eax, eax
0x7B44A6: pop     esi
0x7B44A7: retn
