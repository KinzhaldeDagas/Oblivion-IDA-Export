0x8AB000: push    ebx
0x8AB001: push    esi
0x8AB002: push    edi
0x8AB003: mov     edi, ecx
0x8AB005: mov     ebx, [edi+4Ch]
0x8AB008: cmp     ebx, [edi+48h]
0x8AB00B: lea     esi, [edi+40h]
0x8AB00E: jb      short loc_8AB01D
0x8AB010: mov     eax, [esi+14h]
0x8AB013: add     eax, ebx
0x8AB015: push    eax
0x8AB016: mov     ecx, esi
0x8AB018: call    sub_8AA480
0x8AB01D: mov     ecx, [esp+0Ch+arg_0]
0x8AB021: push    ecx
0x8AB022: push    ebx
0x8AB023: mov     ecx, esi
0x8AB025: call    sub_8AA710
0x8AB02A: mov     ecx, edi
0x8AB02C: mov     dword ptr [edi+3Ch], 0
0x8AB033: call    sub_8AABE0
0x8AB038: pop     edi
0x8AB039: pop     esi
0x8AB03A: pop     ebx
0x8AB03B: retn    4
