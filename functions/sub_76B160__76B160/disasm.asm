0x76B160: sub     esp, 4Ch
0x76B163: push    ebx
0x76B164: mov     ebx, ecx
0x76B166: cmp     byte ptr [ebx+6F0h], 0
0x76B16D: jnz     loc_76B305
0x76B173: push    esi
0x76B174: mov     esi, [esp+54h+arg_0]
0x76B178: test    esi, esi
0x76B17A: jz      loc_76B304
0x76B180: cmp     dword ptr [esi+10h], 0
0x76B184: jz      loc_76B304
0x76B18A: cmp     dword ptr [ebx+89Ch], 0
0x76B191: mov     eax, [ebx+0Ch]
0x76B194: mov     ecx, [ebx+10h]
0x76B197: push    ebp
0x76B198: lea     ebp, [ebx+89Ch]
0x76B19E: push    edi
0x76B19F: mov     [esp+5Ch+var_4C], eax
0x76B1A3: mov     [esp+5Ch+var_48], ecx
0x76B1A7: jnz     loc_76B25D
0x76B1AD: push    30h ; '0'; Size
0x76B1AF: call    FormHeapAlloc
0x76B1B4: add     esp, 4
0x76B1B7: test    eax, eax
0x76B1B9: jz      short loc_76B1C4
0x76B1BB: mov     ecx, eax
0x76B1BD: call    sub_7319E0
0x76B1C2: jmp     short loc_76B1C6
0x76B1C4: xor     eax, eax
0x76B1C6: push    eax; a2
0x76B1C7: mov     ecx, ebp; this
0x76B1C9: call    NiSmartPointer_Set??
0x76B1CE: push    1Ch; Size
0x76B1D0: call    FormHeapAlloc
0x76B1D5: add     esp, 4
0x76B1D8: test    eax, eax
0x76B1DA: jz      short loc_76B1E5
0x76B1DC: mov     ecx, eax
0x76B1DE: call    sub_405990
0x76B1E3: jmp     short loc_76B1E7
0x76B1E5: xor     eax, eax
0x76B1E7: mov     dx, [eax+18h]
0x76B1EB: and     dx, 0FFD7h
0x76B1F0: or      dx, 10h
0x76B1F4: mov     [eax+18h], dx
0x76B1F8: mov     ecx, [ebp+0]
0x76B1FB: push    eax
0x76B1FC: call    sub_707470
0x76B201: push    1Ch; Size
0x76B203: call    FormHeapAlloc
0x76B208: add     esp, 4
0x76B20B: test    eax, eax
0x76B20D: jz      short loc_76B218
0x76B20F: mov     ecx, eax
0x76B211: call    sub_47F920
0x76B216: jmp     short loc_76B21A
0x76B218: xor     eax, eax
0x76B21A: mov     cx, [eax+18h]
0x76B21E: and     cx, 0FEEDh
0x76B223: or      cx, 0EDh
0x76B228: mov     [eax+18h], cx
0x76B22C: mov     ecx, [ebp+0]
0x76B22F: push    eax
0x76B230: call    sub_707470
0x76B235: push    1Ch; Size
0x76B237: call    FormHeapAlloc
0x76B23C: add     esp, 4
0x76B23F: test    eax, eax
0x76B241: jz      short loc_76B24C
0x76B243: mov     ecx, eax
0x76B245: call    NiObjectNET_Create
0x76B24A: jmp     short loc_76B24E
0x76B24C: xor     eax, eax
0x76B24E: and     word ptr [eax+18h], 0FFFCh
0x76B254: mov     ecx, [ebp+0]
0x76B257: push    eax
0x76B258: call    sub_707470
0x76B25D: mov     edx, [esi+14h]
0x76B260: mov     ecx, [ebp+0]
0x76B263: push    edx
0x76B264: call    sub_707470
0x76B269: mov     eax, [ebp+0]
0x76B26C: mov     ecx, [ebx+8A0h]
0x76B272: mov     [ebx+0Ch], eax
0x76B275: mov     eax, [ebx+8A4h]
0x76B27B: mov     dword ptr [ebx+10h], 0
0x76B282: mov     edx, [ecx]
0x76B284: mov     edx, [edx+10h]
0x76B287: push    esi
0x76B288: push    eax
0x76B289: call    edx
0x76B28B: push    esi
0x76B28C: mov     ecx, ebx
0x76B28E: call    sub_769B60
0x76B293: fld1
0x76B295: mov     eax, ds:0B3F9A8h
0x76B29A: mov     edx, ds:0B3F9B0h
0x76B2A0: mov     ecx, 9
0x76B2A5: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x76B2AA: lea     edi, [esp+5Ch+var_34]
0x76B2AE: rep movsd
0x76B2B0: fstp    [esp+5Ch+var_4]
0x76B2B4: mov     ecx, ds:0B3F9ACh
0x76B2BA: mov     dword ptr [esp+5Ch+var_10], eax
0x76B2BE: mov     eax, [esp+5Ch+arg_0]
0x76B2C2: mov     dword ptr [esp+5Ch+var_10+4], ecx
0x76B2C6: mov     ecx, [eax+1Ch]
0x76B2C9: push    ecx
0x76B2CA: mov     [esp+60h+var_8], edx
0x76B2CE: lea     edx, [esp+60h+var_44]
0x76B2D2: push    edx
0x76B2D3: lea     eax, [esp+64h+var_34]
0x76B2D7: push    eax
0x76B2D8: push    0
0x76B2DA: push    0
0x76B2DC: push    0
0x76B2DE: mov     ecx, ebx
0x76B2E0: call    sub_7672F0
0x76B2E5: mov     ecx, ds:0B3F974h
0x76B2EB: push    ecx
0x76B2EC: mov     ecx, [ebp+0]
0x76B2EF: call    sub_707470
0x76B2F4: mov     edx, [esp+5Ch+var_4C]
0x76B2F8: mov     eax, [esp+5Ch+var_48]
0x76B2FC: pop     edi
0x76B2FD: mov     [ebx+0Ch], edx
0x76B300: mov     [ebx+10h], eax
0x76B303: pop     ebp
0x76B304: pop     esi
0x76B305: pop     ebx
0x76B306: add     esp, 4Ch
0x76B309: retn    4
