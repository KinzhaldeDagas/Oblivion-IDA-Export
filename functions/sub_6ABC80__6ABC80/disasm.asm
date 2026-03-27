0x6ABC80: push    0FFFFFFFFh
0x6ABC82: push    offset SEH_6ABC80
0x6ABC87: mov     eax, large fs:0
0x6ABC8D: push    eax
0x6ABC8E: sub     esp, 8Ch
0x6ABC94: mov     eax, ds:0B30AACh
0x6ABC99: xor     eax, esp
0x6ABC9B: mov     [esp+98h+var_10], eax
0x6ABCA2: push    ebx
0x6ABCA3: push    ebp
0x6ABCA4: push    esi
0x6ABCA5: push    edi
0x6ABCA6: mov     eax, ds:0B30AACh
0x6ABCAB: xor     eax, esp
0x6ABCAD: push    eax
0x6ABCAE: lea     eax, [esp+0ACh+var_C]
0x6ABCB5: mov     large fs:0, eax
0x6ABCBB: mov     ebp, [esp+0ACh+arg_0]
0x6ABCC2: xor     ebx, ebx
0x6ABCC4: mov     esi, ecx
0x6ABCC6: push    328h
0x6ABCCB: push    ebx
0x6ABCCC: push    esi
0x6ABCCD: mov     [esi], ebx
0x6ABCCF: mov     [esi+4], ebx
0x6ABCD2: call    __memset
0x6ABCD7: mov     eax, ds:0B33EA0h
0x6ABCDC: push    10h; Size
0x6ABCDE: mov     [esi+0CCh], eax
0x6ABCE4: mov     [esi+0A4h], bl
0x6ABCEA: mov     dword ptr [esi+0B4h], 3B9ACA00h
0x6ABCF4: call    FormHeapAlloc
0x6ABCF9: add     esp, 10h
0x6ABCFC: mov     [esp+0ACh+var_98], eax
0x6ABD00: cmp     eax, ebx
0x6ABD02: mov     [esp+0ACh+var_4], ebx
0x6ABD09: jz      short loc_6ABD16
0x6ABD0B: push    25h ; '%'
0x6ABD0D: mov     ecx, eax
0x6ABD0F: call    ??0?$NiTPointerMap@HPAVTESGameSound@@@@QAE@XZ; NiTPointerMap<int,TESGameSound *>::NiTPointerMap<int,TESGameSound *>(void)
0x6ABD14: jmp     short loc_6ABD18
0x6ABD16: xor     eax, eax
0x6ABD18: or      edi, 0FFFFFFFFh
0x6ABD1B: push    10h; Size
0x6ABD1D: mov     [esp+0B0h+var_4], edi
0x6ABD24: mov     [esi+300h], eax
0x6ABD2A: call    FormHeapAlloc
0x6ABD2F: add     esp, 4
0x6ABD32: mov     [esp+0ACh+var_98], eax
0x6ABD36: cmp     eax, ebx
0x6ABD38: mov     [esp+0ACh+var_4], 1
0x6ABD43: jz      short loc_6ABD50
0x6ABD45: push    25h ; '%'
0x6ABD47: mov     ecx, eax
0x6ABD49: call    ??0?$NiTPointerMap@HV?$NiPointer@VNiAVObject@@@@@@QAE@XZ; NiTPointerMap<int,NiPointer<NiAVObject>>::NiTPointerMap<int,NiPointer<NiAVObject>>(void)
0x6ABD4E: jmp     short loc_6ABD52
0x6ABD50: xor     eax, eax
0x6ABD52: push    10h; Size
0x6ABD54: mov     [esp+0B0h+var_4], edi
0x6ABD5B: mov     [esi+304h], eax
0x6ABD61: call    FormHeapAlloc
0x6ABD66: add     esp, 4
0x6ABD69: cmp     eax, ebx
0x6ABD6B: jz      short loc_6ABD7E
0x6ABD6D: mov     [eax+0Ch], ebx
0x6ABD70: mov     [eax+4], ebx
0x6ABD73: mov     [eax+8], ebx
0x6ABD76: mov     dword ptr [eax], offset ??_7?$NiTList@I@@6B@; const NiTList<uint>::`vftable'
0x6ABD7C: jmp     short loc_6ABD80
0x6ABD7E: xor     eax, eax
0x6ABD80: mov     [esi+320h], eax
0x6ABD86: push    10h; Size
0x6ABD88: mov     ds:0B3C214h, esi
0x6ABD8E: call    FormHeapAlloc
0x6ABD93: add     esp, 4
0x6ABD96: cmp     eax, ebx
0x6ABD98: jz      short loc_6ABDAB
0x6ABD9A: mov     [eax+0Ch], ebx
0x6ABD9D: mov     [eax+4], ebx
0x6ABDA0: mov     [eax+8], ebx
0x6ABDA3: mov     dword ptr [eax], offset ??_7?$NiTPointerList@PAVSoundMessage@AudioManager@@@@6B@; const NiTPointerList<AudioManager::SoundMessage *>::`vftable'
0x6ABDA9: jmp     short loc_6ABDAD
0x6ABDAB: xor     eax, eax
0x6ABDAD: fldz
0x6ABDAF: push    ebx
0x6ABDB0: lea     edi, [esi+8]
0x6ABDB3: push    edi
0x6ABDB4: mov     [esi+308h], eax
0x6ABDBA: mov     [esi+0A6h], bl
0x6ABDC0: fstp    dword ptr ds:0B161B8h
0x6ABDC6: push    ebx
0x6ABDC7: call    DSOUND_11
0x6ABDCC: test    eax, eax
0x6ABDCE: jnz     loc_6ABFD4
0x6ABDD4: mov     eax, [edi]
0x6ABDD6: mov     ecx, [eax]
0x6ABDD8: mov     edx, [ecx+18h]
0x6ABDDB: push    2
0x6ABDDD: push    ebp
0x6ABDDE: push    eax
0x6ABDDF: call    edx
0x6ABDE1: test    eax, eax
0x6ABDE3: jl      loc_6ABFD4
0x6ABDE9: mov     ecx, [edi]
0x6ABDEB: lea     eax, [esi+10h]
0x6ABDEE: mov     dword ptr [eax], 60h ; '`'
0x6ABDF4: mov     [esi+70h], ebx
0x6ABDF7: mov     edx, [ecx]
0x6ABDF9: push    eax
0x6ABDFA: mov     eax, [edx+10h]
0x6ABDFD: push    ecx
0x6ABDFE: call    eax
0x6ABE00: test    eax, eax
0x6ABE02: jl      loc_6ABFD4
0x6ABE08: or      dword ptr [esi+0ACh], 1
0x6ABE0F: xor     eax, eax
0x6ABE11: mov     [esp+0ACh+var_34], eax
0x6ABE15: mov     [esp+0ACh+var_30], eax
0x6ABE19: mov     [esp+0ACh+var_2C], eax
0x6ABE20: mov     [esp+0ACh+var_28], eax
0x6ABE27: mov     [esp+0ACh+var_24], eax
0x6ABE2E: mov     [esp+0ACh+var_20], eax
0x6ABE35: mov     [esp+0ACh+var_1C], eax
0x6ABE3C: mov     [esp+0ACh+var_18], eax
0x6ABE43: mov     [esp+0ACh+var_14], eax
0x6ABE4A: mov     eax, [edi]
0x6ABE4C: lea     edx, [esp+0ACh+var_94]
0x6ABE50: mov     [esp+0ACh+var_34], 24h ; '$'
0x6ABE58: mov     ecx, [eax]
0x6ABE5A: push    edx
0x6ABE5B: push    eax
0x6ABE5C: mov     eax, [ecx+10h]
0x6ABE5F: call    eax
0x6ABE61: mov     edi, [edi]
0x6ABE63: push    ebx
0x6ABE64: lea     ebp, [esi+0Ch]
0x6ABE67: push    ebp
0x6ABE68: lea     edx, [esp+0B4h+var_34]
0x6ABE6F: mov     [esp+0B4h+var_30], 91h ; '‘'
0x6ABE7A: mov     ecx, [edi]
0x6ABE7C: mov     eax, [ecx+0Ch]
0x6ABE7F: push    edx
0x6ABE80: push    edi
0x6ABE81: call    eax
0x6ABE83: test    eax, eax
0x6ABE85: jl      loc_6ABFD4
0x6ABE8B: mov     ebp, [ebp+0]
0x6ABE8E: mov     ecx, [ebp+0]
0x6ABE91: mov     edx, [ecx]
0x6ABE93: lea     edi, [esi+78h]
0x6ABE96: push    edi
0x6ABE97: push    offset CLSID_IDirectSound3DListener
0x6ABE9C: push    ebp
0x6ABE9D: call    edx
0x6ABE9F: test    eax, eax
0x6ABEA1: jl      loc_6ABFD4
0x6ABEA7: fld     dword ptr ds:0A32048h
0x6ABEAD: mov     eax, [edi]
0x6ABEAF: mov     ecx, [eax]
0x6ABEB1: mov     edx, [ecx+38h]
0x6ABEB4: push    ebx
0x6ABEB5: sub     esp, 0Ch
0x6ABEB8: fst     [esp+0BCh+var_B4]
0x6ABEBC: fst     [esp+0BCh+var_B8]
0x6ABEC0: fstp    [esp+0BCh+var_BC]
0x6ABEC3: push    eax
0x6ABEC4: call    edx
0x6ABEC6: mov     ecx, offset flt_B161D8
0x6ABECB: call    GameSetting_GetSafeFloatPointer
0x6ABED0: fld     dword ptr ds:0A31C80h
0x6ABED6: fcom    dword ptr [eax]
0x6ABED8: fnstsw  ax
0x6ABEDA: test    ah, 5
0x6ABEDD: jp      short loc_6ABEE7
0x6ABEDF: fstp    dword ptr ds:0B161D8h
0x6ABEE5: jmp     short loc_6ABEE9
0x6ABEE7: fstp    st
0x6ABEE9: mov     ecx, offset flt_B161D8
0x6ABEEE: call    GameSetting_GetSafeFloatPointer
0x6ABEF3: fldz
0x6ABEF5: fcomp   dword ptr [eax]
0x6ABEF7: fnstsw  ax
0x6ABEF9: test    ah, 41h
0x6ABEFC: jnz     short loc_6ABF06
0x6ABEFE: fld1
0x6ABF00: fstp    dword ptr ds:0B161D8h
0x6ABF06: mov     eax, [edi]
0x6ABF08: mov     ebp, [eax]
0x6ABF0A: mov     ecx, offset flt_B161D8
0x6ABF0F: call    GameSetting_GetSafeFloatPointer
0x6ABF14: fld     dword ptr [eax]
0x6ABF16: mov     edx, [ebp+3Ch]
0x6ABF19: push    ebx
0x6ABF1A: push    ecx
0x6ABF1B: mov     ecx, [edi]
0x6ABF1D: fstp    [esp+0B4h+var_B4]
0x6ABF20: push    ecx
0x6ABF21: call    edx
0x6ABF23: cmp     [esp+0ACh+var_60], ebx
0x6ABF27: mov     [esi+0A5h], bl
0x6ABF2D: mov     [esi+74h], ebx
0x6ABF30: jz      short loc_6ABF39
0x6ABF32: or      dword ptr [esi+0ACh], 4
0x6ABF39: mov     [esi+324h], ebx
0x6ABF3F: mov     eax, ds:0B33EA0h
0x6ABF44: push    ebx; pvReserved
0x6ABF45: mov     [esi+0D0h], eax
0x6ABF4B: mov     [esi+0B0h], bx
0x6ABF52: call    dword ptr ds:0A283C4h
0x6ABF58: mov     ecx, offset flt_B16190
0x6ABF5D: mov     [esi+0DCh], ebx
0x6ABF63: call    sub_404E30
0x6ABF68: fstp    dword ptr [esi+0B8h]
0x6ABF6E: mov     ecx, offset flt_B161A0
0x6ABF73: call    GameSetting_GetSafeFloatPointer
0x6ABF78: fld     dword ptr [eax]
0x6ABF7A: fstp    [esp+0ACh+var_98]
0x6ABF7E: mov     ecx, offset flt_B161A8
0x6ABF83: fld     [esp+0ACh+var_98]
0x6ABF87: fst     dword ptr [esi+2F8h]
0x6ABF8D: fstp    dword ptr [esi+2F0h]
0x6ABF93: call    GameSetting_GetSafeFloatPointer
0x6ABF98: fld     dword ptr [eax]
0x6ABF9A: mov     ecx, offset flt_B16198
0x6ABF9F: fstp    dword ptr [esi+0C4h]
0x6ABFA5: call    sub_404E30
0x6ABFAA: mov     ecx, offset flt_B161B0
0x6ABFAF: fstp    dword ptr [esi+0BCh]
0x6ABFB5: call    sub_404E30
0x6ABFBA: fstp    dword ptr [esi+0C0h]
0x6ABFC0: fldz
0x6ABFC2: fstp    dword ptr [esi+2F4h]
0x6ABFC8: mov     ecx, ds:0B33EA0h
0x6ABFCE: mov     [esi+0C8h], ecx
0x6ABFD4: mov     eax, esi
0x6ABFD6: mov     ecx, dword ptr [esp+0ACh+var_C]
0x6ABFDD: mov     large fs:0, ecx
0x6ABFE4: pop     ecx
0x6ABFE5: pop     edi
0x6ABFE6: pop     esi
0x6ABFE7: pop     ebp
0x6ABFE8: pop     ebx
0x6ABFE9: mov     ecx, [esp+98h+var_10]
0x6ABFF0: xor     ecx, esp
0x6ABFF2: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6ABFF7: add     esp, 98h
0x6ABFFD: retn    4
