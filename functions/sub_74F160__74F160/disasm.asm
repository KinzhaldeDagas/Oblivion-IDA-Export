0x74F160: push    esi
0x74F161: push    edi
0x74F162: mov     edi, [esp+8+arg_0]
0x74F166: push    edi
0x74F167: mov     esi, ecx
0x74F169: call    sub_752CD0
0x74F16E: test    al, al
0x74F170: jz      loc_74F22F
0x74F176: fld     dword ptr [edi+18h]
0x74F179: fld     dword ptr [esi+18h]
0x74F17C: fucompp
0x74F17E: fnstsw  ax
0x74F180: test    ah, 44h
0x74F183: jp      loc_74F22F
0x74F189: fld     dword ptr [edi+1Ch]
0x74F18C: fld     dword ptr [esi+1Ch]
0x74F18F: fucompp
0x74F191: fnstsw  ax
0x74F193: test    ah, 44h
0x74F196: jp      loc_74F22F
0x74F19C: fld     dword ptr [edi+20h]
0x74F19F: fld     dword ptr [esi+20h]
0x74F1A2: fucompp
0x74F1A4: fnstsw  ax
0x74F1A6: test    ah, 44h
0x74F1A9: jp      loc_74F22F
0x74F1AF: fld     dword ptr [edi+24h]
0x74F1B2: fld     dword ptr [esi+24h]
0x74F1B5: fucompp
0x74F1B7: fnstsw  ax
0x74F1B9: test    ah, 44h
0x74F1BC: jp      short loc_74F22F
0x74F1BE: fld     dword ptr [edi+28h]
0x74F1C1: fld     dword ptr [esi+28h]
0x74F1C4: fucompp
0x74F1C6: fnstsw  ax
0x74F1C8: test    ah, 44h
0x74F1CB: jp      short loc_74F22F
0x74F1CD: fld     dword ptr [edi+2Ch]
0x74F1D0: fld     dword ptr [esi+2Ch]
0x74F1D3: fucompp
0x74F1D5: fnstsw  ax
0x74F1D7: test    ah, 44h
0x74F1DA: jp      short loc_74F22F
0x74F1DC: lea     eax, [esi+30h]
0x74F1DF: push    eax
0x74F1E0: lea     ecx, [edi+30h]
0x74F1E3: call    sub_632310
0x74F1E8: test    al, al
0x74F1EA: jnz     short loc_74F22F
0x74F1EC: fld     dword ptr [edi+40h]
0x74F1EF: fld     dword ptr [esi+40h]
0x74F1F2: fucompp
0x74F1F4: fnstsw  ax
0x74F1F6: test    ah, 44h
0x74F1F9: jp      short loc_74F22F
0x74F1FB: fld     dword ptr [edi+44h]
0x74F1FE: fld     dword ptr [esi+44h]
0x74F201: fucompp
0x74F203: fnstsw  ax
0x74F205: test    ah, 44h
0x74F208: jp      short loc_74F22F
0x74F20A: fld     dword ptr [edi+48h]
0x74F20D: fld     dword ptr [esi+48h]
0x74F210: fucompp
0x74F212: fnstsw  ax
0x74F214: test    ah, 44h
0x74F217: jp      short loc_74F22F
0x74F219: fld     dword ptr [edi+4Ch]
0x74F21C: fld     dword ptr [esi+4Ch]
0x74F21F: fucompp
0x74F221: fnstsw  ax
0x74F223: test    ah, 44h
0x74F226: jp      short loc_74F22F
0x74F228: pop     edi
0x74F229: mov     al, 1
0x74F22B: pop     esi
0x74F22C: retn    4
0x74F22F: pop     edi
0x74F230: xor     al, al
0x74F232: pop     esi
0x74F233: retn    4
