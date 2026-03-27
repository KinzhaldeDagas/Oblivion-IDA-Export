0x69C140: push    0FFFFFFFFh
0x69C142: push    offset SEH_69C140
0x69C147: mov     eax, large fs:0
0x69C14D: push    eax
0x69C14E: sub     esp, 8
0x69C151: push    esi
0x69C152: push    edi
0x69C153: mov     eax, ds:0B30AACh
0x69C158: xor     eax, esp
0x69C15A: push    eax
0x69C15B: lea     eax, [esp+20h+var_C]
0x69C15F: mov     large fs:0, eax
0x69C165: mov     esi, ecx
0x69C167: mov     [esp+20h+var_10], esi
0x69C16B: mov     dword ptr [esi], offset ??_7MagicFogProjectile@@6BMagicFogProjectile@@@; const MagicFogProjectile::`vftable'{for `MagicFogProjectile'}
0x69C171: mov     dword ptr [esi+18h], offset ??_7MagicFogProjectile@@6BTESChildCell@@@; const MagicFogProjectile::`vftable'{for `TESChildCell'}
0x69C178: mov     ecx, [esi+68h]
0x69C17B: test    ecx, ecx
0x69C17D: mov     [esp+20h+var_4], 0
0x69C185: jz      short loc_69C190
0x69C187: mov     eax, [ecx]
0x69C189: mov     edx, [eax+20h]
0x69C18C: call    edx
0x69C18E: jmp     short loc_69C192
0x69C190: xor     eax, eax
0x69C192: cmp     eax, ds:0B333C4h
0x69C198: jz      short loc_69C1C5
0x69C19A: fld     dword ptr ds:0B38118h
0x69C1A0: fcom    qword ptr ds:0A2FC68h
0x69C1A6: fnstsw  ax
0x69C1A8: test    ah, 5
0x69C1AB: jp      short loc_69C1B1
0x69C1AD: fstp    st
0x69C1AF: fldz
0x69C1B1: fstp    [esp+20h+var_14]
0x69C1B5: fld     dword ptr ds:0B3C0D0h
0x69C1BB: fsub    [esp+20h+var_14]
0x69C1BF: fstp    dword ptr ds:0B3C0D0h
0x69C1C5: mov     ecx, esi
0x69C1C7: call    sub_69C100
0x69C1CC: mov     ecx, [esi+90h]
0x69C1D2: test    ecx, ecx
0x69C1D4: jz      short loc_69C1FF
0x69C1D6: call    sub_6B7240
0x69C1DB: mov     edi, [esi+90h]
0x69C1E1: test    edi, edi
0x69C1E3: jz      short loc_69C1FF
0x69C1E5: mov     ecx, edi; this
0x69C1E7: call    sub_6B73E0
0x69C1EC: push    edi
0x69C1ED: call    FormHeapFree
0x69C1F2: add     esp, 4
0x69C1F5: mov     dword ptr [esi+90h], 0
0x69C1FF: mov     edi, [esi+98h]
0x69C205: test    edi, edi
0x69C207: jz      short loc_69C219
0x69C209: mov     ecx, edi; this
0x69C20B: call    MagicCaster_CastingVFX_destr
0x69C210: push    edi
0x69C211: call    FormHeapFree
0x69C216: add     esp, 4
0x69C219: mov     ecx, esi
0x69C21B: mov     dword ptr [esi+98h], 0
0x69C225: mov     [esp+20h+var_4], 0FFFFFFFFh
0x69C22D: call    sub_69FA60
0x69C232: mov     ecx, [esp+20h+var_C]
0x69C236: mov     large fs:0, ecx
0x69C23D: pop     ecx
0x69C23E: pop     edi
0x69C23F: pop     esi
0x69C240: add     esp, 14h
0x69C243: retn
