0x6CB0B0: push    0FFFFFFFFh
0x6CB0B2: push    offset SEH_6CB0B0
0x6CB0B7: mov     eax, large fs:0
0x6CB0BD: push    eax
0x6CB0BE: sub     esp, 8
0x6CB0C1: push    ebx
0x6CB0C2: push    ebp
0x6CB0C3: push    esi
0x6CB0C4: push    edi
0x6CB0C5: mov     eax, ds:0B30AACh
0x6CB0CA: xor     eax, esp
0x6CB0CC: push    eax
0x6CB0CD: lea     eax, [esp+28h+var_C]
0x6CB0D1: mov     large fs:0, eax
0x6CB0D7: xor     ebp, ebp
0x6CB0D9: push    68h ; 'h'; Size
0x6CB0DB: mov     [esp+2Ch+var_4], ebp
0x6CB0DF: mov     [esp+2Ch+var_14], ebp
0x6CB0E3: call    FormHeapAlloc
0x6CB0E8: add     esp, 4
0x6CB0EB: mov     [esp+28h+var_10], eax
0x6CB0EF: cmp     eax, ebp
0x6CB0F1: mov     edi, [esp+28h+arg_4]
0x6CB0F5: mov     ebx, 1
0x6CB0FA: mov     [esp+28h+var_4], ebx
0x6CB0FE: jz      short loc_6CB114
0x6CB100: movzx   edx, word ptr [edi+16h]
0x6CB104: mov     ecx, [edi+8]
0x6CB107: push    ebp; int
0x6CB108: push    edx; int
0x6CB109: push    edx; int
0x6CB10A: push    ecx; Src
0x6CB10B: mov     ecx, eax
0x6CB10D: call    sub_6C7FB0
0x6CB112: jmp     short loc_6CB116
0x6CB114: xor     eax, eax
0x6CB116: cmp     eax, ebp
0x6CB118: mov     esi, [esp+28h+arg_0]
0x6CB11C: mov     [esi], eax
0x6CB11E: jz      short loc_6CB12A
0x6CB120: add     eax, 4
0x6CB123: push    eax; lpAddend
0x6CB124: call    dword ptr ds:0A28078h
0x6CB12A: cmp     word ptr [edi+16h], 0
0x6CB12F: mov     [esp+28h+var_14], ebx
0x6CB133: mov     [esp+28h+var_4], ebp
0x6CB137: mov     bl, 1
0x6CB139: jbe     loc_6CB1CB
0x6CB13F: mov     eax, [edi+10h]
0x6CB142: mov     edx, [eax+ebp*4]
0x6CB145: test    edx, edx
0x6CB147: mov     ecx, [edi+20h]
0x6CB14A: mov     eax, [ecx+ebp*4]
0x6CB14D: mov     [esp+28h+var_10], edx
0x6CB151: jz      short loc_6CB1BC
0x6CB153: test    eax, eax
0x6CB155: jz      short loc_6CB1BC
0x6CB157: test    bl, bl
0x6CB159: jz      short loc_6CB1B3
0x6CB15B: movzx   ecx, byte ptr [eax+8]
0x6CB15F: shr     ecx, 1
0x6CB161: and     ecx, 3
0x6CB164: cmp     ecx, 2
0x6CB167: jz      short loc_6CB16F
0x6CB169: test    ecx, ecx
0x6CB16B: jz      short loc_6CB16F
0x6CB16D: xor     ecx, ecx
0x6CB16F: cmp     ecx, 2
0x6CB172: mov     edx, [esi]
0x6CB174: jz      short loc_6CB17A
0x6CB176: test    ecx, ecx
0x6CB178: jnz     short loc_6CB17D
0x6CB17A: mov     [edx+24h], ecx
0x6CB17D: fld     dword ptr [eax+0Ch]
0x6CB180: mov     ecx, [esi]
0x6CB182: mov     edx, [esp+28h+var_10]
0x6CB186: fstp    [esp+28h+arg_4]
0x6CB18A: fld     [esp+28h+arg_4]
0x6CB18E: xor     bl, bl
0x6CB190: fstp    dword ptr [ecx+28h]
0x6CB193: mov     ecx, [esi]
0x6CB195: fld     dword ptr [eax+14h]
0x6CB198: fstp    [esp+28h+arg_4]
0x6CB19C: fld     [esp+28h+arg_4]
0x6CB1A0: fstp    dword ptr [ecx+2Ch]
0x6CB1A3: mov     ecx, [esi]
0x6CB1A5: fld     dword ptr [eax+18h]
0x6CB1A8: fstp    [esp+28h+arg_4]
0x6CB1AC: fld     [esp+28h+arg_4]
0x6CB1B0: fstp    dword ptr [ecx+30h]
0x6CB1B3: mov     ecx, [esi]
0x6CB1B5: push    eax; int
0x6CB1B6: push    edx; Src
0x6CB1B7: call    sub_6CA8E0
0x6CB1BC: movzx   edx, word ptr [edi+16h]
0x6CB1C0: add     ebp, 1
0x6CB1C3: cmp     ebp, edx
0x6CB1C5: jb      loc_6CB13F
0x6CB1CB: mov     ebp, [edi+2Ch]
0x6CB1CE: mov     ebx, [esi]
0x6CB1D0: mov     edi, [ebx+20h]
0x6CB1D3: cmp     edi, ebp
0x6CB1D5: jz      short loc_6CB208
0x6CB1D7: test    edi, edi
0x6CB1D9: jz      short loc_6CB1F7
0x6CB1DB: lea     eax, [edi+4]
0x6CB1DE: push    eax; lpAddend
0x6CB1DF: call    dword ptr ds:0A2807Ch
0x6CB1E5: test    eax, eax
0x6CB1E7: jnz     short loc_6CB1F7
0x6CB1E9: test    edi, edi
0x6CB1EB: jz      short loc_6CB1F7
0x6CB1ED: mov     edx, [edi]
0x6CB1EF: mov     eax, [edx]
0x6CB1F1: push    1
0x6CB1F3: mov     ecx, edi
0x6CB1F5: call    eax
0x6CB1F7: test    ebp, ebp
0x6CB1F9: mov     [ebx+20h], ebp
0x6CB1FC: jz      short loc_6CB208
0x6CB1FE: add     ebp, 4
0x6CB201: push    ebp; lpAddend
0x6CB202: call    dword ptr ds:0A28078h
0x6CB208: mov     edi, [esi]
0x6CB20A: mov     eax, [edi+5Ch]
0x6CB20D: push    eax
0x6CB20E: call    FormHeapFree
0x6CB213: add     esp, 4
0x6CB216: mov     dword ptr [edi+5Ch], 0
0x6CB21D: mov     eax, esi
0x6CB21F: mov     ecx, dword ptr [esp+28h+var_C]
0x6CB223: mov     large fs:0, ecx
0x6CB22A: pop     ecx
0x6CB22B: pop     edi
0x6CB22C: pop     esi
0x6CB22D: pop     ebp
0x6CB22E: pop     ebx
0x6CB22F: add     esp, 14h
0x6CB232: retn
