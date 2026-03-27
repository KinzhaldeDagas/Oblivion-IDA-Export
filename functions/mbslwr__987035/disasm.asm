0x987035: push    esi; struct localeinfo_struct *
0x987036: mov     esi, [esp+4+Str]
0x98703A: mov     eax, esi
0x98703C: neg     eax
0x98703E: push    0; struct localeinfo_struct *
0x987040: sbb     eax, eax
0x987042: push    eax; MaxCount
0x987043: push    esi; Str
0x987044: call    __mbslwr_s_l
0x987049: add     esp, 0Ch
0x98704C: neg     eax
0x98704E: sbb     eax, eax
0x987050: not     eax
0x987052: and     eax, esi
0x987054: pop     esi
0x987055: retn
