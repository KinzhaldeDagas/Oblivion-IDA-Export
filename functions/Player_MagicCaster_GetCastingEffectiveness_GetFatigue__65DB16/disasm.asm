0x65DB16: fld     [esp+arg_10]
0x65DB1A: push    edi
0x65DB1B: fcom    st(1)
0x65DB1D: fnstsw  ax
0x65DB1F: fstp    st(1)
0x65DB21: test    ah, 41h
0x65DB24: jnz     short loc_65DB33
0x65DB26: call    Double_To_SInt32
0x65DB2B: mov     edi, eax
0x65DB2D: mov     [esp+4+arg_10], edi
0x65DB31: jmp     short Player_MagicCaster_GetCastingEffectiveness___FatigueFactor
0x65DB33: mov     edx, [esi-5Ch]
0x65DB36: fstp    st
0x65DB38: mov     eax, [edx+284h]
0x65DB3E: lea     ecx, [esi-5Ch]
0x65DB41: push    0Ah
0x65DB43: call    eax
0x65DB45: mov     edi, eax
0x65DB47: mov     [esp+8+arg_C], eax
