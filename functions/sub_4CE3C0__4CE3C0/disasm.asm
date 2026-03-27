0x4CE3C0: push    0FFFFFFFFh
0x4CE3C2: push    offset SEH_8C62B0
0x4CE3C7: mov     eax, large fs:0
0x4CE3CD: push    eax
0x4CE3CE: push    ecx
0x4CE3CF: push    esi
0x4CE3D0: mov     eax, ds:0B30AACh
0x4CE3D5: xor     eax, esp
0x4CE3D7: push    eax
0x4CE3D8: lea     eax, [esp+18h+var_C]
0x4CE3DC: mov     large fs:0, eax
0x4CE3E2: mov     esi, ecx
0x4CE3E4: test    byte ptr [esi+24h], 1
0x4CE3E8: jnz     short loc_4CE445
0x4CE3EA: test    dword ptr [esi+8], 400h
0x4CE3F1: jnz     short loc_4CE445
0x4CE3F3: cmp     dword ptr [esi+40h], 0
0x4CE3F7: jnz     short loc_4CE431
0x4CE3F9: push    28h ; '('; Size
0x4CE3FB: call    FormHeapAlloc
0x4CE400: add     esp, 4
0x4CE403: mov     [esp+18h+var_10], eax
0x4CE407: test    eax, eax
0x4CE409: mov     [esp+18h+var_4], 0
0x4CE411: jz      short loc_4CE41C
0x4CE413: mov     ecx, eax; this
0x4CE415: call    ??0TESObjectLAND@@QAE@XZ; TESObjectLAND::TESObjectLAND(void)
0x4CE41A: jmp     short loc_4CE41E
0x4CE41C: xor     eax, eax
0x4CE41E: push    esi; a2
0x4CE41F: mov     ecx, eax; this
0x4CE421: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x4CE429: mov     [esi+40h], eax
0x4CE42C: call    sub_4BFDC0
0x4CE431: mov     eax, [esi+40h]
0x4CE434: mov     ecx, [esp+18h+var_C]
0x4CE438: mov     large fs:0, ecx
0x4CE43F: pop     ecx
0x4CE440: pop     esi
0x4CE441: add     esp, 10h
0x4CE444: retn
0x4CE445: xor     eax, eax
0x4CE447: mov     ecx, [esp+18h+var_C]
0x4CE44B: mov     large fs:0, ecx
0x4CE452: pop     ecx
0x4CE453: pop     esi
0x4CE454: add     esp, 10h
0x4CE457: retn
