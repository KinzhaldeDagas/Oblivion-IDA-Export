0x947FA0: push    ebp
0x947FA1: mov     ebp, esp
0x947FA3: and     esp, 0FFFFFFF0h
0x947FA6: sub     esp, 34h
0x947FA9: push    ebx
0x947FAA: push    esi
0x947FAB: push    edi
0x947FAC: mov     edi, [ebp+arg_4]
0x947FAF: mov     [esp+40h+var_20], ecx
0x947FB3: push    1
0x947FB5: push    1
0x947FB7: lea     eax, [esp+48h+var_24]
0x947FBB: push    eax
0x947FBC: mov     ecx, edi
0x947FBE: call    sub_947910
0x947FC3: mov     ebx, [esp+40h+var_24]
0x947FC7: cmp     bl, 0F0h ; 'ð'
0x947FCA: jz      loc_94806A
0x947FD0: lea     ecx, [esp+40h+var_1C]
0x947FD4: push    ecx
0x947FD5: mov     ecx, [esp+44h+var_20]
0x947FD9: movzx   esi, bl
0x947FDC: push    esi
0x947FDD: add     ecx, 8
0x947FE0: call    sub_8B0F40
0x947FE5: test    eax, eax
0x947FE7: jnz     short loc_947FF9
0x947FE9: mov     ecx, [esp+40h+var_1C]
0x947FED: test    ecx, ecx
0x947FEF: jz      short loc_947FF9
0x947FF1: mov     edx, [ecx]
0x947FF3: push    ebx
0x947FF4: call    dword ptr [edx+0Ch]
0x947FF7: jmp     short loc_94806A
0x947FF9: cmp     bl, 0B0h ; '°'
0x947FFC: jnz     short loc_94801C
0x947FFE: lea     eax, [esp+40h+var_10]
0x948002: push    eax
0x948003: mov     ecx, edi
0x948005: call    sub_948C80
0x94800A: push    1
0x94800C: push    8
0x94800E: lea     ecx, [esp+48h+var_18]
0x948012: push    ecx
0x948013: mov     ecx, edi
0x948015: call    sub_947910
0x94801A: jmp     short loc_94802D
0x94801C: cmp     bl, 0B1h ; '±'
0x94801F: jnz     short loc_94802D
0x948021: lea     edx, [esp+40h+var_10]
0x948025: push    edx
0x948026: mov     ecx, edi
0x948028: call    sub_948C80
0x94802D: mov     ecx, ds:0BA7FC0h
0x948033: push    esi; Args
0x948034: lea     eax, [esp+44h+var_28]
0x948038: inc     ecx
0x948039: push    offset aVdbFoundAComma; "VDB: Found a command (%x) with no handl"...
0x94803E: push    eax; int
0x94803F: mov     ds:0BA7FC0h, ecx
0x948045: mov     [esp+4Ch+var_28], offset unk_BA7FC4
0x94804D: call    sub_8B1990
0x948052: mov     ecx, [esp+4Ch+var_28]
0x948056: mov     eax, [ecx-4]
0x948059: add     ecx, 0FFFFFFF4h
0x94805C: add     esp, 0Ch
0x94805F: dec     eax
0x948060: mov     [ecx+8], eax
0x948063: jns     short loc_94806A
0x948065: call    sub_8B1930
0x94806A: lea     ecx, [esp+40h+var_29]
0x94806E: push    ecx
0x94806F: mov     ecx, edi
0x948071: call    sub_918060
0x948076: cmp     byte ptr [eax], 0
0x948079: jz      short loc_948084
0x94807B: cmp     bl, 0F0h ; 'ð'
0x94807E: jnz     loc_947FB3
0x948084: mov     eax, [ebp+arg_0]
0x948087: pop     edi
0x948088: pop     esi
0x948089: mov     byte ptr [eax], 1
0x94808C: pop     ebx
0x94808D: mov     esp, ebp
0x94808F: pop     ebp
0x948090: retn    8
