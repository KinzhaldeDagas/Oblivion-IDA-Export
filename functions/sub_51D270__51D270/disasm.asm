0x51D270: mov     eax, [esp+arg_0]
0x51D274: push    ebx
0x51D275: push    edi
0x51D276: push    0; int
0x51D278: push    offset ??_R0?AVTESCreature@@@8; struct TypeDescriptor *
0x51D27D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x51D282: push    0; int
0x51D284: push    eax; void *
0x51D285: mov     edi, ecx
0x51D287: call    OblivionDynamicCast
0x51D28C: mov     ebx, eax
0x51D28E: add     esp, 14h
0x51D291: test    ebx, ebx
0x51D293: jnz     short loc_51D29C
0x51D295: pop     edi
0x51D296: mov     al, 1
0x51D298: pop     ebx
0x51D299: retn    4
0x51D29C: push    ebx; a2
0x51D29D: mov     ecx, edi; this
0x51D29F: call    TESForm_CompareAllComponentsTo
0x51D2A4: test    al, al
0x51D2A6: jnz     short loc_51D295
0x51D2A8: push    ebp
0x51D2A9: mov     eax, 6
0x51D2AE: lea     ecx, [ebx+104h]
0x51D2B4: lea     edx, [edi+104h]
0x51D2BA: push    esi
0x51D2BB: jmp     short loc_51D2C0
0x51D2BD: align 10h
0x51D2C0: mov     esi, [edx]
0x51D2C2: cmp     esi, [ecx]
0x51D2C4: jnz     short loc_51D2D8
0x51D2C6: sub     eax, 4
0x51D2C9: add     ecx, 4
0x51D2CC: add     edx, 4
0x51D2CF: cmp     eax, 4
0x51D2D2: jnb     short loc_51D2C0
0x51D2D4: test    eax, eax
0x51D2D6: jz      short loc_51D335
0x51D2D8: movzx   esi, byte ptr [edx]
0x51D2DB: movzx   ebp, byte ptr [ecx]
0x51D2DE: sub     esi, ebp
0x51D2E0: jnz     short loc_51D327
0x51D2E2: sub     eax, 1
0x51D2E5: add     ecx, 1
0x51D2E8: add     edx, 1
0x51D2EB: test    eax, eax
0x51D2ED: jz      short loc_51D335
0x51D2EF: movzx   esi, byte ptr [edx]
0x51D2F2: movzx   ebp, byte ptr [ecx]
0x51D2F5: sub     esi, ebp
0x51D2F7: jnz     short loc_51D327
0x51D2F9: sub     eax, 1
0x51D2FC: add     ecx, 1
0x51D2FF: add     edx, 1
0x51D302: test    eax, eax
0x51D304: jz      short loc_51D335
0x51D306: movzx   esi, byte ptr [edx]
0x51D309: movzx   ebp, byte ptr [ecx]
0x51D30C: sub     esi, ebp
0x51D30E: jnz     short loc_51D327
0x51D310: sub     eax, 1
0x51D313: add     ecx, 1
0x51D316: add     edx, 1
0x51D319: test    eax, eax
0x51D31B: jz      short loc_51D335
0x51D31D: movzx   esi, byte ptr [edx]
0x51D320: movzx   ecx, byte ptr [ecx]
0x51D323: sub     esi, ecx
0x51D325: jz      short loc_51D335
0x51D327: test    esi, esi
0x51D329: mov     eax, 1
0x51D32E: jg      short loc_51D337
0x51D330: or      eax, 0FFFFFFFFh
0x51D333: jmp     short loc_51D337
0x51D335: xor     eax, eax
0x51D337: test    eax, eax
0x51D339: jnz     loc_51D44E
0x51D33F: mov     dl, [edi+10Ah]
0x51D345: cmp     dl, [ebx+10Ah]
0x51D34B: jnz     loc_51D44E
0x51D351: fld     dword ptr [edi+10Ch]
0x51D357: fld     dword ptr [ebx+10Ch]
0x51D35D: fucompp
0x51D35F: fnstsw  ax
0x51D361: test    ah, 44h
0x51D364: jp      loc_51D44E
0x51D36A: fld     dword ptr [edi+114h]
0x51D370: fld     dword ptr [ebx+114h]
0x51D376: fucompp
0x51D378: fnstsw  ax
0x51D37A: test    ah, 44h
0x51D37D: jp      loc_51D44E
0x51D383: fld     dword ptr [edi+110h]
0x51D389: fld     dword ptr [ebx+110h]
0x51D38F: fucompp
0x51D391: fnstsw  ax
0x51D393: test    ah, 44h
0x51D396: jp      loc_51D44E
0x51D39C: mov     eax, [edi+11Ch]
0x51D3A2: mov     eax, [eax+0Ch]
0x51D3A5: lea     ecx, [edi+11Ch]
0x51D3AB: lea     edx, [ebx+11Ch]
0x51D3B1: push    edx
0x51D3B2: call    eax
0x51D3B4: test    al, al
0x51D3B6: jnz     loc_51D44E
0x51D3BC: mov     edx, [edi+134h]
0x51D3C2: mov     edx, [edx+0Ch]
0x51D3C5: lea     ecx, [edi+134h]
0x51D3CB: lea     eax, [ebx+134h]
0x51D3D1: push    eax
0x51D3D2: call    edx
0x51D3D4: test    al, al
0x51D3D6: jnz     short loc_51D44E
0x51D3D8: mov     eax, [ebx]
0x51D3DA: mov     edx, [eax+120h]
0x51D3E0: mov     ecx, ebx
0x51D3E2: call    edx
0x51D3E4: mov     esi, eax
0x51D3E6: mov     eax, [edi]
0x51D3E8: mov     edx, [eax+120h]
0x51D3EE: mov     ecx, edi
0x51D3F0: call    edx
0x51D3F2: cmp     eax, esi
0x51D3F4: jnz     short loc_51D44E
0x51D3F6: mov     eax, [edi+28h]
0x51D3F9: shr     eax, 8
0x51D3FC: test    al, 1
0x51D3FE: jz      short loc_51D43A
0x51D400: mov     ecx, edi
0x51D402: call    sub_51CDC0
0x51D407: mov     ecx, ebx
0x51D409: mov     edx, eax
0x51D40B: call    sub_51CDC0
0x51D410: test    edx, edx
0x51D412: jz      short loc_51D42D
0x51D414: test    eax, eax
0x51D416: jz      short loc_51D44E
0x51D418: push    eax
0x51D419: mov     ecx, edx
0x51D41B: call    CreatureSoundArray_CompareTo
0x51D420: test    al, al
0x51D422: jz      short loc_51D457
0x51D424: pop     esi
0x51D425: pop     ebp
0x51D426: pop     edi
0x51D427: mov     al, 1
0x51D429: pop     ebx
0x51D42A: retn    4
0x51D42D: test    eax, eax
0x51D42F: jz      short loc_51D457
0x51D431: pop     esi
0x51D432: pop     ebp
0x51D433: pop     edi
0x51D434: mov     al, 1
0x51D436: pop     ebx
0x51D437: retn    4
0x51D43A: mov     ecx, ebx
0x51D43C: call    sub_51CD40
0x51D441: mov     ecx, edi
0x51D443: mov     edx, eax
0x51D445: call    sub_51CD40
0x51D44A: cmp     eax, edx
0x51D44C: jz      short loc_51D457
0x51D44E: pop     esi
0x51D44F: pop     ebp
0x51D450: pop     edi
0x51D451: mov     al, 1
0x51D453: pop     ebx
0x51D454: retn    4
0x51D457: pop     esi
0x51D458: pop     ebp
0x51D459: pop     edi
0x51D45A: xor     al, al
0x51D45C: pop     ebx
0x51D45D: retn    4
