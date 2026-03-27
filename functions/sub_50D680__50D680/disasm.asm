0x50D680: push    ecx
0x50D681: mov     ecx, [esp+4+l]
0x50D685: fldz
0x50D687: mov     edx, [esp+4+arg_10]
0x50D68B: fstp    dword ptr [esp+4+var_4]
0x50D68E: push    esi
0x50D68F: mov     esi, [esp+8+a4]
0x50D693: lea     eax, [esp+8+var_4]
0x50D697: push    eax; UInt16
0x50D698: mov     eax, [esp+0Ch+arg_C]
0x50D69C: push    ecx; l
0x50D69D: mov     ecx, [esp+10h+a3]
0x50D6A1: push    edx; a6
0x50D6A2: mov     edx, [esp+14h+arg_4]
0x50D6A6: push    eax; a5
0x50D6A7: mov     eax, [esp+18h+a1]
0x50D6AB: push    esi; a4
0x50D6AC: push    ecx; a3
0x50D6AD: push    edx; a2
0x50D6AE: push    eax; a1
0x50D6AF: call    Script_ExtractArgs
0x50D6B4: add     esp, 20h
0x50D6B7: test    al, al
0x50D6B9: jnz     short loc_50D6BE
0x50D6BB: pop     esi
0x50D6BC: pop     ecx
0x50D6BD: retn
0x50D6BE: test    esi, esi
0x50D6C0: jnz     short loc_50D6C8
0x50D6C2: mov     esi, ds:0B333C4h
0x50D6C8: mov     edx, [esi]
0x50D6CA: mov     eax, [edx+190h]
0x50D6D0: mov     ecx, esi
0x50D6D2: call    eax
0x50D6D4: test    al, al
0x50D6D6: jz      short loc_50D72C
0x50D6D8: cmp     dword ptr [esi+58h], 0
0x50D6DC: jz      short loc_50D72C
0x50D6DE: fld     dword ptr [esp+8+var_4]
0x50D6E2: fcom    qword ptr ds:0A2FC68h
0x50D6E8: fnstsw  ax
0x50D6EA: test    ah, 5
0x50D6ED: jp      short loc_50D6F3
0x50D6EF: fstp    st
0x50D6F1: fldz
0x50D6F3: fstp    dword ptr [esp+8+var_4]
0x50D6F7: fld     dword ptr [esp+8+var_4]
0x50D6FB: fcom    qword ptr ds:0A2F928h
0x50D701: fnstsw  ax
0x50D703: test    ah, 41h
0x50D706: jnz     short loc_50D70C
0x50D708: fstp    st
0x50D70A: fld1
0x50D70C: fstp    dword ptr [esp+8+var_4]
0x50D710: mov     ecx, [esi+58h]
0x50D713: mov     edx, [ecx]
0x50D715: fld     dword ptr [esp+8+var_4]
0x50D719: mov     eax, [edx+434h]
0x50D71F: push    ecx
0x50D720: fstp    [esp+0Ch+var_C]
0x50D723: call    eax
0x50D725: mov     ecx, esi; a1
0x50D727: call    sub_5EE1B0
0x50D72C: mov     al, 1
0x50D72E: pop     esi
0x50D72F: pop     ecx
0x50D730: retn
