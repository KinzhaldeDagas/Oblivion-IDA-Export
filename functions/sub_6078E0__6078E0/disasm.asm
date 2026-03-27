0x6078E0: push    0FFFFFFFFh
0x6078E2: push    offset MagicProj_constr_default_SEH
0x6078E7: mov     eax, large fs:0
0x6078ED: push    eax
0x6078EE: sub     esp, 8
0x6078F1: push    ebx
0x6078F2: push    esi
0x6078F3: mov     eax, ds:0B30AACh
0x6078F8: xor     eax, esp
0x6078FA: push    eax
0x6078FB: lea     eax, [esp+20h+var_C]
0x6078FF: mov     large fs:0, eax
0x607905: mov     esi, ecx
0x607907: mov     [esp+20h+var_14], esi
0x60790B: call    MobilObject_constr
0x607910: or      dword ptr [esi+8], 200000h
0x607917: xor     ebx, ebx
0x607919: push    2ECh; Size
0x60791E: mov     [esp+24h+var_4], ebx
0x607922: mov     dword ptr [esi], offset ??_7ArrowProjectile@@6BArrowProjectile@@@; const ArrowProjectile::`vftable'{for `ArrowProjectile'}
0x607928: mov     dword ptr [esi+18h], offset ??_7ArrowProjectile@@6BTESChildCell@@@; const ArrowProjectile::`vftable'{for `TESChildCell'}
0x60792F: call    FormHeapAlloc
0x607934: add     esp, 4
0x607937: mov     [esp+20h+var_10], eax
0x60793B: cmp     eax, ebx
0x60793D: mov     byte ptr [esp+20h+var_4], 1
0x607942: jz      short loc_60794D
0x607944: mov     ecx, eax; this
0x607946: call    ??0HighProcess@@QAE@XZ; HighProcess::HighProcess(void)
0x60794B: jmp     short loc_60794F
0x60794D: xor     eax, eax
0x60794F: mov     [esi+58h], eax
0x607952: mov     [esi+5Ch], ebx
0x607955: mov     [esi+94h], bl
0x60795B: mov     [esi+98h], ebx
0x607961: mov     [esi+95h], bl
0x607967: mov     [esi+97h], bl
0x60796D: add     dword ptr ds:0B3B7D0h, 1
0x607974: mov     eax, esi
0x607976: mov     ecx, [esp+20h+var_C]
0x60797A: mov     large fs:0, ecx
0x607981: pop     ecx
0x607982: pop     esi
0x607983: pop     ebx
0x607984: add     esp, 14h
0x607987: retn
