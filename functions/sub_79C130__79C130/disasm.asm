0x79C130: push    0FFFFFFFFh
0x79C132: push    offset SEH_79C130
0x79C137: mov     eax, large fs:0
0x79C13D: push    eax
0x79C13E: push    ebx
0x79C13F: push    ebp
0x79C140: push    esi
0x79C141: push    edi
0x79C142: mov     eax, ds:0B30AACh
0x79C147: xor     eax, esp
0x79C149: push    eax
0x79C14A: lea     eax, [esp+20h+var_C]
0x79C14E: mov     large fs:0, eax
0x79C154: mov     edi, [esp+20h+arg_4]
0x79C158: mov     eax, [esp+20h+arg_8]
0x79C15C: mov     ebp, [esp+20h+arg_0]
0x79C160: lea     ebx, [edi+edi+2]
0x79C164: cmp     ebx, eax
0x79C166: mov     [esp+20h+var_4], 0
0x79C16E: mov     [esp+20h+arg_4], edi
0x79C172: jge     short loc_79C1E9
0x79C174: lea     eax, [ebx+ebx*2]
0x79C177: shl     eax, 4
0x79C17A: fld     dword ptr [eax+ebp+24h]
0x79C17E: add     eax, ebp
0x79C180: fld     dword ptr [eax-0Ch]
0x79C183: fcompp
0x79C185: fnstsw  ax
0x79C187: test    ah, 5
0x79C18A: jp      short loc_79C18F
0x79C18C: sub     ebx, 1
0x79C18F: lea     edi, [edi+edi*2]
0x79C192: lea     esi, [ebx+ebx*2]
0x79C195: shl     esi, 4
0x79C198: shl     edi, 4
0x79C19B: add     esi, ebp
0x79C19D: add     edi, ebp
0x79C19F: push    esi
0x79C1A0: mov     ecx, edi
0x79C1A2: call    sub_79B160
0x79C1A7: fld     dword ptr [esi+10h]
0x79C1AA: fstp    dword ptr [edi+10h]
0x79C1AD: fld     dword ptr [esi+14h]
0x79C1B0: fstp    dword ptr [edi+14h]
0x79C1B3: mov     cl, [esi+18h]
0x79C1B6: mov     [edi+18h], cl
0x79C1B9: fld     dword ptr [esi+1Ch]
0x79C1BC: fstp    dword ptr [edi+1Ch]
0x79C1BF: fld     dword ptr [esi+20h]
0x79C1C2: fstp    dword ptr [edi+20h]
0x79C1C5: fld     dword ptr [esi+24h]
0x79C1C8: fstp    dword ptr [edi+24h]
0x79C1CB: mov     edx, [esi+28h]
0x79C1CE: mov     [edi+28h], edx
0x79C1D1: mov     eax, [esi+2Ch]
0x79C1D4: mov     [edi+2Ch], eax
0x79C1D7: mov     edi, ebx
0x79C1D9: lea     ebx, [ebx+ebx+2]
0x79C1DD: cmp     ebx, [esp+20h+arg_8]
0x79C1E1: jl      short loc_79C174
0x79C1E3: mov     eax, [esp+20h+arg_8]
0x79C1E7: cmp     ebx, eax
0x79C1E9: jnz     short loc_79C23C
0x79C1EB: lea     ecx, [eax+eax*2]
0x79C1EE: shl     ecx, 4
0x79C1F1: lea     esi, [edi+edi*2]
0x79C1F4: shl     esi, 4
0x79C1F7: lea     ebx, [ecx+ebp-30h]
0x79C1FB: add     esi, ebp
0x79C1FD: push    ebx
0x79C1FE: mov     ecx, esi
0x79C200: call    sub_79B160
0x79C205: fld     dword ptr [ebx+10h]
0x79C208: fstp    dword ptr [esi+10h]
0x79C20B: fld     dword ptr [ebx+14h]
0x79C20E: fstp    dword ptr [esi+14h]
0x79C211: mov     dl, [ebx+18h]
0x79C214: mov     [esi+18h], dl
0x79C217: fld     dword ptr [ebx+1Ch]
0x79C21A: mov     edx, [esp+20h+arg_8]
0x79C21E: fstp    dword ptr [esi+1Ch]
0x79C221: fld     dword ptr [ebx+20h]
0x79C224: lea     edi, [edx-1]
0x79C227: fstp    dword ptr [esi+20h]
0x79C22A: fld     dword ptr [ebx+24h]
0x79C22D: fstp    dword ptr [esi+24h]
0x79C230: mov     eax, [ebx+28h]
0x79C233: mov     [esi+28h], eax
0x79C236: mov     ecx, [ebx+2Ch]
0x79C239: mov     [esi+2Ch], ecx
0x79C23C: mov     eax, [esp+20h+arg_3C]
0x79C240: push    eax
0x79C241: sub     esp, 30h
0x79C244: mov     esi, esp
0x79C246: lea     ecx, [esp+54h+arg_C]
0x79C24A: mov     [esp+54h+arg_8], esp
0x79C24E: push    ecx
0x79C24F: mov     ecx, esi
0x79C251: call    sub_79AD70
0x79C256: fld     [esp+54h+arg_1C]
0x79C25A: mov     dl, [esp+54h+arg_24]
0x79C25E: fstp    dword ptr [esi+10h]
0x79C261: fld     [esp+54h+arg_20]
0x79C265: mov     eax, [esp+54h+arg_34]
0x79C26C: mov     ecx, [esp+54h+arg_38]
0x79C273: fstp    dword ptr [esi+14h]
0x79C276: fld     [esp+54h+arg_28]
0x79C27D: mov     [esi+18h], dl
0x79C280: mov     edx, [esp+54h+arg_4]
0x79C284: fstp    dword ptr [esi+1Ch]
0x79C287: fld     [esp+54h+arg_2C]
0x79C28E: push    edx; int
0x79C28F: fstp    dword ptr [esi+20h]
0x79C292: push    edi; int
0x79C293: fld     [esp+5Ch+arg_30]
0x79C29A: push    ebp; int
0x79C29B: fstp    dword ptr [esi+24h]
0x79C29E: mov     [esi+28h], eax
0x79C2A1: mov     [esi+2Ch], ecx
0x79C2A4: call    sub_79B9F0
0x79C2A9: mov     eax, [esp+60h+arg_10]
0x79C2AD: add     esp, 40h
0x79C2B0: test    eax, eax
0x79C2B2: jz      short loc_79C2BD
0x79C2B4: push    eax
0x79C2B5: call    FormHeapFree
0x79C2BA: add     esp, 4
0x79C2BD: mov     ecx, [esp+20h+var_C]
0x79C2C1: mov     large fs:0, ecx
0x79C2C8: pop     ecx
0x79C2C9: pop     edi
0x79C2CA: pop     esi
0x79C2CB: pop     ebp
0x79C2CC: pop     ebx
0x79C2CD: add     esp, 0Ch
0x79C2D0: retn
