0x8DA280: push    ebx
0x8DA281: push    esi
0x8DA282: mov     esi, ecx
0x8DA284: mov     eax, 1
0x8DA289: xor     ebx, ebx
0x8DA28B: mov     [esi+18Ch], eax
0x8DA291: mov     [esi+0E90h], eax
0x8DA297: xor     ecx, ecx
0x8DA299: lea     edx, [esi+0E94h]
0x8DA29F: push    edi
0x8DA2A0: xor     eax, eax
0x8DA2A2: mov     edi, [esi+1C10h]
0x8DA2A8: cmp     edi, ebx
0x8DA2AA: jz      short loc_8DA2D2
0x8DA2AC: mov     byte ptr [ecx+edi+2], 64h ; 'd'
0x8DA2B1: mov     edi, [esi+1C14h]
0x8DA2B7: mov     byte ptr [edi+ecx+2], 64h ; 'd'
0x8DA2BC: mov     edi, [esi+1C18h]
0x8DA2C2: mov     byte ptr [edi+ecx+2], 64h ; 'd'
0x8DA2C7: mov     edi, [esi+1C1Ch]
0x8DA2CD: mov     byte ptr [edi+ecx+2], 64h ; 'd'
0x8DA2D2: mov     [edx+eax-0D04h], bl
0x8DA2D9: mov     [edx+eax], bl
0x8DA2DC: mov     [edx+eax-904h], bl
0x8DA2E3: mov     [edx+eax+400h], bl
0x8DA2EA: inc     eax
0x8DA2EB: add     ecx, 3
0x8DA2EE: cmp     eax, 20h ; ' '
0x8DA2F1: jl      short loc_8DA2A2
0x8DA2F3: add     edx, 20h ; ' '
0x8DA2F6: cmp     ecx, 0C00h
0x8DA2FC: jl      short loc_8DA2A0
0x8DA2FE: mov     dword ptr [esi+990h], offset sub_8E0970
0x8DA308: mov     dword ptr [esi+994h], offset nullsub_5
0x8DA312: mov     dword ptr [esi+998h], offset nullsub_5
0x8DA31C: mov     dword ptr [esi+99Ch], offset nullsub_5
0x8DA326: mov     [esi+9A0h], bl
0x8DA32C: mov     byte ptr [esi+9A1h], 1
0x8DA333: push    esi
0x8DA334: mov     dword ptr [esi+1694h], offset sub_8DA260
0x8DA33E: mov     dword ptr [esi+1698h], offset nullsub_5
0x8DA348: mov     [esi+169Ch], ebx
0x8DA34E: mov     [esi+16A0h], ebx
0x8DA354: mov     [esi+16A4h], ebx
0x8DA35A: mov     [esi+16A8h], ebx
0x8DA360: mov     [esi+16ACh], ebx
0x8DA366: mov     [esi+16B8h], ebx
0x8DA36C: mov     [esi+16B0h], ebx
0x8DA372: mov     [esi+16B4h], ebx
0x8DA378: mov     dword ptr [esi+16BCh], offset sub_8DA270
0x8DA382: mov     [esi+16C4h], ebx
0x8DA388: call    sub_925690
0x8DA38D: mov     [esi+1BF4h], bl
0x8DA393: mov     eax, [esi+1C18h]
0x8DA399: add     esp, 4
0x8DA39C: cmp     eax, ebx
0x8DA39E: pop     edi
0x8DA39F: jz      short loc_8DA3D8
0x8DA3A1: xor     eax, eax
0x8DA3A3: jmp     short loc_8DA3B0
0x8DA3A5: align 10h
0x8DA3B0: mov     ecx, 20h ; ' '
0x8DA3B5: mov     edx, [esi+1C18h]
0x8DA3BB: mov     byte ptr [eax+edx+2], 64h ; 'd'
0x8DA3C0: mov     edx, [esi+1C1Ch]
0x8DA3C6: mov     byte ptr [eax+edx+2], 64h ; 'd'
0x8DA3CB: add     eax, 3
0x8DA3CE: dec     ecx
0x8DA3CF: jnz     short loc_8DA3B5
0x8DA3D1: cmp     eax, 0C00h
0x8DA3D6: jl      short loc_8DA3B0
0x8DA3D8: pop     esi
0x8DA3D9: pop     ebx
0x8DA3DA: retn
