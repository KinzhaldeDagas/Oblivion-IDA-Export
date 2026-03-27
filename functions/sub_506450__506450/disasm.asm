0x506450: push    ecx
0x506451: mov     ecx, [esp+4+l]
0x506455: fld1
0x506457: mov     edx, [esp+4+arg_10]
0x50645B: fstp    dword ptr [esp+4+var_4]
0x50645E: lea     eax, [esp+4+var_4]
0x506461: push    eax; UInt16
0x506462: mov     eax, [esp+8+arg_C]
0x506466: push    ecx; l
0x506467: mov     ecx, [esp+0Ch+a4]
0x50646B: push    edx; a6
0x50646C: mov     edx, [esp+10h+a3]
0x506470: push    eax; a5
0x506471: mov     eax, [esp+14h+arg_4]
0x506475: push    ecx; a4
0x506476: mov     ecx, [esp+18h+a1]
0x50647A: push    edx; a3
0x50647B: push    eax; a2
0x50647C: push    ecx; a1
0x50647D: call    Script_ExtractArgs
0x506482: add     esp, 20h
0x506485: test    al, al
0x506487: jnz     short loc_50648B
0x506489: pop     ecx
0x50648A: retn
0x50648B: fld     dword ptr [esp+4+var_4]
0x50648E: push    ecx
0x50648F: fstp    [esp+8+var_8]; float
0x506492: call    sub_7EB080
0x506497: add     esp, 4
0x50649A: mov     al, 1
0x50649C: pop     ecx
0x50649D: retn
