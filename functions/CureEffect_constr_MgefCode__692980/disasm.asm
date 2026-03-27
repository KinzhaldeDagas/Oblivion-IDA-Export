0x692980: mov     eax, [esp+arg_8]
0x692984: mov     edx, [esp+arg_0]
0x692988: push    esi
0x692989: mov     esi, ecx
0x69298B: mov     ecx, [esp+4+arg_4]
0x69298F: push    eax
0x692990: push    ecx
0x692991: push    edx
0x692992: mov     ecx, esi; this
0x692994: call    ??0ActiveEffect@@QAE@XZ; ActiveEffect::ActiveEffect(void)
0x692999: mov     eax, [esp+4+arg_C]
0x69299D: mov     [esi+3Ch], eax
0x6929A0: mov     dword ptr [esi], offset ??_7CureEffect@@6B@; const CureEffect::`vftable'
0x6929A6: mov     dword ptr [esi+38h], 0
0x6929AD: mov     eax, esi
0x6929AF: pop     esi
0x6929B0: retn    10h
