0x8A44F0: push    ebx
0x8A44F1: mov     ebx, [esp+4+arg_0]
0x8A44F5: push    esi
0x8A44F6: push    edi
0x8A44F7: push    ebx
0x8A44F8: mov     esi, ecx
0x8A44FA: call    sub_8B0010
0x8A44FF: mov     eax, [esi]
0x8A4501: mov     edx, [eax+74h]
0x8A4504: lea     ecx, [esp+0Ch+arg_0]
0x8A4508: push    ecx
0x8A4509: mov     ecx, esi
0x8A450B: call    edx
0x8A450D: mov     edi, eax
0x8A450F: test    edi, edi
0x8A4511: jz      short loc_8A4564
0x8A4513: fld     dword ptr [edi+0C4h]
0x8A4519: fcomp   qword ptr ds:0A529C0h
0x8A451F: fnstsw  ax
0x8A4521: test    ah, 41h
0x8A4524: jnz     short loc_8A4532
0x8A4526: fld     dword ptr ds:0A2FE78h
0x8A452C: fstp    dword ptr [edi+0C4h]
0x8A4532: fldz
0x8A4534: fcomp   dword ptr [edi+0B0h]
0x8A453A: fnstsw  ax
0x8A453C: test    ah, 44h
0x8A453F: jp      short loc_8A4564
0x8A4541: mov     ecx, esi
0x8A4543: call    sub_535AC0
0x8A4548: fcomp   dword ptr ds:0A2FAA8h
0x8A454E: fnstsw  ax
0x8A4550: test    ah, 44h
0x8A4553: jp      short loc_8A4564
0x8A4555: mov     eax, [edi]
0x8A4557: and     al, 3Fh
0x8A4559: cmp     al, 2
0x8A455B: jz      short loc_8A4564
0x8A455D: mov     byte ptr [edi+0D0h], 7
0x8A4564: mov     ecx, ebx
0x8A4566: call    sub_712AE0
0x8A456B: mov     eax, [ebx+21Ch]
0x8A4571: mov     edx, [eax+4]
0x8A4574: push    1
0x8A4576: lea     ecx, [esp+10h+arg_0]
0x8A457A: push    ecx
0x8A457B: push    4
0x8A457D: add     esi, 18h
0x8A4580: push    esi
0x8A4581: push    eax
0x8A4582: mov     [esp+20h+arg_0], 4
0x8A458A: call    edx
0x8A458C: add     esp, 14h
0x8A458F: pop     edi
0x8A4590: pop     esi
0x8A4591: pop     ebx
0x8A4592: retn    4
