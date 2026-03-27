0x5E0A24: lea     ecx, [esi+68h]
0x5E0A27: push    edi
0x5E0A28: mov     [esp+4+arg_10], ecx
0x5E0A2C: call    MagicTarget_HasMagicItem
0x5E0A31: test    al, al
0x5E0A33: jnz     short Actor_AddMagicItemForm___Done
0x5E0A35: mov     eax, [esi+5Ch]
0x5E0A38: mov     edx, [eax]
0x5E0A3A: add     esi, 5Ch ; '\'
0x5E0A3D: push    0
0x5E0A3F: push    ebp
0x5E0A40: mov     ecx, esi
0x5E0A42: mov     bl, 1
0x5E0A44: call    edx
0x5E0A46: mov     ecx, [esp+0Ch+arg_4]
0x5E0A4A: mov     eax, [esi]
0x5E0A4C: mov     edx, [eax+4]
0x5E0A4F: push    0
0x5E0A51: push    ecx
0x5E0A52: push    ebp
0x5E0A53: mov     ecx, esi
0x5E0A55: call    edx
