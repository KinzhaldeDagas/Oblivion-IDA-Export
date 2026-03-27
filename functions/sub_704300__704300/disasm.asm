0x704300: push    esi
0x704301: push    edi
0x704302: mov     edi, [esp+8+arg_0]
0x704306: push    edi
0x704307: mov     esi, ecx
0x704309: call    sub_704290
0x70430E: test    al, al
0x704310: jz      short loc_704373
0x704312: fld     dword ptr [esi+10h]
0x704315: fld     dword ptr [edi+10h]
0x704318: fucompp
0x70431A: fnstsw  ax
0x70431C: test    ah, 44h
0x70431F: jp      short loc_704373
0x704321: fld     dword ptr [esi+14h]
0x704324: fld     dword ptr [edi+14h]
0x704327: fucompp
0x704329: fnstsw  ax
0x70432B: test    ah, 44h
0x70432E: jp      short loc_704373
0x704330: fld     dword ptr [esi+18h]
0x704333: fld     dword ptr [edi+18h]
0x704336: fucompp
0x704338: fnstsw  ax
0x70433A: test    ah, 44h
0x70433D: jp      short loc_704373
0x70433F: fld     dword ptr [esi+1Ch]
0x704342: fld     dword ptr [edi+1Ch]
0x704345: fucompp
0x704347: fnstsw  ax
0x704349: test    ah, 44h
0x70434C: jp      short loc_704373
0x70434E: fld     dword ptr [esi+20h]
0x704351: fld     dword ptr [edi+20h]
0x704354: fucompp
0x704356: fnstsw  ax
0x704358: test    ah, 44h
0x70435B: jp      short loc_704373
0x70435D: fld     dword ptr [esi+24h]
0x704360: fld     dword ptr [edi+24h]
0x704363: fucompp
0x704365: fnstsw  ax
0x704367: test    ah, 44h
0x70436A: jp      short loc_704373
0x70436C: pop     edi
0x70436D: mov     al, 1
0x70436F: pop     esi
0x704370: retn    4
0x704373: pop     edi
0x704374: xor     al, al
0x704376: pop     esi
0x704377: retn    4
