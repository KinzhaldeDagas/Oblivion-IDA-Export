0x61C680: mov     eax, [esp+arg_0]
0x61C684: push    esi
0x61C685: mov     esi, ecx
0x61C687: cmp     dword ptr [esi+70h], 0Ah
0x61C68B: mov     [esi+0ACh], eax
0x61C691: jz      short loc_61C6C3
0x61C693: cmp     byte ptr ds:0B3B908h, 0
0x61C69A: jz      short loc_61C6B7
0x61C69C: mov     ecx, [esi+3Ch]; this
0x61C69F: push    offset aSwitchWeapons; "Switch weapons"
0x61C6A4: call    TESObjectREFR_GetName
0x61C6A9: push    eax
0x61C6AA: push    offset a_20sIsGoingToS; "%.20s is going to %s!"
0x61C6AF: call    Interface_ConsolePrint
0x61C6B4: add     esp, 0Ch
0x61C6B7: fld     dword ptr ds:0A30634h
0x61C6BD: fstp    dword ptr [esi+188h]
0x61C6C3: mov     ecx, esi
0x61C6C5: mov     dword ptr [esi+70h], 0Ah
0x61C6CC: call    sub_619420
0x61C6D1: mov     byte ptr [esi+114h], 1
0x61C6D8: pop     esi
0x61C6D9: retn    4
