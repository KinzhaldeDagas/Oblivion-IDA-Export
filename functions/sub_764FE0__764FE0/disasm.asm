0x764FE0: sub     esp, 20h
0x764FE3: push    ebx
0x764FE4: mov     ebx, ecx
0x764FE6: cmp     byte ptr [ebx+6F0h], 0
0x764FED: jz      short loc_764FF8
0x764FEF: xor     al, al
0x764FF1: pop     ebx
0x764FF2: add     esp, 20h
0x764FF5: retn    14h
0x764FF8: mov     eax, [esp+24h+arg_0]
0x764FFC: mov     ecx, [esp+24h+arg_4]; void *
0x765000: push    esi
0x765001: mov     esi, [eax+10h]
0x765004: test    esi, esi
0x765006: push    edi
0x765007: mov     edi, [ecx+10h]
0x76500A: jz      loc_7650FC
0x765010: test    edi, edi
0x765012: jz      loc_7650FC
0x765018: mov     edx, [edi]
0x76501A: mov     eax, [edx+0Ch]
0x76501D: mov     ecx, edi
0x76501F: call    eax
0x765021: mov     edx, [esi]
0x765023: push    eax
0x765024: mov     eax, [edx+0Ch]
0x765027: mov     ecx, esi
0x765029: call    eax
0x76502B: mov     ecx, eax
0x76502D: call    sub_70E260
0x765032: test    al, al
0x765034: jz      short loc_765040
0x765036: push    offset aPixelFormatsDo; "Pixel formats do not match"
0x76503B: jmp     loc_765101
0x765040: mov     ecx, [esi+0Ch]
0x765043: test    ecx, ecx
0x765045: mov     edi, [edi+0Ch]
0x765048: jz      loc_7650F5
0x76504E: test    edi, edi
0x765050: jz      loc_7650F5
0x765056: mov     eax, [esp+2Ch+arg_8]
0x76505A: test    eax, eax
0x76505C: jz      short loc_765079
0x76505E: mov     edx, [eax]
0x765060: mov     [esp+2Ch+var_20], edx
0x765064: mov     edx, [eax+4]
0x765067: mov     [esp+2Ch+var_18], edx
0x76506B: mov     edx, [eax+8]
0x76506E: mov     [esp+2Ch+var_1C], edx
0x765072: mov     edx, [eax+0Ch]
0x765075: mov     [esp+2Ch+var_14], edx
0x765079: mov     edx, [esp+2Ch+arg_C]
0x76507D: mov     esi, [esp+2Ch+var_18]
0x765081: add     esi, edx
0x765083: mov     [esp+2Ch+var_8], esi
0x765087: mov     esi, [esp+2Ch+var_14]
0x76508B: mov     [esp+2Ch+var_10], edx
0x76508F: mov     edx, [esp+2Ch+arg_10]
0x765093: add     esi, edx
0x765095: test    eax, eax
0x765097: mov     eax, [ebx+280h]
0x76509D: mov     [esp+2Ch+var_C], edx
0x7650A1: mov     [esp+2Ch+var_4], esi
0x7650A5: mov     edx, [eax]
0x7650A7: push    0
0x7650A9: jz      short loc_7650B8
0x7650AB: lea     esi, [esp+30h+var_10]
0x7650AF: push    esi
0x7650B0: push    edi
0x7650B1: lea     esi, [esp+38h+var_20]
0x7650B5: push    esi
0x7650B6: jmp     short loc_7650BD
0x7650B8: push    0
0x7650BA: push    edi
0x7650BB: push    0
0x7650BD: push    ecx
0x7650BE: push    eax
0x7650BF: mov     eax, [edx+88h]
0x7650C5: call    eax
0x7650C7: test    eax, eax
0x7650C9: jge     short loc_7650EA
0x7650CB: push    eax
0x7650CC: call    sub_7736F0
0x7650D1: push    eax
0x7650D2: push    offset aNidx9rendererF; "NiDX9Renderer::FastCopy> Failed Stretch"...
0x7650D7: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x7650DC: add     esp, 0Ch
0x7650DF: pop     edi
0x7650E0: pop     esi
0x7650E1: xor     al, al
0x7650E3: pop     ebx
0x7650E4: add     esp, 20h
0x7650E7: retn    14h
0x7650EA: pop     edi
0x7650EB: pop     esi
0x7650EC: mov     al, 1
0x7650EE: pop     ebx
0x7650EF: add     esp, 20h
0x7650F2: retn    14h
0x7650F5: push    offset aNullSurfaceFou; "NULL Surface found"
0x7650FA: jmp     short loc_765101
0x7650FC: push    offset aNoRendererdata; "No RendererData found"
0x765101: push    offset aNidx9render_22; "NiDX9Renderer::FastCopy> Failed - %s"
0x765106: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x76510B: add     esp, 8
0x76510E: pop     edi
0x76510F: pop     esi
0x765110: xor     al, al
0x765112: pop     ebx
0x765113: add     esp, 20h
0x765116: retn    14h
