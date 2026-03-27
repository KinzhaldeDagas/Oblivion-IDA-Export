0x4FBE00: push    esi
0x4FBE01: mov     esi, ecx
0x4FBE03: mov     ecx, [esp+4+ArgList]
0x4FBE07: test    cl, cl
0x4FBE09: jnz     short loc_4FBE11
0x4FBE0B: cmp     dword ptr [esi+20h], 4
0x4FBE0F: jbe     short loc_4FBE47
0x4FBE11: cmp     byte ptr [esi+28h], 0
0x4FBE15: fldz
0x4FBE17: jz      short loc_4FBE4D
0x4FBE19: fcom    dword ptr [esi+38h]
0x4FBE1C: fnstsw  ax
0x4FBE1E: test    ah, 5
0x4FBE21: jp      short loc_4FBE4D
0x4FBE23: fld     dword ptr [esi+38h]
0x4FBE26: fsub    dword ptr ds:0B33E9Ch
0x4FBE2C: fstp    dword ptr [esi+38h]
0x4FBE2F: fld     dword ptr [esi+3Ch]
0x4FBE32: fadd    dword ptr ds:0B33E9Ch
0x4FBE38: fstp    dword ptr [esi+3Ch]
0x4FBE3B: fcom    dword ptr [esi+38h]
0x4FBE3E: fnstsw  ax
0x4FBE40: test    ah, 5
0x4FBE43: jp      short loc_4FBE4D
0x4FBE45: fstp    st
0x4FBE47: xor     al, al
0x4FBE49: pop     esi
0x4FBE4A: retn    10h
0x4FBE4D: mov     eax, [esp+4+a7]
0x4FBE51: push    ebx
0x4FBE52: push    edi
0x4FBE53: mov     edi, [esp+0Ch+a6]
0x4FBE57: push    ecx
0x4FBE58: fstp    [esp+10h+a11]; a11
0x4FBE5B: push    0; a10
0x4FBE5D: push    0; a9
0x4FBE5F: push    ecx; a8
0x4FBE60: mov     ecx, [esp+1Ch+thisObj]
0x4FBE64: push    eax; a7
0x4FBE65: push    edi; a6
0x4FBE66: push    ecx; a5
0x4FBE67: push    esi; a4
0x4FBE68: call    ScriptRunner_GetSingleton
0x4FBE6D: mov     ecx, eax; this
0x4FBE6F: call    Script_RunEvent??
0x4FBE74: cmp     byte ptr [esi+28h], 0
0x4FBE78: mov     bl, al
0x4FBE7A: jz      short loc_4FBEEC
0x4FBE7C: fldz
0x4FBE7E: fcomp   dword ptr ds:0B09E28h
0x4FBE84: fnstsw  ax
0x4FBE86: test    ah, 5
0x4FBE89: jp      short loc_4FBEEC
0x4FBE8B: push    ebp
0x4FBE8C: lea     edx, [esp+10h+ArgList]
0x4FBE90: push    edx
0x4FBE91: push    offset aFquestdelaytim; "fQuestDelayTime"
0x4FBE96: mov     ecx, esi
0x4FBE98: call    sub_4FAA90
0x4FBE9D: test    al, al
0x4FBE9F: jz      short loc_4FBEDA
0x4FBEA1: mov     ebp, [esp+10h+ArgList]
0x4FBEA5: push    0; a3
0x4FBEA7: push    ebp; ArgList
0x4FBEA8: mov     ecx, edi; this
0x4FBEAA: call    sub_4FA110
0x4FBEAF: fstp    [esp+10h+ArgList]
0x4FBEB3: fld     [esp+10h+ArgList]
0x4FBEB7: fcomp   dword ptr ds:0A2FAA8h
0x4FBEBD: fnstsw  ax
0x4FBEBF: test    ah, 41h
0x4FBEC2: jnz     short loc_4FBEDA
0x4FBEC4: push    esi; a3
0x4FBEC5: push    ebp; ArgList
0x4FBEC6: mov     ecx, edi; this
0x4FBEC8: call    sub_4FA110
0x4FBECD: fstp    [esp+10h+ArgList]
0x4FBED1: fld     [esp+10h+ArgList]
0x4FBED5: fadd    dword ptr [esi+38h]
0x4FBED8: jmp     short loc_4FBEE3
0x4FBEDA: fld     dword ptr [esi+38h]
0x4FBEDD: fadd    dword ptr ds:0B09E28h
0x4FBEE3: fstp    dword ptr [esi+38h]
0x4FBEE6: pop     ebp
0x4FBEE7: fldz
0x4FBEE9: fstp    dword ptr [esi+3Ch]
0x4FBEEC: mov     ecx, esi
0x4FBEEE: call    sub_4FB430
0x4FBEF3: pop     edi
0x4FBEF4: mov     al, bl
0x4FBEF6: pop     ebx
0x4FBEF7: pop     esi
0x4FBEF8: retn    10h
