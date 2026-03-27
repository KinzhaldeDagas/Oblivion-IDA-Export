0x7DB050: push    0FFFFFFFFh
0x7DB052: push    offset SEH_7DB050
0x7DB057: mov     eax, large fs:0
0x7DB05D: push    eax
0x7DB05E: sub     esp, 6Ch
0x7DB061: mov     eax, ds:0B30AACh
0x7DB066: xor     eax, esp
0x7DB068: mov     [esp+78h+var_10], eax
0x7DB06C: push    esi
0x7DB06D: mov     eax, ds:0B30AACh
0x7DB072: xor     eax, esp
0x7DB074: push    eax
0x7DB075: lea     eax, [esp+80h+var_C]
0x7DB079: mov     large fs:0, eax
0x7DB07F: mov     esi, ecx
0x7DB081: xor     ecx, ecx
0x7DB083: mov     eax, 25h ; '%'
0x7DB088: mov     [esi+0Ch], eax
0x7DB08B: mov     edx, 4
0x7DB090: mul     edx
0x7DB092: seto    cl
0x7DB095: mov     [esp+80h+var_78], esi
0x7DB099: mov     dword ptr [esi+8], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDPAVShaderBufferEntry@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,ShaderBufferEntry *>::`vftable'
0x7DB0A0: mov     dword ptr [esi+14h], 0
0x7DB0A7: neg     ecx
0x7DB0A9: or      ecx, eax
0x7DB0AB: push    ecx; Size
0x7DB0AC: call    FormHeapAlloc
0x7DB0B1: mov     ecx, [esi+0Ch]
0x7DB0B4: add     ecx, ecx
0x7DB0B6: add     ecx, ecx
0x7DB0B8: push    ecx
0x7DB0B9: push    0
0x7DB0BB: push    eax
0x7DB0BC: mov     [esi+10h], eax
0x7DB0BF: call    __memset
0x7DB0C4: add     esp, 10h
0x7DB0C7: mov     byte ptr [esi+18h], 1
0x7DB0CB: mov     dword ptr [esi+8], offset ??_7?$NiTStringPointerMap@PAVShaderBufferEntry@@@@6B@; const NiTStringPointerMap<ShaderBufferEntry *>::`vftable'
0x7DB0D2: mov     eax, [esp+80h+arg_0]
0x7DB0D9: test    eax, eax
0x7DB0DB: mov     [esp+80h+var_4], 0
0x7DB0E3: mov     dword ptr [esi+4], 0
0x7DB0EA: mov     dword ptr [esi], 0
0x7DB0F0: jle     short loc_7DB13E
0x7DB0F2: push    eax
0x7DB0F3: lea     edx, [esp+84h+var_74]
0x7DB0F7: push    offset aShaderpackage0; "shaderpackage%03i.sdp"
0x7DB0FC: push    edx
0x7DB0FD: call    __sprintf
0x7DB102: lea     eax, [esp+8Ch+var_74]
0x7DB106: add     esp, 0Ch
0x7DB109: lea     edx, [eax+1]
0x7DB10C: lea     esp, [esp+0]
0x7DB110: mov     cl, [eax]
0x7DB112: add     eax, 1
0x7DB115: test    cl, cl
0x7DB117: jnz     short loc_7DB110
0x7DB119: sub     eax, edx
0x7DB11B: add     eax, 1
0x7DB11E: push    eax; Size
0x7DB11F: call    FormHeapAlloc
0x7DB124: add     esp, 4
0x7DB127: mov     [esi], eax
0x7DB129: lea     ecx, [esp+80h+var_74]
0x7DB12D: mov     edx, eax
0x7DB12F: nop
0x7DB130: mov     al, [ecx]
0x7DB132: mov     [edx], al
0x7DB134: add     ecx, 1
0x7DB137: add     edx, 1
0x7DB13A: test    al, al
0x7DB13C: jnz     short loc_7DB130
0x7DB13E: mov     eax, esi
0x7DB140: mov     ecx, [esp+80h+var_C]
0x7DB144: mov     large fs:0, ecx
0x7DB14B: pop     ecx
0x7DB14C: pop     esi
0x7DB14D: mov     ecx, [esp+78h+var_10]
0x7DB151: xor     ecx, esp
0x7DB153: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7DB158: add     esp, 78h
0x7DB15B: retn    4
