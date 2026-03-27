0x6AB160: sub     esp, 40Ch
0x6AB166: mov     eax, ds:0B30AACh
0x6AB16B: xor     eax, esp
0x6AB16D: mov     [esp+40Ch+var_4], eax
0x6AB174: cmp     byte ptr ds:0B16180h, 0
0x6AB17B: push    edi
0x6AB17C: mov     edi, ecx
0x6AB17E: jnz     short loc_6AB19A
0x6AB180: xor     al, al
0x6AB182: pop     edi
0x6AB183: mov     ecx, [esp+40Ch+var_4]
0x6AB18A: xor     ecx, esp
0x6AB18C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6AB191: add     esp, 40Ch
0x6AB197: retn    0Ch
0x6AB19A: push    ebp
0x6AB19B: push    esi
0x6AB19C: lea     esi, [edi+1E4h]
0x6AB1A2: push    offset aDeath; "death"
0x6AB1A7: push    esi; Str
0x6AB1A8: call    _strstr
0x6AB1AD: mov     ebp, dword ptr [esp+420h+arg_0]
0x6AB1B4: add     esp, 8
0x6AB1B7: test    eax, eax
0x6AB1B9: jz      short loc_6AB1CC
0x6AB1BB: cmp     bp, 0FFFFh
0x6AB1C0: jnz     short loc_6AB1CC
0x6AB1C2: cmp     [esp+418h+arg_8], 0
0x6AB1CA: jz      short loc_6AB1F3
0x6AB1CC: push    offset aSuccess; "success"
0x6AB1D1: push    esi; Str
0x6AB1D2: call    _strstr
0x6AB1D7: add     esp, 8
0x6AB1DA: test    eax, eax
0x6AB1DC: mov     esi, 8
0x6AB1E1: jz      short loc_6AB20F
0x6AB1E3: cmp     [edi+0B0h], si
0x6AB1EA: jnz     short loc_6AB20F
0x6AB1EC: mov     [edi+0B0h], bp
0x6AB1F3: xor     al, al
0x6AB1F5: mov     ecx, [esp+418h+var_4]
0x6AB1FC: pop     esi
0x6AB1FD: pop     ebp
0x6AB1FE: pop     edi
0x6AB1FF: xor     ecx, esp
0x6AB201: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6AB206: add     esp, 40Ch
0x6AB20C: retn    0Ch
0x6AB20F: movzx   ecx, word ptr [edi+0B0h]
0x6AB216: cmp     cx, si
0x6AB219: jnz     short loc_6AB237
0x6AB21B: test    byte ptr [edi+0DCh], 2
0x6AB222: jnz     short loc_6AB237
0x6AB224: mov     eax, [esp+418h+arg_4]
0x6AB22B: test    eax, eax
0x6AB22D: jnz     short loc_6AB23E
0x6AB22F: lea     eax, [edi+1E4h]
0x6AB235: jmp     short loc_6AB23E
0x6AB237: mov     eax, [esp+418h+arg_4]
0x6AB23E: cmp     cx, 4
0x6AB242: jnz     short loc_6AB252
0x6AB244: cmp     bp, si
0x6AB247: jnz     short loc_6AB252
0x6AB249: mov     word ptr [edi+0B0h], 0
0x6AB252: movzx   ecx, word ptr [edi+0B0h]
0x6AB259: cmp     cx, si
0x6AB25C: jz      short loc_6AB264
0x6AB25E: cmp     cx, 4
0x6AB262: jnz     short loc_6AB26B
0x6AB264: cmp     bp, 0FFFFh
0x6AB269: jnz     short loc_6AB270
0x6AB26B: cmp     cx, bp
0x6AB26E: jnz     short loc_6AB27D
0x6AB270: test    byte ptr [edi+0DCh], 2
0x6AB277: jnz     loc_6AB1F3
0x6AB27D: cmp     cx, si
0x6AB280: jz      short loc_6AB293
0x6AB282: cmp     cx, 4
0x6AB286: jz      short loc_6AB293
0x6AB288: cmp     bp, 0FFFFh
0x6AB28D: jz      loc_6AB1F3
0x6AB293: test    eax, eax
0x6AB295: jz      short loc_6AB2AE
0x6AB297: lea     edx, [esp+418h+MultiByteStr]
0x6AB29B: sub     edx, eax
0x6AB29D: lea     ecx, [ecx+0]
0x6AB2A0: mov     cl, [eax]
0x6AB2A2: mov     [edx+eax], cl
0x6AB2A5: add     eax, 1
0x6AB2A8: test    cl, cl
0x6AB2AA: jnz     short loc_6AB2A0
0x6AB2AC: jmp     short loc_6AB2F4
0x6AB2AE: cmp     bp, 0FFFFh
0x6AB2B3: jnz     short loc_6AB2DF
0x6AB2B5: mov     ecx, ds:0B333A0h
0x6AB2BB: call    TES_GetCurrentCell
0x6AB2C0: test    eax, eax
0x6AB2C2: jz      short loc_6AB2DD
0x6AB2C4: mov     ecx, ds:0B333A0h
0x6AB2CA: push    0
0x6AB2CC: call    TES_GetCurrentCell
0x6AB2D1: mov     ecx, eax
0x6AB2D3: call    TESObjectCELL_GetMusicType
0x6AB2D8: movzx   ebp, ax
0x6AB2DB: jmp     short loc_6AB2DF
0x6AB2DD: xor     ebp, ebp
0x6AB2DF: push    ebp; __int16
0x6AB2E0: lea     eax, [esp+41Ch+MultiByteStr]
0x6AB2E4: push    eax; lpFileName
0x6AB2E5: mov     ecx, edi
0x6AB2E7: call    sub_6A8E80
0x6AB2EC: test    al, al
0x6AB2EE: jz      loc_6AB1F3
0x6AB2F4: lea     ecx, [esp+418h+MultiByteStr]
0x6AB2F8: push    0; int
0x6AB2FA: push    ecx; char *
0x6AB2FB: call    __access
0x6AB300: add     esp, 8
0x6AB303: cmp     eax, 0FFFFFFFFh
0x6AB306: jz      loc_6AB1F3
0x6AB30C: cmp     [edi+0B0h], si
0x6AB313: jz      short loc_6AB34D
0x6AB315: lea     ecx, [esp+418h+MultiByteStr]
0x6AB319: lea     eax, [edi+1E4h]
0x6AB31F: nop
0x6AB320: mov     dl, [eax]
0x6AB322: cmp     dl, [ecx]
0x6AB324: jnz     short loc_6AB340
0x6AB326: test    dl, dl
0x6AB328: jz      short loc_6AB33C
0x6AB32A: mov     dl, [eax+1]
0x6AB32D: cmp     dl, [ecx+1]
0x6AB330: jnz     short loc_6AB340
0x6AB332: add     eax, 2
0x6AB335: add     ecx, 2
0x6AB338: test    dl, dl
0x6AB33A: jnz     short loc_6AB320
0x6AB33C: xor     eax, eax
0x6AB33E: jmp     short loc_6AB345
0x6AB340: sbb     eax, eax
0x6AB342: sbb     eax, 0FFFFFFFFh
0x6AB345: test    eax, eax
0x6AB347: jz      loc_6AB1F3
0x6AB34D: mov     ecx, edi
0x6AB34F: call    SoundManager_StopFilterGraph
0x6AB354: lea     esi, [edi+70h]
0x6AB357: push    esi; ppv
0x6AB358: push    offset riid; riid
0x6AB35D: push    1; dwClsContext
0x6AB35F: push    0; pUnkOuter
0x6AB361: push    offset CLSID_CLSID_FilgraphManager; rclsid
0x6AB366: call    dword ptr ds:0A283C8h
0x6AB36C: test    eax, eax
0x6AB36E: jl      loc_6AB1F3
0x6AB374: push    104h; cchWideChar
0x6AB379: lea     edx, [esp+41Ch+WideCharStr]
0x6AB380: push    edx; lpWideCharStr
0x6AB381: push    0FFFFFFFFh; cbMultiByte
0x6AB383: lea     eax, [esp+424h+MultiByteStr]
0x6AB387: push    eax; lpMultiByteStr
0x6AB388: push    0; dwFlags
0x6AB38A: push    0; CodePage
0x6AB38C: call    dword ptr ds:0A28180h
0x6AB392: mov     eax, [esi]
0x6AB394: mov     ecx, [eax]
0x6AB396: push    0
0x6AB398: lea     edx, [esp+41Ch+WideCharStr]
0x6AB39F: push    edx
0x6AB3A0: push    eax
0x6AB3A1: mov     eax, [ecx+34h]
0x6AB3A4: call    eax
0x6AB3A6: test    eax, eax
0x6AB3A8: jl      loc_6AB1F3
0x6AB3AE: mov     esi, [esi]
0x6AB3B0: mov     ecx, [esi]
0x6AB3B2: mov     eax, [ecx]
0x6AB3B4: lea     edx, [edi+74h]
0x6AB3B7: push    edx
0x6AB3B8: push    offset CLSID_IBasicAudio
0x6AB3BD: push    esi
0x6AB3BE: call    eax
0x6AB3C0: test    byte ptr [edi+0DCh], 18h
0x6AB3C7: jnz     short loc_6AB3DC
0x6AB3C9: fld     dword ptr [edi+2F0h]
0x6AB3CF: push    0; int
0x6AB3D1: push    ecx
0x6AB3D2: mov     ecx, edi
0x6AB3D4: fstp    [esp+420h+var_420]; float
0x6AB3D7: call    SoundManager_SetMusicVolume
0x6AB3DC: lea     eax, [esp+418h+MultiByteStr]
0x6AB3E0: lea     edx, [edi+1E4h]
0x6AB3E6: mov     ecx, eax
0x6AB3E8: sub     edx, ecx
0x6AB3EA: lea     ebx, [ebx+0]
0x6AB3F0: mov     cl, [eax]
0x6AB3F2: mov     [edx+eax], cl
0x6AB3F5: add     eax, 1
0x6AB3F8: test    cl, cl
0x6AB3FA: jnz     short loc_6AB3F0
0x6AB3FC: or      dword ptr [edi+0DCh], 1
0x6AB403: mov     [edi+0B0h], bp
0x6AB40A: mov     al, 1
0x6AB40C: jmp     loc_6AB1F5
