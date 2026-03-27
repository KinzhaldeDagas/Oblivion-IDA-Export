0x76DF70: sub     esp, 20h
0x76DF73: push    ebx
0x76DF74: push    ebp
0x76DF75: push    esi
0x76DF76: push    edi
0x76DF77: push    50h ; 'P'; Size
0x76DF79: call    FormHeapAlloc
0x76DF7E: mov     esi, eax
0x76DF80: xor     ebp, ebp
0x76DF82: add     esp, 4
0x76DF85: cmp     esi, ebp
0x76DF87: jz      short loc_76DFB1
0x76DF89: push    offset NiRefObject_objcount; lpAddend
0x76DF8E: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x76DF94: mov     [esi+4], ebp
0x76DF97: call    dword ptr ds:0A28078h
0x76DF9D: mov     [esi+8], ebp
0x76DFA0: mov     [esi+0Ch], ebp
0x76DFA3: mov     [esi+10h], ebp
0x76DFA6: mov     dword ptr [esi], offset ??_7NiDX9ImplicitBufferData@@6B@; const NiDX9ImplicitBufferData::`vftable'
0x76DFAC: mov     [esi+4Ch], ebp
0x76DFAF: jmp     short loc_76DFB3
0x76DFB1: xor     esi, esi
0x76DFB3: mov     eax, [esp+30h+Src]
0x76DFB7: push    38h ; '8'; Size
0x76DFB9: push    eax; Src
0x76DFBA: lea     ecx, [esi+14h]
0x76DFBD: push    ecx; Dst
0x76DFBE: call    _memcpy
0x76DFC3: mov     edi, [esp+3Ch+arg_0]
0x76DFC7: mov     [esi+4Ch], edi
0x76DFCA: mov     edx, [edi]
0x76DFCC: mov     eax, [edx+4]
0x76DFCF: add     esp, 0Ch
0x76DFD2: push    edi
0x76DFD3: call    eax
0x76DFD5: mov     ecx, [edi]
0x76DFD7: mov     edx, [ecx+98h]
0x76DFDD: lea     ebx, [esi+0Ch]
0x76DFE0: push    ebx
0x76DFE1: push    ebp
0x76DFE2: push    edi
0x76DFE3: call    edx
0x76DFE5: test    eax, eax
0x76DFE7: jge     short loc_76DFFD
0x76DFE9: mov     eax, [esi]
0x76DFEB: mov     edx, [eax]
0x76DFED: push    1
0x76DFEF: mov     ecx, esi
0x76DFF1: call    edx
0x76DFF3: pop     edi
0x76DFF4: pop     esi
0x76DFF5: pop     ebp
0x76DFF6: xor     eax, eax
0x76DFF8: pop     ebx
0x76DFF9: add     esp, 20h
0x76DFFC: retn
0x76DFFD: mov     ebx, [ebx]
0x76DFFF: mov     eax, [ebx]
0x76E001: mov     edx, [eax+30h]
0x76E004: lea     ecx, [esp+30h+a1]
0x76E008: push    ecx
0x76E009: push    ebx
0x76E00A: call    edx
0x76E00C: test    eax, eax
0x76E00E: jl      short loc_76DFE9
0x76E010: mov     eax, [esp+30h+a1]
0x76E014: push    eax; a1
0x76E015: call    CreateSurfaceData
0x76E01A: mov     [esi+10h], eax
0x76E01D: mov     ecx, [esp+34h+a1]
0x76E021: push    ecx
0x76E022: call    sub_774BD0
0x76E027: push    eax
0x76E028: push    offset aNidx9render_20; "NiDX9Renderer::Create> Using %s backbuf"...
0x76E02D: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x76E032: add     esp, 10h
0x76E035: cmp     ds:0B42614h, ebp
0x76E03B: jnz     short loc_76E065
0x76E03D: mov     edi, ds:0B3F928h
0x76E043: mov     edx, [edi]
0x76E045: mov     eax, [edx+9Ch]
0x76E04B: mov     ecx, edi
0x76E04D: call    eax
0x76E04F: mov     ds:0B42614h, eax
0x76E054: mov     edx, [edi]
0x76E056: mov     eax, [edx+0A0h]
0x76E05C: mov     ecx, edi
0x76E05E: call    eax
0x76E060: mov     ds:0B42618h, al
0x76E065: mov     edi, [esp+30h+arg_8]
0x76E069: mov     ecx, [edi]; this
0x76E06B: cmp     ecx, ebp
0x76E06D: push    esi; a2
0x76E06E: jnz     short loc_76E091
0x76E070: mov     ecx, [esp+34h+a2]
0x76E074: mov     edx, [esp+34h+width]
0x76E078: push    ecx; height
0x76E079: push    edx; width
0x76E07A: call    CreateNi2DBuffer
0x76E07F: add     esp, 0Ch
0x76E082: mov     [edi], eax
0x76E084: pop     edi
0x76E085: mov     [esi+8], eax
0x76E088: mov     eax, esi
0x76E08A: pop     esi
0x76E08B: pop     ebp
0x76E08C: pop     ebx
0x76E08D: add     esp, 20h
0x76E090: retn
0x76E091: call    sub_70BD60
0x76E096: mov     eax, [edi]
0x76E098: pop     edi
0x76E099: mov     [esi+8], eax
0x76E09C: mov     eax, esi
0x76E09E: pop     esi
0x76E09F: pop     ebp
0x76E0A0: pop     ebx
0x76E0A1: add     esp, 20h
0x76E0A4: retn
