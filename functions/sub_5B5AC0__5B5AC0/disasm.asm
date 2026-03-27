0x5B5AC0: sub     esp, 108h
0x5B5AC6: mov     eax, ds:0B30AACh
0x5B5ACB: xor     eax, esp
0x5B5ACD: mov     [esp+108h+var_4], eax
0x5B5AD4: mov     eax, ds:0A6CB58h
0x5B5AD9: mov     edx, ds:0A6CB60h
0x5B5ADF: mov     ecx, ds:0A6CB5Ch
0x5B5AE5: mov     [esp+108h+var_108], eax
0x5B5AE8: mov     eax, ds:0B14374h
0x5B5AED: mov     [esp+108h+var_100], edx
0x5B5AF1: mov     [esp+108h+var_104], ecx
0x5B5AF5: mov     edx, eax
0x5B5AF7: mov     cl, [eax]
0x5B5AF9: add     eax, 1
0x5B5AFC: test    cl, cl
0x5B5AFE: jnz     short loc_5B5AF7
0x5B5B00: push    esi
0x5B5B01: push    edi
0x5B5B02: lea     edi, [esp+110h+var_108]
0x5B5B06: sub     eax, edx
0x5B5B08: add     edi, 0FFFFFFFFh
0x5B5B0B: jmp     short loc_5B5B10
0x5B5B0D: align 10h
0x5B5B10: mov     cl, [edi+1]
0x5B5B13: add     edi, 1
0x5B5B16: test    cl, cl
0x5B5B18: jnz     short loc_5B5B10
0x5B5B1A: mov     ecx, eax
0x5B5B1C: shr     ecx, 2
0x5B5B1F: mov     esi, edx
0x5B5B21: rep movsd
0x5B5B23: mov     ecx, eax
0x5B5B25: mov     eax, ds:0B33398h
0x5B5B2A: and     ecx, 3
0x5B5B2D: rep movsb
0x5B5B2F: mov     byte ptr ds:0B3C0ECh, 1
0x5B5B36: mov     esi, [eax+24h]
0x5B5B39: test    esi, esi
0x5B5B3B: jz      short loc_5B5B58
0x5B5B3D: push    0
0x5B5B3F: lea     ecx, [esp+114h+var_108]
0x5B5B43: push    ecx
0x5B5B44: push    8
0x5B5B46: mov     ecx, esi
0x5B5B48: call    SoundManager_OpenMusicFile
0x5B5B4D: test    al, al
0x5B5B4F: jz      short loc_5B5B58
0x5B5B51: mov     ecx, esi
0x5B5B53: call    SoundManager_PlayMusic
0x5B5B58: mov     ecx, [esp+110h+var_4]
0x5B5B5F: pop     edi
0x5B5B60: pop     esi
0x5B5B61: xor     ecx, esp
0x5B5B63: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5B5B68: add     esp, 108h
0x5B5B6E: retn
