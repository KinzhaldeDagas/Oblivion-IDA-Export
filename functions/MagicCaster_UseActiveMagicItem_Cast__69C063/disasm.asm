0x69C063: mov     eax, [edx+30h]
0x69C066: mov     dword ptr [esi+8], 3
0x69C06D: call    eax
0x69C06F: fld     [esp+arg_10]
0x69C073: mov     ecx, [esp+arg_2C]
0x69C077: push    0
0x69C079: push    ecx
0x69C07A: push    ecx
0x69C07B: mov     ecx, esi
0x69C07D: fstp    [esp+0Ch+var_C]
0x69C080: mov     edi, eax
0x69C082: call    MagicCaster_ApplyActiveMagicItem
0x69C087: mov     edx, [esi]
0x69C089: mov     eax, [edx+18h]
0x69C08C: push    1
0x69C08E: push    edi
0x69C08F: mov     ecx, esi
0x69C091: call    eax
0x69C093: mov     ecx, [esi+4]
0x69C096: test    ecx, ecx
0x69C098: jz      short MagicCaster_UseActiveMagicItem___Done
0x69C09A: fld     dword ptr ds:0A41328h
0x69C0A0: push    ecx
0x69C0A1: fstp    [esp+4+var_4]; float
0x69C0A4: push    0; char
0x69C0A6: call    MagicCaster_CastingVFX_ClearSomething???
