0x551FE0: push    0FFFFFFFFh
0x551FE2: push    offset SEH_552D90
0x551FE7: mov     eax, large fs:0
0x551FED: push    eax
0x551FEE: push    ecx
0x551FEF: push    esi
0x551FF0: mov     eax, ds:0B30AACh
0x551FF5: xor     eax, esp
0x551FF7: push    eax
0x551FF8: lea     eax, [esp+18h+var_C]
0x551FFC: mov     large fs:0, eax
0x552002: mov     esi, ecx
0x552004: mov     [esp+18h+var_10], esi
0x552008: push    offset sub_43ACE0; void (__thiscall *)(void *)
0x55200D: push    14h; int
0x55200F: push    18h; unsigned int
0x552011: lea     eax, [esi+0A54h]
0x552017: push    eax; void *
0x552018: mov     [esp+28h+var_4], 2
0x552020: call    $LN21
0x552025: push    offset sub_551FD0; void (__thiscall *)(void *)
0x55202A: push    19h; int
0x55202C: push    38h ; '8'; unsigned int
0x55202E: lea     ecx, [esi+4DCh]
0x552034: push    ecx; void *
0x552035: mov     byte ptr [esp+28h+var_4], 1
0x55203A: call    $LN21
0x55203F: push    offset sub_43ACE0; void (__thiscall *)(void *)
0x552044: push    14h; int
0x552046: push    20h ; ' '; unsigned int
0x552048: lea     edx, [esi+25Ch]
0x55204E: push    edx; void *
0x55204F: mov     byte ptr [esp+28h+var_4], 0
0x552054: call    $LN21
0x552059: push    offset sub_551F40; void (__thiscall *)(void *)
0x55205E: push    5; int
0x552060: push    78h ; 'x'; unsigned int
0x552062: add     esi, 4
0x552065: push    esi; void *
0x552066: mov     [esp+28h+var_4], 0FFFFFFFFh
0x55206E: call    $LN21
0x552073: mov     ecx, [esp+18h+var_C]
0x552077: mov     large fs:0, ecx
0x55207E: pop     ecx
0x55207F: pop     esi
0x552080: add     esp, 10h
0x552083: retn
