0x800440: sub     esp, 1Ch
0x800443: push    ebx
0x800444: push    ebp
0x800445: push    esi
0x800446: push    edi
0x800447: mov     edi, ecx
0x800449: mov     ecx, ds:0B3F928h
0x80044F: mov     eax, [ecx]
0x800451: mov     edx, [eax+7Ch]
0x800454: call    edx
0x800456: mov     ebp, [esp+2Ch+arg_4]
0x80045A: mov     esi, eax
0x80045C: mov     eax, [ebp+0]
0x80045F: mov     ecx, [eax+20h]
0x800462: test    ecx, ecx
0x800464: jz      short loc_800471
0x800466: mov     eax, [ecx]
0x800468: mov     edx, [eax+4Ch]
0x80046B: call    edx
0x80046D: mov     ebx, eax
0x80046F: jmp     short loc_800473
0x800471: xor     ebx, ebx
0x800473: mov     eax, [esi]
0x800475: mov     edx, [eax+4Ch]
0x800478: push    0
0x80047A: mov     ecx, esi
0x80047C: call    edx
0x80047E: test    eax, eax
0x800480: mov     [esp+2Ch+arg_4], eax
0x800484: fild    [esp+2Ch+arg_4]
0x800488: jge     short loc_800490
0x80048A: fadd    dword ptr ds:0A2FC78h
0x800490: test    ebx, ebx
0x800492: mov     [esp+2Ch+arg_4], ebx
0x800496: fild    [esp+2Ch+arg_4]
0x80049A: jge     short loc_8004A2
0x80049C: fadd    dword ptr ds:0A2FC78h
0x8004A2: fdivp   st(1), st
0x8004A4: mov     ecx, ds:0B3F928h
0x8004AA: mov     eax, [ecx]
0x8004AC: mov     edx, [eax+7Ch]
0x8004AF: fstp    [esp+2Ch+arg_4]
0x8004B3: call    edx
0x8004B5: mov     esi, eax
0x8004B7: mov     eax, [ebp+0]
0x8004BA: mov     ecx, [eax+20h]
0x8004BD: test    ecx, ecx
0x8004BF: jz      short loc_8004CC
0x8004C1: mov     eax, [ecx]
0x8004C3: mov     edx, [eax+50h]
0x8004C6: call    edx
0x8004C8: mov     ebx, eax
0x8004CA: jmp     short loc_8004CE
0x8004CC: xor     ebx, ebx
0x8004CE: mov     eax, [esi]
0x8004D0: mov     edx, [eax+50h]
0x8004D3: push    0
0x8004D5: mov     ecx, esi
0x8004D7: call    edx
0x8004D9: test    eax, eax
0x8004DB: mov     [esp+2Ch+var_14], eax
0x8004DF: fild    [esp+2Ch+var_14]
0x8004E3: jge     short loc_8004EB
0x8004E5: fadd    dword ptr ds:0A2FC78h
0x8004EB: test    ebx, ebx
0x8004ED: mov     [esp+2Ch+var_14], ebx
0x8004F1: fild    [esp+2Ch+var_14]
0x8004F5: jge     short loc_8004FD
0x8004F7: fadd    dword ptr ds:0A2FC78h
0x8004FD: cmp     byte ptr ds:0B42E96h, 0
0x800504: fdivp   st(1), st
0x800506: fstp    [esp+2Ch+var_1C]
0x80050A: fld1
0x80050C: jz      short loc_800516
0x80050E: fst     [esp+2Ch+arg_4]
0x800512: fst     [esp+2Ch+var_1C]
0x800516: fldz
0x800518: mov     eax, [ebp+0]
0x80051B: fst     [esp+2Ch+var_10]
0x80051F: fstp    [esp+2Ch+var_4]
0x800523: fst     [esp+2Ch+var_C]
0x800527: fst     [esp+2Ch+var_8]
0x80052B: mov     ecx, [eax+20h]
0x80052E: test    ecx, ecx
0x800530: jz      short loc_80053F
0x800532: mov     eax, [ecx]
0x800534: fstp    st
0x800536: mov     edx, [eax+4Ch]
0x800539: call    edx
0x80053B: fld1
0x80053D: jmp     short loc_800541
0x80053F: xor     eax, eax
0x800541: test    eax, eax
0x800543: mov     [esp+2Ch+var_14], eax
0x800547: fild    [esp+2Ch+var_14]
0x80054B: jge     short loc_800553
0x80054D: fadd    dword ptr ds:0A2FC78h
0x800553: fdivr   qword ptr ds:0A2FAA0h
0x800559: mov     eax, [ebp+0]
0x80055C: mov     ecx, [eax+20h]
0x80055F: test    ecx, ecx
0x800561: fstp    [esp+2Ch+var_18]
0x800565: jz      short loc_800574
0x800567: mov     eax, [ecx]
0x800569: fstp    st
0x80056B: mov     edx, [eax+50h]
0x80056E: call    edx
0x800570: fld1
0x800572: jmp     short loc_800576
0x800574: xor     eax, eax
0x800576: test    eax, eax
0x800578: mov     [esp+2Ch+var_14], eax
0x80057C: fild    [esp+2Ch+var_14]
0x800580: jge     short loc_800588
0x800582: fadd    dword ptr ds:0A2FC78h
0x800588: cmp     [esp+2Ch+arg_C], 0
0x80058D: fdivr   qword ptr ds:0A2FAA0h
0x800593: mov     dword ptr [edi+98h], 0
0x80059D: fstp    [esp+2Ch+var_14]
0x8005A1: fld     [esp+2Ch+arg_4]
0x8005A5: fst     dword ptr [edi+0A4h]
0x8005AB: fld     [esp+2Ch+var_1C]
0x8005AF: fst     dword ptr [edi+0A8h]
0x8005B5: fld     [esp+2Ch+var_18]
0x8005B9: fldz
0x8005BB: fadd    st(1), st
0x8005BD: fxch    st(1)
0x8005BF: fstp    [esp+2Ch+arg_4]
0x8005C3: fld     [esp+2Ch+arg_4]
0x8005C7: fst     dword ptr [edi+0ACh]
0x8005CD: fld     [esp+2Ch+var_14]
0x8005D1: faddp   st(2), st
0x8005D3: fxch    st(1)
0x8005D5: fstp    [esp+2Ch+arg_4]
0x8005D9: fld     [esp+2Ch+arg_4]
0x8005DD: fst     dword ptr [edi+0B0h]
0x8005E3: fstp    dword ptr [edi+0C0h]
0x8005E9: fxch    st(2)
0x8005EB: fst     dword ptr [edi+0B4h]
0x8005F1: fxch    st(1)
0x8005F3: fst     dword ptr [edi+0B8h]
0x8005F9: fxch    st(2)
0x8005FB: fstp    dword ptr [edi+0BCh]
0x800601: jz      short loc_80060D
0x800603: fstp    st
0x800605: fstp    st
0x800607: fst     [esp+2Ch+var_C]
0x80060B: jmp     short loc_800615
0x80060D: fstp    st(2)
0x80060F: fxch    st(1)
0x800611: fstp    [esp+2Ch+var_C]
0x800615: mov     eax, [ebp+0]
0x800618: fstp    [esp+2Ch+var_8]
0x80061C: push    eax; a2
0x80061D: mov     ecx, edi; this
0x80061F: call    sub_802890
0x800624: mov     ecx, ds:0B474ACh; this
0x80062A: call    BSRenderedTexture__GetInnerTexture
0x80062F: mov     esi, [edi+0A0h]
0x800635: mov     ebx, ds:0A2807Ch
0x80063B: mov     ebp, eax
0x80063D: cmp     esi, ebp
0x80063F: jz      short loc_800671
0x800641: test    esi, esi
0x800643: jz      short loc_80065D
0x800645: lea     ecx, [esi+4]
0x800648: push    ecx; lpAddend
0x800649: call    ebx ; InterlockedDecrement
0x80064B: test    eax, eax
0x80064D: jnz     short loc_80065D
0x80064F: test    esi, esi
0x800651: jz      short loc_80065D
0x800653: mov     edx, [esi]
0x800655: mov     eax, [edx]
0x800657: push    1
0x800659: mov     ecx, esi
0x80065B: call    eax
0x80065D: test    ebp, ebp
0x80065F: mov     [edi+0A0h], ebp
0x800665: jz      short loc_800671
0x800667: add     ebp, 4
0x80066A: push    ebp; lpAddend
0x80066B: call    dword ptr ds:0A28078h
0x800671: mov     esi, [esp+2Ch+arg_8]
0x800675: mov     ecx, [esi]
0x800677: test    ecx, ecx
0x800679: jz      short loc_80068A
0x80067B: call    BSRenderedTexture__UseTextureToRender
0x800680: push    eax; a2
0x800681: push    1; a1
0x800683: call    NiRenderer_BeginScene
0x800688: jmp     short loc_800693
0x80068A: push    0; a2
0x80068C: push    1; a1
0x80068E: call    NiRenderer_BeginScene1
0x800693: mov     ecx, ds:0B3F928h
0x800699: mov     eax, 1
0x80069E: add     esp, 8
0x8006A1: cmp     [ecx+200h], eax
0x8006A7: jz      short loc_8006B1
0x8006A9: cmp     [ecx+204h], eax
0x8006AF: jnz     short loc_8006CE
0x8006B1: cmp     [ecx+20Ch], al
0x8006B7: jnz     short loc_8006CE
0x8006B9: mov     edx, [ecx]
0x8006BB: mov     edx, [edx+144h]
0x8006C1: lea     eax, [esp+2Ch+var_10]
0x8006C5: push    eax
0x8006C6: call    edx
0x8006C8: mov     ecx, ds:0B3F928h
0x8006CE: push    ecx
0x8006CF: mov     ecx, [esp+30h+arg_0]; this
0x8006D3: call    sub_709C60
0x8006D8: xor     ebp, ebp
0x8006DA: cmp     [esi], ebp
0x8006DC: jz      short loc_8006E3
0x8006DE: call    NiRenderer_EndScene
0x8006E3: mov     esi, [edi+0A0h]
0x8006E9: cmp     esi, ebp
0x8006EB: jz      short loc_80070B
0x8006ED: lea     eax, [esi+4]
0x8006F0: push    eax; lpAddend
0x8006F1: call    ebx ; InterlockedDecrement
0x8006F3: test    eax, eax
0x8006F5: jnz     short loc_800705
0x8006F7: cmp     esi, ebp
0x8006F9: jz      short loc_800705
0x8006FB: mov     edx, [esi]
0x8006FD: mov     eax, [edx]
0x8006FF: push    1
0x800701: mov     ecx, esi
0x800703: call    eax
0x800705: mov     [edi+0A0h], ebp
0x80070B: mov     ecx, ds:0B474ACh
0x800711: push    ecx; a2
0x800712: mov     ecx, ds:0B42F50h; this
0x800718: call    sub_7C1EE0
0x80071D: mov     esi, ds:0B474ACh
0x800723: cmp     esi, ebp
0x800725: jz      short loc_800745
0x800727: lea     edx, [esi+4]
0x80072A: push    edx; lpAddend
0x80072B: call    ebx ; InterlockedDecrement
0x80072D: test    eax, eax
0x80072F: jnz     short loc_80073F
0x800731: cmp     esi, ebp
0x800733: jz      short loc_80073F
0x800735: mov     eax, [esi]
0x800737: mov     edx, [eax]
0x800739: push    1
0x80073B: mov     ecx, esi
0x80073D: call    edx
0x80073F: mov     ds:0B474ACh, ebp
0x800745: pop     edi
0x800746: pop     esi
0x800747: pop     ebp
0x800748: pop     ebx
0x800749: add     esp, 1Ch
0x80074C: retn    10h
