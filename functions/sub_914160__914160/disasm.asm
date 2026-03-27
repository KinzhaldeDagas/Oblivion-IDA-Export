0x914160: push    ebp
0x914161: mov     ebp, esp
0x914163: and     esp, 0FFFFFFF0h
0x914166: sub     esp, 0C8h
0x91416C: mov     eax, [ebp+arg_0]
0x91416F: push    esi
0x914170: push    edi
0x914171: push    eax
0x914172: lea     ecx, [esp+0D4h+var_70]
0x914176: call    sub_943420
0x91417B: push    0
0x91417D: lea     ecx, [esp+0D4h+var_60]
0x914181: call    sub_943800
0x914186: push    0
0x914188: lea     ecx, [esp+0D4h+var_C0]
0x91418C: call    sub_9438E0
0x914191: mov     esi, [ebp+arg_4]
0x914194: mov     al, [esi+2Ch]
0x914197: test    al, al
0x914199: mov     [esp+0D0h+var_C0], 3F800000h
0x9141A1: jnz     short loc_9141AB
0x9141A3: mov     [esp+0D0h+var_B0], 0
0x9141AB: lea     ecx, [esp+0D0h+var_C0]
0x9141AF: push    ecx
0x9141B0: lea     ecx, [esp+0D4h+var_60]
0x9141B4: call    sub_943680
0x9141B9: mov     ecx, esi
0x9141BB: mov     [esp+0D0h+var_A0], 3F000000h
0x9141C3: mov     [esp+0D0h+var_9C], 3E4CCCCDh
0x9141CB: mov     [esp+0D0h+var_98], 3F800000h
0x9141D3: mov     [esp+0D0h+var_80], 4
0x9141DB: mov     dword ptr [esp+0D0h+var_90], 3E4CCCCDh
0x9141E3: mov     dword ptr [esp+0D0h+var_90+4], 3E4CCCCDh
0x9141EB: mov     dword ptr [esp+0D0h+var_90+8], 3D4CCCCDh
0x9141F3: mov     dword ptr [esp+0D0h+var_90+0Ch], 0
0x9141FB: call    sub_914320
0x914200: fstp    [esp+0D0h+var_A0]
0x914204: mov     ecx, esi
0x914206: call    sub_914330
0x91420B: fstp    [esp+0D0h+var_9C]
0x91420F: mov     ecx, esi
0x914211: call    sub_9142E0
0x914216: fstp    [esp+0D0h+var_98]
0x91421A: lea     edx, [esp+0D0h+var_C0]
0x91421E: push    edx
0x91421F: mov     ecx, esi
0x914221: call    sub_9142F0
0x914226: movaps  xmm0, xmmword ptr [eax]
0x914229: lea     eax, [esp+0D0h+var_A0]
0x91422D: push    eax
0x91422E: lea     ecx, [esp+0D4h+var_60]
0x914232: movaps  [esp+0D4h+var_90], xmm0
0x914237: call    sub_943860
0x91423C: push    0
0x91423E: lea     ecx, [esp+0D4h+var_C0]
0x914242: call    sub_943890
0x914247: mov     al, [esi+2Dh]
0x91424A: test    al, al
0x91424C: jz      short loc_914258
0x91424E: mov     [esp+0D0h+var_B8], 32h ; '2'
0x914256: jmp     short loc_914268
0x914258: mov     [esp+0D0h+var_BC], 0
0x914260: mov     [esp+0D0h+var_B8], 0
0x914268: lea     ecx, [esp+0D0h+var_C0]
0x91426C: push    ecx
0x91426D: lea     ecx, [esp+0D4h+var_60]
0x914271: mov     [esp+0D4h+var_B4], 5
0x914279: call    sub_943650
0x91427E: lea     edx, [esp+0D0h+var_70]
0x914282: push    edx
0x914283: lea     ecx, [esp+0D4h+var_60]
0x914287: call    sub_9436B0
0x91428C: mov     ecx, ds:0BA7D98h
0x914292: mov     esi, eax
0x914294: mov     eax, [ecx]
0x914296: push    25h ; '%'
0x914298: push    esi
0x914299: call    dword ptr [eax]
0x91429B: push    esi
0x91429C: mov     edi, eax
0x91429E: push    edi
0x91429F: lea     ecx, [esp+0D8h+var_70]
0x9142A3: push    ecx
0x9142A4: lea     ecx, [esp+0DCh+var_60]
0x9142A8: call    sub_9436D0
0x9142AD: mov     ecx, ds:0BA7D98h
0x9142B3: mov     edx, [ecx]
0x9142B5: push    edi
0x9142B6: mov     esi, eax
0x9142B8: call    dword ptr [edx+4]
0x9142BB: lea     ecx, [esp+0D0h+var_60]; void *
0x9142BF: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x9142C4: lea     ecx, [esp+0D0h+var_70]
0x9142C8: call    sub_943450
0x9142CD: pop     edi
0x9142CE: mov     eax, esi
0x9142D0: pop     esi
0x9142D1: mov     esp, ebp
0x9142D3: pop     ebp
0x9142D4: retn
