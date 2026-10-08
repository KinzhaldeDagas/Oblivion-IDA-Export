0x403490: mov     edx, [esp+scheme]; [Controller decode 2026-07-09] Low-level input query. Scheme 0 keyboard, 1 mouse, 2+ joystick index scheme-2; rejects scheme 0xFF and joystick schemes beyond numJoysticks.
0x403494: mov     eax, edx
0x403496: sub     eax, 0
0x403499: jz      short loc_4034FF
0x40349B: sub     eax, 1
0x40349E: jz      short loc_4034EC
0x4034A0: sub     eax, 0FEh ; 'þ'
0x4034A5: jz      short loc_4034E7
0x4034A7: lea     eax, [edx-2]
0x4034AA: cmp     eax, [ecx+18F0h]
0x4034B0: jge     short loc_4034E7
0x4034B2: push    ebx
0x4034B3: mov     bl, [esp+4+keycode]
0x4034B7: cmp     bl, 20h ; ' '
0x4034BA: jnb     short loc_4034CF
0x4034BC: mov     edx, [esp+4+query]
0x4034C0: push    edx; a4
0x4034C1: movzx   edx, bl
0x4034C4: push    edx; a3
0x4034C5: push    eax; a2
0x4034C6: call    InputGlobals__QueryJoystickButtonState; TES4 authoritative joystick button query modes mirror keyboard: held/pressed/released/changed.
0x4034CB: pop     ebx
0x4034CC: retn    0Ch
0x4034CF: push    0; a3
0x4034D1: push    eax; a2
0x4034D2: call    InputGlobals__GetJoystickPOVVirtualButton
0x4034D7: movzx   ecx, bl; this
0x4034DA: xor     edx, edx
0x4034DC: cmp     eax, ecx
0x4034DE: setz    dl
0x4034E1: pop     ebx
0x4034E2: mov     eax, edx
0x4034E4: retn    0Ch
0x4034E7: xor     eax, eax
0x4034E9: retn    0Ch
0x4034EC: mov     eax, [esp+query]
0x4034F0: movzx   edx, [esp+keycode]
0x4034F5: push    eax; a3
0x4034F6: push    edx; a2
0x4034F7: call    InputGlobals__QueryMouseKeyState; TES4 authoritative mouse query modes mirror keyboard for buttons; mouse wheel pseudo-buttons 8/9 return wheel up/down.
0x4034FC: retn    0Ch
0x4034FF: mov     eax, [esp+query]
0x403503: movzx   edx, [esp+keycode]
0x403508: push    eax; a3
0x403509: push    edx; a2
0x40350A: call    InputGlobals__QueryKeyboardState; TES4 authoritative keyboard query modes: 0=current down, 1=previous up/current down, 2=current up/previous down, 3=state changed.
0x40350F: retn    0Ch
