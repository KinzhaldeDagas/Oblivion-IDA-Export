0x69F2B0: push    0FFFFFFFFh
0x69F2B2: push    offset MagicProj_constr_default_SEH
0x69F2B7: mov     eax, large fs:0
0x69F2BD: push    eax
0x69F2BE: sub     esp, 8
0x69F2C1: push    ebx
0x69F2C2: push    esi
0x69F2C3: mov     eax, ds:0B30AACh
0x69F2C8: xor     eax, esp
0x69F2CA: push    eax
0x69F2CB: lea     eax, [esp+20h+var_C]
0x69F2CF: mov     large fs:0, eax
0x69F2D5: mov     esi, ecx
0x69F2D7: mov     [esp+20h+var_14], esi
0x69F2DB: call    MobilObject_constr
0x69F2E0: fldz
0x69F2E2: or      dword ptr [esi+8], 200000h
0x69F2E9: fst     dword ptr [esi+64h]
0x69F2EC: xor     ebx, ebx
0x69F2EE: fst     dword ptr [esi+5Ch]
0x69F2F1: push    2ECh; Size
0x69F2F6: fstp    dword ptr [esi+60h]
0x69F2F9: mov     [esp+24h+var_4], ebx
0x69F2FD: mov     dword ptr [esi], offset ??_7MagicProjectile@@6BMagicProjectile@@@; const MagicProjectile::`vftable'{for `MagicProjectile'}
0x69F303: mov     dword ptr [esi+18h], offset ??_7MagicProjectile@@6BTESChildCell@@@; const MagicProjectile::`vftable'{for `TESChildCell'}
0x69F30A: mov     [esi+68h], ebx
0x69F30D: mov     [esi+6Ch], ebx
0x69F310: mov     [esi+70h], ebx
0x69F313: mov     [esi+74h], ebx
0x69F316: call    FormHeapAlloc
0x69F31B: add     esp, 4
0x69F31E: mov     [esp+20h+var_10], eax
0x69F322: cmp     eax, ebx
0x69F324: mov     byte ptr [esp+20h+var_4], 1
0x69F329: jz      short loc_69F334
0x69F32B: mov     ecx, eax; this
0x69F32D: call    ??0HighProcess@@QAE@XZ; HighProcess::HighProcess(void)
0x69F332: jmp     short loc_69F336
0x69F334: xor     eax, eax
0x69F336: mov     ecx, esi
0x69F338: mov     byte ptr [esp+20h+var_4], bl
0x69F33C: mov     [esi+58h], eax
0x69F33F: call    sub_69F100
0x69F344: push    eax; a2
0x69F345: mov     ecx, esi; this
0x69F347: call    TESObjectREFR_SetBaseForm
0x69F34C: mov     eax, esi
0x69F34E: mov     ecx, [esp+20h+var_C]
0x69F352: mov     large fs:0, ecx
0x69F359: pop     ecx
0x69F35A: pop     esi
0x69F35B: pop     ebx
0x69F35C: add     esp, 14h
0x69F35F: retn
