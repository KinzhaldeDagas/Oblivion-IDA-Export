0x747610: push    ecx
0x747611: push    ebx
0x747612: mov     ebx, [esp+8+arg_8]
0x747616: push    esi
0x747617: mov     esi, [esp+0Ch+arg_0]
0x74761B: cmp     dword ptr [esi+7Ch], 0
0x74761F: push    edi
0x747620: mov     [esp+10h+var_4], 0
0x747628: jle     short loc_74767B
0x74762A: cmp     byte ptr [esi+1Ch], 2
0x74762E: jnz     short loc_747637
0x747630: mov     ecx, esi
0x747632: call    sub_746D90
0x747637: lea     eax, [esi+0B10h]
0x74763D: push    eax
0x74763E: call    sub_7470B0
0x747643: lea     ecx, [esi+0B1Ch]
0x747649: push    ecx
0x74764A: call    sub_7470B0
0x74764F: add     esp, 8
0x747652: mov     eax, esi
0x747654: call    sub_7472B0
0x747659: mov     edx, [esi+16A0h]
0x74765F: mov     ecx, [esi+16A4h]
0x747665: add     edx, 0Ah
0x747668: add     ecx, 0Ah
0x74766B: shr     edx, 3
0x74766E: shr     ecx, 3
0x747671: cmp     ecx, edx
0x747673: mov     [esp+10h+var_4], eax
0x747677: ja      short loc_747680
0x747679: jmp     short loc_74767E
0x74767B: lea     ecx, [ebx+5]
0x74767E: mov     edx, ecx
0x747680: lea     eax, [ebx+4]
0x747683: cmp     eax, edx
0x747685: ja      short loc_7476A4
0x747687: mov     eax, [esp+10h+arg_4]
0x74768B: test    eax, eax
0x74768D: jz      short loc_7476A4
0x74768F: mov     edi, [esp+10h+arg_C]
0x747693: push    edi
0x747694: push    ebx
0x747695: push    eax
0x747696: push    esi
0x747697: call    sub_747380
0x74769C: add     esp, 10h
0x74769F: jmp     loc_7477E2
0x7476A4: mov     edi, [esp+10h+arg_C]
0x7476A8: cmp     ecx, edx
0x7476AA: mov     ecx, [esi+16B4h]
0x7476B0: jnz     loc_74773B
0x7476B6: cmp     ecx, 0Dh
0x7476B9: lea     eax, [edi+2]
0x7476BC: jle     short loc_747710
0x7476BE: mov     edx, eax
0x7476C0: shl     edx, cl
0x7476C2: mov     ecx, [esi+8]
0x7476C5: or      [esi+16B0h], dx
0x7476CC: movzx   ebx, byte ptr [esi+16B0h]
0x7476D3: mov     edx, [esi+14h]
0x7476D6: mov     [ecx+edx], bl
0x7476D9: add     dword ptr [esi+14h], 1
0x7476DD: movzx   ebx, byte ptr [esi+16B1h]
0x7476E4: mov     ecx, [esi+14h]
0x7476E7: mov     edx, [esi+8]
0x7476EA: mov     [ecx+edx], bl
0x7476ED: mov     edx, [esi+16B4h]
0x7476F3: add     dword ptr [esi+14h], 1
0x7476F7: mov     cl, 10h
0x7476F9: sub     cl, dl
0x7476FB: shr     ax, cl
0x7476FE: add     edx, 0FFFFFFF3h
0x747701: mov     [esi+16B4h], edx
0x747707: mov     [esi+16B0h], ax
0x74770E: jmp     short loc_747722
0x747710: shl     eax, cl
0x747712: or      [esi+16B0h], ax
0x747719: add     ecx, 3
0x74771C: mov     [esi+16B4h], ecx
0x747722: push    offset unk_A84F58
0x747727: push    offset unk_A84AD8
0x74772C: mov     eax, esi
0x74772E: call    sub_746980
0x747733: add     esp, 8
0x747736: jmp     loc_7477E2
0x74773B: cmp     ecx, 0Dh
0x74773E: lea     edx, [edi+4]
0x747741: jle     short loc_747795
0x747743: mov     eax, edx
0x747745: shl     eax, cl
0x747747: mov     ecx, [esi+8]
0x74774A: or      [esi+16B0h], ax
0x747751: movzx   ebx, byte ptr [esi+16B0h]
0x747758: mov     eax, [esi+14h]
0x74775B: mov     [ecx+eax], bl
0x74775E: add     dword ptr [esi+14h], 1
0x747762: movzx   ebx, byte ptr [esi+16B1h]
0x747769: mov     ecx, [esi+14h]
0x74776C: mov     eax, [esi+8]
0x74776F: mov     [ecx+eax], bl
0x747772: mov     ebx, [esi+16B4h]
0x747778: add     dword ptr [esi+14h], 1
0x74777C: mov     cl, 10h
0x74777E: sub     cl, bl
0x747780: shr     dx, cl
0x747783: add     ebx, 0FFFFFFF3h
0x747786: mov     [esi+16B4h], ebx
0x74778C: mov     [esi+16B0h], dx
0x747793: jmp     short loc_7477A7
0x747795: shl     edx, cl
0x747797: or      [esi+16B0h], dx
0x74779E: add     ecx, 3
0x7477A1: mov     [esi+16B4h], ecx
0x7477A7: mov     eax, [esp+10h+var_4]
0x7477AB: mov     ecx, [esi+0B20h]
0x7477B1: mov     edx, [esi+0B14h]
0x7477B7: add     eax, 1
0x7477BA: push    eax
0x7477BB: add     ecx, 1
0x7477BE: push    ecx
0x7477BF: add     edx, 1
0x7477C2: push    edx
0x7477C3: mov     eax, esi
0x7477C5: call    sub_746720
0x7477CA: lea     eax, [esi+980h]
0x7477D0: push    eax
0x7477D1: lea     ecx, [esi+8Ch]
0x7477D7: push    ecx
0x7477D8: mov     eax, esi
0x7477DA: call    sub_746980
0x7477DF: add     esp, 14h
0x7477E2: mov     edx, esi
0x7477E4: call    sub_745DB0
0x7477E9: test    edi, edi
0x7477EB: pop     edi
0x7477EC: jz      short loc_7477FA
0x7477EE: mov     eax, esi
0x7477F0: pop     esi
0x7477F1: pop     ebx
0x7477F2: add     esp, 4
0x7477F5: jmp     sub_746EA0
0x7477FA: pop     esi
0x7477FB: pop     ebx
0x7477FC: pop     ecx
0x7477FD: retn
