0x505B70: push    ecx
0x505B71: mov     ecx, [esp+4+l]
0x505B75: mov     edx, [esp+4+arg_10]
0x505B79: push    esi
0x505B7A: mov     esi, [esp+8+a4]
0x505B7E: lea     eax, [esp+8+var_4]
0x505B82: push    eax; UInt16
0x505B83: mov     eax, [esp+0Ch+arg_C]
0x505B87: push    ecx; l
0x505B88: mov     ecx, [esp+10h+a3]
0x505B8C: push    edx; a6
0x505B8D: mov     edx, [esp+14h+arg_4]
0x505B91: push    eax; a5
0x505B92: mov     eax, [esp+18h+a1]
0x505B96: push    esi; a4
0x505B97: push    ecx; a3
0x505B98: push    edx; a2
0x505B99: push    eax; a1
0x505B9A: mov     dword ptr [esp+28h+var_4], 0
0x505BA2: call    Script_ExtractArgs
0x505BA7: add     esp, 20h
0x505BAA: test    al, al
0x505BAC: jnz     short loc_505BB1
0x505BAE: pop     esi
0x505BAF: pop     ecx
0x505BB0: retn
0x505BB1: test    esi, esi
0x505BB3: jz      short loc_505BF5
0x505BB5: push    0; int
0x505BB7: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x505BBC: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x505BC1: push    0; int
0x505BC3: push    esi; void *
0x505BC4: call    OblivionDynamicCast
0x505BC9: mov     esi, eax
0x505BCB: add     esp, 14h
0x505BCE: test    esi, esi
0x505BD0: jz      short loc_505BF5
0x505BD2: cmp     dword ptr [esp+8+var_4], 0
0x505BD7: mov     ecx, esi
0x505BD9: jz      short loc_505BEE
0x505BDB: push    1
0x505BDD: call    sub_5E8E60
0x505BE2: mov     ecx, esi
0x505BE4: call    sub_5E02B0
0x505BE9: mov     al, 1
0x505BEB: pop     esi
0x505BEC: pop     ecx
0x505BED: retn
0x505BEE: push    0
0x505BF0: call    sub_5E8E60
0x505BF5: mov     al, 1
0x505BF7: pop     esi
0x505BF8: pop     ecx
0x505BF9: retn
