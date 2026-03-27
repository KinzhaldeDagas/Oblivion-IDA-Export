0x5AECA0: push    ebx
0x5AECA1: push    ebp
0x5AECA2: call    sub_578D70
0x5AECA7: push    40Eh
0x5AECAC: mov     bl, al
0x5AECAE: call    Menu_GetOpenMenuTile
0x5AECB3: add     esp, 4
0x5AECB6: mov     ecx, eax
0x5AECB8: call    Tile_GetParentMenu
0x5AECBD: mov     ebp, eax
0x5AECBF: test    ebp, ebp
0x5AECC1: jz      loc_5AEDE8
0x5AECC7: cmp     bl, 2
0x5AECCA: jnz     loc_5AEDE4
0x5AECD0: mov     eax, [ebp+48h]
0x5AECD3: push    esi
0x5AECD4: mov     esi, [eax+38h]
0x5AECD7: push    edi
0x5AECD8: xor     edi, edi
0x5AECDA: xor     ebx, ebx
0x5AECDC: test    esi, esi
0x5AECDE: jz      loc_5AEDAD
0x5AECE4: cmp     edi, [ebp+58h]
0x5AECE7: jz      short loc_5AED2E
0x5AECE9: test    edi, edi
0x5AECEB: jz      short loc_5AED21
0x5AECED: push    0FA1h
0x5AECF2: mov     ecx, edi
0x5AECF4: call    Tile_GetFloat
0x5AECF9: fcomp   dword ptr ds:0A2F948h
0x5AECFF: fnstsw  ax
0x5AED01: test    ah, 44h
0x5AED04: jnp     short loc_5AED21
0x5AED06: push    0FF0h
0x5AED0B: mov     ecx, edi
0x5AED0D: call    Tile_GetFloat
0x5AED12: fcomp   dword ptr ds:0A2FAA8h
0x5AED18: fnstsw  ax
0x5AED1A: test    ah, 41h
0x5AED1D: jnz     short loc_5AED21
0x5AED1F: mov     ebx, edi
0x5AED21: mov     edi, [esi+8]
0x5AED24: lea     eax, [esi+8]
0x5AED27: mov     esi, [esi+4]
0x5AED2A: test    esi, esi
0x5AED2C: jnz     short loc_5AECE4
0x5AED2E: test    edi, edi
0x5AED30: jz      short loc_5AEDAD
0x5AED32: test    esi, esi
0x5AED34: jz      short loc_5AED92
0x5AED36: mov     ebx, [esi+8]
0x5AED39: lea     eax, [esi+8]
0x5AED3C: mov     esi, [esi+4]
0x5AED3F: test    esi, esi
0x5AED41: jz      short loc_5AED75
0x5AED43: push    0FA1h
0x5AED48: mov     ecx, ebx
0x5AED4A: call    Tile_GetFloat
0x5AED4F: fcomp   dword ptr ds:0A2F948h
0x5AED55: fnstsw  ax
0x5AED57: test    ah, 44h
0x5AED5A: jnp     short loc_5AED36
0x5AED5C: push    0FF0h
0x5AED61: mov     ecx, edi
0x5AED63: call    Tile_GetFloat
0x5AED68: fcomp   dword ptr ds:0A2FAA8h
0x5AED6E: fnstsw  ax
0x5AED70: test    ah, 41h
0x5AED73: jnp     short loc_5AED36
0x5AED75: test    ebx, ebx
0x5AED77: jz      short loc_5AEDAD
0x5AED79: push    0FA1h
0x5AED7E: mov     ecx, ebx
0x5AED80: call    Tile_GetFloat
0x5AED85: fcomp   dword ptr ds:0A2F948h
0x5AED8B: fnstsw  ax
0x5AED8D: test    ah, 44h
0x5AED90: jnp     short loc_5AEDAD
0x5AED92: test    ebx, ebx
0x5AED94: jz      short loc_5AEDAD
0x5AED96: push    0FB1h
0x5AED9B: mov     ecx, ebx
0x5AED9D: call    sub_588C10
0x5AEDA2: push    0; a3
0x5AEDA4: push    eax; a2
0x5AEDA5: lea     ecx, [ebp+5Ch]; this
0x5AEDA8: call    BSStringT_Set
0x5AEDAD: mov     ecx, [ebp+4Ch]
0x5AEDB0: push    0
0x5AEDB2: push    ecx
0x5AEDB3: mov     ecx, ds:0B33B00h
0x5AEDB9: call    DeleteSavegame
0x5AEDBE: fld     dword ptr ds:0A30634h
0x5AEDC4: mov     edx, ds:0B387E0h
0x5AEDCA: push    ecx
0x5AEDCB: fstp    [esp+14h+duration]; duration
0x5AEDCE: push    1; unk2
0x5AEDD0: push    0; unk1
0x5AEDD2: push    edx; string
0x5AEDD3: call    GameUI_QueueMessage
0x5AEDD8: add     esp, 10h
0x5AEDDB: mov     ecx, ebp
0x5AEDDD: call    sub_5AE980
0x5AEDE2: pop     edi
0x5AEDE3: pop     esi
0x5AEDE4: mov     byte ptr [ebp+64h], 0
0x5AEDE8: pop     ebp
0x5AEDE9: pop     ebx
0x5AEDEA: retn
