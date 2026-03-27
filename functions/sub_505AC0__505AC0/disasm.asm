0x505AC0: push    ecx
0x505AC1: mov     ecx, [esp+4+l]
0x505AC5: mov     edx, [esp+4+arg_10]
0x505AC9: push    esi
0x505ACA: mov     esi, [esp+8+a4]
0x505ACE: lea     eax, [esp+8+var_4]
0x505AD2: push    eax; UInt16
0x505AD3: mov     eax, [esp+0Ch+arg_C]
0x505AD7: push    ecx; l
0x505AD8: mov     ecx, [esp+10h+a3]
0x505ADC: push    edx; a6
0x505ADD: mov     edx, [esp+14h+arg_4]
0x505AE1: push    eax; a5
0x505AE2: mov     eax, [esp+18h+a1]
0x505AE6: push    esi; a4
0x505AE7: push    ecx; a3
0x505AE8: push    edx; a2
0x505AE9: push    eax; a1
0x505AEA: mov     dword ptr [esp+28h+var_4], 0
0x505AF2: call    Script_ExtractArgs
0x505AF7: add     esp, 20h
0x505AFA: test    al, al
0x505AFC: jnz     short loc_505B01
0x505AFE: pop     esi
0x505AFF: pop     ecx
0x505B00: retn
0x505B01: test    esi, esi
0x505B03: jz      short loc_505B45
0x505B05: push    0; int
0x505B07: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x505B0C: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x505B11: push    0; int
0x505B13: push    esi; void *
0x505B14: call    OblivionDynamicCast
0x505B19: mov     esi, eax
0x505B1B: add     esp, 14h
0x505B1E: test    esi, esi
0x505B20: jz      short loc_505B45
0x505B22: cmp     dword ptr [esp+8+var_4], 0
0x505B27: mov     ecx, esi
0x505B29: jz      short loc_505B3E
0x505B2B: push    1
0x505B2D: call    sub_5E8E30
0x505B32: mov     ecx, esi
0x505B34: call    sub_5E02B0
0x505B39: mov     al, 1
0x505B3B: pop     esi
0x505B3C: pop     ecx
0x505B3D: retn
0x505B3E: push    0
0x505B40: call    sub_5E8E30
0x505B45: mov     al, 1
0x505B47: pop     esi
0x505B48: pop     ecx
0x505B49: retn
