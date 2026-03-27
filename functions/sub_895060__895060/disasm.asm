0x895060: push    ebx
0x895061: push    esi
0x895062: mov     esi, ecx
0x895064: test    esi, esi
0x895066: push    edi
0x895067: jz      short loc_895077
0x895069: mov     ecx, [esi+8]
0x89506C: test    ecx, ecx
0x89506E: jz      short loc_895077
0x895070: call    sub_8AC0C0
0x895075: jmp     short loc_895079
0x895077: xor     eax, eax
0x895079: mov     eax, [eax+8]
0x89507C: test    eax, eax
0x89507E: jz      short loc_895088
0x895080: mov     edi, [eax+2B0h]
0x895086: jmp     short loc_89508A
0x895088: xor     edi, edi
0x89508A: mov     ebx, [esp+0Ch+arg_0]
0x89508E: cmp     edi, ebx
0x895090: jz      loc_895187
0x895096: test    edi, edi
0x895098: jz      short loc_8950D5
0x89509A: mov     eax, [edi]
0x89509C: mov     edx, [eax+58h]
0x89509F: mov     ecx, edi
0x8950A1: call    edx
0x8950A3: mov     ecx, esi
0x8950A5: call    sub_8B9F60
0x8950AA: mov     ecx, [esi+364h]
0x8950B0: test    ecx, ecx
0x8950B2: jz      short loc_8950BB
0x8950B4: mov     eax, [ecx]
0x8950B6: mov     edx, [eax+60h]
0x8950B9: call    edx
0x8950BB: mov     ecx, [esi+368h]
0x8950C1: test    ecx, ecx
0x8950C3: jz      short loc_8950CC
0x8950C5: mov     eax, [ecx]
0x8950C7: mov     edx, [eax+60h]
0x8950CA: call    edx
0x8950CC: mov     eax, [edi]
0x8950CE: mov     edx, [eax+58h]
0x8950D1: mov     ecx, edi
0x8950D3: call    edx
0x8950D5: test    esi, esi
0x8950D7: jz      short loc_8950EC
0x8950D9: mov     ecx, [esi+8]
0x8950DC: test    ecx, ecx
0x8950DE: jz      short loc_8950EC
0x8950E0: call    sub_8ABDB0
0x8950E5: mov     dword ptr [eax+4], 0
0x8950EC: test    ebx, ebx
0x8950EE: jz      loc_895187
0x8950F4: cmp     dword ptr [esi+364h], 0
0x8950FB: jz      short loc_895175
0x8950FD: test    byte ptr [esi+1F4h], 1
0x895104: jnz     short loc_895142
0x895106: mov     eax, [esi+1F4h]
0x89510C: shr     eax, 14h
0x89510F: test    al, 1
0x895111: jnz     short loc_895142
0x895113: fld     dword ptr ds:0A968E0h
0x895119: push    ecx
0x89511A: mov     ecx, esi
0x89511C: fstp    [esp+10h+var_10]; float
0x89511F: call    sub_894BD0
0x895124: fld     dword ptr ds:0A968E0h
0x89512A: push    ecx
0x89512B: mov     ecx, esi
0x89512D: fstp    [esp+10h+var_10]; float
0x895130: call    sub_8912A0
0x895135: fldz
0x895137: push    ecx
0x895138: fstp    [esp+10h+var_10]; float
0x89513B: mov     ecx, esi
0x89513D: call    sub_894BD0
0x895142: mov     ecx, [esi+364h]
0x895148: mov     edx, [ecx]
0x89514A: mov     eax, [edx+5Ch]
0x89514D: push    ebx
0x89514E: call    eax
0x895150: mov     edi, [esi+364h]
0x895156: push    19h
0x895158: push    0
0x89515A: push    96h ; '–'
0x89515F: push    96h ; '–'
0x895164: call    sub_8AEB80
0x895169: add     esp, 10h
0x89516C: push    eax
0x89516D: push    edi
0x89516E: mov     ecx, ebx
0x895170: call    sub_88BB60
0x895175: mov     ecx, [esi+368h]
0x89517B: test    ecx, ecx
0x89517D: jz      short loc_895187
0x89517F: mov     edx, [ecx]
0x895181: mov     eax, [edx+5Ch]
0x895184: push    ebx
0x895185: call    eax
0x895187: pop     edi
0x895188: pop     esi
0x895189: pop     ebx
0x89518A: retn    4
