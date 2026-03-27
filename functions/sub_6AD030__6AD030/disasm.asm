0x6AD030: sub     esp, 420h
0x6AD036: mov     eax, ds:0B30AACh
0x6AD03B: xor     eax, esp
0x6AD03D: mov     [esp+420h+var_4], eax
0x6AD044: cmp     byte ptr ds:0B16180h, 0
0x6AD04B: push    esi
0x6AD04C: mov     esi, ecx
0x6AD04E: jz      loc_6ADDF8
0x6AD054: mov     ecx, [esi+70h]
0x6AD057: test    ecx, ecx
0x6AD059: push    ebx
0x6AD05A: push    ebp
0x6AD05B: push    edi
0x6AD05C: jnz     loc_6AD2A7
0x6AD062: mov     ecx, ds:0B333C4h; this
0x6AD068: call    TESObjectREFR_GetParentCell
0x6AD06D: mov     edi, eax
0x6AD06F: test    edi, edi
0x6AD071: jz      loc_6ADDF5
0x6AD077: mov     ecx, edi; this
0x6AD079: call    TESObjectCELL_IsInterior
0x6AD07E: test    al, al
0x6AD080: jnz     short loc_6AD0CB
0x6AD082: mov     ecx, ds:0B333C4h
0x6AD088: mov     eax, [ecx]
0x6AD08A: mov     edx, [eax+174h]
0x6AD090: call    edx
0x6AD092: push    0; int
0x6AD094: mov     ecx, edi; this
0x6AD096: mov     ebp, eax
0x6AD098: call    TESObjectCELL_GetWorldSpace
0x6AD09D: mov     ecx, ds:0B333C4h
0x6AD0A3: push    eax; int
0x6AD0A4: mov     eax, [ecx]
0x6AD0A6: mov     edx, [eax+174h]
0x6AD0AC: call    edx
0x6AD0AE: fld     dword ptr [eax+4]
0x6AD0B1: mov     ecx, ds:0B33A98h
0x6AD0B7: sub     esp, 8
0x6AD0BA: fstp    [esp+440h+var_43C]; float
0x6AD0BE: fld     dword ptr [ebp+0]
0x6AD0C1: fstp    [esp+440h+var_440]; float
0x6AD0C4: call    sub_44A270
0x6AD0C9: mov     edi, eax
0x6AD0CB: cmp     word ptr [esi+0B0h], 4
0x6AD0D3: jz      short loc_6AD0FB
0x6AD0D5: test    edi, edi
0x6AD0D7: jz      short loc_6AD0FB
0x6AD0D9: fld     dword ptr [esi+2F8h]
0x6AD0DF: push    ecx
0x6AD0E0: fstp    [esp+434h+var_434]
0x6AD0E3: push    0
0x6AD0E5: push    0
0x6AD0E7: mov     ecx, edi
0x6AD0E9: call    TESObjectCELL_GetMusicType
0x6AD0EE: push    eax
0x6AD0EF: mov     ecx, esi
0x6AD0F1: call    sub_6ACD10
0x6AD0F6: jmp     loc_6ADDF5
0x6AD0FB: xor     edi, edi
0x6AD0FD: cmp     byte ptr ds:0B16180h, 0
0x6AD104: jz      loc_6ADDEE
0x6AD10A: lea     ebp, [esi+1E4h]
0x6AD110: push    offset aDeath; "death"
0x6AD115: push    ebp; Str
0x6AD116: call    _strstr
0x6AD11B: push    offset aSuccess; "success"
0x6AD120: push    ebp; Str
0x6AD121: call    _strstr
0x6AD126: add     esp, 10h
0x6AD129: test    eax, eax
0x6AD12B: mov     ebx, 8
0x6AD130: jz      short loc_6AD13F
0x6AD132: cmp     [esi+0B0h], bx
0x6AD139: jz      loc_6ADDE5
0x6AD13F: movzx   eax, word ptr [esi+0B0h]
0x6AD146: cmp     ax, bx
0x6AD149: jnz     short loc_6AD15B
0x6AD14B: test    byte ptr [esi+0DCh], 2
0x6AD152: jnz     short loc_6AD156
0x6AD154: mov     edi, ebp
0x6AD156: cmp     ax, bx
0x6AD159: jz      short loc_6AD161
0x6AD15B: cmp     ax, 4
0x6AD15F: jnz     short loc_6AD16E
0x6AD161: test    byte ptr [esi+0DCh], 2
0x6AD168: jnz     loc_6ADDEE
0x6AD16E: test    edi, edi
0x6AD170: jz      short loc_6AD18E
0x6AD172: lea     edx, [esp+430h+MultiByteStr]
0x6AD176: mov     eax, edi
0x6AD178: sub     edx, edi
0x6AD17A: lea     ebx, [ebx+0]
0x6AD180: mov     cl, [eax]
0x6AD182: mov     [edx+eax], cl
0x6AD185: add     eax, 1
0x6AD188: test    cl, cl
0x6AD18A: jnz     short loc_6AD180
0x6AD18C: jmp     short loc_6AD1A4
0x6AD18E: push    4; __int16
0x6AD190: lea     eax, [esp+434h+MultiByteStr]
0x6AD194: push    eax; lpFileName
0x6AD195: mov     ecx, esi
0x6AD197: call    sub_6A8E80
0x6AD19C: test    al, al
0x6AD19E: jz      loc_6ADDEE
0x6AD1A4: lea     ecx, [esp+430h+MultiByteStr]
0x6AD1A8: push    0; int
0x6AD1AA: push    ecx; char *
0x6AD1AB: call    __access
0x6AD1B0: add     esp, 8
0x6AD1B3: cmp     eax, 0FFFFFFFFh
0x6AD1B6: jz      loc_6ADDEE
0x6AD1BC: cmp     [esi+0B0h], bx
0x6AD1C3: jz      short loc_6AD1FD
0x6AD1C5: lea     ecx, [esp+430h+MultiByteStr]
0x6AD1C9: mov     eax, ebp
0x6AD1CB: jmp     short loc_6AD1D0
0x6AD1CD: align 10h
0x6AD1D0: mov     dl, [eax]
0x6AD1D2: cmp     dl, [ecx]
0x6AD1D4: jnz     short loc_6AD1F0
0x6AD1D6: test    dl, dl
0x6AD1D8: jz      short loc_6AD1EC
0x6AD1DA: mov     dl, [eax+1]
0x6AD1DD: cmp     dl, [ecx+1]
0x6AD1E0: jnz     short loc_6AD1F0
0x6AD1E2: add     eax, 2
0x6AD1E5: add     ecx, 2
0x6AD1E8: test    dl, dl
0x6AD1EA: jnz     short loc_6AD1D0
0x6AD1EC: xor     eax, eax
0x6AD1EE: jmp     short loc_6AD1F5
0x6AD1F0: sbb     eax, eax
0x6AD1F2: sbb     eax, 0FFFFFFFFh
0x6AD1F5: test    eax, eax
0x6AD1F7: jz      loc_6ADDEE
0x6AD1FD: mov     ecx, esi
0x6AD1FF: call    SoundManager_StopFilterGraph
0x6AD204: lea     edi, [esi+70h]
0x6AD207: push    edi; ppv
0x6AD208: push    offset riid; riid
0x6AD20D: push    1; dwClsContext
0x6AD20F: push    0; pUnkOuter
0x6AD211: push    offset CLSID_CLSID_FilgraphManager; rclsid
0x6AD216: call    dword ptr ds:0A283C8h
0x6AD21C: test    eax, eax
0x6AD21E: jl      loc_6ADDEE
0x6AD224: push    104h; cchWideChar
0x6AD229: lea     edx, [esp+434h+WideCharStr]
0x6AD230: push    edx; lpWideCharStr
0x6AD231: push    0FFFFFFFFh; cbMultiByte
0x6AD233: lea     eax, [esp+43Ch+MultiByteStr]
0x6AD237: push    eax; lpMultiByteStr
0x6AD238: push    0; dwFlags
0x6AD23A: push    0; CodePage
0x6AD23C: call    dword ptr ds:0A28180h
0x6AD242: mov     eax, [edi]
0x6AD244: mov     ecx, [eax]
0x6AD246: push    0
0x6AD248: lea     edx, [esp+434h+WideCharStr]
0x6AD24F: push    edx
0x6AD250: push    eax
0x6AD251: mov     eax, [ecx+34h]
0x6AD254: call    eax
0x6AD256: test    eax, eax
0x6AD258: jl      loc_6ADDEE
0x6AD25E: mov     eax, [edi]
0x6AD260: mov     ecx, [eax]
0x6AD262: lea     edx, [esi+74h]
0x6AD265: push    edx
0x6AD266: push    offset CLSID_IBasicAudio
0x6AD26B: push    eax
0x6AD26C: mov     eax, [ecx]
0x6AD26E: call    eax
0x6AD270: test    byte ptr [esi+0DCh], 18h
0x6AD277: jnz     short loc_6AD28C
0x6AD279: fld     dword ptr [esi+2F0h]
0x6AD27F: push    0; int
0x6AD281: push    ecx
0x6AD282: mov     ecx, esi
0x6AD284: fstp    [esp+438h+var_438]; float
0x6AD287: call    SoundManager_SetMusicVolume
0x6AD28C: lea     eax, [esp+430h+MultiByteStr]
0x6AD290: mov     edx, ebp
0x6AD292: mov     ecx, eax
0x6AD294: sub     edx, ecx
0x6AD296: mov     cl, [eax]
0x6AD298: mov     [edx+eax], cl
0x6AD29B: add     eax, 1
0x6AD29E: test    cl, cl
0x6AD2A0: jnz     short loc_6AD296
0x6AD2A2: jmp     loc_6ADDDE
0x6AD2A7: mov     edi, ds:0B33EA0h
0x6AD2AD: mov     edx, edi
0x6AD2AF: sub     edx, [esi+2E8h]
0x6AD2B5: test    edx, edx
0x6AD2B7: mov     [esp+430h+var_414], edx
0x6AD2BB: fild    [esp+430h+var_414]
0x6AD2BF: jge     short loc_6AD2C7
0x6AD2C1: fadd    dword ptr ds:0A2FC78h
0x6AD2C7: fdiv    qword ptr ds:0A771C0h
0x6AD2CD: fstp    [esp+430h+var_420]
0x6AD2D1: fldz
0x6AD2D3: fld     [esp+430h+var_420]
0x6AD2D7: fcom    st(1)
0x6AD2D9: fnstsw  ax
0x6AD2DB: fld1
0x6AD2DD: test    ah, 5
0x6AD2E0: jp      short loc_6AD2F0
0x6AD2E2: fstp    st(1)
0x6AD2E4: fstp    st
0x6AD2E6: fst     [esp+430h+var_420]
0x6AD2EA: fld     [esp+430h+var_420]
0x6AD2EE: jmp     short loc_6AD307
0x6AD2F0: fcom    st(1)
0x6AD2F2: fnstsw  ax
0x6AD2F4: test    ah, 5
0x6AD2F7: jp      short loc_6AD305
0x6AD2F9: fstp    st(1)
0x6AD2FB: fstp    [esp+430h+var_420]
0x6AD2FF: fld     [esp+430h+var_420]
0x6AD303: jmp     short loc_6AD307
0x6AD305: fstp    st
0x6AD307: cmp     dword ptr [esi+74h], 0
0x6AD30B: lea     eax, [esi+74h]
0x6AD30E: jnz     short loc_6AD327
0x6AD310: mov     edx, [ecx]
0x6AD312: fstp    st
0x6AD314: push    eax
0x6AD315: fstp    st
0x6AD317: mov     eax, [edx]
0x6AD319: push    offset CLSID_IBasicAudio
0x6AD31E: push    ecx
0x6AD31F: call    eax
0x6AD321: fldz
0x6AD323: fld     [esp+430h+var_420]
0x6AD327: mov     ecx, [esi+0DCh]
0x6AD32D: mov     ebx, 8
0x6AD332: test    bl, cl
0x6AD334: jz      loc_6AD5E1
0x6AD33A: fld     dword ptr [esi+2F0h]
0x6AD340: fcomp   qword ptr ds:0A68610h
0x6AD346: fnstsw  ax
0x6AD348: test    ah, 5
0x6AD34B: jp      loc_6AD59F
0x6AD351: movzx   ebp, word ptr [esi+2FCh]
0x6AD358: fstp    st
0x6AD35A: and     ecx, 0FFFFFFF7h
0x6AD35D: fstp    st
0x6AD35F: or      ecx, 10h
0x6AD362: mov     [esi+0DCh], ecx
0x6AD368: xor     edi, edi
0x6AD36A: cmp     byte ptr ds:0B16180h, 0
0x6AD371: jz      loc_6AD58E
0x6AD377: lea     ebx, [esi+1E4h]
0x6AD37D: push    offset aDeath; "death"
0x6AD382: push    ebx; Str
0x6AD383: call    _strstr
0x6AD388: add     esp, 8
0x6AD38B: test    eax, eax
0x6AD38D: jz      short loc_6AD39A
0x6AD38F: cmp     bp, 0FFFFh
0x6AD394: jz      loc_6AD58E
0x6AD39A: push    offset aSuccess; "success"
0x6AD39F: push    ebx; Str
0x6AD3A0: call    _strstr
0x6AD3A5: add     esp, 8
0x6AD3A8: test    eax, eax
0x6AD3AA: jz      short loc_6AD3BA
0x6AD3AC: cmp     word ptr [esi+0B0h], 8
0x6AD3B4: jz      loc_6AD587
0x6AD3BA: movzx   eax, word ptr [esi+0B0h]
0x6AD3C1: cmp     ax, 8
0x6AD3C5: jnz     short loc_6AD3D2
0x6AD3C7: test    byte ptr [esi+0DCh], 2
0x6AD3CE: jnz     short loc_6AD3D2
0x6AD3D0: mov     edi, ebx
0x6AD3D2: cmp     ax, 4
0x6AD3D6: jnz     short loc_6AD3E7
0x6AD3D8: cmp     bp, 8
0x6AD3DC: jnz     short loc_6AD3E7
0x6AD3DE: mov     word ptr [esi+0B0h], 0
0x6AD3E7: movzx   eax, word ptr [esi+0B0h]
0x6AD3EE: cmp     ax, 8
0x6AD3F2: jz      short loc_6AD3FA
0x6AD3F4: cmp     ax, 4
0x6AD3F8: jnz     short loc_6AD401
0x6AD3FA: cmp     bp, 0FFFFh
0x6AD3FF: jnz     short loc_6AD406
0x6AD401: cmp     ax, bp
0x6AD404: jnz     short loc_6AD413
0x6AD406: test    byte ptr [esi+0DCh], 2
0x6AD40D: jnz     loc_6AD58E
0x6AD413: cmp     ax, 8
0x6AD417: jz      short loc_6AD42A
0x6AD419: cmp     ax, 4
0x6AD41D: jz      short loc_6AD42A
0x6AD41F: cmp     bp, 0FFFFh
0x6AD424: jz      loc_6AD58E
0x6AD42A: test    edi, edi
0x6AD42C: jz      short loc_6AD444
0x6AD42E: lea     edx, [esp+430h+MultiByteStr]
0x6AD432: mov     eax, edi
0x6AD434: sub     edx, edi
0x6AD436: mov     cl, [eax]
0x6AD438: mov     [edx+eax], cl
0x6AD43B: add     eax, 1
0x6AD43E: test    cl, cl
0x6AD440: jnz     short loc_6AD436
0x6AD442: jmp     short loc_6AD48A
0x6AD444: cmp     bp, 0FFFFh
0x6AD449: jnz     short loc_6AD475
0x6AD44B: mov     ecx, ds:0B333A0h
0x6AD451: call    TES_GetCurrentCell
0x6AD456: test    eax, eax
0x6AD458: jz      short loc_6AD473
0x6AD45A: mov     ecx, ds:0B333A0h
0x6AD460: push    0
0x6AD462: call    TES_GetCurrentCell
0x6AD467: mov     ecx, eax
0x6AD469: call    TESObjectCELL_GetMusicType
0x6AD46E: movzx   ebp, ax
0x6AD471: jmp     short loc_6AD475
0x6AD473: xor     ebp, ebp
0x6AD475: push    ebp; __int16
0x6AD476: lea     ecx, [esp+434h+MultiByteStr]
0x6AD47A: push    ecx; lpFileName
0x6AD47B: mov     ecx, esi
0x6AD47D: call    sub_6A8E80
0x6AD482: test    al, al
0x6AD484: jz      loc_6AD58E
0x6AD48A: lea     edx, [esp+430h+MultiByteStr]
0x6AD48E: push    0; int
0x6AD490: push    edx; char *
0x6AD491: call    __access
0x6AD496: add     esp, 8
0x6AD499: cmp     eax, 0FFFFFFFFh
0x6AD49C: jz      loc_6AD58E
0x6AD4A2: cmp     word ptr [esi+0B0h], 8
0x6AD4AA: jz      short loc_6AD4DF
0x6AD4AC: lea     ecx, [esp+430h+MultiByteStr]
0x6AD4B0: mov     eax, ebx
0x6AD4B2: mov     dl, [eax]
0x6AD4B4: cmp     dl, [ecx]
0x6AD4B6: jnz     short loc_6AD4D2
0x6AD4B8: test    dl, dl
0x6AD4BA: jz      short loc_6AD4CE
0x6AD4BC: mov     dl, [eax+1]
0x6AD4BF: cmp     dl, [ecx+1]
0x6AD4C2: jnz     short loc_6AD4D2
0x6AD4C4: add     eax, 2
0x6AD4C7: add     ecx, 2
0x6AD4CA: test    dl, dl
0x6AD4CC: jnz     short loc_6AD4B2
0x6AD4CE: xor     eax, eax
0x6AD4D0: jmp     short loc_6AD4D7
0x6AD4D2: sbb     eax, eax
0x6AD4D4: sbb     eax, 0FFFFFFFFh
0x6AD4D7: test    eax, eax
0x6AD4D9: jz      loc_6AD58E
0x6AD4DF: mov     ecx, esi
0x6AD4E1: call    SoundManager_StopFilterGraph
0x6AD4E6: lea     edi, [esi+70h]
0x6AD4E9: push    edi; ppv
0x6AD4EA: push    offset riid; riid
0x6AD4EF: push    1; dwClsContext
0x6AD4F1: push    0; pUnkOuter
0x6AD4F3: push    offset CLSID_CLSID_FilgraphManager; rclsid
0x6AD4F8: call    dword ptr ds:0A283C8h
0x6AD4FE: test    eax, eax
0x6AD500: jl      loc_6AD58E
0x6AD506: push    104h; cchWideChar
0x6AD50B: lea     eax, [esp+434h+WideCharStr]
0x6AD512: push    eax; lpWideCharStr
0x6AD513: push    0FFFFFFFFh; cbMultiByte
0x6AD515: lea     ecx, [esp+43Ch+MultiByteStr]
0x6AD519: push    ecx; lpMultiByteStr
0x6AD51A: push    0; dwFlags
0x6AD51C: push    0; CodePage
0x6AD51E: call    dword ptr ds:0A28180h
0x6AD524: mov     eax, [edi]
0x6AD526: mov     edx, [eax]
0x6AD528: mov     edx, [edx+34h]
0x6AD52B: push    0
0x6AD52D: lea     ecx, [esp+434h+WideCharStr]
0x6AD534: push    ecx
0x6AD535: push    eax
0x6AD536: call    edx
0x6AD538: test    eax, eax
0x6AD53A: jl      short loc_6AD58E
0x6AD53C: mov     eax, [edi]
0x6AD53E: mov     edx, [eax]
0x6AD540: lea     ecx, [esi+74h]
0x6AD543: push    ecx
0x6AD544: push    offset CLSID_IBasicAudio
0x6AD549: push    eax
0x6AD54A: mov     eax, [edx]
0x6AD54C: call    eax
0x6AD54E: test    byte ptr [esi+0DCh], 18h
0x6AD555: jnz     short loc_6AD56A
0x6AD557: fld     dword ptr [esi+2F0h]
0x6AD55D: push    0; int
0x6AD55F: push    ecx
0x6AD560: mov     ecx, esi
0x6AD562: fstp    [esp+438h+var_438]; float
0x6AD565: call    SoundManager_SetMusicVolume
0x6AD56A: lea     eax, [esp+430h+MultiByteStr]
0x6AD56E: mov     edx, ebx
0x6AD570: mov     ecx, eax
0x6AD572: sub     edx, ecx
0x6AD574: mov     cl, [eax]
0x6AD576: mov     [edx+eax], cl
0x6AD579: add     eax, 1
0x6AD57C: test    cl, cl
0x6AD57E: jnz     short loc_6AD574
0x6AD580: or      dword ptr [esi+0DCh], 1
0x6AD587: mov     [esi+0B0h], bp
0x6AD58E: mov     ecx, esi
0x6AD590: call    SoundManager_PlayMusic
0x6AD595: mov     ebx, 8
0x6AD59A: jmp     loc_6AD934
0x6AD59F: test    cl, 1
0x6AD5A2: jz      short loc_6AD5CF
0x6AD5A4: fld     dword ptr ds:0A3D65Ch
0x6AD5AA: fcomp   st(1)
0x6AD5AC: fnstsw  ax
0x6AD5AE: test    ah, 5
0x6AD5B1: jp      short loc_6AD5BA
0x6AD5B3: fstp    st
0x6AD5B5: jmp     loc_6AD91B
0x6AD5BA: fstp    st(1)
0x6AD5BC: fld     dword ptr [esi+2F8h]
0x6AD5C2: fxch    st(1)
0x6AD5C4: fadd    st, st
0x6AD5C6: fmul    st, st(1)
0x6AD5C8: fsubp   st(1), st
0x6AD5CA: jmp     loc_6AD91B
0x6AD5CF: fstp    st
0x6AD5D1: and     ecx, 0FFFFFFF7h
0x6AD5D4: fstp    st
0x6AD5D6: mov     [esi+0DCh], ecx
0x6AD5DC: jmp     loc_6AD934
0x6AD5E1: mov     eax, ecx
0x6AD5E3: fstp    st(1)
0x6AD5E5: and     eax, 1
0x6AD5E8: jz      short loc_6AD63C
0x6AD5EA: test    cl, 10h
0x6AD5ED: jz      short loc_6AD63C
0x6AD5EF: fld     dword ptr [esi+2F0h]
0x6AD5F5: fld     dword ptr [esi+2F4h]
0x6AD5FB: fcompp
0x6AD5FD: fnstsw  ax
0x6AD5FF: test    ah, 41h
0x6AD602: jp      short loc_6AD614
0x6AD604: and     ecx, 0FFFFFFEFh
0x6AD607: fstp    st
0x6AD609: mov     [esi+0DCh], ecx
0x6AD60F: jmp     loc_6AD934
0x6AD614: cmp     edi, [esi+2ECh]
0x6AD61A: jbe     short loc_6AD629
0x6AD61C: fstp    st
0x6AD61E: fld     dword ptr [esi+2F8h]
0x6AD624: jmp     loc_6AD91B
0x6AD629: fsub    qword ptr ds:0A2FAA0h
0x6AD62F: fadd    st, st
0x6AD631: fmul    dword ptr [esi+2F8h]
0x6AD637: jmp     loc_6AD91B
0x6AD63C: test    eax, eax
0x6AD63E: fstp    st
0x6AD640: jnz     loc_6AD8AA
0x6AD646: mov     ecx, ds:0B333C4h; this
0x6AD64C: call    TESObjectREFR_GetParentCell
0x6AD651: mov     edi, eax
0x6AD653: test    edi, edi
0x6AD655: jz      loc_6AD934
0x6AD65B: mov     ecx, edi; this
0x6AD65D: call    TESObjectCELL_IsInterior
0x6AD662: test    al, al
0x6AD664: jnz     short loc_6AD6AF
0x6AD666: mov     ecx, ds:0B333C4h
0x6AD66C: mov     edx, [ecx]
0x6AD66E: mov     eax, [edx+174h]
0x6AD674: call    eax
0x6AD676: push    0; int
0x6AD678: mov     ecx, edi; this
0x6AD67A: mov     ebp, eax
0x6AD67C: call    TESObjectCELL_GetWorldSpace
0x6AD681: mov     ecx, ds:0B333C4h
0x6AD687: mov     edx, [ecx]
0x6AD689: push    eax; int
0x6AD68A: mov     eax, [edx+174h]
0x6AD690: call    eax
0x6AD692: fld     dword ptr [eax+4]
0x6AD695: mov     ecx, ds:0B33A98h
0x6AD69B: sub     esp, 8
0x6AD69E: fstp    [esp+440h+var_43C]; float
0x6AD6A2: fld     dword ptr [ebp+0]
0x6AD6A5: fstp    [esp+440h+var_440]; float
0x6AD6A8: call    sub_44A270
0x6AD6AD: mov     edi, eax
0x6AD6AF: lea     ebp, [esi+1E4h]
0x6AD6B5: push    offset aDeath; "death"
0x6AD6BA: push    ebp; Str
0x6AD6BB: call    _strstr
0x6AD6C0: add     esp, 8
0x6AD6C3: test    eax, eax
0x6AD6C5: jz      short loc_6AD6D0
0x6AD6C7: mov     word ptr [esi+0B0h], 0
0x6AD6D0: cmp     word ptr [esi+0B0h], 4
0x6AD6D8: jz      short loc_6AD6FC
0x6AD6DA: test    edi, edi
0x6AD6DC: jz      short loc_6AD6FC
0x6AD6DE: fld1
0x6AD6E0: push    ecx
0x6AD6E1: fstp    [esp+434h+var_434]
0x6AD6E4: mov     ecx, edi
0x6AD6E6: push    0
0x6AD6E8: push    0
0x6AD6EA: call    TESObjectCELL_GetMusicType
0x6AD6EF: push    eax
0x6AD6F0: mov     ecx, esi
0x6AD6F2: call    sub_6ACD10
0x6AD6F7: jmp     loc_6AD934
0x6AD6FC: xor     edi, edi
0x6AD6FE: cmp     byte ptr ds:0B16180h, 0
0x6AD705: jz      loc_6AD89E
0x6AD70B: push    offset aDeath; "death"
0x6AD710: push    ebp; Str
0x6AD711: call    _strstr
0x6AD716: push    offset aSuccess; "success"
0x6AD71B: push    ebp; Str
0x6AD71C: call    _strstr
0x6AD721: add     esp, 10h
0x6AD724: test    eax, eax
0x6AD726: jz      short loc_6AD735
0x6AD728: cmp     [esi+0B0h], bx
0x6AD72F: jz      loc_6AD895
0x6AD735: movzx   eax, word ptr [esi+0B0h]
0x6AD73C: cmp     ax, bx
0x6AD73F: jnz     short loc_6AD751
0x6AD741: test    byte ptr [esi+0DCh], 2
0x6AD748: jnz     short loc_6AD74C
0x6AD74A: mov     edi, ebp
0x6AD74C: cmp     ax, bx
0x6AD74F: jz      short loc_6AD757
0x6AD751: cmp     ax, 4
0x6AD755: jnz     short loc_6AD764
0x6AD757: test    byte ptr [esi+0DCh], 2
0x6AD75E: jnz     loc_6AD89E
0x6AD764: test    edi, edi
0x6AD766: jz      short loc_6AD77E
0x6AD768: lea     edx, [esp+430h+MultiByteStr]
0x6AD76C: mov     eax, edi
0x6AD76E: sub     edx, edi
0x6AD770: mov     cl, [eax]
0x6AD772: mov     [edx+eax], cl
0x6AD775: add     eax, 1
0x6AD778: test    cl, cl
0x6AD77A: jnz     short loc_6AD770
0x6AD77C: jmp     short loc_6AD794
0x6AD77E: push    4; __int16
0x6AD780: lea     ecx, [esp+434h+MultiByteStr]
0x6AD784: push    ecx; lpFileName
0x6AD785: mov     ecx, esi
0x6AD787: call    sub_6A8E80
0x6AD78C: test    al, al
0x6AD78E: jz      loc_6AD89E
0x6AD794: lea     edx, [esp+430h+MultiByteStr]
0x6AD798: push    0; int
0x6AD79A: push    edx; char *
0x6AD79B: call    __access
0x6AD7A0: add     esp, 8
0x6AD7A3: cmp     eax, 0FFFFFFFFh
0x6AD7A6: jz      loc_6AD89E
0x6AD7AC: cmp     [esi+0B0h], bx
0x6AD7B3: jz      short loc_6AD7ED
0x6AD7B5: lea     ecx, [esp+430h+MultiByteStr]
0x6AD7B9: mov     eax, ebp
0x6AD7BB: jmp     short loc_6AD7C0
0x6AD7BD: align 10h
0x6AD7C0: mov     dl, [eax]
0x6AD7C2: cmp     dl, [ecx]
0x6AD7C4: jnz     short loc_6AD7E0
0x6AD7C6: test    dl, dl
0x6AD7C8: jz      short loc_6AD7DC
0x6AD7CA: mov     dl, [eax+1]
0x6AD7CD: cmp     dl, [ecx+1]
0x6AD7D0: jnz     short loc_6AD7E0
0x6AD7D2: add     eax, 2
0x6AD7D5: add     ecx, 2
0x6AD7D8: test    dl, dl
0x6AD7DA: jnz     short loc_6AD7C0
0x6AD7DC: xor     eax, eax
0x6AD7DE: jmp     short loc_6AD7E5
0x6AD7E0: sbb     eax, eax
0x6AD7E2: sbb     eax, 0FFFFFFFFh
0x6AD7E5: test    eax, eax
0x6AD7E7: jz      loc_6AD89E
0x6AD7ED: mov     ecx, esi
0x6AD7EF: call    SoundManager_StopFilterGraph
0x6AD7F4: lea     edi, [esi+70h]
0x6AD7F7: push    edi; ppv
0x6AD7F8: push    offset riid; riid
0x6AD7FD: push    1; dwClsContext
0x6AD7FF: push    0; pUnkOuter
0x6AD801: push    offset CLSID_CLSID_FilgraphManager; rclsid
0x6AD806: call    dword ptr ds:0A283C8h
0x6AD80C: test    eax, eax
0x6AD80E: jl      loc_6AD89E
0x6AD814: push    104h; cchWideChar
0x6AD819: lea     eax, [esp+434h+WideCharStr]
0x6AD820: push    eax; lpWideCharStr
0x6AD821: push    0FFFFFFFFh; cbMultiByte
0x6AD823: lea     ecx, [esp+43Ch+MultiByteStr]
0x6AD827: push    ecx; lpMultiByteStr
0x6AD828: push    0; dwFlags
0x6AD82A: push    0; CodePage
0x6AD82C: call    dword ptr ds:0A28180h
0x6AD832: mov     eax, [edi]
0x6AD834: mov     edx, [eax]
0x6AD836: mov     edx, [edx+34h]
0x6AD839: push    0
0x6AD83B: lea     ecx, [esp+434h+WideCharStr]
0x6AD842: push    ecx
0x6AD843: push    eax
0x6AD844: call    edx
0x6AD846: test    eax, eax
0x6AD848: jl      short loc_6AD89E
0x6AD84A: mov     eax, [edi]
0x6AD84C: mov     edx, [eax]
0x6AD84E: lea     ecx, [esi+74h]
0x6AD851: push    ecx
0x6AD852: push    offset CLSID_IBasicAudio
0x6AD857: push    eax
0x6AD858: mov     eax, [edx]
0x6AD85A: call    eax
0x6AD85C: test    byte ptr [esi+0DCh], 18h
0x6AD863: jnz     short loc_6AD878
0x6AD865: fld     dword ptr [esi+2F0h]
0x6AD86B: push    0; int
0x6AD86D: push    ecx
0x6AD86E: mov     ecx, esi
0x6AD870: fstp    [esp+438h+var_438]; float
0x6AD873: call    SoundManager_SetMusicVolume
0x6AD878: lea     eax, [esp+430h+MultiByteStr]
0x6AD87C: mov     edx, ebp
0x6AD87E: mov     ecx, eax
0x6AD880: sub     edx, ecx
0x6AD882: mov     cl, [eax]
0x6AD884: mov     [edx+eax], cl
0x6AD887: add     eax, 1
0x6AD88A: test    cl, cl
0x6AD88C: jnz     short loc_6AD882
0x6AD88E: or      dword ptr [esi+0DCh], 1
0x6AD895: mov     word ptr [esi+0B0h], 4
0x6AD89E: mov     ecx, esi
0x6AD8A0: call    SoundManager_PlayMusic
0x6AD8A5: jmp     loc_6AD934
0x6AD8AA: fld     dword ptr [esi+2F0h]
0x6AD8B0: fld     dword ptr [esi+2F8h]
0x6AD8B6: fucompp
0x6AD8B8: fnstsw  ax
0x6AD8BA: test    ah, 44h
0x6AD8BD: jnp     short loc_6AD934
0x6AD8BF: fld     dword ptr [esi+2F8h]
0x6AD8C5: fsub    dword ptr [esi+2F0h]
0x6AD8CB: fstp    [esp+430h+var_420]
0x6AD8CF: fld     [esp+430h+var_420]
0x6AD8D3: fabs
0x6AD8D5: fstp    [esp+430h+var_420]
0x6AD8D9: fld     [esp+430h+var_420]
0x6AD8DD: fcomp   dword ptr ds:0A57604h
0x6AD8E3: fnstsw  ax
0x6AD8E5: test    ah, 5
0x6AD8E8: jp      short loc_6AD8F2
0x6AD8EA: fld     dword ptr [esi+2F8h]
0x6AD8F0: jmp     short loc_6AD91B
0x6AD8F2: fld     dword ptr [esi+2F8h]
0x6AD8F8: fld     dword ptr [esi+2F0h]
0x6AD8FE: fcompp
0x6AD900: fnstsw  ax
0x6AD902: fld     dword ptr [esi+2F0h]
0x6AD908: test    ah, 5
0x6AD90B: jp      short loc_6AD915
0x6AD90D: fadd    qword ptr ds:0A73E80h
0x6AD913: jmp     short loc_6AD91B
0x6AD915: fsub    qword ptr ds:0A73E80h
0x6AD91B: fstp    dword ptr [esi+2F0h]
0x6AD921: push    0; int
0x6AD923: fld     dword ptr [esi+2F0h]
0x6AD929: push    ecx
0x6AD92A: mov     ecx, esi
0x6AD92C: fstp    [esp+438h+var_438]; float
0x6AD92F: call    SoundManager_SetMusicVolume
0x6AD934: mov     eax, [esi+0DCh]
0x6AD93A: test    al, 1Ah
0x6AD93C: jnz     short loc_6AD95A
0x6AD93E: fld1
0x6AD940: movzx   edx, word ptr [esi+0B0h]
0x6AD947: push    ecx
0x6AD948: mov     ecx, esi
0x6AD94A: fstp    [esp+434h+var_434]
0x6AD94D: push    0
0x6AD94F: push    edx
0x6AD950: call    sub_6ACD10
0x6AD955: jmp     loc_6ADDF5
0x6AD95A: test    al, 1
0x6AD95C: jz      loc_6AD9FC
0x6AD962: mov     eax, [esi+70h]
0x6AD965: mov     ecx, [eax]
0x6AD967: lea     edx, [esp+430h+var_41C]
0x6AD96B: push    edx
0x6AD96C: push    offset CLSID_IMediaEvent
0x6AD971: push    eax
0x6AD972: mov     eax, [ecx]
0x6AD974: call    eax
0x6AD976: test    eax, eax
0x6AD978: jl      loc_6AD9FC
0x6AD97E: mov     eax, [esp+430h+var_41C]
0x6AD982: mov     ecx, [eax]
0x6AD984: push    0
0x6AD986: lea     edx, [esp+434h+var_410]
0x6AD98A: push    edx
0x6AD98B: lea     edx, [esp+438h+var_414]
0x6AD98F: push    edx
0x6AD990: lea     edx, [esp+43Ch+var_418]
0x6AD994: push    edx
0x6AD995: push    eax
0x6AD996: mov     eax, [ecx+20h]
0x6AD999: call    eax
0x6AD99B: test    eax, eax
0x6AD99D: jl      short loc_6AD9F0
0x6AD99F: nop
0x6AD9A0: mov     ecx, [esp+42Ch+var_414]
0x6AD9A4: test    ecx, ecx
0x6AD9A6: jle     short loc_6AD9B8
0x6AD9A8: cmp     ecx, 3
0x6AD9AB: jg      short loc_6AD9B8
0x6AD9AD: mov     ecx, esi
0x6AD9AF: call    sub_6A8DB0
0x6AD9B4: mov     ecx, [esp+42Ch+var_414]
0x6AD9B8: mov     edi, dword ptr [esp+42Ch+MultiByteStr]
0x6AD9BC: mov     eax, [esp+42Ch+var_418]
0x6AD9C0: mov     edx, [eax]
0x6AD9C2: push    edi
0x6AD9C3: mov     edi, [esp+430h+var_410]
0x6AD9C7: push    edi
0x6AD9C8: push    ecx
0x6AD9C9: push    eax
0x6AD9CA: mov     eax, [edx+30h]
0x6AD9CD: call    eax
0x6AD9CF: mov     eax, [esp+42Ch+var_418]
0x6AD9D3: mov     ecx, [eax]
0x6AD9D5: push    0
0x6AD9D7: lea     edx, [esp+430h+MultiByteStr]
0x6AD9DB: push    edx
0x6AD9DC: lea     edx, [esp+434h+var_410]
0x6AD9E0: push    edx
0x6AD9E1: lea     edx, [esp+438h+var_414]
0x6AD9E5: push    edx
0x6AD9E6: push    eax
0x6AD9E7: mov     eax, [ecx+20h]
0x6AD9EA: call    eax
0x6AD9EC: test    eax, eax
0x6AD9EE: jge     short loc_6AD9A0
0x6AD9F0: mov     eax, [esp+42Ch+var_418]
0x6AD9F4: mov     ecx, [eax]
0x6AD9F6: mov     edx, [ecx+8]
0x6AD9F9: push    eax
0x6AD9FA: call    edx
0x6AD9FC: cmp     word ptr [esi+0B0h], 4
0x6ADA04: jnz     loc_6ADC15
0x6ADA0A: mov     ecx, ds:0B333C4h
0x6ADA10: push    0
0x6ADA12: call    PlayerCharacter_IsPlayerInCombat
0x6ADA17: test    al, al
0x6ADA19: jnz     loc_6ADC15
0x6ADA1F: xor     edi, edi
0x6ADA21: cmp     byte ptr ds:0B16180h, 0
0x6ADA28: mov     ebx, 0FFFFh
0x6ADA2D: jz      loc_6ADDF5
0x6ADA33: lea     ebp, [esi+1E4h]
0x6ADA39: push    offset aDeath; "death"
0x6ADA3E: push    ebp; Str
0x6ADA3F: call    _strstr
0x6ADA44: add     esp, 8
0x6ADA47: test    eax, eax
0x6ADA49: jnz     loc_6ADDF5
0x6ADA4F: push    offset aSuccess; "success"
0x6ADA54: push    ebp; Str
0x6ADA55: call    _strstr
0x6ADA5A: add     esp, 8
0x6ADA5D: test    eax, eax
0x6ADA5F: jz      short loc_6ADA6F
0x6ADA61: cmp     word ptr [esi+0B0h], 8
0x6ADA69: jz      loc_6ADC09
0x6ADA6F: movzx   eax, word ptr [esi+0B0h]
0x6ADA76: cmp     ax, 8
0x6ADA7A: jnz     short loc_6ADA87
0x6ADA7C: test    byte ptr [esi+0DCh], 2
0x6ADA83: jnz     short loc_6ADA87
0x6ADA85: mov     edi, ebp
0x6ADA87: cmp     ax, 0FFFFh
0x6ADA8B: jnz     short loc_6ADA9A
0x6ADA8D: test    byte ptr [esi+0DCh], 2
0x6ADA94: jnz     loc_6ADDF5
0x6ADA9A: cmp     ax, 8
0x6ADA9E: jz      short loc_6ADAAA
0x6ADAA0: cmp     ax, 4
0x6ADAA4: jnz     loc_6ADDF5
0x6ADAAA: test    edi, edi
0x6ADAAC: jz      short loc_6ADAC4
0x6ADAAE: lea     edx, [esp+430h+MultiByteStr]
0x6ADAB2: mov     eax, edi
0x6ADAB4: sub     edx, edi
0x6ADAB6: mov     cl, [eax]
0x6ADAB8: mov     [eax+edx], cl
0x6ADABB: add     eax, 1
0x6ADABE: test    cl, cl
0x6ADAC0: jnz     short loc_6ADAB6
0x6ADAC2: jmp     short loc_6ADB03
0x6ADAC4: mov     ecx, ds:0B333A0h
0x6ADACA: call    TES_GetCurrentCell
0x6ADACF: test    eax, eax
0x6ADAD1: jz      short loc_6ADAEC
0x6ADAD3: mov     ecx, ds:0B333A0h
0x6ADAD9: push    0
0x6ADADB: call    TES_GetCurrentCell
0x6ADAE0: mov     ecx, eax
0x6ADAE2: call    TESObjectCELL_GetMusicType
0x6ADAE7: movzx   ebx, ax
0x6ADAEA: jmp     short loc_6ADAEE
0x6ADAEC: xor     ebx, ebx
0x6ADAEE: push    ebx; __int16
0x6ADAEF: lea     eax, [esp+434h+MultiByteStr]
0x6ADAF3: push    eax; lpFileName
0x6ADAF4: mov     ecx, esi
0x6ADAF6: call    sub_6A8E80
0x6ADAFB: test    al, al
0x6ADAFD: jz      loc_6ADDF5
0x6ADB03: lea     ecx, [esp+430h+MultiByteStr]
0x6ADB07: push    0; int
0x6ADB09: push    ecx; char *
0x6ADB0A: call    __access
0x6ADB0F: add     esp, 8
0x6ADB12: cmp     eax, 0FFFFFFFFh
0x6ADB15: jz      loc_6ADDF5
0x6ADB1B: cmp     word ptr [esi+0B0h], 8
0x6ADB23: jz      short loc_6ADB5D
0x6ADB25: lea     ecx, [esp+430h+MultiByteStr]
0x6ADB29: mov     eax, ebp
0x6ADB2B: jmp     short loc_6ADB30
0x6ADB2D: align 10h
0x6ADB30: mov     dl, [eax]
0x6ADB32: cmp     dl, [ecx]
0x6ADB34: jnz     short loc_6ADB50
0x6ADB36: test    dl, dl
0x6ADB38: jz      short loc_6ADB4C
0x6ADB3A: mov     dl, [eax+1]
0x6ADB3D: cmp     dl, [ecx+1]
0x6ADB40: jnz     short loc_6ADB50
0x6ADB42: add     eax, 2
0x6ADB45: add     ecx, 2
0x6ADB48: test    dl, dl
0x6ADB4A: jnz     short loc_6ADB30
0x6ADB4C: xor     eax, eax
0x6ADB4E: jmp     short loc_6ADB55
0x6ADB50: sbb     eax, eax
0x6ADB52: sbb     eax, 0FFFFFFFFh
0x6ADB55: test    eax, eax
0x6ADB57: jz      loc_6ADDF5
0x6ADB5D: mov     ecx, esi
0x6ADB5F: call    SoundManager_StopFilterGraph
0x6ADB64: lea     edi, [esi+70h]
0x6ADB67: push    edi; ppv
0x6ADB68: push    offset riid; riid
0x6ADB6D: push    1; dwClsContext
0x6ADB6F: push    0; pUnkOuter
0x6ADB71: push    offset CLSID_CLSID_FilgraphManager; rclsid
0x6ADB76: call    dword ptr ds:0A283C8h
0x6ADB7C: test    eax, eax
0x6ADB7E: jl      loc_6ADDF5
0x6ADB84: push    104h; cchWideChar
0x6ADB89: lea     edx, [esp+434h+WideCharStr]
0x6ADB90: push    edx; lpWideCharStr
0x6ADB91: push    0FFFFFFFFh; cbMultiByte
0x6ADB93: lea     eax, [esp+43Ch+MultiByteStr]
0x6ADB97: push    eax; lpMultiByteStr
0x6ADB98: push    0; dwFlags
0x6ADB9A: push    0; CodePage
0x6ADB9C: call    dword ptr ds:0A28180h
0x6ADBA2: mov     eax, [edi]
0x6ADBA4: mov     ecx, [eax]
0x6ADBA6: push    0
0x6ADBA8: lea     edx, [esp+434h+WideCharStr]
0x6ADBAF: push    edx
0x6ADBB0: push    eax
0x6ADBB1: mov     eax, [ecx+34h]
0x6ADBB4: call    eax
0x6ADBB6: test    eax, eax
0x6ADBB8: jl      loc_6ADDF5
0x6ADBBE: mov     eax, [edi]
0x6ADBC0: mov     edx, [eax]
0x6ADBC2: lea     ecx, [esi+74h]
0x6ADBC5: push    ecx
0x6ADBC6: push    offset CLSID_IBasicAudio
0x6ADBCB: push    eax
0x6ADBCC: mov     eax, [edx]
0x6ADBCE: call    eax
0x6ADBD0: test    byte ptr [esi+0DCh], 18h
0x6ADBD7: jnz     short loc_6ADBEC
0x6ADBD9: fld     dword ptr [esi+2F0h]
0x6ADBDF: push    0; int
0x6ADBE1: push    ecx
0x6ADBE2: mov     ecx, esi
0x6ADBE4: fstp    [esp+438h+var_438]; float
0x6ADBE7: call    SoundManager_SetMusicVolume
0x6ADBEC: lea     eax, [esp+430h+MultiByteStr]
0x6ADBF0: mov     edx, ebp
0x6ADBF2: mov     ecx, eax
0x6ADBF4: sub     edx, ecx
0x6ADBF6: mov     cl, [eax]
0x6ADBF8: mov     [edx+eax], cl
0x6ADBFB: add     eax, 1
0x6ADBFE: test    cl, cl
0x6ADC00: jnz     short loc_6ADBF6
0x6ADC02: or      dword ptr [esi+0DCh], 1
0x6ADC09: mov     [esi+0B0h], bx
0x6ADC10: jmp     loc_6ADDF5
0x6ADC15: movzx   eax, word ptr [esi+0B0h]
0x6ADC1C: cmp     ax, 4
0x6ADC20: jz      loc_6ADDF5
0x6ADC26: cmp     ax, bx
0x6ADC29: jz      loc_6ADDF5
0x6ADC2F: mov     ecx, ds:0B333C4h
0x6ADC35: push    1
0x6ADC37: call    PlayerCharacter_IsPlayerInCombat
0x6ADC3C: test    al, al
0x6ADC3E: jz      loc_6ADDF5
0x6ADC44: xor     edi, edi
0x6ADC46: cmp     byte ptr ds:0B16180h, 0
0x6ADC4D: jz      loc_6ADDF5
0x6ADC53: lea     ebp, [esi+1E4h]
0x6ADC59: push    offset aDeath; "death"
0x6ADC5E: push    ebp; Str
0x6ADC5F: call    _strstr
0x6ADC64: push    offset aSuccess; "success"
0x6ADC69: push    ebp; Str
0x6ADC6A: call    _strstr
0x6ADC6F: add     esp, 10h
0x6ADC72: test    eax, eax
0x6ADC74: jz      short loc_6ADC8D
0x6ADC76: cmp     [esi+0B0h], bx
0x6ADC7D: jnz     short loc_6ADC8D
0x6ADC7F: mov     word ptr [esi+0B0h], 4
0x6ADC88: jmp     loc_6ADDF5
0x6ADC8D: movzx   eax, word ptr [esi+0B0h]
0x6ADC94: cmp     ax, bx
0x6ADC97: jnz     short loc_6ADCA9
0x6ADC99: test    byte ptr [esi+0DCh], 2
0x6ADCA0: jnz     short loc_6ADCA4
0x6ADCA2: mov     edi, ebp
0x6ADCA4: cmp     ax, bx
0x6ADCA7: jz      short loc_6ADCAF
0x6ADCA9: cmp     ax, 4
0x6ADCAD: jnz     short loc_6ADCBC
0x6ADCAF: test    byte ptr [esi+0DCh], 2
0x6ADCB6: jnz     loc_6ADDF5
0x6ADCBC: test    edi, edi
0x6ADCBE: lea     edx, [esp+430h+MultiByteStr]
0x6ADCC2: jz      short loc_6ADCD6
0x6ADCC4: mov     eax, edi
0x6ADCC6: sub     edx, edi
0x6ADCC8: mov     cl, [eax]
0x6ADCCA: mov     [edx+eax], cl
0x6ADCCD: add     eax, 1
0x6ADCD0: test    cl, cl
0x6ADCD2: jnz     short loc_6ADCC8
0x6ADCD4: jmp     short loc_6ADCE8
0x6ADCD6: push    4; __int16
0x6ADCD8: push    edx; lpFileName
0x6ADCD9: mov     ecx, esi
0x6ADCDB: call    sub_6A8E80
0x6ADCE0: test    al, al
0x6ADCE2: jz      loc_6ADDF5
0x6ADCE8: lea     eax, [esp+430h+MultiByteStr]
0x6ADCEC: push    0; int
0x6ADCEE: push    eax; char *
0x6ADCEF: call    __access
0x6ADCF4: add     esp, 8
0x6ADCF7: cmp     eax, 0FFFFFFFFh
0x6ADCFA: jz      loc_6ADDF5
0x6ADD00: cmp     [esi+0B0h], bx
0x6ADD07: jz      short loc_6ADD3D
0x6ADD09: lea     ecx, [esp+430h+MultiByteStr]
0x6ADD0D: mov     eax, ebp
0x6ADD0F: nop
0x6ADD10: mov     dl, [eax]
0x6ADD12: cmp     dl, [ecx]
0x6ADD14: jnz     short loc_6ADD30
0x6ADD16: test    dl, dl
0x6ADD18: jz      short loc_6ADD2C
0x6ADD1A: mov     dl, [eax+1]
0x6ADD1D: cmp     dl, [ecx+1]
0x6ADD20: jnz     short loc_6ADD30
0x6ADD22: add     eax, 2
0x6ADD25: add     ecx, 2
0x6ADD28: test    dl, dl
0x6ADD2A: jnz     short loc_6ADD10
0x6ADD2C: xor     eax, eax
0x6ADD2E: jmp     short loc_6ADD35
0x6ADD30: sbb     eax, eax
0x6ADD32: sbb     eax, 0FFFFFFFFh
0x6ADD35: test    eax, eax
0x6ADD37: jz      loc_6ADDF5
0x6ADD3D: mov     ecx, esi
0x6ADD3F: call    SoundManager_StopFilterGraph
0x6ADD44: lea     edi, [esi+70h]
0x6ADD47: push    edi; ppv
0x6ADD48: push    offset riid; riid
0x6ADD4D: push    1; dwClsContext
0x6ADD4F: push    0; pUnkOuter
0x6ADD51: push    offset CLSID_CLSID_FilgraphManager; rclsid
0x6ADD56: call    dword ptr ds:0A283C8h
0x6ADD5C: test    eax, eax
0x6ADD5E: jl      loc_6ADDF5
0x6ADD64: push    104h; cchWideChar
0x6ADD69: lea     ecx, [esp+434h+WideCharStr]
0x6ADD70: push    ecx; lpWideCharStr
0x6ADD71: push    0FFFFFFFFh; cbMultiByte
0x6ADD73: lea     edx, [esp+43Ch+MultiByteStr]
0x6ADD77: push    edx; lpMultiByteStr
0x6ADD78: push    0; dwFlags
0x6ADD7A: push    0; CodePage
0x6ADD7C: call    dword ptr ds:0A28180h
0x6ADD82: mov     eax, [edi]
0x6ADD84: mov     ecx, [eax]
0x6ADD86: push    0
0x6ADD88: lea     edx, [esp+434h+WideCharStr]
0x6ADD8F: push    edx
0x6ADD90: push    eax
0x6ADD91: mov     eax, [ecx+34h]
0x6ADD94: call    eax
0x6ADD96: test    eax, eax
0x6ADD98: jl      short loc_6ADDF5
0x6ADD9A: mov     eax, [edi]
0x6ADD9C: mov     edx, [eax]
0x6ADD9E: lea     ecx, [esi+74h]
0x6ADDA1: push    ecx
0x6ADDA2: push    offset CLSID_IBasicAudio
0x6ADDA7: push    eax
0x6ADDA8: mov     eax, [edx]
0x6ADDAA: call    eax
0x6ADDAC: test    byte ptr [esi+0DCh], 18h
0x6ADDB3: jnz     short loc_6ADDC8
0x6ADDB5: fld     dword ptr [esi+2F0h]
0x6ADDBB: push    0; int
0x6ADDBD: push    ecx
0x6ADDBE: mov     ecx, esi
0x6ADDC0: fstp    [esp+438h+var_438]; float
0x6ADDC3: call    SoundManager_SetMusicVolume
0x6ADDC8: lea     eax, [esp+430h+MultiByteStr]
0x6ADDCC: mov     edx, ebp
0x6ADDCE: mov     ecx, eax
0x6ADDD0: sub     edx, ecx
0x6ADDD2: mov     cl, [eax]
0x6ADDD4: mov     [edx+eax], cl
0x6ADDD7: add     eax, 1
0x6ADDDA: test    cl, cl
0x6ADDDC: jnz     short loc_6ADDD2
0x6ADDDE: or      dword ptr [esi+0DCh], 1
0x6ADDE5: mov     word ptr [esi+0B0h], 4
0x6ADDEE: mov     ecx, esi
0x6ADDF0: call    SoundManager_PlayMusic
0x6ADDF5: pop     edi
0x6ADDF6: pop     ebp
0x6ADDF7: pop     ebx
0x6ADDF8: mov     ecx, [esp+424h+var_4]
0x6ADDFF: pop     esi
0x6ADE00: xor     ecx, esp
0x6ADE02: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6ADE07: add     esp, 420h
0x6ADE0D: retn
