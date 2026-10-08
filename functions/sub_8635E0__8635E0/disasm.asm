0x8635E0: push    0FFFFFFFFh
0x8635E2: push    offset SEH_8635E0
0x8635E7: mov     eax, large fs:0
0x8635ED: push    eax
0x8635EE: sub     esp, 10Ch
0x8635F4: mov     eax, ds:0B30AACh
0x8635F9: xor     eax, esp
0x8635FB: mov     [esp+118h+var_10], eax
0x863602: push    ebp
0x863603: push    esi
0x863604: push    edi
0x863605: mov     eax, ds:0B30AACh
0x86360A: xor     eax, esp
0x86360C: push    eax
0x86360D: lea     eax, [esp+128h+var_C]
0x863614: mov     large fs:0, eax
0x86361A: mov     eax, [esp+128h+arg_8]
0x863621: mov     ebp, dword ptr [esp+128h+loadFromCache]
0x863628: mov     edi, [esp+128h+sourcePath]
0x86362F: push    eax
0x863630: push    ebp
0x863631: push    edi
0x863632: mov     esi, ecx
0x863634: call    sub_7D8160
0x863639: cmp     dword ptr ds:0B42F48h, 2
0x863640: jl      short loc_8636B9
0x863642: push    offset suffix; suffix
0x863647: lea     eax, [esp+12Ch+Src]
0x86364B: push    edi; sourcePath
0x86364C: push    eax; outPath
0x86364D: call    BuildTextureVariantPath; Builds a sibling texture variant path. Keeps the original extension, truncates the basename at its final underscore after the last separator, appends the requested suffix, and prefixes Data\\ for relative paths.
0x863652: add     esp, 0Ch
0x863655: cmp     [esp+128h+Src], 0
0x86365A: jz      short loc_8636B9
0x86365C: push    1; requireMipmaps
0x86365E: push    ebp; loadFromCache
0x86365F: lea     ecx, [esp+130h+Src]
0x863663: push    ecx; path
0x863664: lea     edx, [esp+134h+outTexture]
0x863668: push    edx; outTexture
0x863669: call    NiSourceTexture_LoadChecked; Loads/caches a NiSourceTexture by filename and optionally rejects a loaded texture that lacks mipmaps. The first argument is the returned smart-pointer storage.
0x86366E: add     esp, 10h
0x863671: push    eax; incoming
0x863672: lea     ecx, [esi+104h]; this
0x863678: mov     [esp+12Ch+var_4], 0
0x863683: call    OB_NiSmartPointer_Assign_010201A0; SpeedTreeOBSE 2026-07-14: smart-pointer assignment releases the old reference before storing/AddRefing the new one. Transaction rollback snapshots must hold their own AddRef.
0x863688: mov     eax, [esp+128h+outTexture]
0x86368C: test    eax, eax
0x86368E: mov     [esp+128h+var_4], 0FFFFFFFFh
0x863699: jz      short loc_8636B9
0x86369B: mov     edi, eax
0x86369D: add     eax, 4
0x8636A0: push    eax; lpAddend
0x8636A1: call    dword ptr ds:0A2807Ch
0x8636A7: test    eax, eax
0x8636A9: jnz     short loc_8636B9
0x8636AB: test    edi, edi
0x8636AD: jz      short loc_8636B9
0x8636AF: mov     eax, [edi]
0x8636B1: mov     edx, [eax]
0x8636B3: push    1
0x8636B5: mov     ecx, edi
0x8636B7: call    edx
0x8636B9: cmp     dword ptr [esi+104h], 0
0x8636C0: jz      short loc_8636D0
0x8636C2: or      dword ptr [esi+1Ch], 40000h
0x8636C9: mov     dword ptr [esi+24h], 0
0x8636D0: mov     ecx, dword ptr [esp+128h+var_C]
0x8636D7: mov     large fs:0, ecx
0x8636DE: pop     ecx
0x8636DF: pop     edi
0x8636E0: pop     esi
0x8636E1: pop     ebp
0x8636E2: mov     ecx, [esp+118h+var_10]
0x8636E9: xor     ecx, esp
0x8636EB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8636F0: add     esp, 118h
0x8636F6: retn    0Ch
0x9D47A0: lea     ecx, [ebp-118h]; slot
0x9D47A6: jmp     NiPointerSlot_Release
0x9D47AB: mov     edx, dword ptr [esp+loadFromCache]
0x9D47AF: lea     eax, [edx-118h]
0x9D47B5: mov     ecx, [edx-11Ch]
0x9D47BB: xor     ecx, eax
0x9D47BD: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D47C2: add     eax, 0Ch
0x9D47C5: mov     ecx, [edx-4]
0x9D47C8: xor     ecx, eax
0x9D47CA: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D47CF: mov     eax, offset stru_AFC818
0x9D47D4: jmp     ___CxxFrameHandler3
