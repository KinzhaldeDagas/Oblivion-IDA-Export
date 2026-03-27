0x506310: push    ecx
0x506311: mov     ecx, [esp+4+l]
0x506315: mov     edx, [esp+4+arg_10]
0x506319: push    esi
0x50631A: mov     esi, [esp+8+a4]
0x50631E: lea     eax, [esp+8+var_4]
0x506322: push    eax; UInt16
0x506323: mov     eax, [esp+0Ch+arg_C]
0x506327: push    ecx; l
0x506328: mov     ecx, [esp+10h+a3]
0x50632C: push    edx; a6
0x50632D: mov     edx, [esp+14h+arg_4]
0x506331: push    eax; a5
0x506332: mov     eax, [esp+18h+a1]
0x506336: push    esi; a4
0x506337: push    ecx; a3
0x506338: push    edx; a2
0x506339: push    eax; a1
0x50633A: mov     dword ptr [esp+28h+var_4], 0
0x506342: call    Script_ExtractArgs
0x506347: add     esp, 20h
0x50634A: test    al, al
0x50634C: jnz     short loc_506351
0x50634E: pop     esi
0x50634F: pop     ecx
0x506350: retn
0x506351: mov     ecx, [esp+8+arg_18]
0x506355: mov     edx, dword ptr [esp+8+var_4]
0x506359: push    ecx
0x50635A: push    0
0x50635C: push    edx
0x50635D: push    esi
0x50635E: call    sub_4F8590
0x506363: add     esp, 10h
0x506366: mov     al, 1
0x506368: pop     esi
0x506369: pop     ecx
0x50636A: retn
