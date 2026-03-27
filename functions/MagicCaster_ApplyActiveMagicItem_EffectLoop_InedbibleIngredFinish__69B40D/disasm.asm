0x69B40D: fld1
0x69B40F: sub     esp, 8
0x69B412: fstp    [esp+8+var_4]; float
0x69B416: fld     [esp+8+arg_20]
0x69B41A: fstp    [esp+8+var_8]; float
0x69B41D: call    Round_Float
0x69B422: fstp    [esp+8+arg_20]
0x69B426: fld1
0x69B428: fstp    [esp+8+var_4]; float
0x69B42C: fld     [esp+8+arg_24]
0x69B430: fstp    [esp+8+var_8]; float
0x69B433: call    Round_Float
0x69B438: fstp    [esp+8+arg_24]
0x69B43C: fld     [esp+8+arg_20]
0x69B440: add     esp, 8
0x69B443: fstp    dword ptr [edi+1Ch]
0x69B446: fld     [esp+arg_24]
0x69B44A: fstp    dword ptr [edi+18h]
0x69B44D: jmp     short MagicCaster_ApplyActiveMagicItem___EffectLoop_CheckRange
