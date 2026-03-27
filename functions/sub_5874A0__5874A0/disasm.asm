0x5874A0: push    esi
0x5874A1: mov     esi, ecx
0x5874A3: call    ??0Menu@@QAE@XZ; Menu::Menu(void)
0x5874A8: push    34h ; '4'
0x5874AA: lea     eax, [esi+28h]
0x5874AD: push    0
0x5874AF: push    eax
0x5874B0: mov     dword ptr [esi], offset ??_7ControlsMenu@@6B@; const ControlsMenu::`vftable'
0x5874B6: call    __memset
0x5874BB: push    74h ; 't'
0x5874BD: lea     ecx, [esi+60h]
0x5874C0: push    0
0x5874C2: push    ecx
0x5874C3: call    __memset
0x5874C8: add     esp, 18h
0x5874CB: mov     dword ptr [esi+5Ch], 0FFh
0x5874D2: mov     byte ptr [esi+0D4h], 0
0x5874D9: mov     dword ptr [esi+0D8h], 0
0x5874E3: mov     byte ptr [esi+0E4h], 0
0x5874EA: mov     eax, esi
0x5874EC: pop     esi
0x5874ED: retn
