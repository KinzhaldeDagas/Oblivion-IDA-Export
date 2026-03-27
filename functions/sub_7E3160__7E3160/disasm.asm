0x7E3160: push    0FFFFFFFFh
0x7E3162: push    offset SEH_803C90
0x7E3167: mov     eax, large fs:0
0x7E316D: push    eax
0x7E316E: push    ecx
0x7E316F: push    esi
0x7E3170: push    edi
0x7E3171: mov     eax, ds:0B30AACh
0x7E3176: xor     eax, esp
0x7E3178: push    eax
0x7E3179: lea     eax, [esp+1Ch+var_C]
0x7E317D: mov     large fs:0, eax
0x7E3183: mov     edi, ecx
0x7E3185: cmp     dword ptr [edi+30h], 0
0x7E3189: lea     esi, [edi+30h]
0x7E318C: jnz     loc_7E3341
0x7E3192: push    34h ; '4'; Size
0x7E3194: call    FormHeapAlloc
0x7E3199: add     esp, 4
0x7E319C: mov     [esp+1Ch+var_10], eax
0x7E31A0: test    eax, eax
0x7E31A2: mov     [esp+1Ch+var_4], 0
0x7E31AA: jz      short loc_7E31B9
0x7E31AC: mov     ecx, [edi+14h]
0x7E31AF: push    ecx
0x7E31B0: mov     ecx, eax
0x7E31B2: call    NiD3DShaderCostantMapVertex__Construct
0x7E31B7: jmp     short loc_7E31BB
0x7E31B9: xor     eax, eax
0x7E31BB: push    eax; a2
0x7E31BC: mov     ecx, esi; this
0x7E31BE: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7E31C6: call    NiSmartPointer_Set??
0x7E31CB: mov     ecx, [esi]
0x7E31CD: mov     edx, [ecx]
0x7E31CF: mov     eax, [edx+18h]
0x7E31D2: push    0
0x7E31D4: push    0
0x7E31D6: push    0
0x7E31D8: push    0
0x7E31DA: push    0
0x7E31DC: push    4
0x7E31DE: push    0
0x7E31E0: push    0
0x7E31E2: push    20000009h
0x7E31E7: push    offset aWorldviewprojt; "WorldViewProjTranspose"
0x7E31EC: call    eax
0x7E31EE: mov     ecx, [esi]
0x7E31F0: mov     edx, [ecx]
0x7E31F2: mov     edx, [edx+18h]
0x7E31F5: push    0
0x7E31F7: lea     eax, [edi+118h]
0x7E31FD: push    eax
0x7E31FE: push    4
0x7E3200: push    10h
0x7E3202: push    offset EmptyString
0x7E3207: push    1
0x7E3209: push    8
0x7E320B: push    0
0x7E320D: push    10000007h
0x7E3212: push    offset aColor1; "Color1"
0x7E3217: call    edx
0x7E3219: mov     ecx, [esi]
0x7E321B: mov     eax, [ecx]
0x7E321D: mov     eax, [eax+18h]
0x7E3220: push    0
0x7E3222: lea     edx, [edi+128h]
0x7E3228: push    edx
0x7E3229: push    4
0x7E322B: push    10h
0x7E322D: push    offset EmptyString
0x7E3232: push    1
0x7E3234: push    9
0x7E3236: push    0
0x7E3238: push    10000007h
0x7E323D: push    offset aColor2; "Color2"
0x7E3242: call    eax
0x7E3244: mov     ecx, [esi]
0x7E3246: mov     edx, [ecx]
0x7E3248: mov     edx, [edx+18h]
0x7E324B: push    0
0x7E324D: lea     eax, [edi+138h]
0x7E3253: push    eax
0x7E3254: push    4
0x7E3256: push    10h
0x7E3258: push    offset EmptyString
0x7E325D: push    1
0x7E325F: push    0Ah
0x7E3261: push    0
0x7E3263: push    10000007h
0x7E3268: push    offset aColor3; "Color3"
0x7E326D: call    edx
0x7E326F: mov     ecx, [esi]
0x7E3271: mov     eax, [ecx]
0x7E3273: mov     eax, [eax+18h]
0x7E3276: push    0
0x7E3278: lea     edx, [edi+0F4h]
0x7E327E: push    edx
0x7E327F: push    4
0x7E3281: push    0Ch
0x7E3283: push    offset EmptyString
0x7E3288: push    1
0x7E328A: push    0Bh
0x7E328C: push    0
0x7E328E: push    10000007h
0x7E3293: push    offset aVelocity_0; "Velocity"
0x7E3298: call    eax
0x7E329A: mov     ecx, [esi]
0x7E329C: mov     edx, [ecx]
0x7E329E: push    0
0x7E32A0: mov     edx, [edx+18h]
0x7E32A3: lea     eax, [edi+100h]
0x7E32A9: push    eax
0x7E32AA: push    4
0x7E32AC: push    0Ch
0x7E32AE: push    offset EmptyString
0x7E32B3: push    1
0x7E32B5: push    0Ch
0x7E32B7: push    0
0x7E32B9: push    10000007h
0x7E32BE: push    offset aAcceleration; "Acceleration"
0x7E32C3: call    edx
0x7E32C5: mov     ecx, [esi]
0x7E32C7: mov     eax, [ecx]
0x7E32C9: mov     eax, [eax+18h]
0x7E32CC: push    0
0x7E32CE: lea     edx, [edi+0B4h]
0x7E32D4: push    edx
0x7E32D5: push    4
0x7E32D7: push    40h ; '@'
0x7E32D9: push    offset EmptyString
0x7E32DE: push    4
0x7E32E0: push    4
0x7E32E2: push    0
0x7E32E4: push    10000009h
0x7E32E9: push    offset aFvars; "fVars"
0x7E32EE: call    eax
0x7E32F0: mov     eax, ds:0B4600Ch
0x7E32F5: test    eax, eax
0x7E32F7: jnz     short loc_7E3311
0x7E32F9: cmp     dword ptr ds:0B42F48h, 2
0x7E3300: setl    al
0x7E3303: sub     eax, 1
0x7E3306: and     eax, 50h
0x7E3309: add     eax, 28h ; '('
0x7E330C: mov     ds:0B4600Ch, eax
0x7E3311: mov     ecx, [esi]
0x7E3313: mov     esi, [edi+80h]
0x7E3319: mov     edx, [ecx]
0x7E331B: mov     edx, [edx+18h]
0x7E331E: push    0
0x7E3320: push    esi
0x7E3321: push    4
0x7E3323: mov     esi, eax
0x7E3325: shl     esi, 5
0x7E3328: push    esi
0x7E3329: push    offset EmptyString
0x7E332E: add     eax, eax
0x7E3330: push    eax
0x7E3331: push    0Fh
0x7E3333: push    0
0x7E3335: push    10000009h
0x7E333A: push    offset aParticleData; "particle data"
0x7E333F: call    edx
0x7E3341: cmp     dword ptr [edi+2Ch], 0
0x7E3345: lea     esi, [edi+2Ch]
0x7E3348: jnz     short loc_7E3383
0x7E334A: push    34h ; '4'; Size
0x7E334C: call    FormHeapAlloc
0x7E3351: add     esp, 4
0x7E3354: mov     [esp+1Ch+var_10], eax
0x7E3358: test    eax, eax
0x7E335A: mov     [esp+1Ch+var_4], 1
0x7E3362: jz      short loc_7E3371
0x7E3364: mov     ecx, [edi+14h]
0x7E3367: push    ecx
0x7E3368: mov     ecx, eax
0x7E336A: call    NiD3DShaderCostantMapPixel__Construct
0x7E336F: jmp     short loc_7E3373
0x7E3371: xor     eax, eax
0x7E3373: push    eax; a2
0x7E3374: mov     ecx, esi; this
0x7E3376: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7E337E: call    NiSmartPointer_Set??
0x7E3383: mov     ecx, dword ptr [esp+1Ch+var_C]
0x7E3387: mov     large fs:0, ecx
0x7E338E: pop     ecx
0x7E338F: pop     edi
0x7E3390: pop     esi
0x7E3391: add     esp, 10h
0x7E3394: retn
