0x4060F0: push    ebx
0x4060F1: mov     ebx, [esp+4+wParam]
0x4060F5: push    ebp
0x4060F6: mov     ebp, [esp+8+hWnd]; a2
0x4060FA: push    esi
0x4060FB: mov     esi, [esp+0Ch+Msg]
0x4060FF: cmp     esi, 84h ; '„'
0x406105: push    edi
0x406106: mov     edi, [esp+10h+lParam]
0x40610A: ja      loc_40629E
0x406110: jz      loc_406228
0x406116: lea     eax, [esi-2]; switch 70 cases
0x406119: cmp     eax, 45h
0x40611C: ja      def_406129; jumptable 00406129 default case, cases 3-5,7-19,21-70
0x406122: movzx   eax, ds:byte_40630C[eax]
0x406129: jmp     ds:jpt_406129[eax*4]; switch jump
0x406130: mov     ecx, [esp+10h+wParam]; jumptable 00406129 case 6
0x406134: movzx   eax, cx
0x406137: test    eax, eax
0x406139: jz      short loc_406180
0x40613B: add     eax, 0FFFFFFFFh
0x40613E: cmp     eax, 1
0x406141: ja      short loc_4061B8
0x406143: shr     ecx, 10h
0x406146: jnz     short loc_4061B8
0x406148: mov     eax, OSGlobals
0x40614D: test    eax, eax
0x40614F: jz      short loc_4061B8
0x406151: mov     ecx, [eax+20h]; this
0x406154: test    ecx, ecx
0x406156: lea     esi, [eax+20h]
0x406159: mov     edi, eax
0x40615B: jz      short loc_406169
0x40615D: call    InputGlobals__FlushKeyboardBuffer
0x406162: mov     ecx, [esi]; this
0x406164: call    InputGlobals__PollAndUpdateInputState
0x406169: mov     ecx, offset TimeInfo
0x40616E: call    sub_47D0F0
0x406173: mov     byte ptr [edi+2], 1
0x406177: pop     edi
0x406178: pop     esi
0x406179: pop     ebp
0x40617A: xor     eax, eax
0x40617C: pop     ebx
0x40617D: retn    10h
0x406180: mov     eax, OSGlobals
0x406185: test    eax, eax
0x406187: jz      short loc_4061B8
0x406189: cmp     dword_B333F0, 0
0x406190: jnz     short loc_4061B8
0x406192: mov     ecx, [eax+20h]; this
0x406195: test    ecx, ecx
0x406197: lea     esi, [eax+20h]
0x40619A: mov     edi, eax
0x40619C: jz      short loc_4061AA
0x40619E: call    InputGlobals__FlushKeyboardBuffer
0x4061A3: mov     ecx, [esi]; this
0x4061A5: call    InputGlobals__PollAndUpdateInputState
0x4061AA: mov     ecx, offset TimeInfo
0x4061AF: call    OsGlobalsTime__UpdatetimeInfo
0x4061B4: mov     byte ptr [edi+2], 0
0x4061B8: pop     edi
0x4061B9: pop     esi
0x4061BA: pop     ebp
0x4061BB: xor     eax, eax
0x4061BD: pop     ebx
0x4061BE: retn    10h
0x4061C1: cmp     dword_B350D8, 0; jumptable 00406129 case 71
0x4061C8: jz      def_406129; jumptable 00406129 default case, cases 3-5,7-19,21-70
0x4061CE: mov     ecx, [edi+0Ch]
0x4061D1: mov     edx, [edi+8]
0x4061D4: push    ecx
0x4061D5: push    edx
0x4061D6: call    sub_497BF0
0x4061DB: add     esp, 8
0x4061DE: push    edi; lParam
0x4061DF: push    ebx; wParam
0x4061E0: push    esi; Msg
0x4061E1: push    ebp; hWnd
0x4061E2: call    ds:DefWindowProcA
0x4061E8: pop     edi
0x4061E9: pop     esi
0x4061EA: pop     ebp
0x4061EB: pop     ebx
0x4061EC: retn    10h
0x4061EF: mov     eax, OSGlobals; jumptable 00406129 case 2
0x4061F4: test    eax, eax
0x4061F6: jz      def_406129; jumptable 00406129 default case, cases 3-5,7-19,21-70
0x4061FC: push    edi; lParam
0x4061FD: push    ebx; wParam
0x4061FE: push    esi; Msg
0x4061FF: push    ebp; hWnd
0x406200: mov     byte ptr [eax], 1
0x406203: call    ds:DefWindowProcA
0x406209: pop     edi
0x40620A: pop     esi
0x40620B: pop     ebp
0x40620C: pop     ebx
0x40620D: retn    10h
0x406210: cmp     hWnd, ebp; jumptable 00406129 case 20
0x406216: jnz     def_406129; jumptable 00406129 default case, cases 3-5,7-19,21-70
0x40621C: pop     edi
0x40621D: pop     esi
0x40621E: pop     ebp
0x40621F: mov     eax, 1
0x406224: pop     ebx
0x406225: retn    10h
0x406228: mov     eax, [esp+10h+lParam]
0x40622C: mov     ecx, [esp+10h+wParam]
0x406230: push    eax; lParam
0x406231: push    ecx; wParam
0x406232: push    84h ; '„'; Msg
0x406237: mov     edx, ebp
0x406239: push    edx; hWnd
0x40623A: call    ds:DefWindowProcA
0x406240: mov     edi, eax
0x406242: mov     eax, OSGlobals
0x406247: test    eax, eax
0x406249: jz      short loc_406295
0x40624B: cmp     dword ptr [eax+20h], 0
0x40624F: jz      short loc_406295
0x406251: cmp     edi, 1
0x406254: jz      short loc_406277
0x406256: cmp     byte_B02F99, 0
0x40625D: jnz     short loc_406295
0x40625F: push    1; bShow
0x406261: call    ds:ShowCursor
0x406267: mov     eax, edi
0x406269: pop     edi
0x40626A: pop     esi
0x40626B: pop     ebp
0x40626C: mov     byte_B02F99, 1
0x406273: pop     ebx
0x406274: retn    10h
0x406277: cmp     byte_B02F99, 0
0x40627E: jz      short loc_406295
0x406280: mov     esi, ds:ShowCursor
0x406286: push    0; bShow
0x406288: call    esi ; ShowCursor
0x40628A: test    eax, eax
0x40628C: jg      short loc_406286
0x40628E: mov     byte_B02F99, 0
0x406295: mov     eax, edi
0x406297: pop     edi
0x406298: pop     esi
0x406299: pop     ebp
0x40629A: pop     ebx
0x40629B: retn    10h
0x40629E: mov     eax, esi
0x4062A0: sub     eax, 86h ; '†'
0x4062A5: jz      short loc_4062D9
0x4062A7: sub     eax, 7Fh
0x4062AA: jz      loc_4061B8
0x4062B0: sub     eax, 0FBh ; 'û'
0x4062B5: jnz     short def_406129; jumptable 00406129 default case, cases 3-5,7-19,21-70
0x4062B7: mov     eax, edi
0x4062B9: shr     eax, 10h
0x4062BC: movzx   ecx, di
0x4062BF: push    eax; a7
0x4062C0: push    ecx; a6
0x4062C1: mov     ecx, OSGlobals; a1
0x4062C7: call    sub_405370
0x4062CC: test    al, al
0x4062CE: jz      short def_406129; jumptable 00406129 default case, cases 3-5,7-19,21-70
0x4062D0: pop     edi
0x4062D1: pop     esi
0x4062D2: pop     ebp
0x4062D3: xor     eax, eax
0x4062D5: pop     ebx
0x4062D6: retn    10h
0x4062D9: test    ebx, ebx
0x4062DB: jnz     short def_406129; jumptable 00406129 default case, cases 3-5,7-19,21-70
0x4062DD: mov     byte_B333F5, 1
0x4062E4: push    edi; jumptable 00406129 default case, cases 3-5,7-19,21-70
0x4062E5: push    ebx; wParam
0x4062E6: push    esi; Msg
0x4062E7: push    ebp; hWnd
0x4062E8: call    ds:DefWindowProcA
0x4062EE: pop     edi
0x4062EF: pop     esi
0x4062F0: pop     ebp
0x4062F1: pop     ebx
0x4062F2: retn    10h
