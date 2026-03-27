0x625140: push    0FFFFFFFFh
0x625142: push    offset SEH_625140
0x625147: mov     eax, large fs:0
0x62514D: push    eax
0x62514E: push    ecx
0x62514F: push    esi; int
0x625150: mov     eax, ds:0B30AACh
0x625155: xor     eax, esp
0x625157: push    eax; int
0x625158: lea     eax, [esp+18h+var_C]
0x62515C: mov     large fs:0, eax
0x625162: mov     esi, ecx
0x625164: mov     [esp+18h+var_10], esi
0x625168: mov     dword ptr [esi], offset ??_7Creature@@6BCreature@@@; const Creature::`vftable'{for `Creature'}
0x62516E: mov     dword ptr [esi+18h], offset ??_7Creature@@6BTESChildCell@@@; const Creature::`vftable'{for `TESChildCell'}
0x625175: mov     dword ptr [esi+5Ch], offset ??_7Creature@@6BMagicCaster@@@; const Creature::`vftable'{for `MagicCaster'}
0x62517C: mov     dword ptr [esi+68h], offset ??_7Creature@@6BMagicTarget@@@; const Creature::`vftable'{for `MagicTarget'}
0x625183: mov     eax, [esi+8]
0x625186: shr     eax, 0Eh
0x625189: test    al, 1
0x62518B: mov     [esp+18h+var_4], 0
0x625193: jnz     short loc_6251F1
0x625195: mov     ecx, [esi+0D4h]
0x62519B: test    ecx, ecx
0x62519D: jz      short loc_6251B5
0x62519F: mov     edx, [ecx]
0x6251A1: mov     eax, [edx+384h]
0x6251A7: push    0
0x6251A9: call    eax
0x6251AB: mov     dword ptr [esi+0D4h], 0
0x6251B5: mov     edx, [esi]
0x6251B7: mov     eax, [edx+154h]
0x6251BD: mov     ecx, esi
0x6251BF: call    eax
0x6251C1: test    eax, eax
0x6251C3: jz      short loc_6251E8
0x6251C5: mov     edx, [esi]
0x6251C7: mov     eax, [edx+388h]
0x6251CD: mov     ecx, esi
0x6251CF: call    eax
0x6251D1: test    eax, eax
0x6251D3: jz      short loc_6251E8
0x6251D5: mov     edx, [esi]
0x6251D7: mov     eax, [edx+388h]
0x6251DD: mov     ecx, esi
0x6251DF: call    eax
0x6251E1: mov     ecx, eax
0x6251E3: call    sub_5F0410
0x6251E8: push    0; a2
0x6251EA: mov     ecx, esi; this
0x6251EC: call    TESObjectREFR_Set3D
0x6251F1: mov     ecx, esi; int
0x6251F3: mov     [esp+18h+var_4], 0FFFFFFFFh
0x6251FB: call    sub_5F13D0
0x625200: mov     ecx, dword ptr [esp+18h+var_C]
0x625204: mov     large fs:0, ecx
0x62520B: pop     ecx
0x62520C: pop     esi
0x62520D: add     esp, 10h
0x625210: retn
