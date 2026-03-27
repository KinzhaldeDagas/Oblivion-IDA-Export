0x69B2A3: mov     ecx, [esp+arg_78]
0x69B2A7: mov     edi, [esi]
0x69B2A9: mov     edx, [edi+30h]
0x69B2AC: push    ecx
0x69B2AD: push    ebp
0x69B2AE: mov     ecx, esi
0x69B2B0: call    edx
0x69B2B2: push    eax
0x69B2B3: mov     eax, [edi+40h]
0x69B2B6: mov     ecx, esi
0x69B2B8: call    eax
0x69B2BA: cmp     [esp+arg_7C], 0
0x69B2C2: mov     edi, eax
0x69B2C4: mov     eax, [edi+0Ch]
0x69B2C7: mov     eax, [eax+1Ch]
0x69B2CA: fld     dword ptr [eax+5Ch]
0x69B2CD: fstp    [esp+arg_2C]
0x69B2D1: jz      short MagicCaster_ApplyActiveMagicItem___EffectLoop_CheckIngredient
0x69B2D3: or      dword ptr [edi+14h], 14h
