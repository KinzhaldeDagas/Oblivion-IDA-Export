0x728440: sub     esp, 8
0x728443: test    byte ptr [esp+8+arg_8], 1
0x728448: push    ebx
0x728449: mov     bx, [esp+0Ch+arg_4]
0x72844E: push    ebp
0x72844F: mov     ebp, ecx
0x728451: mov     edx, [ebp+1Ch]
0x728454: push    esi
0x728455: jz      short loc_72849F
0x728457: movzx   eax, bx
0x72845A: lea     eax, [eax+eax*2]
0x72845D: lea     ecx, [edx+eax*4]
0x728460: movzx   eax, [esp+14h+arg_0]
0x728465: lea     eax, [eax+eax*2]
0x728468: lea     esi, [edx+eax*4]
0x72846B: xor     edx, edx
0x72846D: sub     esi, ecx
0x72846F: nop
0x728470: fld     dword ptr [esi+ecx]
0x728473: fld     dword ptr [ecx]
0x728475: fcompp
0x728477: fnstsw  ax
0x728479: test    ah, 41h
0x72847C: jz      loc_7285A0
0x728482: fld     dword ptr [esi+ecx]
0x728485: fld     dword ptr [ecx]
0x728487: fcompp
0x728489: fnstsw  ax
0x72848B: test    ah, 5
0x72848E: jnp     loc_7285AC
0x728494: add     edx, 1
0x728497: add     ecx, 4
0x72849A: cmp     edx, 3
0x72849D: jb      short loc_728470
0x72849F: mov     edx, [ebp+20h]
0x7284A2: test    edx, edx
0x7284A4: push    edi
0x7284A5: jz      short loc_7284D4
0x7284A7: test    byte ptr [esp+18h+arg_8], 2
0x7284AC: jz      short loc_7284D4
0x7284AE: movzx   eax, bx
0x7284B1: lea     ecx, [eax+eax*2]
0x7284B4: movzx   eax, [esp+18h+arg_0]
0x7284B9: lea     eax, [eax+eax*2]
0x7284BC: lea     ecx, [edx+ecx*4]
0x7284BF: lea     eax, [edx+eax*4]
0x7284C2: mov     edi, 3
0x7284C7: call    sub_7283F0
0x7284CC: test    eax, eax
0x7284CE: jnz     loc_728596
0x7284D4: mov     edx, [ebp+24h]
0x7284D7: test    edx, edx
0x7284D9: jz      short loc_728506
0x7284DB: test    byte ptr [esp+18h+arg_8], 4
0x7284E0: jz      short loc_728506
0x7284E2: movzx   eax, [esp+18h+arg_0]
0x7284E7: movzx   ecx, bx
0x7284EA: shl     ecx, 4
0x7284ED: shl     eax, 4
0x7284F0: add     ecx, edx
0x7284F2: add     eax, edx
0x7284F4: mov     edi, 4
0x7284F9: call    sub_7283F0
0x7284FE: test    eax, eax
0x728500: jnz     loc_728596
0x728506: mov     edi, [ebp+28h]
0x728509: test    edi, edi
0x72850B: jz      loc_728594
0x728511: test    byte ptr [esp+18h+arg_8], 8
0x728516: jz      short loc_728594
0x728518: movzx   eax, byte ptr [ebp+2Ch]
0x72851C: movzx   ecx, word ptr [ebp+8]
0x728520: and     eax, 3Fh
0x728523: xor     ebx, ebx
0x728525: test    ax, ax
0x728528: mov     [esp+18h+var_8], ecx
0x72852C: mov     [esp+18h+var_4], eax
0x728530: mov     [esp+18h+arg_8], ebx
0x728534: jbe     short loc_728594
0x728536: movzx   ebp, [esp+18h+arg_4]
0x72853B: jmp     short loc_728540
0x72853D: align 10h
0x728540: movzx   eax, bx
0x728543: lea     edx, [eax+ebp]
0x728546: lea     ecx, [edi+edx*8]
0x728549: movzx   edx, [esp+18h+arg_0]
0x72854E: add     eax, edx
0x728550: lea     esi, [edi+eax*8]
0x728553: xor     edx, edx
0x728555: sub     esi, ecx
0x728557: fld     dword ptr [esi+ecx]
0x72855A: fld     dword ptr [ecx]
0x72855C: fcompp
0x72855E: fnstsw  ax
0x728560: test    ah, 41h
0x728563: jz      short loc_7285BA
0x728565: fld     dword ptr [esi+ecx]
0x728568: fld     dword ptr [ecx]
0x72856A: fcompp
0x72856C: fnstsw  ax
0x72856E: test    ah, 5
0x728571: jnp     short loc_7285C7
0x728573: add     edx, 1
0x728576: add     ecx, 4
0x728579: cmp     edx, 2
0x72857C: jb      short loc_728557
0x72857E: mov     eax, [esp+18h+arg_8]
0x728582: add     ebx, [esp+18h+var_8]
0x728586: add     eax, 1
0x728589: cmp     ax, word ptr [esp+18h+var_4]
0x72858E: mov     [esp+18h+arg_8], eax
0x728592: jb      short loc_728540
0x728594: xor     eax, eax
0x728596: pop     edi
0x728597: pop     esi
0x728598: pop     ebp
0x728599: pop     ebx
0x72859A: add     esp, 8
0x72859D: retn    0Ch
0x7285A0: pop     esi
0x7285A1: pop     ebp
0x7285A2: or      eax, 0FFFFFFFFh
0x7285A5: pop     ebx
0x7285A6: add     esp, 8
0x7285A9: retn    0Ch
0x7285AC: pop     esi
0x7285AD: pop     ebp
0x7285AE: mov     eax, 1
0x7285B3: pop     ebx
0x7285B4: add     esp, 8
0x7285B7: retn    0Ch
0x7285BA: pop     edi
0x7285BB: pop     esi
0x7285BC: pop     ebp
0x7285BD: or      eax, 0FFFFFFFFh
0x7285C0: pop     ebx
0x7285C1: add     esp, 8
0x7285C4: retn    0Ch
0x7285C7: pop     edi
0x7285C8: pop     esi
0x7285C9: pop     ebp
0x7285CA: mov     eax, 1
0x7285CF: pop     ebx
0x7285D0: add     esp, 8
0x7285D3: retn    0Ch
