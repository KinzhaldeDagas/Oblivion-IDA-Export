0x70D110: push    esi
0x70D111: push    edi
0x70D112: mov     edi, [esp+8+arg_0]
0x70D116: push    edi
0x70D117: mov     esi, ecx
0x70D119: call    sub_707B50
0x70D11E: test    al, al
0x70D120: jz      loc_70D25A
0x70D126: fld     dword ptr [esi+0ECh]
0x70D12C: fld     dword ptr [edi+0ECh]
0x70D132: fucompp
0x70D134: fnstsw  ax
0x70D136: test    ah, 44h
0x70D139: jp      loc_70D25A
0x70D13F: fld     dword ptr [esi+0F0h]
0x70D145: fld     dword ptr [edi+0F0h]
0x70D14B: fucompp
0x70D14D: fnstsw  ax
0x70D14F: test    ah, 44h
0x70D152: jp      loc_70D25A
0x70D158: fld     dword ptr [esi+0F4h]
0x70D15E: fld     dword ptr [edi+0F4h]
0x70D164: fucompp
0x70D166: fnstsw  ax
0x70D168: test    ah, 44h
0x70D16B: jp      loc_70D25A
0x70D171: fld     dword ptr [esi+0F8h]
0x70D177: fld     dword ptr [edi+0F8h]
0x70D17D: fucompp
0x70D17F: fnstsw  ax
0x70D181: test    ah, 44h
0x70D184: jp      loc_70D25A
0x70D18A: fld     dword ptr [esi+0FCh]
0x70D190: fld     dword ptr [edi+0FCh]
0x70D196: fucompp
0x70D198: fnstsw  ax
0x70D19A: test    ah, 44h
0x70D19D: jp      loc_70D25A
0x70D1A3: fld     dword ptr [esi+100h]
0x70D1A9: fld     dword ptr [edi+100h]
0x70D1AF: fucompp
0x70D1B1: fnstsw  ax
0x70D1B3: test    ah, 44h
0x70D1B6: jp      loc_70D25A
0x70D1BC: fld     dword ptr [esi+110h]
0x70D1C2: fld     dword ptr [edi+110h]
0x70D1C8: fucompp
0x70D1CA: fnstsw  ax
0x70D1CC: test    ah, 44h
0x70D1CF: jp      loc_70D25A
0x70D1D5: fld     dword ptr [esi+114h]
0x70D1DB: fld     dword ptr [edi+114h]
0x70D1E1: fucompp
0x70D1E3: fnstsw  ax
0x70D1E5: test    ah, 44h
0x70D1E8: jp      short loc_70D25A
0x70D1EA: fld     dword ptr [esi+118h]
0x70D1F0: fld     dword ptr [edi+118h]
0x70D1F6: fucompp
0x70D1F8: fnstsw  ax
0x70D1FA: test    ah, 44h
0x70D1FD: jp      short loc_70D25A
0x70D1FF: fld     dword ptr [esi+11Ch]
0x70D205: fld     dword ptr [edi+11Ch]
0x70D20B: fucompp
0x70D20D: fnstsw  ax
0x70D20F: test    ah, 44h
0x70D212: jp      short loc_70D25A
0x70D214: fld     dword ptr [esi+108h]
0x70D21A: fld     dword ptr [edi+108h]
0x70D220: fucompp
0x70D222: fnstsw  ax
0x70D224: test    ah, 44h
0x70D227: jp      short loc_70D25A
0x70D229: fld     dword ptr [esi+10Ch]
0x70D22F: fld     dword ptr [edi+10Ch]
0x70D235: fucompp
0x70D237: fnstsw  ax
0x70D239: test    ah, 44h
0x70D23C: jp      short loc_70D25A
0x70D23E: fld     dword ptr [esi+120h]
0x70D244: fld     dword ptr [edi+120h]
0x70D24A: fucompp
0x70D24C: fnstsw  ax
0x70D24E: test    ah, 44h
0x70D251: jp      short loc_70D25A
0x70D253: pop     edi
0x70D254: mov     al, 1
0x70D256: pop     esi
0x70D257: retn    4
0x70D25A: pop     edi
0x70D25B: xor     al, al
0x70D25D: pop     esi
0x70D25E: retn    4
