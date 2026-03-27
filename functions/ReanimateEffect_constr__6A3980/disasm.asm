0x6A3980: sub     esp, 0Ch
0x6A3983: mov     eax, [esp+0Ch+arg_8]
0x6A3987: mov     edx, [esp+0Ch+arg_0]
0x6A398B: push    esi
0x6A398C: mov     esi, ecx
0x6A398E: mov     ecx, [esp+10h+arg_4]
0x6A3992: push    eax
0x6A3993: push    ecx
0x6A3994: push    edx
0x6A3995: mov     ecx, esi; this
0x6A3997: call    ??0ActiveEffect@@QAE@XZ; ActiveEffect::ActiveEffect(void)
0x6A399C: fldz
0x6A399E: fst     dword ptr [esi+40h]
0x6A39A1: xor     eax, eax
0x6A39A3: mov     [esi+38h], eax
0x6A39A6: fst     [esp+10h+var_C]
0x6A39AA: mov     [esi+3Ch], eax
0x6A39AD: fst     [esp+10h+var_8]
0x6A39B1: mov     eax, [esp+10h+var_C]
0x6A39B5: fstp    [esp+10h+var_4]
0x6A39B9: mov     ecx, [esp+10h+var_8]
0x6A39BD: mov     edx, [esp+10h+var_4]
0x6A39C1: mov     [esi+44h], eax
0x6A39C4: mov     [esi+48h], ecx
0x6A39C7: mov     dword ptr [esi], offset ??_7ReanimateEffect@@6B@; const ReanimateEffect::`vftable'
0x6A39CD: mov     [esi+4Ch], edx
0x6A39D0: mov     eax, ds:0B27110h
0x6A39D5: mov     [esi+50h], eax
0x6A39D8: mov     ecx, ds:0B27114h
0x6A39DE: mov     [esi+54h], ecx
0x6A39E1: mov     edx, ds:0B27118h
0x6A39E7: mov     [esi+58h], edx
0x6A39EA: mov     eax, ds:0B2711Ch
0x6A39EF: mov     [esi+5Ch], eax
0x6A39F2: mov     eax, esi
0x6A39F4: pop     esi
0x6A39F5: add     esp, 0Ch
0x6A39F8: retn    0Ch
