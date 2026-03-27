0x53C5E0: mov     ecx, [esp+arg_0]
0x53C5E4: mov     eax, [ecx+0Ch]
0x53C5E7: test    eax, eax
0x53C5E9: jz      short loc_53C628
0x53C5EB: test    byte ptr [eax+55h], 3Fh
0x53C5EF: jz      short loc_53C628
0x53C5F1: push    esi
0x53C5F2: movzx   esi, byte ptr [eax+55h]
0x53C5F6: mov     ecx, offset TimeGlobals
0x53C5FB: and     esi, 0FFFFFF3Fh
0x53C601: call    TimeGlobals_GetGameDaysPassed
0x53C606: xor     edx, edx
0x53C608: lea     ecx, ds:0[esi*8]
0x53C60F: div     ecx
0x53C611: mov     eax, edx
0x53C613: xor     edx, edx
0x53C615: div     esi
0x53C617: pop     esi
0x53C618: cmp     eax, ds:0B365BCh
0x53C61E: jz      short loc_53C628
0x53C620: mov     ds:0B365BCh, eax
0x53C625: mov     al, 1
0x53C627: retn
0x53C628: xor     al, al
0x53C62A: retn
