0x4962A0: push    0FFFFFFFFh
0x4962A2: push    offset SEH_4962A0
0x4962A7: mov     eax, large fs:0
0x4962AD: push    eax
0x4962AE: sub     esp, 84h
0x4962B4: mov     eax, ds:0B30AACh
0x4962B9: xor     eax, esp
0x4962BB: mov     [esp+90h+var_10], eax
0x4962C2: push    ebx
0x4962C3: push    ebp
0x4962C4: push    esi
0x4962C5: push    edi
0x4962C6: mov     eax, ds:0B30AACh
0x4962CB: xor     eax, esp
0x4962CD: push    eax
0x4962CE: lea     eax, [esp+0A4h+var_C]
0x4962D5: mov     large fs:0, eax
0x4962DB: mov     edi, [esp+0A4h+arg_4]
0x4962E2: test    edi, edi
0x4962E4: mov     eax, [esp+0A4h+arg_0]
0x4962EB: mov     ebx, ecx
0x4962ED: mov     [esp+0A4h+var_90], eax
0x4962F1: jz      loc_4964BE
0x4962F7: mov     edx, [edi]
0x4962F9: mov     eax, [edx+4]
0x4962FC: mov     ecx, edi
0x4962FE: call    eax
0x496300: test    eax, eax
0x496302: jz      short loc_496312
0x496304: cmp     eax, offset dword_BA7B80
0x496309: jz      short loc_496380
0x49630B: mov     eax, [eax+4]
0x49630E: test    eax, eax
0x496310: jnz     short loc_496304
0x496312: xor     al, al
0x496314: neg     al
0x496316: sbb     eax, eax
0x496318: and     eax, edi
0x49631A: mov     [esp+0A4h+var_8C], eax
0x49631E: jz      loc_4964BE
0x496324: push    10h; Size
0x496326: call    FormHeapAlloc
0x49632B: mov     esi, eax
0x49632D: add     esp, 4
0x496330: mov     [esp+0A4h+var_54], esi
0x496334: test    esi, esi
0x496336: mov     [esp+0A4h+var_4], 0
0x496341: jz      short loc_496384
0x496343: xor     eax, eax
0x496345: mov     ebp, 80h ; '€'
0x49634A: mov     [esi+0Ah], ax
0x49634E: mov     [esi+0Ch], ax
0x496352: xor     ecx, ecx
0x496354: mov     eax, ebp
0x496356: mov     edx, 4
0x49635B: mul     edx
0x49635D: seto    cl
0x496360: mov     dword ptr [esi], offset ??_7?$NiTArray@PAD@@6B@; const NiTArray<char *>::`vftable'
0x496366: mov     [esi+8], bp
0x49636A: mov     [esi+0Eh], bp
0x49636E: neg     ecx
0x496370: or      ecx, eax
0x496372: push    ecx; Size
0x496373: call    FormHeapAlloc
0x496378: add     esp, 4
0x49637B: mov     [esi+4], eax
0x49637E: jmp     short loc_496386
0x496380: mov     al, 1
0x496382: jmp     short loc_496314
0x496384: xor     esi, esi
0x496386: mov     edx, [ebx+0Ch]
0x496389: mov     ebp, ds:0A28290h
0x49638F: lea     ecx, [esp+0A4h+lParam]
0x496393: push    ecx; lParam
0x496394: mov     eax, 5
0x496399: push    0; wParam
0x49639B: mov     [esp+0ACh+var_68], eax
0x49639F: mov     [esp+0ACh+var_64], eax
0x4963A3: mov     eax, [esp+0ACh+var_90]
0x4963A7: push    1100h; Msg
0x4963AC: push    edx; hWnd
0x4963AD: mov     [esp+0B4h+var_4], 0FFFFFFFFh
0x4963B8: mov     [esp+0B4h+var_84], 0FFFF0002h
0x4963C0: mov     [esp+0B4h+var_80], 27h ; '''
0x4963C8: mov     [esp+0B4h+var_5C], edi
0x4963CC: mov     [esp+0B4h+var_70], offset aHavok; "Havok"
0x4963D4: mov     [esp+0B4h+lParam], eax
0x4963D8: call    ebp ; SendMessageA
0x4963DA: mov     ecx, [esp+0A4h+var_8C]
0x4963DE: mov     [esp+0A4h+var_90], eax
0x4963E2: mov     eax, [ecx]
0x4963E4: mov     edx, [eax+4]
0x4963E7: call    edx
0x4963E9: mov     eax, [eax]
0x4963EB: push    3Fh ; '?'; Count
0x4963ED: push    eax; Source
0x4963EE: lea     ecx, [esp+0ACh+Dest]
0x4963F2: push    ecx; Dest
0x4963F3: call    _strncpy
0x4963F8: mov     ecx, [esp+0B0h+var_90]
0x4963FC: add     esp, 0Ch
0x4963FF: lea     edx, [esp+0A4h+Dest]
0x496403: mov     [esp+0A4h+var_70], edx
0x496407: xor     eax, eax
0x496409: lea     edx, [esp+0A4h+lParam]
0x49640D: push    edx; lParam
0x49640E: push    eax; wParam
0x49640F: mov     [esp+0ACh+var_68], eax
0x496413: mov     [esp+0ACh+var_64], eax
0x496417: mov     eax, [ebx+0Ch]
0x49641A: push    1100h; Msg
0x49641F: push    eax; hWnd
0x496420: mov     [esp+0B4h+var_11], 0
0x496428: mov     [esp+0B4h+lParam], ecx
0x49642C: call    ebp ; SendMessageA
0x49642E: mov     edx, [edi]
0x496430: mov     [esp+0A4h+lParam], eax
0x496434: mov     [esp+0A4h+var_90], eax
0x496438: mov     eax, [edx+30h]
0x49643B: push    esi
0x49643C: mov     ecx, edi
0x49643E: call    eax
0x496440: xor     edi, edi
0x496442: cmp     [esi+0Ah], di
0x496446: jbe     short loc_49647C
0x496448: mov     ecx, [esi+4]
0x49644B: mov     edx, [ecx+edi*4]
0x49644E: mov     ecx, [ebx+0Ch]
0x496451: mov     eax, 6
0x496456: mov     [esp+0A4h+var_68], eax
0x49645A: mov     [esp+0A4h+var_64], eax
0x49645E: lea     eax, [esp+0A4h+lParam]
0x496462: push    eax; lParam
0x496463: push    0; wParam
0x496465: push    1100h; Msg
0x49646A: push    ecx; hWnd
0x49646B: mov     [esp+0B4h+var_70], edx
0x49646F: call    ebp ; SendMessageA
0x496471: movzx   edx, word ptr [esi+0Ah]
0x496475: add     edi, 1
0x496478: cmp     edi, edx
0x49647A: jb      short loc_496448
0x49647C: xor     ecx, ecx
0x49647E: xor     eax, eax
0x496480: cmp     [esi+0Ah], cx
0x496484: jbe     short loc_496498
0x496486: mov     edi, [esi+4]
0x496489: movzx   edx, ax
0x49648C: add     eax, 1
0x49648F: mov     [edi+edx*4], ecx
0x496492: cmp     ax, [esi+0Ah]
0x496496: jb      short loc_496486
0x496498: mov     eax, [esp+0A4h+var_8C]
0x49649C: mov     edx, [esp+0A4h+var_90]
0x4964A0: mov     [esi+0Ah], cx
0x4964A4: mov     [esi+0Ch], cx
0x4964A8: mov     ecx, [eax+10h]
0x4964AB: push    ecx
0x4964AC: push    edx
0x4964AD: mov     ecx, ebx
0x4964AF: call    sub_495E30
0x4964B4: mov     eax, [esi]
0x4964B6: mov     edx, [eax]
0x4964B8: push    1
0x4964BA: mov     ecx, esi
0x4964BC: call    edx
0x4964BE: mov     ecx, [esp+0A4h+var_C]
0x4964C5: mov     large fs:0, ecx
0x4964CC: pop     ecx
0x4964CD: pop     edi
0x4964CE: pop     esi
0x4964CF: pop     ebp
0x4964D0: pop     ebx
0x4964D1: mov     ecx, [esp+90h+var_10]
0x4964D8: xor     ecx, esp
0x4964DA: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4964DF: add     esp, 90h
0x4964E5: retn    8
