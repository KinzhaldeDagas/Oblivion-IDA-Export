0x6F82F0: sub     esp, 8
0x6F82F3: mov     eax, [esp+8+arg_C]
0x6F82F7: push    esi
0x6F82F8: mov     esi, ecx
0x6F82FA: cmp     dword ptr [esi+4Ch], 0
0x6F82FE: mov     ecx, [esp+0Ch+arg_10]
0x6F8302: mov     dword ptr [esp+0Ch+Pos], eax
0x6F8306: mov     dword ptr [esp+0Ch+Pos+4], ecx
0x6F830A: jz      loc_6F83B3
0x6F8310: mov     ecx, esi
0x6F8312: call    sub_6F7AB0
0x6F8317: test    al, al
0x6F8319: jz      loc_6F83B3
0x6F831F: mov     eax, [esi+4Ch]
0x6F8322: lea     edx, [esp+0Ch+Pos]
0x6F8326: push    edx; Pos
0x6F8327: push    eax; File
0x6F8328: call    _fsetpos
0x6F832D: add     esp, 8
0x6F8330: test    eax, eax
0x6F8332: jnz     short loc_6F83B3
0x6F8334: mov     eax, [esp+0Ch+Offset]
0x6F8338: test    eax, eax
0x6F833A: jz      short loc_6F834F
0x6F833C: mov     ecx, [esi+4Ch]
0x6F833F: push    1; Origin
0x6F8341: push    eax; Offset
0x6F8342: push    ecx; File
0x6F8343: call    _fseek
0x6F8348: add     esp, 0Ch
0x6F834B: test    eax, eax
0x6F834D: jnz     short loc_6F83B3
0x6F834F: mov     eax, [esi+4Ch]
0x6F8352: lea     edx, [esp+0Ch+Pos]
0x6F8356: push    edx; Pos
0x6F8357: push    eax; File
0x6F8358: call    _fgetpos
0x6F835D: add     esp, 8
0x6F8360: test    eax, eax
0x6F8362: jnz     short loc_6F83B3
0x6F8364: mov     ecx, [esp+0Ch+arg_14]
0x6F8368: mov     edx, [esi+20h]
0x6F836B: mov     [esi+44h], ecx
0x6F836E: lea     ecx, [esi+40h]
0x6F8371: cmp     [edx], ecx
0x6F8373: jnz     short loc_6F838E
0x6F8375: mov     edx, [esi+10h]
0x6F8378: mov     [edx], ecx
0x6F837A: mov     ecx, [esi+20h]
0x6F837D: lea     eax, [esi+41h]
0x6F8380: mov     edx, esi
0x6F8382: sub     edx, eax
0x6F8384: mov     [ecx], eax
0x6F8386: mov     eax, [esi+30h]
0x6F8389: add     edx, 41h ; 'A'
0x6F838C: mov     [eax], edx
0x6F838E: mov     eax, [esp+0Ch+arg_0]
0x6F8392: mov     ecx, dword ptr [esp+0Ch+Pos]
0x6F8396: mov     edx, dword ptr [esp+0Ch+Pos+4]
0x6F839A: mov     [eax+8], ecx
0x6F839D: mov     ecx, [esi+44h]
0x6F83A0: mov     dword ptr [eax], 0
0x6F83A6: mov     [eax+0Ch], edx
0x6F83A9: mov     [eax+10h], ecx
0x6F83AC: pop     esi
0x6F83AD: add     esp, 8
0x6F83B0: retn    20h ; ' '
0x6F83B3: mov     eax, [esp+0Ch+arg_0]
0x6F83B7: mov     edx, ds:0AA3E5Ch
0x6F83BD: mov     [eax], edx
0x6F83BF: mov     dword ptr [eax+8], 0
0x6F83C6: mov     dword ptr [eax+0Ch], 0
0x6F83CD: mov     dword ptr [eax+10h], 0
0x6F83D4: pop     esi
0x6F83D5: add     esp, 8
0x6F83D8: retn    20h ; ' '
