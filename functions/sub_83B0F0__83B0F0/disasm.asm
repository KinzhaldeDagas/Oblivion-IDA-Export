0x83B0F0: push    0FFFFFFFFh
0x83B0F2: push    offset SEH_882120
0x83B0F7: mov     eax, large fs:0
0x83B0FD: push    eax
0x83B0FE: push    ebx
0x83B0FF: push    ebp
0x83B100: push    esi
0x83B101: push    edi
0x83B102: mov     eax, ds:0B30AACh
0x83B107: xor     eax, esp
0x83B109: push    eax
0x83B10A: lea     eax, [esp+20h+var_C]
0x83B10E: mov     large fs:0, eax
0x83B114: mov     esi, ecx
0x83B116: mov     ebx, [esp+20h+arg_8]
0x83B11A: mov     eax, [ebx+10h]
0x83B11D: mov     edi, ds:0B45780h
0x83B123: push    eax
0x83B124: call    sub_848DA0
0x83B129: mov     ebx, [ebx+0Ch]
0x83B12C: push    ebx
0x83B12D: mov     ecx, esi
0x83B12F: call    sub_848E50
0x83B134: mov     ecx, [esp+20h+arg_0]
0x83B138: mov     eax, [esi]
0x83B13A: mov     edx, [eax+0BCh]
0x83B140: push    0
0x83B142: push    ebx
0x83B143: push    ecx
0x83B144: mov     ecx, esi
0x83B146: call    edx
0x83B148: mov     eax, [edi+24h]
0x83B14B: mov     ebx, [esp+20h+arg_C]
0x83B14F: mov     ebp, [eax]
0x83B151: mov     edx, [ebx]
0x83B153: mov     eax, [edx+88h]
0x83B159: push    0
0x83B15B: mov     ecx, ebx
0x83B15D: mov     [esp+24h+arg_8], ebp
0x83B161: call    eax
0x83B163: mov     ebp, [ebp+4]
0x83B166: cmp     ebp, eax
0x83B168: mov     [esp+20h+arg_0], eax
0x83B16C: jz      short loc_83B1A8
0x83B16E: test    ebp, ebp
0x83B170: jz      short loc_83B193
0x83B172: lea     ecx, [ebp+4]
0x83B175: push    ecx; lpAddend
0x83B176: call    dword ptr ds:0A2807Ch
0x83B17C: test    eax, eax
0x83B17E: jnz     short loc_83B18F
0x83B180: test    ebp, ebp
0x83B182: jz      short loc_83B18F
0x83B184: mov     edx, [ebp+0]
0x83B187: mov     eax, [edx]
0x83B189: push    1
0x83B18B: mov     ecx, ebp
0x83B18D: call    eax
0x83B18F: mov     eax, [esp+20h+arg_0]
0x83B193: test    eax, eax
0x83B195: mov     ecx, [esp+20h+arg_8]
0x83B199: mov     [ecx+4], eax
0x83B19C: jz      short loc_83B1A8
0x83B19E: add     eax, 4
0x83B1A1: push    eax; lpAddend
0x83B1A2: call    dword ptr ds:0A28078h
0x83B1A8: mov     edx, [esp+20h+arg_8]
0x83B1AC: push    ebx
0x83B1AD: push    edx
0x83B1AE: mov     ecx, esi
0x83B1B0: call    sub_848FA0
0x83B1B5: mov     eax, [edi+24h]
0x83B1B8: mov     ebp, [eax+4]
0x83B1BB: push    0
0x83B1BD: push    ebx
0x83B1BE: mov     ecx, esi
0x83B1C0: mov     [esp+28h+arg_8], ebp
0x83B1C4: call    sub_848FD0
0x83B1C9: mov     ebp, [ebp+4]
0x83B1CC: cmp     ebp, eax
0x83B1CE: mov     [esp+20h+arg_0], eax
0x83B1D2: jz      short loc_83B20E
0x83B1D4: test    ebp, ebp
0x83B1D6: jz      short loc_83B1F9
0x83B1D8: lea     ecx, [ebp+4]
0x83B1DB: push    ecx; lpAddend
0x83B1DC: call    dword ptr ds:0A2807Ch
0x83B1E2: test    eax, eax
0x83B1E4: jnz     short loc_83B1F5
0x83B1E6: test    ebp, ebp
0x83B1E8: jz      short loc_83B1F5
0x83B1EA: mov     edx, [ebp+0]
0x83B1ED: mov     eax, [edx]
0x83B1EF: push    1
0x83B1F1: mov     ecx, ebp
0x83B1F3: call    eax
0x83B1F5: mov     eax, [esp+20h+arg_0]
0x83B1F9: test    eax, eax
0x83B1FB: mov     ecx, [esp+20h+arg_8]
0x83B1FF: mov     [ecx+4], eax
0x83B202: jz      short loc_83B20E
0x83B204: add     eax, 4
0x83B207: push    eax; lpAddend
0x83B208: call    dword ptr ds:0A28078h
0x83B20E: mov     edx, [esp+20h+arg_8]
0x83B212: push    ebx
0x83B213: push    edx
0x83B214: mov     ecx, esi
0x83B216: call    sub_848FA0
0x83B21B: mov     eax, [edi+24h]
0x83B21E: mov     ebp, [eax+10h]
0x83B221: mov     edx, [ebx]
0x83B223: mov     eax, [edx+90h]
0x83B229: push    0
0x83B22B: mov     ecx, ebx
0x83B22D: mov     [esp+24h+arg_8], ebp
0x83B231: call    eax
0x83B233: mov     ebp, [ebp+4]
0x83B236: cmp     ebp, eax
0x83B238: mov     [esp+20h+arg_0], eax
0x83B23C: jz      short loc_83B278
0x83B23E: test    ebp, ebp
0x83B240: jz      short loc_83B263
0x83B242: lea     ecx, [ebp+4]
0x83B245: push    ecx; lpAddend
0x83B246: call    dword ptr ds:0A2807Ch
0x83B24C: test    eax, eax
0x83B24E: jnz     short loc_83B25F
0x83B250: test    ebp, ebp
0x83B252: jz      short loc_83B25F
0x83B254: mov     edx, [ebp+0]
0x83B257: mov     eax, [edx]
0x83B259: push    1
0x83B25B: mov     ecx, ebp
0x83B25D: call    eax
0x83B25F: mov     eax, [esp+20h+arg_0]
0x83B263: test    eax, eax
0x83B265: mov     ecx, [esp+20h+arg_8]
0x83B269: mov     [ecx+4], eax
0x83B26C: jz      short loc_83B278
0x83B26E: add     eax, 4
0x83B271: push    eax; lpAddend
0x83B272: call    dword ptr ds:0A28078h
0x83B278: mov     edx, [esp+20h+arg_8]
0x83B27C: push    ebx
0x83B27D: push    edx
0x83B27E: mov     ecx, esi
0x83B280: call    sub_848FA0
0x83B285: mov     ebx, 1
0x83B28A: add     [edi+60h], ebx
0x83B28D: mov     [esp+20h+arg_8], edi
0x83B291: mov     ecx, [esi+38h]
0x83B294: lea     eax, [esp+20h+arg_8]
0x83B298: push    eax
0x83B299: push    ecx
0x83B29A: lea     ecx, [esi+40h]
0x83B29D: mov     [esp+28h+var_4], 0
0x83B2A5: call    sub_76CE40
0x83B2AA: or      eax, 0FFFFFFFFh
0x83B2AD: add     [edi+60h], eax
0x83B2B0: mov     [esp+20h+var_4], eax
0x83B2B4: jnz     short loc_83B2BD
0x83B2B6: mov     ecx, edi
0x83B2B8: call    sub_7604D0
0x83B2BD: add     [esi+38h], ebx
0x83B2C0: mov     ecx, [esp+20h+var_C]
0x83B2C4: mov     large fs:0, ecx
0x83B2CB: pop     ecx
0x83B2CC: pop     edi
0x83B2CD: pop     esi
0x83B2CE: pop     ebp
0x83B2CF: pop     ebx
0x83B2D0: add     esp, 0Ch
0x83B2D3: retn    10h
