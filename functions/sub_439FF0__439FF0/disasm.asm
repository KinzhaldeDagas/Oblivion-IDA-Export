0x439FF0: push    0FFFFFFFFh
0x439FF2: push    offset SEH_439FF0
0x439FF7: mov     eax, large fs:0
0x439FFD: push    eax
0x439FFE: sub     esp, 34h
0x43A001: push    ebx
0x43A002: push    esi
0x43A003: push    edi
0x43A004: mov     eax, ___security_cookie
0x43A009: xor     eax, esp
0x43A00B: push    eax
0x43A00C: lea     eax, [esp+50h+var_C]
0x43A010: mov     large fs:0, eax
0x43A016: mov     ecx, [ecx+4]
0x43A019: mov     esi, [esp+50h+arg_0]
0x43A01D: lea     edx, [esp+50h+var_40]
0x43A021: mov     [esp+50h+var_40], 0
0x43A029: mov     eax, [ecx]
0x43A02B: mov     eax, [eax+4]
0x43A02E: push    edx
0x43A02F: push    esi
0x43A030: call    eax
0x43A032: test    al, al
0x43A034: jnz     loc_43A0C9
0x43A03A: mov     edi, ioManager
0x43A040: call    ds:GetCurrentThreadId
0x43A046: cmp     eax, [edi+30h]
0x43A049: jz      short loc_43A056
0x43A04B: mov     ecx, edi
0x43A04D: call    sub_432860
0x43A052: mov     bl, 1
0x43A054: jmp     short loc_43A058
0x43A056: xor     bl, bl
0x43A058: push    0
0x43A05A: push    esi
0x43A05B: lea     ecx, [esp+58h+var_3C]
0x43A05F: call    sub_4377D0
0x43A064: lea     ecx, [esp+50h+var_3C]
0x43A068: mov     [esp+50h+var_4], 0
0x43A070: call    sub_439940
0x43A075: lea     ecx, [esp+50h+var_3C]
0x43A079: call    sub_4378F0
0x43A07E: test    bl, bl
0x43A080: jz      short loc_43A08D
0x43A082: mov     ecx, ioManager
0x43A088: call    sub_432890
0x43A08D: mov     eax, [esp+50h+var_14]
0x43A091: test    eax, eax
0x43A093: mov     [esp+50h+var_40], eax
0x43A097: mov     [esp+50h+var_4], 0FFFFFFFFh
0x43A09F: jz      short loc_43A0AB
0x43A0A1: add     eax, 0Ch
0x43A0A4: push    eax; lpAddend
0x43A0A5: call    ds:InterlockedDecrement
0x43A0AB: mov     ecx, [esp+50h+var_1C]
0x43A0AF: push    ecx
0x43A0B0: mov     [esp+54h+var_3C], offset ??_7QueuedFileEntry@@6B@; const QueuedFileEntry::`vftable'
0x43A0B8: call    FormHeapFree
0x43A0BD: add     esp, 4
0x43A0C0: lea     ecx, [esp+50h+var_3C]; this
0x43A0C4: call    ??1QueuedMagicItem@@UAE@XZ; QueuedMagicItem::~QueuedMagicItem(void)
0x43A0C9: mov     eax, [esp+50h+var_40]
0x43A0CD: test    eax, eax
0x43A0CF: jz      short loc_43A0DF
0x43A0D1: add     eax, 0Ch
0x43A0D4: push    eax; lpAddend
0x43A0D5: call    ds:InterlockedIncrement
0x43A0DB: mov     eax, [esp+50h+var_40]
0x43A0DF: mov     ecx, [esp+50h+var_C]
0x43A0E3: mov     large fs:0, ecx
0x43A0EA: pop     ecx
0x43A0EB: pop     edi
0x43A0EC: pop     esi
0x43A0ED: pop     ebx
0x43A0EE: add     esp, 40h
0x43A0F1: retn    4
