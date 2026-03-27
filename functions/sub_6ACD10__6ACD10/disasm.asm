0x6ACD10: sub     esp, 410h
0x6ACD16: mov     eax, ds:0B30AACh
0x6ACD1B: xor     eax, esp
0x6ACD1D: mov     [esp+410h+var_4], eax
0x6ACD24: mov     eax, ds:0B33EA0h
0x6ACD29: push    esi
0x6ACD2A: mov     esi, ecx
0x6ACD2C: mov     ecx, eax
0x6ACD2E: mov     [esi+2E8h], eax
0x6ACD34: mov     eax, [esi+0DCh]
0x6ACD3A: push    edi
0x6ACD3B: mov     di, [esp+418h+arg_0]
0x6ACD43: add     ecx, 6A4h
0x6ACD49: test    al, 2
0x6ACD4B: mov     [esi+2ECh], ecx
0x6ACD51: mov     [esi+2FCh], di
0x6ACD58: jnz     loc_6ACFF0
0x6ACD5E: fld     dword ptr [esi+2F8h]
0x6ACD64: and     eax, 0FFFFFFF7h
0x6ACD67: fstp    dword ptr [esi+2F4h]
0x6ACD6D: or      eax, 10h
0x6ACD70: fldz
0x6ACD72: movzx   edx, di
0x6ACD75: push    ebp
0x6ACD76: fstp    dword ptr [esi+2F0h]
0x6ACD7C: mov     [esi+0DCh], eax
0x6ACD82: xor     ebp, ebp
0x6ACD84: cmp     byte ptr ds:0B16180h, 0
0x6ACD8B: mov     dword ptr [esp+41Ch+var_410], edx
0x6ACD8F: jz      loc_6ACFE6
0x6ACD95: push    ebx
0x6ACD96: lea     ebx, [esi+1E4h]
0x6ACD9C: push    offset aDeath; "death"
0x6ACDA1: push    ebx; Str
0x6ACDA2: call    _strstr
0x6ACDA7: add     esp, 8
0x6ACDAA: test    eax, eax
0x6ACDAC: jz      short loc_6ACDB9
0x6ACDAE: cmp     di, 0FFFFh
0x6ACDB3: jz      loc_6ACFE5
0x6ACDB9: push    offset aSuccess; "success"
0x6ACDBE: push    ebx; Str
0x6ACDBF: call    _strstr
0x6ACDC4: add     esp, 8
0x6ACDC7: test    eax, eax
0x6ACDC9: mov     ebx, 8
0x6ACDCE: jz      short loc_6ACDEE
0x6ACDD0: cmp     [esi+0B0h], bx
0x6ACDD7: jnz     short loc_6ACDEE
0x6ACDD9: pop     ebx
0x6ACDDA: mov     ecx, esi
0x6ACDDC: mov     [esi+0B0h], di
0x6ACDE3: call    SoundManager_PlayMusic
0x6ACDE8: pop     ebp
0x6ACDE9: jmp     loc_6AD00E
0x6ACDEE: movzx   eax, word ptr [esi+0B0h]
0x6ACDF5: cmp     ax, bx
0x6ACDF8: jnz     short loc_6ACE09
0x6ACDFA: test    byte ptr [esi+0DCh], 2
0x6ACE01: jnz     short loc_6ACE09
0x6ACE03: lea     ebp, [esi+1E4h]
0x6ACE09: cmp     ax, 4
0x6ACE0D: jnz     short loc_6ACE1D
0x6ACE0F: cmp     di, bx
0x6ACE12: jnz     short loc_6ACE1D
0x6ACE14: mov     word ptr [esi+0B0h], 0
0x6ACE1D: movzx   eax, word ptr [esi+0B0h]
0x6ACE24: cmp     ax, bx
0x6ACE27: jz      short loc_6ACE2F
0x6ACE29: cmp     ax, 4
0x6ACE2D: jnz     short loc_6ACE36
0x6ACE2F: cmp     di, 0FFFFh
0x6ACE34: jnz     short loc_6ACE3B
0x6ACE36: cmp     ax, di
0x6ACE39: jnz     short loc_6ACE48
0x6ACE3B: test    byte ptr [esi+0DCh], 2
0x6ACE42: jnz     loc_6ACFE5
0x6ACE48: cmp     ax, bx
0x6ACE4B: jz      short loc_6ACE5E
0x6ACE4D: cmp     ax, 4
0x6ACE51: jz      short loc_6ACE5E
0x6ACE53: cmp     di, 0FFFFh
0x6ACE58: jz      loc_6ACFE5
0x6ACE5E: test    ebp, ebp
0x6ACE60: jz      short loc_6ACE7E
0x6ACE62: lea     edx, [esp+420h+MultiByteStr]
0x6ACE66: mov     eax, ebp
0x6ACE68: sub     edx, ebp
0x6ACE6A: lea     ebx, [ebx+0]
0x6ACE70: mov     cl, [eax]
0x6ACE72: mov     [edx+eax], cl
0x6ACE75: add     eax, 1
0x6ACE78: test    cl, cl
0x6ACE7A: jnz     short loc_6ACE70
0x6ACE7C: jmp     short loc_6ACED2
0x6ACE7E: cmp     di, 0FFFFh
0x6ACE83: jnz     short loc_6ACEB9
0x6ACE85: mov     ecx, ds:0B333A0h
0x6ACE8B: call    TES_GetCurrentCell
0x6ACE90: test    eax, eax
0x6ACE92: jz      short loc_6ACEB1
0x6ACE94: mov     ecx, ds:0B333A0h
0x6ACE9A: push    0
0x6ACE9C: call    TES_GetCurrentCell
0x6ACEA1: mov     ecx, eax
0x6ACEA3: call    TESObjectCELL_GetMusicType
0x6ACEA8: movzx   eax, ax
0x6ACEAB: mov     dword ptr [esp+420h+var_410], eax
0x6ACEAF: jmp     short loc_6ACEB9
0x6ACEB1: mov     dword ptr [esp+420h+var_410], 0
0x6ACEB9: mov     ecx, dword ptr [esp+420h+var_410]
0x6ACEBD: push    ecx; __int16
0x6ACEBE: lea     edx, [esp+424h+MultiByteStr]
0x6ACEC2: push    edx; lpFileName
0x6ACEC3: mov     ecx, esi
0x6ACEC5: call    sub_6A8E80
0x6ACECA: test    al, al
0x6ACECC: jz      loc_6ACFE5
0x6ACED2: lea     eax, [esp+420h+MultiByteStr]
0x6ACED6: push    0; int
0x6ACED8: push    eax; char *
0x6ACED9: call    __access
0x6ACEDE: add     esp, 8
0x6ACEE1: cmp     eax, 0FFFFFFFFh
0x6ACEE4: jz      loc_6ACFE5
0x6ACEEA: cmp     [esi+0B0h], bx
0x6ACEF1: jz      short loc_6ACF2D
0x6ACEF3: lea     ecx, [esp+420h+MultiByteStr]
0x6ACEF7: lea     eax, [esi+1E4h]
0x6ACEFD: lea     ecx, [ecx+0]
0x6ACF00: mov     dl, [eax]
0x6ACF02: cmp     dl, [ecx]
0x6ACF04: jnz     short loc_6ACF20
0x6ACF06: test    dl, dl
0x6ACF08: jz      short loc_6ACF1C
0x6ACF0A: mov     dl, [eax+1]
0x6ACF0D: cmp     dl, [ecx+1]
0x6ACF10: jnz     short loc_6ACF20
0x6ACF12: add     eax, 2
0x6ACF15: add     ecx, 2
0x6ACF18: test    dl, dl
0x6ACF1A: jnz     short loc_6ACF00
0x6ACF1C: xor     eax, eax
0x6ACF1E: jmp     short loc_6ACF25
0x6ACF20: sbb     eax, eax
0x6ACF22: sbb     eax, 0FFFFFFFFh
0x6ACF25: test    eax, eax
0x6ACF27: jz      loc_6ACFE5
0x6ACF2D: mov     ecx, esi
0x6ACF2F: call    SoundManager_StopFilterGraph
0x6ACF34: lea     edi, [esi+70h]
0x6ACF37: push    edi; ppv
0x6ACF38: push    offset riid; riid
0x6ACF3D: push    1; dwClsContext
0x6ACF3F: push    0; pUnkOuter
0x6ACF41: push    offset CLSID_CLSID_FilgraphManager; rclsid
0x6ACF46: call    dword ptr ds:0A283C8h
0x6ACF4C: test    eax, eax
0x6ACF4E: jl      loc_6ACFE5
0x6ACF54: push    104h; cchWideChar
0x6ACF59: lea     ecx, [esp+424h+WideCharStr]
0x6ACF60: push    ecx; lpWideCharStr
0x6ACF61: push    0FFFFFFFFh; cbMultiByte
0x6ACF63: lea     edx, [esp+42Ch+MultiByteStr]
0x6ACF67: push    edx; lpMultiByteStr
0x6ACF68: push    0; dwFlags
0x6ACF6A: push    0; CodePage
0x6ACF6C: call    dword ptr ds:0A28180h
0x6ACF72: mov     eax, [edi]
0x6ACF74: mov     ecx, [eax]
0x6ACF76: push    0
0x6ACF78: lea     edx, [esp+424h+WideCharStr]
0x6ACF7F: push    edx
0x6ACF80: push    eax
0x6ACF81: mov     eax, [ecx+34h]
0x6ACF84: call    eax
0x6ACF86: test    eax, eax
0x6ACF88: jl      short loc_6ACFE5
0x6ACF8A: mov     edi, [edi]
0x6ACF8C: mov     ecx, [edi]
0x6ACF8E: mov     eax, [ecx]
0x6ACF90: lea     edx, [esi+74h]
0x6ACF93: push    edx
0x6ACF94: push    offset CLSID_IBasicAudio
0x6ACF99: push    edi
0x6ACF9A: call    eax
0x6ACF9C: test    byte ptr [esi+0DCh], 18h
0x6ACFA3: jnz     short loc_6ACFB8
0x6ACFA5: fld     dword ptr [esi+2F0h]
0x6ACFAB: push    0; int
0x6ACFAD: push    ecx
0x6ACFAE: mov     ecx, esi
0x6ACFB0: fstp    [esp+428h+var_428]; float
0x6ACFB3: call    SoundManager_SetMusicVolume
0x6ACFB8: lea     eax, [esp+420h+MultiByteStr]
0x6ACFBC: lea     edx, [esi+1E4h]
0x6ACFC2: mov     ecx, eax
0x6ACFC4: sub     edx, ecx
0x6ACFC6: mov     cl, [eax]
0x6ACFC8: mov     [edx+eax], cl
0x6ACFCB: add     eax, 1
0x6ACFCE: test    cl, cl
0x6ACFD0: jnz     short loc_6ACFC6
0x6ACFD2: mov     dx, [esp+420h+var_410]
0x6ACFD7: or      dword ptr [esi+0DCh], 1
0x6ACFDE: mov     [esi+0B0h], dx
0x6ACFE5: pop     ebx
0x6ACFE6: mov     ecx, esi
0x6ACFE8: call    SoundManager_PlayMusic
0x6ACFED: pop     ebp
0x6ACFEE: jmp     short loc_6AD00E
0x6ACFF0: cmp     [esi+0B0h], di
0x6ACFF7: jz      short loc_6AD00E
0x6ACFF9: fld     dword ptr [esi+2F8h]
0x6ACFFF: or      eax, 8
0x6AD002: fstp    dword ptr [esi+2F4h]
0x6AD008: mov     [esi+0DCh], eax
0x6AD00E: mov     ecx, [esp+418h+var_4]
0x6AD015: pop     edi
0x6AD016: pop     esi
0x6AD017: xor     ecx, esp
0x6AD019: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6AD01E: add     esp, 410h
0x6AD024: retn    0Ch
