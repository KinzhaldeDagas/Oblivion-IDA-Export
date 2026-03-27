0x6A4030: push    0FFFFFFFFh
0x6A4032: push    offset SEH_8C8900
0x6A4037: mov     eax, large fs:0
0x6A403D: push    eax
0x6A403E: push    ecx
0x6A403F: mov     eax, ds:0B30AACh
0x6A4044: xor     eax, esp
0x6A4046: push    eax
0x6A4047: lea     eax, [esp+14h+var_C]
0x6A404B: mov     large fs:0, eax
0x6A4051: push    60h ; '`'; Size
0x6A4053: call    FormHeapAlloc
0x6A4058: add     esp, 4
0x6A405B: mov     [esp+14h+var_10], eax
0x6A405F: test    eax, eax
0x6A4061: mov     [esp+14h+var_4], 0
0x6A4069: jz      short loc_6A4091
0x6A406B: mov     ecx, [esp+14h+arg_8]
0x6A406F: mov     edx, [esp+14h+arg_4]
0x6A4073: push    ecx; int
0x6A4074: mov     ecx, [esp+18h+arg_0]
0x6A4078: push    edx; int
0x6A4079: push    ecx; int
0x6A407A: mov     ecx, eax; this
0x6A407C: call    ReanimateEffect_constr
0x6A4081: mov     ecx, [esp+14h+var_C]
0x6A4085: mov     large fs:0, ecx
0x6A408C: pop     ecx
0x6A408D: add     esp, 10h
0x6A4090: retn
0x6A4091: xor     eax, eax
0x6A4093: mov     ecx, [esp+14h+var_C]
0x6A4097: mov     large fs:0, ecx
0x6A409E: pop     ecx
0x6A409F: add     esp, 10h
0x6A40A2: retn
