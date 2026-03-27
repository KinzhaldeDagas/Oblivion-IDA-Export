0x68E4B8: mov     ecx, ds:0B33B00h
0x68E4BE: push    1; Size
0x68E4C0: lea     eax, [esp+4+Dst+3]
0x68E4C4: push    eax; Dst
0x68E4C5: call    SaveLoad_LoadData
0x68E4CA: movzx   ecx, byte ptr [esp+Dst+3]
0x68E4CF: mov     eax, ecx
0x68E4D1: xor     edi, edi
0x68E4D3: sub     eax, 5
0x68E4D6: jz      short ActiveEffect_Base_LoadEffect___MagicModelHitEffect
0x68E4D8: sub     eax, 1
0x68E4DB: jz      short ActiveEffect_Base_LoadEffect___MagicShaderHitEffect
0x68E4DD: push    ecx; ArgList
0x68E4DE: push    offset aUnknownMagicHi; "Unknown magic hit effect type: %i"
0x68E4E3: call    PrintError
0x68E4E8: add     esp, 8
0x68E4EB: jmp     short ActiveEffect_Base_LoadEffect___LoadHitEffect
