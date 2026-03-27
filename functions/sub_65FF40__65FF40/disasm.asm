0x65FF40: push    ecx
0x65FF41: fld     dword ptr ds:0B33E9Ch
0x65FF47: push    esi
0x65FF48: mov     esi, ecx
0x65FF4A: fstp    [esp+8+var_4]
0x65FF4E: mov     ecx, [esi+5CCh]; this
0x65FF54: test    ecx, ecx
0x65FF56: jz      short loc_65FF72
0x65FF58: fld     dword ptr ds:0A30634h
0x65FF5E: sub     esp, 8
0x65FF61: fstp    [esp+10h+var_C]; float
0x65FF65: fld     [esp+10h+var_4]
0x65FF69: fstp    [esp+10h+var_10]; float
0x65FF6C: push    esi; int
0x65FF6D: call    sub_476D10
0x65FF72: mov     ecx, esi
0x65FF74: call    TESObjectREFR_GetAnimData
0x65FF79: test    eax, eax
0x65FF7B: jz      short loc_65FF99
0x65FF7D: fld     dword ptr ds:0A30634h
0x65FF83: sub     esp, 8
0x65FF86: fstp    [esp+10h+var_C]; float
0x65FF8A: mov     ecx, eax; this
0x65FF8C: fld     [esp+10h+var_4]
0x65FF90: fstp    [esp+10h+var_10]; float
0x65FF93: push    esi; int
0x65FF94: call    sub_476D10
0x65FF99: mov     eax, [esi]
0x65FF9B: mov     edx, [eax+0FCh]
0x65FFA1: mov     ecx, esi
0x65FFA3: call    edx
0x65FFA5: mov     ecx, [esi+58h]
0x65FFA8: mov     eax, [ecx]
0x65FFAA: mov     edx, [eax+0F0h]
0x65FFB0: push    1
0x65FFB2: call    edx
0x65FFB4: mov     ecx, eax
0x65FFB6: test    ecx, ecx
0x65FFB8: jz      loc_6600A1
0x65FFBE: push    ebp
0x65FFBF: mov     ebp, [ecx+8]
0x65FFC2: fild    dword ptr [ebp+70h]
0x65FFC5: fcomp   dword ptr ds:0A2FAA8h
0x65FFCB: fnstsw  ax
0x65FFCD: test    ah, 1
0x65FFD0: jnz     loc_6600A0
0x65FFD6: mov     ecx, [ecx]
0x65FFD8: test    ecx, ecx
0x65FFDA: jz      loc_6600A0
0x65FFE0: push    edi
0x65FFE1: mov     edi, [ecx]
0x65FFE3: test    edi, edi
0x65FFE5: jz      loc_66009F
0x65FFEB: mov     ecx, edi
0x65FFED: call    ExtraDataList_GetTimeLeft
0x65FFF2: fstp    [esp+10h+var_4]
0x65FFF6: fld     [esp+10h+var_4]
0x65FFFA: push    ecx
0x65FFFB: fsub    dword ptr ds:0B33E9Ch
0x660001: mov     ecx, edi
0x660003: fstp    [esp+14h+var_4]
0x660007: fld     [esp+14h+var_4]
0x66000B: fstp    [esp+14h+var_14]; float
0x66000E: call    sub_41EDF0
0x660013: fldz
0x660015: fcomp   [esp+10h+var_4]
0x660019: fnstsw  ax
0x66001B: test    ah, 1
0x66001E: jnz     short loc_66009F
0x660020: mov     ecx, ds:0B33A98h
0x660026: push    offset aItmtorchheldex; "ITMTorchHeldExt"
0x66002B: call    sub_447490
0x660030: test    eax, eax
0x660032: jz      short loc_660060
0x660034: mov     eax, [eax+0Ch]
0x660037: push    ebx
0x660038: push    1; a5
0x66003A: push    102h; a4
0x66003F: push    0; a3
0x660041: push    eax; a2
0x660042: mov     ecx, esi; this
0x660044: call    sub_65AC50
0x660049: mov     ebx, eax
0x66004B: test    ebx, ebx
0x66004D: jz      short loc_66005F
0x66004F: mov     ecx, ebx; this
0x660051: call    sub_6B73E0
0x660056: push    ebx
0x660057: call    FormHeapFree
0x66005C: add     esp, 4
0x66005F: pop     ebx
0x660060: push    1
0x660062: mov     ecx, edi
0x660064: call    ExtraDataList_HasWorn
0x660069: test    al, al
0x66006B: jz      short loc_660081
0x66006D: push    1
0x66006F: mov     ecx, edi
0x660071: call    sub_41F6A0
0x660076: push    0
0x660078: push    1
0x66007A: mov     ecx, edi
0x66007C: call    SetWorn
0x660081: mov     eax, [esi]
0x660083: mov     edx, [eax+100h]
0x660089: push    0
0x66008B: push    1
0x66008D: push    0
0x66008F: push    0
0x660091: push    0
0x660093: push    0
0x660095: push    0
0x660097: push    1
0x660099: push    edi
0x66009A: push    ebp
0x66009B: mov     ecx, esi
0x66009D: call    edx
0x66009F: pop     edi
0x6600A0: pop     ebp
0x6600A1: pop     esi
0x6600A2: pop     ecx
0x6600A3: retn
