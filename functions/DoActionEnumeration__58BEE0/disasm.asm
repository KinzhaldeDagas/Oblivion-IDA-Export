0x58BEE0: push    0FFFFFFFFh
0x58BEE2: push    offset DoActionEnumeration_SEH
0x58BEE7: mov     eax, large fs:0
0x58BEED: push    eax
0x58BEEE: sub     esp, 14Ch
0x58BEF4: mov     eax, ds:0B30AACh
0x58BEF9: xor     eax, esp
0x58BEFB: mov     [esp+158h+var_10], eax
0x58BF02: push    ebx
0x58BF03: push    ebp
0x58BF04: push    esi
0x58BF05: push    edi
0x58BF06: mov     eax, ds:0B30AACh
0x58BF0B: xor     eax, esp
0x58BF0D: push    eax
0x58BF0E: lea     eax, [esp+16Ch+var_C]
0x58BF15: mov     large fs:0, eax
0x58BF1B: mov     esi, ecx
0x58BF1D: xor     edi, edi
0x58BF1F: cmp     byte ptr ds:0B3B0A1h, 0
0x58BF26: mov     [esp+16Ch+var_11C], esi
0x58BF2A: jz      short loc_58BF38
0x58BF2C: cmp     word ptr [esi+18h], 0FA2h
0x58BF32: jnz     loc_58C96E
0x58BF38: mov     eax, [esi]
0x58BF3A: cmp     eax, edi
0x58BF3C: jz      loc_58C96E
0x58BF42: cmp     byte ptr [eax+5], 0
0x58BF46: jnz     loc_58C96E
0x58BF4C: mov     [esp+16Ch+var_118], edi
0x58BF50: mov     [esp+16Ch+var_114], di
0x58BF55: mov     [esp+16Ch+var_112], di
0x58BF5A: push    esi
0x58BF5B: mov     [esp+170h+var_4], edi
0x58BF62: call    sub_58BAD0
0x58BF67: add     esp, 4
0x58BF6A: test    al, al
0x58BF6C: jz      short loc_58BF74
0x58BF6E: push    edi
0x58BF6F: jmp     loc_58C966
0x58BF74: fld     dword ptr [esi+4]
0x58BF77: lea     ebx, [esi+4]
0x58BF7A: fstp    [esp+16Ch+var_124]
0x58BF7E: mov     [esp+16Ch+var_12C], edi
0x58BF82: mov     [esp+16Ch+var_134], edi
0x58BF86: mov     [esp+16Ch+var_130], edi
0x58BF8A: mov     [esp+16Ch+var_138], offset ??_7?$NiTList@M@@6B@; const NiTList<float>::`vftable'
0x58BF92: mov     eax, [esi+10h]
0x58BF95: mov     eax, [eax+4]
0x58BF98: cmp     eax, edi
0x58BF9A: mov     byte ptr [esp+16Ch+var_4], 1
0x58BFA2: mov     [esp+16Ch+var_144], eax
0x58BFA6: jz      loc_58C898
0x58BFAC: lea     esp, [esp+0]
0x58BFB0: mov     edx, [esp+16Ch+var_144]
0x58BFB4: fldz
0x58BFB6: fld     dword ptr ds:0A379B4h
0x58BFBC: mov     ebp, [edx+0Ch]
0x58BFBF: fld     dword ptr [edx+8]
0x58BFC2: xor     edi, edi
0x58BFC4: fstp    [esp+16Ch+var_150]
0x58BFC8: mov     dword ptr [esp+16Ch+ArgList], ebp
0x58BFCC: mov     [esp+16Ch+var_14C.m_data], edi
0x58BFD0: mov     [esp+16Ch+var_14C.m_dataLen], di
0x58BFD5: mov     [esp+16Ch+var_14C.m_bufLen], di
0x58BFDA: mov     ecx, [edx+10h]
0x58BFDD: cmp     ecx, edi
0x58BFDF: mov     byte ptr [esp+16Ch+var_4], 2
0x58BFE7: mov     eax, edx
0x58BFE9: jz      short loc_58BFF4
0x58BFEB: mov     eax, ecx
0x58BFED: mov     ecx, [eax+10h]
0x58BFF0: cmp     ecx, edi
0x58BFF2: jnz     short loc_58BFEB
0x58BFF4: mov     ecx, [eax]
0x58BFF6: cmp     ecx, edi
0x58BFF8: jz      short loc_58C002
0x58BFFA: mov     eax, ecx
0x58BFFC: mov     ecx, [eax]
0x58BFFE: cmp     ecx, edi
0x58C000: jnz     short loc_58BFFA
0x58C002: cmp     ebp, 0Fh
0x58C005: mov     esi, [eax+8]
0x58C008: mov     ecx, [esi]
0x58C00A: mov     [esp+16Ch+var_154], ecx
0x58C00E: mov     [esp+16Ch+var_128], esi
0x58C012: jnz     short loc_58C047
0x58C014: cmp     [esp+16Ch+var_12C], edi
0x58C018: jz      short loc_58C063
0x58C01A: mov     ebp, [edx+8]
0x58C01D: fstp    st(1)
0x58C01F: mov     edx, [esp+16Ch+var_134]
0x58C023: fstp    st
0x58C025: fld     dword ptr [ebx]
0x58C027: lea     ecx, [esp+16Ch+var_138]
0x58C02B: fstp    [esp+16Ch+var_150]
0x58C02F: mov     dword ptr [esp+16Ch+ArgList], ebp
0x58C033: fld     dword ptr [edx+8]
0x58C036: fstp    dword ptr [ebx]
0x58C038: call    sub_5889F0
0x58C03D: fstp    st
0x58C03F: fldz
0x58C041: fld     dword ptr ds:0A379B4h
0x58C047: cmp     ebp, 0Ah
0x58C04A: jnz     short loc_58C063
0x58C04C: fstp    st(1)
0x58C04E: push    ebx
0x58C04F: lea     ecx, [esp+170h+var_138]
0x58C053: fstp    st
0x58C055: call    sub_5896F0
0x58C05A: mov     esi, [esp+16Ch+var_14C.m_data]
0x58C05E: jmp     loc_58C82B
0x58C063: movzx   eax, word ptr [esi+18h]
0x58C067: xor     ebp, ebp
0x58C069: cmp     ax, 2710h
0x58C06D: mov     [esp+16Ch+var_120], ebp
0x58C071: jb      loc_58C168
0x58C077: movzx   eax, ax
0x58C07A: fstp    st(1)
0x58C07C: push    eax
0x58C07D: fstp    st
0x58C07F: call    StringIDToTileString
0x58C084: add     esp, 4
0x58C087: push    ebp; a3
0x58C088: push    eax; a2
0x58C089: lea     ecx, [esp+174h+var_14C]; this
0x58C08D: call    BSStringT_Set
0x58C092: push    0FFh
0x58C097: lea     ecx, [esp+170h+Str]
0x58C09B: push    20h ; ' '
0x58C09D: push    ecx
0x58C09E: call    __memset
0x58C0A3: mov     di, [esp+178h+var_14C.m_dataLen]
0x58C0A8: mov     esi, [esp+178h+var_14C.m_data]
0x58C0AC: add     esp, 0Ch
0x58C0AF: cmp     di, 0FFFFh
0x58C0B4: mov     [esp+16Ch+var_11], 0
0x58C0BC: jnz     short loc_58C0D0
0x58C0BE: mov     eax, esi
0x58C0C0: lea     edx, [eax+1]
0x58C0C3: mov     cl, [eax]
0x58C0C5: add     eax, 1
0x58C0C8: test    cl, cl
0x58C0CA: jnz     short loc_58C0C3
0x58C0CC: sub     eax, edx
0x58C0CE: jmp     short loc_58C0D3
0x58C0D0: movzx   eax, di
0x58C0D3: add     eax, 0FFFFFFFFh
0x58C0D6: jz      short loc_58C0F1
0x58C0D8: mov     edx, esi
0x58C0DA: neg     edx
0x58C0DC: sbb     edx, edx
0x58C0DE: and     edx, eax
0x58C0E0: mov     cl, [edx+esi]
0x58C0E3: cmp     cl, 5Fh ; '_'
0x58C0E6: jz      short loc_58C0F1
0x58C0E8: sub     eax, 1
0x58C0EB: mov     [esp+eax+16Ch+var_10F], cl
0x58C0EF: jnz     short loc_58C0D8
0x58C0F1: test    eax, eax
0x58C0F3: jz      short loc_58C108
0x58C0F5: lea     eax, [esp+16Ch+Str]
0x58C0F9: push    eax; Str
0x58C0FA: call    j__atol
0x58C0FF: add     esp, 4
0x58C102: mov     ebp, eax
0x58C104: mov     [esp+16Ch+var_120], eax
0x58C108: cmp     di, 0FFFFh
0x58C10D: jnz     short loc_58C159
0x58C10F: mov     eax, esi
0x58C111: lea     edx, [eax+1]
0x58C114: mov     cl, [eax]
0x58C116: add     eax, 1
0x58C119: test    cl, cl
0x58C11B: jnz     short loc_58C114
0x58C11D: fld     dword ptr ds:0A379B4h
0x58C123: sub     eax, edx
0x58C125: fldz
0x58C127: fxch    st(1)
0x58C129: test    eax, eax
0x58C12B: jz      loc_58C33E
0x58C131: fld     st(1)
0x58C133: fcomp   dword ptr [ebx]
0x58C135: fnstsw  ax
0x58C137: test    ah, 44h
0x58C13A: jnp     loc_58C33E
0x58C140: cmp     di, 0FFFFh
0x58C145: jnz     short loc_58C171
0x58C147: mov     eax, esi
0x58C149: lea     edx, [eax+1]
0x58C14C: mov     cl, [eax]
0x58C14E: add     eax, 1
0x58C151: test    cl, cl
0x58C153: jnz     short loc_58C14C
0x58C155: sub     eax, edx
0x58C157: jmp     short loc_58C174
0x58C159: fld     dword ptr ds:0A379B4h
0x58C15F: movzx   eax, di
0x58C162: fldz
0x58C164: fxch    st(1)
0x58C166: jmp     short loc_58C129
0x58C168: mov     esi, [esp+16Ch+var_14C.m_data]
0x58C16C: movzx   eax, di
0x58C16F: jmp     short loc_58C129
0x58C171: movzx   eax, di
0x58C174: add     eax, 0FFFFFFFFh
0x58C177: mov     ecx, esi
0x58C179: neg     ecx
0x58C17B: sbb     ecx, ecx
0x58C17D: and     ecx, eax
0x58C17F: cmp     byte ptr [ecx+esi], 5Fh ; '_'
0x58C183: jz      short loc_58C1A0
0x58C185: test    ebp, ebp
0x58C187: jz      loc_58C33E
0x58C18D: fild    [esp+16Ch+var_120]
0x58C191: fld     dword ptr [ebx]
0x58C193: fucompp
0x58C195: fnstsw  ax
0x58C197: test    ah, 44h
0x58C19A: jnp     loc_58C33E
0x58C1A0: mov     edi, [esp+16Ch+var_14C.m_data]
0x58C1A4: fstp    st(1)
0x58C1A6: xor     eax, eax
0x58C1A8: fstp    st
0x58C1AA: push    eax; a3
0x58C1AB: push    edi; a2
0x58C1AC: lea     ecx, [esp+174h+var_140]; this
0x58C1B0: mov     [esp+174h+var_140.m_data], eax
0x58C1B4: mov     [esp+174h+var_140.m_dataLen], ax
0x58C1B9: mov     [esp+174h+var_140.m_bufLen], ax
0x58C1BE: call    BSStringT_Set
0x58C1C3: lea     ecx, [esp+16Ch+var_14C]
0x58C1C7: mov     byte ptr [esp+16Ch+var_4], 3
0x58C1CF: mov     esi, 2
0x58C1D4: call    BSStringT_GetLen
0x58C1D9: cmp     eax, esi
0x58C1DB: jbe     short loc_58C1F8
0x58C1DD: lea     ecx, [ecx+0]
0x58C1E0: mov     edx, edi
0x58C1E2: neg     edx
0x58C1E4: sbb     edx, edx
0x58C1E6: lea     ecx, [esi-1]
0x58C1E9: and     edx, ecx
0x58C1EB: cmp     byte ptr [edx+edi], 5Fh ; '_'
0x58C1EF: jz      short loc_58C1F8
0x58C1F1: add     esi, 1
0x58C1F4: cmp     esi, eax
0x58C1F6: jb      short loc_58C1E0
0x58C1F8: mov     edx, edi
0x58C1FA: neg     edx
0x58C1FC: sbb     edx, edx
0x58C1FE: lea     eax, [esi-1]
0x58C201: and     edx, eax
0x58C203: cmp     byte ptr [edx+edi], 5Fh ; '_'
0x58C207: mov     edi, [esp+16Ch+var_140.m_data]
0x58C20B: jnz     short loc_58C219
0x58C20D: mov     ecx, edi
0x58C20F: neg     ecx
0x58C211: sbb     ecx, ecx
0x58C213: and     ecx, esi
0x58C215: mov     byte ptr [ecx+edi], 0
0x58C219: fld     dword ptr [ebx]
0x58C21B: call    Double_To_SInt32
0x58C220: push    eax
0x58C221: push    edi; ArgList
0x58C222: lea     edx, [esp+174h+var_140]
0x58C226: push    offset aSI; "%s%i"
0x58C22B: push    edx; int
0x58C22C: call    BSStringT_Static_Format
0x58C231: fldz
0x58C233: mov     edi, [esp+17Ch+var_140.m_data]
0x58C237: fstp    dword ptr [ebx]
0x58C239: push    0FFFFFFFFh; int
0x58C23B: push    edi; unsigned __int8 *
0x58C23C: call    sub_58B040
0x58C241: mov     ebp, [esp+184h+var_154]
0x58C245: mov     esi, eax
0x58C247: mov     eax, [ebp+18h]
0x58C24A: add     esp, 18h
0x58C24D: test    eax, eax
0x58C24F: jz      short loc_58C267
0x58C251: mov     edx, [eax+8]
0x58C254: lea     ecx, [eax+8]
0x58C257: movzx   ecx, word ptr [edx+18h]
0x58C25B: cmp     ecx, esi
0x58C25D: mov     eax, [eax]
0x58C25F: jz      short loc_58C2A8
0x58C261: jg      short loc_58C267
0x58C263: test    eax, eax
0x58C265: jnz     short loc_58C251
0x58C267: push    esi
0x58C268: mov     ecx, ebp
0x58C26A: call    Tile_GetPropertyByCode?
0x58C26F: test    eax, eax
0x58C271: jz      short loc_58C280
0x58C273: fldz
0x58C275: push    ecx
0x58C276: mov     ecx, eax
0x58C278: fstp    [esp+170h+var_170]; float
0x58C27B: call    Tile_Property_SetFloatValue?
0x58C280: mov     eax, [ebp+18h]
0x58C283: test    eax, eax
0x58C285: jz      loc_58C30F
0x58C28B: jmp     short loc_58C290
0x58C28D: align 10h
0x58C290: mov     edx, [eax+8]
0x58C293: lea     ecx, [eax+8]
0x58C296: movzx   ecx, word ptr [edx+18h]
0x58C29A: cmp     ecx, esi
0x58C29C: mov     eax, [eax]
0x58C29E: jz      short loc_58C2A8
0x58C2A0: jg      short loc_58C30F
0x58C2A2: test    eax, eax
0x58C2A4: jnz     short loc_58C290
0x58C2A6: jmp     short loc_58C30F
0x58C2A8: mov     esi, [esp+16Ch+var_144]
0x58C2AC: mov     eax, [esi+10h]
0x58C2AF: xor     ebp, ebp
0x58C2B1: cmp     eax, ebp
0x58C2B3: jz      short loc_58C2D9
0x58C2B5: mov     ecx, [esi+14h]
0x58C2B8: cmp     ecx, ebp
0x58C2BA: jz      short loc_58C2CD
0x58C2BC: mov     [ecx+10h], eax
0x58C2BF: mov     eax, [esi+10h]
0x58C2C2: mov     ecx, [esi+14h]
0x58C2C5: mov     [eax+14h], ecx
0x58C2C8: mov     [esi+10h], ebp
0x58C2CB: jmp     short loc_58C2E3
0x58C2CD: cmp     eax, ebp
0x58C2CF: jz      short loc_58C2D9
0x58C2D1: mov     [eax+14h], ebp
0x58C2D4: mov     [esi+10h], ebp
0x58C2D7: jmp     short loc_58C2E6
0x58C2D9: mov     eax, [esi+14h]
0x58C2DC: cmp     eax, ebp
0x58C2DE: jz      short loc_58C2E6
0x58C2E0: mov     [eax+10h], ebp
0x58C2E3: mov     [esi+14h], ebp
0x58C2E6: mov     eax, [edx+14h]
0x58C2E9: cmp     [eax+14h], ebp
0x58C2EC: jz      short loc_58C2F8
0x58C2EE: mov     edi, edi
0x58C2F0: mov     eax, [eax+14h]
0x58C2F3: cmp     [eax+14h], ebp
0x58C2F6: jnz     short loc_58C2F0
0x58C2F8: mov     [eax+14h], esi
0x58C2FB: mov     [esi+10h], eax
0x58C2FE: fld     dword ptr [edx+4]
0x58C301: fstp    dword ptr [esi+8]
0x58C304: mov     [esp+16Ch+var_128], edx
0x58C308: fld     dword ptr [edx+4]
0x58C30B: fstp    [esp+16Ch+var_150]
0x58C30F: push    edi
0x58C310: mov     byte ptr [esp+170h+var_4], 2
0x58C318: call    FormHeapFree
0x58C31D: fld     dword ptr ds:0A379B4h
0x58C323: fldz
0x58C325: mov     esi, [esp+170h+var_14C.m_data]
0x58C329: add     esp, 4
0x58C32C: fxch    st(1)
0x58C32E: xor     eax, eax
0x58C330: mov     [esp+16Ch+var_140.m_data], eax
0x58C334: mov     [esp+16Ch+var_140.m_bufLen], ax
0x58C339: mov     [esp+16Ch+var_140.m_dataLen], ax
0x58C33E: mov     ecx, dword ptr [esp+16Ch+ArgList]
0x58C342: cmp     ecx, 7D1h
0x58C348: jg      loc_58C411
0x58C34E: fstp    st(1)
0x58C350: fstp    st
0x58C352: jz      short loc_58C381
0x58C354: test    ecx, ecx
0x58C356: jz      loc_58C82B
0x58C35C: cmp     ecx, 23h ; '#'
0x58C35F: jz      loc_58C82B
0x58C365: cmp     ecx, 65h ; 'e'
0x58C368: jz      loc_58C82B
0x58C36E: push    ecx; ArgList
0x58C36F: push    offset aErrorUnknownAc; "ERROR: Unknown action enumeration %i \n"
0x58C374: call    PrintError
0x58C379: add     esp, 8
0x58C37C: jmp     loc_58C82B
0x58C381: mov     edx, [esp+16Ch+var_144]
0x58C385: cmp     dword ptr [edx], 0
0x58C388: jz      loc_58C82B
0x58C38E: mov     edi, [esp+16Ch+var_11C]
0x58C392: cmp     word ptr [edi+18h], 0FDEh
0x58C398: jnz     short loc_58C3C6
0x58C39A: mov     ecx, [edi]
0x58C39C: mov     eax, [ecx]
0x58C39E: mov     edx, [eax+0Ch]
0x58C3A1: call    edx
0x58C3A3: cmp     eax, 387h
0x58C3A8: jnz     short loc_58C3C6
0x58C3AA: mov     ebp, [esp+16Ch+var_128]
0x58C3AE: lea     eax, [ebp+8]
0x58C3B1: push    eax
0x58C3B2: lea     ecx, [edi+8]
0x58C3B5: call    sub_517B20
0x58C3BA: test    al, al
0x58C3BC: jz      short loc_58C3CA
0x58C3BE: mov     eax, [edi]
0x58C3C0: or      dword ptr [eax+2Ch], 2
0x58C3C4: jmp     short loc_58C3CA
0x58C3C6: mov     ebp, [esp+16Ch+var_128]
0x58C3CA: cmp     word ptr [edi+18h], 0FE6h
0x58C3D0: jnz     short loc_58C3F8
0x58C3D2: mov     ecx, [edi]
0x58C3D4: mov     edx, [ecx]
0x58C3D6: mov     eax, [edx+0Ch]
0x58C3D9: call    eax
0x58C3DB: cmp     eax, 386h
0x58C3E0: jnz     short loc_58C3F8
0x58C3E2: lea     ecx, [ebp+8]
0x58C3E5: push    ecx
0x58C3E6: lea     ecx, [edi+8]
0x58C3E9: call    sub_517B20
0x58C3EE: test    al, al
0x58C3F0: jz      short loc_58C3F8
0x58C3F2: mov     eax, [edi]
0x58C3F4: or      dword ptr [eax+2Ch], 20h
0x58C3F8: mov     eax, [ebp+8]
0x58C3FB: push    0; a3
0x58C3FD: lea     ecx, [edi+8]; this
0x58C400: push    eax; a2
0x58C401: call    BSStringT_Set
0x58C406: fld     [esp+16Ch+var_150]
0x58C40A: fstp    dword ptr [ebx]
0x58C40C: jmp     loc_58C82B
0x58C411: lea     eax, [ecx-7D2h]; switch 26 cases
0x58C417: cmp     eax, 19h
0x58C41A: ja      DoActionEnumeration___def_58C420; jumptable 0058C420 default case, case 2007
0x58C420: jmp     ds:jpt_58C420[eax*4]; switch jump
0x58C427: fstp    st(1); jumptable 0058C420 case 2002
0x58C429: fstp    st
0x58C42B: fld     [esp+16Ch+var_150]
0x58C42F: fadd    dword ptr [ebx]
0x58C431: fstp    dword ptr [ebx]
0x58C433: jmp     loc_58C82B
0x58C438: fstp    st(1); jumptable 0058C420 case 2003
0x58C43A: fstp    st
0x58C43C: fld     dword ptr [ebx]
0x58C43E: fsub    [esp+16Ch+var_150]
0x58C442: fstp    dword ptr [ebx]
0x58C444: jmp     loc_58C82B
0x58C449: fstp    st(1); jumptable 0058C420 case 2004
0x58C44B: fstp    st
0x58C44D: fld     [esp+16Ch+var_150]
0x58C451: fmul    dword ptr [ebx]
0x58C453: fstp    dword ptr [ebx]
0x58C455: jmp     loc_58C82B
0x58C45A: fstp    st; jumptable 0058C420 case 2005
0x58C45C: fld     [esp+16Ch+var_150]
0x58C460: fucom   st(1)
0x58C462: fnstsw  ax
0x58C464: fstp    st(1)
0x58C466: test    ah, 44h
0x58C469: jnp     loc_58C829
0x58C46F: fdivr   dword ptr [ebx]
0x58C471: fstp    dword ptr [ebx]
0x58C473: jmp     loc_58C82B
0x58C478: fstp    st(1); jumptable 0058C420 case 2006
0x58C47A: push    0; Seed
0x58C47C: fstp    st
0x58C47E: call    GetRandomLargeInteger?
0x58C483: mov     [esp+170h+var_154], eax
0x58C487: fild    [esp+170h+var_154]
0x58C48B: fdiv    qword ptr ds:0A3D5A8h
0x58C491: fmul    [esp+170h+var_150]
0x58C495: fstp    [esp+170h+var_154]
0x58C499: fld     [esp+170h+var_154]
0x58C49D: fstp    [esp+170h+var_170]; float
0x58C4A0: call    FloatFloor
0x58C4A5: fadd    qword ptr ds:0A2F928h
0x58C4AB: add     esp, 4
0x58C4AE: fstp    dword ptr [ebx]
0x58C4B0: jmp     loc_58C82B
0x58C4B5: fstp    st(1); jumptable 0058C420 case 2026
0x58C4B7: mov     dword ptr [esp+16Ch+ArgList], 1
0x58C4BF: fcomp   [esp+16Ch+var_150]
0x58C4C3: fnstsw  ax
0x58C4C5: test    ah, 44h
0x58C4C8: jnp     short loc_58C4D2
0x58C4CA: mov     dword ptr [esp+16Ch+ArgList], 2
0x58C4D2: fild    dword ptr [esp+16Ch+ArgList]
0x58C4D6: fstp    dword ptr [ebx]
0x58C4D8: jmp     loc_58C82B
0x58C4DD: fstp    st(1); jumptable 0058C420 case 2008
0x58C4DF: mov     dword ptr [esp+16Ch+ArgList], 2
0x58C4E7: fstp    st
0x58C4E9: fld     dword ptr [ebx]
0x58C4EB: fld     [esp+16Ch+var_150]
0x58C4EF: fcompp
0x58C4F1: fnstsw  ax
0x58C4F3: test    ah, 5
0x58C4F6: jnp     short loc_58C500
0x58C4F8: mov     dword ptr [esp+16Ch+ArgList], 1
0x58C500: fild    dword ptr [esp+16Ch+ArgList]
0x58C504: fstp    dword ptr [ebx]
0x58C506: jmp     loc_58C82B
0x58C50B: fstp    st(1); jumptable 0058C420 case 2009
0x58C50D: mov     dword ptr [esp+16Ch+ArgList], 2
0x58C515: fstp    st
0x58C517: fld     dword ptr [ebx]
0x58C519: fld     [esp+16Ch+var_150]
0x58C51D: fcompp
0x58C51F: fnstsw  ax
0x58C521: test    ah, 41h
0x58C524: jnp     short loc_58C52E
0x58C526: mov     dword ptr [esp+16Ch+ArgList], 1
0x58C52E: fild    dword ptr [esp+16Ch+ArgList]
0x58C532: fstp    dword ptr [ebx]
0x58C534: jmp     loc_58C82B
0x58C539: fstp    st(1); jumptable 0058C420 case 2010
0x58C53B: mov     dword ptr [esp+16Ch+ArgList], 2
0x58C543: fstp    st
0x58C545: fld     dword ptr [ebx]
0x58C547: fld     [esp+16Ch+var_150]
0x58C54B: fucompp
0x58C54D: fnstsw  ax
0x58C54F: test    ah, 44h
0x58C552: jnp     short loc_58C55C
0x58C554: mov     dword ptr [esp+16Ch+ArgList], 1
0x58C55C: fild    dword ptr [esp+16Ch+ArgList]
0x58C560: fstp    dword ptr [ebx]
0x58C562: jmp     loc_58C82B
0x58C567: fstp    st(1); jumptable 0058C420 case 2011
0x58C569: mov     dword ptr [esp+16Ch+ArgList], 2
0x58C571: fstp    st
0x58C573: fld     dword ptr [ebx]
0x58C575: fld     [esp+16Ch+var_150]
0x58C579: fcompp
0x58C57B: fnstsw  ax
0x58C57D: test    ah, 1
0x58C580: jz      short loc_58C58A
0x58C582: mov     dword ptr [esp+16Ch+ArgList], 1
0x58C58A: fild    dword ptr [esp+16Ch+ArgList]
0x58C58E: fstp    dword ptr [ebx]
0x58C590: jmp     loc_58C82B
0x58C595: fstp    st(1); jumptable 0058C420 case 2012
0x58C597: mov     dword ptr [esp+16Ch+ArgList], 2
0x58C59F: fstp    st
0x58C5A1: fld     dword ptr [ebx]
0x58C5A3: fld     [esp+16Ch+var_150]
0x58C5A7: fcompp
0x58C5A9: fnstsw  ax
0x58C5AB: test    ah, 41h
0x58C5AE: jz      short loc_58C5B8
0x58C5B0: mov     dword ptr [esp+16Ch+ArgList], 1
0x58C5B8: fild    dword ptr [esp+16Ch+ArgList]
0x58C5BC: fstp    dword ptr [ebx]
0x58C5BE: jmp     loc_58C82B
0x58C5C3: fstp    st(1); jumptable 0058C420 case 2013
0x58C5C5: fstp    st
0x58C5C7: fld     dword ptr [ebx]
0x58C5C9: fld     [esp+16Ch+var_150]
0x58C5CD: fcom    st(1)
0x58C5CF: fnstsw  ax
0x58C5D1: fstp    st(1)
0x58C5D3: test    ah, 41h
0x58C5D6: jnz     short loc_58C5DC
0x58C5D8: fstp    st
0x58C5DA: fld     dword ptr [ebx]
0x58C5DC: fstp    dword ptr [esp+16Ch+ArgList]
0x58C5E0: fld     dword ptr [esp+16Ch+ArgList]
0x58C5E4: fstp    dword ptr [ebx]
0x58C5E6: jmp     loc_58C82B
0x58C5EB: fstp    st(1); jumptable 0058C420 case 2014
0x58C5ED: fstp    st
0x58C5EF: fld     dword ptr [ebx]
0x58C5F1: fld     [esp+16Ch+var_150]
0x58C5F5: fcom    st(1)
0x58C5F7: fnstsw  ax
0x58C5F9: fstp    st(1)
0x58C5FB: test    ah, 5
0x58C5FE: jp      short loc_58C604
0x58C600: fstp    st
0x58C602: fld     dword ptr [ebx]
0x58C604: fstp    dword ptr [esp+16Ch+ArgList]
0x58C608: fld     dword ptr [esp+16Ch+ArgList]
0x58C60C: fstp    dword ptr [ebx]
0x58C60E: jmp     loc_58C82B
0x58C613: fstp    st(1); jumptable 0058C420 case 2015
0x58C615: fcom    dword ptr [ebx]
0x58C617: fnstsw  ax
0x58C619: test    ah, 44h
0x58C61C: jp      short loc_58C63C
0x58C61E: fcomp   [esp+16Ch+var_150]
0x58C622: fnstsw  ax
0x58C624: test    ah, 44h
0x58C627: jp      short loc_58C63E
0x58C629: mov     dword ptr [esp+16Ch+ArgList], 2
0x58C631: fild    dword ptr [esp+16Ch+ArgList]
0x58C635: fstp    dword ptr [ebx]
0x58C637: jmp     loc_58C82B
0x58C63C: fstp    st
0x58C63E: mov     dword ptr [esp+16Ch+ArgList], 1
0x58C646: fild    dword ptr [esp+16Ch+ArgList]
0x58C64A: fstp    dword ptr [ebx]
0x58C64C: jmp     loc_58C82B
0x58C651: fstp    st(1); jumptable 0058C420 case 2016
0x58C653: fcom    dword ptr [ebx]
0x58C655: fnstsw  ax
0x58C657: test    ah, 44h
0x58C65A: jnp     short loc_58C67A
0x58C65C: fcomp   [esp+16Ch+var_150]
0x58C660: fnstsw  ax
0x58C662: test    ah, 44h
0x58C665: jnp     short loc_58C67C
0x58C667: mov     dword ptr [esp+16Ch+ArgList], 1
0x58C66F: fild    dword ptr [esp+16Ch+ArgList]
0x58C673: fstp    dword ptr [ebx]
0x58C675: jmp     loc_58C82B
0x58C67A: fstp    st
0x58C67C: mov     dword ptr [esp+16Ch+ArgList], 2
0x58C684: fild    dword ptr [esp+16Ch+ArgList]
0x58C688: fstp    dword ptr [ebx]
0x58C68A: jmp     loc_58C82B
0x58C68F: fstp    st(1); jumptable 0058C420 case 2017
0x58C691: mov     dword ptr [esp+16Ch+ArgList], 2
0x58C699: fstp    st
0x58C69B: fld     dword ptr [ebx]
0x58C69D: fld     [esp+16Ch+var_150]
0x58C6A1: fucompp
0x58C6A3: fnstsw  ax
0x58C6A5: test    ah, 44h
0x58C6A8: jp      short loc_58C6B2
0x58C6AA: mov     dword ptr [esp+16Ch+ArgList], 1
0x58C6B2: fild    dword ptr [esp+16Ch+ArgList]
0x58C6B6: fstp    dword ptr [ebx]
0x58C6B8: jmp     loc_58C82B
0x58C6BD: fstp    st; jumptable 0058C420 case 2018
0x58C6BF: fcomp   dword ptr [ebx]
0x58C6C1: fnstsw  ax
0x58C6C3: fld     [esp+16Ch+var_150]
0x58C6C7: test    ah, 41h
0x58C6CA: jnz     short loc_58C700
0x58C6CC: fld     dword ptr [ebx]
0x58C6CE: fstp    [esp+16Ch+var_154]
0x58C6D2: fld     [esp+16Ch+var_154]
0x58C6D6: fabs
0x58C6D8: fstp    [esp+16Ch+var_154]
0x58C6DC: fld     [esp+16Ch+var_154]
0x58C6E0: fstp    [esp+16Ch+var_154]
0x58C6E4: fld     st
0x58C6E6: fld     [esp+16Ch+var_154]
0x58C6EA: fdiv    st, st(1)
0x58C6EC: call    Double_To_SInt32
0x58C6F1: add     eax, 1
0x58C6F4: mov     [esp+16Ch+var_154], eax
0x58C6F8: fimul   [esp+16Ch+var_154]
0x58C6FC: fadd    dword ptr [ebx]
0x58C6FE: fstp    dword ptr [ebx]
0x58C700: fld     dword ptr [ebx]
0x58C702: fstp    [esp+16Ch+var_154]
0x58C706: fld     [esp+16Ch+var_154]
0x58C70A: fxch    st(1)
0x58C70C: call    unknown_libname_14
0x58C711: fstp    [esp+16Ch+var_154]
0x58C715: fld     [esp+16Ch+var_154]
0x58C719: fstp    dword ptr [ebx]
0x58C71B: jmp     loc_58C82B
0x58C720: fstp    st(1); jumptable 0058C420 case 2019
0x58C722: push    ecx
0x58C723: fstp    st
0x58C725: fld     [esp+170h+var_150]
0x58C729: fadd    dword ptr [ebx]
0x58C72B: fstp    [esp+170h+var_154]
0x58C72F: fld     [esp+170h+var_154]
0x58C733: fstp    [esp+170h+var_170]; float
0x58C736: call    FloatFloor
0x58C73B: fstp    dword ptr [ebx]
0x58C73D: add     esp, 4
0x58C740: jmp     loc_58C82B
0x58C745: fstp    st(1); jumptable 0058C420 case 2025
0x58C747: push    ecx
0x58C748: fstp    st
0x58C74A: fld     [esp+170h+var_150]
0x58C74E: fadd    dword ptr [ebx]
0x58C750: fstp    [esp+170h+var_154]
0x58C754: fld     [esp+170h+var_154]
0x58C758: fstp    [esp+170h+var_170]; float
0x58C75B: call    sub_484370
0x58C760: fstp    dword ptr [ebx]
0x58C762: add     esp, 4
0x58C765: jmp     loc_58C82B
0x58C76A: fstp    st; jumptable 0058C420 case 2020
0x58C76C: fcomp   dword ptr [ebx]
0x58C76E: fnstsw  ax
0x58C770: test    ah, 41h
0x58C773: jnz     loc_58C82B
0x58C779: fld     [esp+16Ch+var_150]
0x58C77D: fadd    dword ptr [ebx]
0x58C77F: fstp    [esp+16Ch+var_154]
0x58C783: fld     [esp+16Ch+var_154]
0x58C787: fabs
0x58C789: fstp    [esp+16Ch+var_154]
0x58C78D: fld     [esp+16Ch+var_154]
0x58C791: fstp    dword ptr [ebx]
0x58C793: jmp     loc_58C82B
0x58C798: fcomp   [esp+16Ch+var_150]; jumptable 0058C420 case 2021
0x58C79C: fnstsw  ax
0x58C79E: test    ah, 44h
0x58C7A1: jp      short loc_58C7A7
0x58C7A3: fstp    st
0x58C7A5: fld     dword ptr [ebx]
0x58C7A7: fstp    dword ptr [esp+16Ch+ArgList]
0x58C7AB: fld     dword ptr [esp+16Ch+ArgList]
0x58C7AF: fstp    dword ptr [ebx]
0x58C7B1: jmp     loc_58C82B
0x58C7B6: fstp    st; jumptable 0058C420 case 2022
0x58C7B8: fld1
0x58C7BA: fcomp   [esp+16Ch+var_150]
0x58C7BE: fnstsw  ax
0x58C7C0: test    ah, 44h
0x58C7C3: jp      short loc_58C7C9
0x58C7C5: fstp    st
0x58C7C7: fld     dword ptr [ebx]
0x58C7C9: fstp    dword ptr [esp+16Ch+ArgList]
0x58C7CD: fld     dword ptr [esp+16Ch+ArgList]
0x58C7D1: fstp    dword ptr [ebx]
0x58C7D3: jmp     short loc_58C82B
0x58C7D5: fstp    st(1); jumptable 0058C420 case 2023
0x58C7D7: fstp    st
0x58C7D9: fld     dword ptr [ebx]
0x58C7DB: fstp    [esp+16Ch+var_154]
0x58C7DF: fld     [esp+16Ch+var_154]
0x58C7E3: call    __CIlog
0x58C7E8: fstp    [esp+16Ch+var_154]
0x58C7EC: fld     [esp+16Ch+var_154]
0x58C7F0: fstp    dword ptr [ebx]
0x58C7F2: jmp     short loc_58C82B
0x58C7F4: fstp    st(1); jumptable 0058C420 case 2024
0x58C7F6: fstp    st
0x58C7F8: fld     dword ptr [ebx]
0x58C7FA: fstp    [esp+16Ch+var_154]
0x58C7FE: fld     [esp+16Ch+var_154]
0x58C802: call    __CIlog10
0x58C807: fstp    [esp+16Ch+var_154]
0x58C80B: fld     [esp+16Ch+var_154]
0x58C80F: fstp    dword ptr [ebx]
0x58C811: jmp     short loc_58C82B
0x58C813: push    ecx; jumptable 0058C420 default case, case 2007
0x58C814: fstp    st(1)
0x58C816: push    offset aErrorUnknownAc; "ERROR: Unknown action enumeration %i \n"
0x58C81B: fstp    st
0x58C81D: call    PrintError
0x58C822: add     esp, 8
0x58C825: jmp     short loc_58C82B
0x58C827: fstp    st(1); jumptable 0058C420 case 2027
0x58C829: fstp    st
0x58C82B: mov     edx, [esp+16Ch+var_144]
0x58C82F: mov     edi, [edx+4]
0x58C832: push    esi
0x58C833: mov     [esp+170h+var_144], edi
0x58C837: mov     byte ptr [esp+170h+var_4], 1
0x58C83F: call    FormHeapFree
0x58C844: xor     esi, esi
0x58C846: add     esp, 4
0x58C849: cmp     edi, esi
0x58C84B: mov     [esp+16Ch+var_14C.m_data], esi
0x58C84F: mov     [esp+16Ch+var_14C.m_bufLen], si
0x58C854: mov     [esp+16Ch+var_14C.m_dataLen], si
0x58C859: jnz     loc_58BFB0
0x58C85F: cmp     [esp+16Ch+var_12C], esi
0x58C863: jz      short loc_58C898
0x58C865: mov     eax, [esp+16Ch+var_134]
0x58C869: fld     dword ptr [eax+8]
0x58C86C: mov     ecx, eax
0x58C86E: fstp    dword ptr [ebx]
0x58C870: mov     eax, [eax]
0x58C872: cmp     eax, esi
0x58C874: mov     [esp+16Ch+var_134], eax
0x58C878: jz      short loc_58C87F
0x58C87A: mov     [eax+4], esi
0x58C87D: jmp     short loc_58C883
0x58C87F: mov     [esp+16Ch+var_130], esi
0x58C883: mov     eax, [esp+16Ch+var_138]
0x58C887: mov     edx, [eax+8]
0x58C88A: push    ecx
0x58C88B: lea     ecx, [esp+170h+var_138]
0x58C88F: call    edx
0x58C891: sub     [esp+16Ch+var_12C], 1
0x58C896: jnz     short loc_58C865
0x58C898: mov     esi, [esp+16Ch+var_11C]
0x58C89C: mov     eax, [esi+10h]
0x58C89F: cmp     dword ptr [eax+4], 0
0x58C8A3: jz      short loc_58C8D5
0x58C8A5: cmp     word ptr [esi+18h], 0FDEh
0x58C8AB: jnz     short loc_58C8D5
0x58C8AD: fld     dword ptr [ebx]
0x58C8AF: fld     [esp+16Ch+var_124]
0x58C8B3: fucompp
0x58C8B5: fnstsw  ax
0x58C8B7: test    ah, 44h
0x58C8BA: jnp     short loc_58C8D5
0x58C8BC: fld     dword ptr [ebx]
0x58C8BE: call    Double_To_SInt32
0x58C8C3: push    eax; ArgList
0x58C8C4: lea     ecx, [esi+8]
0x58C8C7: push    offset aI; "%i"
0x58C8CC: push    ecx; int
0x58C8CD: call    BSStringT_Static_Format
0x58C8D2: add     esp, 0Ch
0x58C8D5: fld     dword ptr [ebx]
0x58C8D7: fld     [esp+16Ch+var_124]
0x58C8DB: fucompp
0x58C8DD: fnstsw  ax
0x58C8DF: test    ah, 44h
0x58C8E2: jp      short loc_58C8F8
0x58C8E4: mov     ecx, esi
0x58C8E6: call    sub_589770
0x58C8EB: test    al, al
0x58C8ED: jnz     short loc_58C8F8
0x58C8EF: cmp     [esp+16Ch+arg_0], al
0x58C8F6: jz      short loc_58C93B
0x58C8F8: mov     ecx, esi
0x58C8FA: call    sub_58BDD0
0x58C8FF: mov     ecx, [esi]
0x58C901: test    ecx, ecx
0x58C903: jz      short loc_58C93B
0x58C905: cmp     byte ptr [ecx+4], 0
0x58C909: jnz     short loc_58C93B
0x58C90B: mov     eax, [esi+8]
0x58C90E: fld     dword ptr [ebx]
0x58C910: movzx   edx, word ptr [esi+18h]
0x58C914: mov     edi, [ecx]
0x58C916: push    eax
0x58C917: push    ecx
0x58C918: fstp    [esp+174h+var_174]
0x58C91B: push    edx
0x58C91C: mov     edx, [edi+14h]
0x58C91F: call    edx
0x58C921: test    eax, eax
0x58C923: jnz     short loc_58C93B
0x58C925: mov     eax, [esi+8]
0x58C928: fld     dword ptr [ebx]
0x58C92A: push    eax; int
0x58C92B: movzx   eax, word ptr [esi+18h]
0x58C92F: push    ecx
0x58C930: mov     ecx, [esi]
0x58C932: fstp    [esp+174h+var_174]; float
0x58C935: push    eax; int
0x58C936: call    sub_58B2F0
0x58C93B: mov     eax, ds:0B3B0ACh
0x58C940: sub     eax, 1
0x58C943: lea     ecx, [esp+16Ch+var_138]
0x58C947: mov     ds:0B3B0ACh, eax
0x58C94C: mov     dword ptr ds:0B3AF10h[eax*4], 0
0x58C957: mov     byte ptr [esp+16Ch+var_4], 0
0x58C95F: call    ??1?$NiTList@M@@UAE@XZ; NiTList<float>::~NiTList<float>(void)
0x58C964: push    0
0x58C966: call    FormHeapFree
0x58C96B: add     esp, 4
0x58C96E: mov     ecx, dword ptr [esp+16Ch+var_C]
0x58C975: mov     large fs:0, ecx
0x58C97C: pop     ecx
0x58C97D: pop     edi
0x58C97E: pop     esi
0x58C97F: pop     ebp
0x58C980: pop     ebx
0x58C981: mov     ecx, [esp+158h+var_10]
0x58C988: xor     ecx, esp
0x58C98A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x58C98F: add     esp, 158h
0x58C995: retn    4
