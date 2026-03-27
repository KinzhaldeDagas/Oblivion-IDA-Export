0x7EF000: sub     esp, 344h
0x7EF006: mov     eax, ds:0B30AACh
0x7EF00B: xor     eax, esp
0x7EF00D: mov     [esp+344h+var_4], eax
0x7EF014: push    ebx
0x7EF015: push    ebp
0x7EF016: push    esi
0x7EF017: push    edi
0x7EF018: xor     ebx, ebx
0x7EF01A: push    3Ch ; '<'
0x7EF01C: lea     eax, [esp+358h+var_32C]
0x7EF020: push    ebx
0x7EF021: mov     esi, offset aPrecipitationP; "precipitation\\precipitation.v.hlsl"
0x7EF026: mov     edi, offset aBillboard_up; "BILLBOARD_UP"
0x7EF02B: push    eax
0x7EF02C: mov     [esp+360h+var_340], ecx
0x7EF030: mov     [esp+360h+var_33C], esi
0x7EF034: mov     [esp+360h+var_338], edi
0x7EF038: mov     [esp+360h+var_334], ebx
0x7EF03C: mov     [esp+360h+var_330], ebx
0x7EF040: call    __memset
0x7EF045: push    3Ch ; '<'
0x7EF047: lea     ecx, [esp+364h+var_2E0]
0x7EF04E: push    ebx
0x7EF04F: mov     ebp, offset aBillboard_face; "BILLBOARD_FACE"
0x7EF054: push    ecx
0x7EF055: mov     [esp+36Ch+var_2F0], esi
0x7EF059: mov     [esp+36Ch+var_2EC], ebp
0x7EF060: mov     [esp+36Ch+var_2E8], ebx
0x7EF067: mov     [esp+36Ch+var_2E4], ebx
0x7EF06E: call    __memset
0x7EF073: push    34h ; '4'
0x7EF075: mov     [esp+370h+var_2A0], edi
0x7EF07C: lea     edx, [esp+370h+var_28C]
0x7EF083: push    ebx
0x7EF084: mov     edi, offset aSnow; "SNOW"
0x7EF089: push    edx
0x7EF08A: mov     [esp+378h+var_2A4], esi
0x7EF091: mov     [esp+378h+var_29C], ebx
0x7EF098: mov     [esp+378h+var_298], edi
0x7EF09F: mov     [esp+378h+var_294], ebx
0x7EF0A6: mov     [esp+378h+var_290], ebx
0x7EF0AD: call    __memset
0x7EF0B2: push    34h ; '4'
0x7EF0B4: lea     eax, [esp+37Ch+var_240]
0x7EF0BB: push    ebx
0x7EF0BC: push    eax
0x7EF0BD: mov     [esp+384h+var_258], esi
0x7EF0C4: mov     [esp+384h+var_254], ebp
0x7EF0CB: mov     [esp+384h+var_250], ebx
0x7EF0D2: mov     [esp+384h+var_24C], edi
0x7EF0D9: mov     [esp+384h+var_248], ebx
0x7EF0E0: mov     [esp+384h+var_244], ebx
0x7EF0E7: call    __memset
0x7EF0EC: lea     edi, [esp+384h+var_338]
0x7EF0F0: add     esp, 30h
0x7EF0F3: xor     esi, esi
0x7EF0F5: mov     [esp+354h+var_344], edi
0x7EF0F9: jmp     short loc_7EF104
0x7EF0FB: jmp     short loc_7EF100
0x7EF0FD: align 10h
0x7EF100: mov     edi, [esp+354h+var_344]
0x7EF104: mov     edx, [edi-4]
0x7EF107: lea     ecx, [esp+354h+FileName]
0x7EF10E: push    ecx; int
0x7EF10F: push    edx; FullPath
0x7EF110: call    sub_801030
0x7EF115: push    esi
0x7EF116: lea     eax, [esp+360h+var_20C]
0x7EF11D: push    offset aPrecip03i_vso; "PRECIP%03i.vso"
0x7EF122: push    eax
0x7EF123: call    __sprintf
0x7EF128: add     esp, 14h
0x7EF12B: push    ebx; int
0x7EF12C: lea     ecx, [esp+358h+var_20C]
0x7EF133: push    ebx; int
0x7EF134: push    ecx; int
0x7EF135: call    sub_7B47E0
0x7EF13A: mov     ecx, [esp+360h+var_340]
0x7EF13E: push    eax; int
0x7EF13F: push    edi; int
0x7EF140: lea     edx, [esp+368h+FileName]
0x7EF147: push    edx; lpFileName
0x7EF148: call    CreateVertexShader
0x7EF14D: mov     edi, ds:0B466E0h[esi*4]
0x7EF154: mov     ebp, eax
0x7EF156: cmp     edi, ebp
0x7EF158: jz      short loc_7EF18F
0x7EF15A: cmp     edi, ebx
0x7EF15C: jz      short loc_7EF17A
0x7EF15E: lea     eax, [edi+4]
0x7EF161: push    eax; lpAddend
0x7EF162: call    dword ptr ds:0A2807Ch
0x7EF168: test    eax, eax
0x7EF16A: jnz     short loc_7EF17A
0x7EF16C: cmp     edi, ebx
0x7EF16E: jz      short loc_7EF17A
0x7EF170: mov     edx, [edi]
0x7EF172: mov     eax, [edx]
0x7EF174: push    1
0x7EF176: mov     ecx, edi
0x7EF178: call    eax
0x7EF17A: cmp     ebp, ebx
0x7EF17C: mov     ds:0B466E0h[esi*4], ebp
0x7EF183: jz      short loc_7EF18F
0x7EF185: add     ebp, 4
0x7EF188: push    ebp; lpAddend
0x7EF189: call    dword ptr ds:0A28078h
0x7EF18F: add     [esp+354h+var_344], 4Ch ; 'L'
0x7EF194: add     esi, 1
0x7EF197: cmp     esi, 4
0x7EF19A: jl      loc_7EF100
0x7EF1A0: mov     ecx, [esp+354h+var_4]
0x7EF1A7: pop     edi
0x7EF1A8: pop     esi
0x7EF1A9: pop     ebp
0x7EF1AA: pop     ebx
0x7EF1AB: xor     ecx, esp
0x7EF1AD: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7EF1B2: add     esp, 344h
0x7EF1B8: retn
