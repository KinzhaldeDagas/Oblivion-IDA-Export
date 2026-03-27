0x939B00: mov     ecx, [esp+arg_0]
0x939B04: mov     al, [ecx+2]
0x939B07: dec     al
0x939B09: mov     [ecx+2], al
0x939B0C: movzx   edx, al
0x939B0F: mov     eax, [esp+arg_4]
0x939B13: push    esi
0x939B14: mov     esi, [ecx+edx*8+4]
0x939B18: mov     [ecx+eax*8+4], esi
0x939B1C: mov     edx, [ecx+edx*8+8]
0x939B20: mov     [ecx+eax*8+8], edx
0x939B24: movzx   eax, byte ptr [ecx+2]
0x939B28: lea     eax, [ecx+eax*8]
0x939B2B: lea     edx, [eax+4]
0x939B2E: lea     esi, [eax+0Ch]
0x939B31: movzx   eax, byte ptr [ecx+1]
0x939B35: push    edi
0x939B36: movzx   edi, byte ptr [ecx]
0x939B39: lea     eax, [eax+edi-1]
0x939B3D: sar     eax, 1
0x939B3F: test    eax, eax
0x939B41: jl      short loc_939B51
0x939B43: inc     eax
0x939B44: mov     edi, [esi]
0x939B46: mov     [edx], edi
0x939B48: add     edx, 4
0x939B4B: add     esi, 4
0x939B4E: dec     eax
0x939B4F: jnz     short loc_939B44
0x939B51: pop     edi
0x939B52: pop     esi
0x939B53: jmp     sub_9399E0
