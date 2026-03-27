0x50B0C0: sub     esp, 18h
0x50B0C3: fldz
0x50B0C5: lea     eax, [esp+18h+var_C]
0x50B0C9: push    eax
0x50B0CA: fst     dword ptr [esp+1Ch+var_18]
0x50B0CE: lea     ecx, [esp+1Ch+var_10]
0x50B0D2: fst     [esp+1Ch+var_14]
0x50B0D6: push    ecx
0x50B0D7: fst     [esp+20h+var_8]
0x50B0DB: lea     edx, [esp+20h+var_4]
0x50B0DF: fst     [esp+20h+var_4]
0x50B0E3: push    edx
0x50B0E4: fst     [esp+24h+var_10]
0x50B0E8: lea     eax, [esp+24h+var_8]
0x50B0EC: fstp    [esp+24h+var_C]
0x50B0F0: push    eax
0x50B0F1: mov     eax, [esp+28h+l]
0x50B0F5: lea     ecx, [esp+28h+var_14]
0x50B0F9: push    ecx
0x50B0FA: mov     ecx, [esp+2Ch+arg_10]
0x50B0FE: lea     edx, [esp+2Ch+var_18]
0x50B102: push    edx; UInt16
0x50B103: mov     edx, [esp+30h+arg_C]
0x50B107: push    eax; l
0x50B108: mov     eax, [esp+34h+a4]
0x50B10C: push    ecx; a6
0x50B10D: mov     ecx, [esp+38h+a3]
0x50B111: push    edx; a5
0x50B112: mov     edx, [esp+3Ch+arg_4]
0x50B116: push    eax; a4
0x50B117: mov     eax, [esp+40h+a1]
0x50B11B: push    ecx; a3
0x50B11C: push    edx; a2
0x50B11D: push    eax; a1
0x50B11E: call    Script_ExtractArgs
0x50B123: add     esp, 34h
0x50B126: test    al, al
0x50B128: jnz     short loc_50B12E
0x50B12A: add     esp, 18h
0x50B12D: retn
0x50B12E: fld     dword ptr [esp+18h+var_18]
0x50B131: fld1
0x50B133: fcom    st(1)
0x50B135: fnstsw  ax
0x50B137: fld1
0x50B139: test    ah, 5
0x50B13C: jp      short loc_50B143
0x50B13E: fst     dword ptr [esp+18h+var_18]
0x50B141: jmp     short loc_50B14A
0x50B143: fxch    st(2)
0x50B145: fst     dword ptr [esp+18h+var_18]
0x50B148: fxch    st(2)
0x50B14A: fld     dword ptr [esp+18h+var_18]
0x50B14D: fcomp   qword ptr ds:0A2FC68h
0x50B153: fnstsw  ax
0x50B155: test    ah, 5
0x50B158: jp      short loc_50B16A
0x50B15A: fstp    st(2)
0x50B15C: fstp    st
0x50B15E: fstp    st
0x50B160: fldz
0x50B162: fstp    dword ptr [esp+18h+var_18]
0x50B165: fld     dword ptr [esp+18h+var_18]
0x50B168: jmp     short loc_50B181
0x50B16A: fxch    st(1)
0x50B16C: fcomp   st(2)
0x50B16E: fnstsw  ax
0x50B170: test    ah, 5
0x50B173: jp      short loc_50B17F
0x50B175: fstp    st(1)
0x50B177: fstp    dword ptr [esp+18h+var_18]
0x50B17A: fld     dword ptr [esp+18h+var_18]
0x50B17D: jmp     short loc_50B181
0x50B17F: fstp    st
0x50B181: cmp     byte ptr ds:0B43074h, 0
0x50B188: fld     [esp+18h+var_8]
0x50B18C: fstp    dword ptr ds:0B42EA8h
0x50B192: fld     [esp+18h+var_4]
0x50B196: fstp    dword ptr ds:0B42F44h
0x50B19C: jz      short loc_50B1D2
0x50B19E: fstp    dword ptr ds:0B43204h
0x50B1A4: mov     al, 1
0x50B1A6: fld     [esp+18h+var_14]
0x50B1AA: fabs
0x50B1AC: fstp    [esp+18h+var_4]
0x50B1B0: fld     [esp+18h+var_4]
0x50B1B4: fstp    dword ptr ds:0B4320Ch
0x50B1BA: fld     [esp+18h+var_10]
0x50B1BE: fstp    dword ptr ds:0B43214h
0x50B1C4: fld     [esp+18h+var_C]
0x50B1C8: fstp    dword ptr ds:0B4321Ch
0x50B1CE: add     esp, 18h
0x50B1D1: retn
0x50B1D2: fstp    dword ptr ds:0B43200h
0x50B1D8: mov     al, 1
0x50B1DA: fld     [esp+18h+var_14]
0x50B1DE: fabs
0x50B1E0: fstp    [esp+18h+var_4]
0x50B1E4: fld     [esp+18h+var_4]
0x50B1E8: fstp    dword ptr ds:0B43208h
0x50B1EE: fld     [esp+18h+var_10]
0x50B1F2: fstp    dword ptr ds:0B43210h
0x50B1F8: fld     [esp+18h+var_C]
0x50B1FC: fstp    dword ptr ds:0B43218h
0x50B202: add     esp, 18h
0x50B205: retn
