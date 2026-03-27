0x6B4630: sub     esp, 24h
0x6B4633: push    esi
0x6B4634: mov     esi, [esp+28h+arg_0]
0x6B4638: push    esi
0x6B4639: call    sub_88D4E0
0x6B463E: cmp     dword ptr [esi+1Ch], 0
0x6B4642: jnz     loc_6B47BA
0x6B4648: fld     dword ptr [esi+18h]
0x6B464B: push    edi
0x6B464C: fmul    qword ptr ds:0A372E0h
0x6B4652: mov     edi, [esi]
0x6B4654: fstp    [esp+2Ch+var_18]
0x6B4658: mov     eax, [edi+0Ch]
0x6B465B: test    eax, eax
0x6B465D: jz      short loc_6B4669
0x6B465F: nop
0x6B4660: mov     edi, eax
0x6B4662: mov     eax, [edi+0Ch]
0x6B4665: test    eax, eax
0x6B4667: jnz     short loc_6B4660
0x6B4669: push    ebp
0x6B466A: mov     ebp, [esi+4]
0x6B466D: mov     eax, [ebp+0Ch]
0x6B4670: test    eax, eax
0x6B4672: jz      short loc_6B467D
0x6B4674: mov     ebp, eax
0x6B4676: mov     eax, [ebp+0Ch]
0x6B4679: test    eax, eax
0x6B467B: jnz     short loc_6B4674
0x6B467D: fld     [esp+30h+var_18]
0x6B4681: fld     dword ptr ds:0B23C50h
0x6B4687: fcomp   st(1)
0x6B4689: fnstsw  ax
0x6B468B: test    ah, 41h
0x6B468E: jp      loc_6B47B6
0x6B4694: fcomp   dword ptr ds:0A31E2Ch
0x6B469A: fnstsw  ax
0x6B469C: test    ah, 1
0x6B469F: jnz     loc_6B47B8
0x6B46A5: mov     ecx, [ebp+1Ch]
0x6B46A8: mov     eax, [edi+1Ch]
0x6B46AB: mov     edx, ecx
0x6B46AD: xor     edx, eax
0x6B46AF: test    edx, 0FFFF0000h
0x6B46B5: jnz     short loc_6B46BD
0x6B46B7: and     al, 3Fh
0x6B46B9: cmp     al, 8
0x6B46BB: jmp     short loc_6B46E7
0x6B46BD: mov     edx, eax
0x6B46BF: and     dl, 3Fh
0x6B46C2: cmp     dl, 8
0x6B46C5: jnz     short loc_6B46D3
0x6B46C7: and     eax, 1F00h
0x6B46CC: cmp     eax, 1100h
0x6B46D1: jmp     short loc_6B46E7
0x6B46D3: mov     eax, ecx
0x6B46D5: and     al, 3Fh
0x6B46D7: cmp     al, 8
0x6B46D9: jnz     short loc_6B46ED
0x6B46DB: and     ecx, 1F00h
0x6B46E1: cmp     ecx, 1100h
0x6B46E7: jz      loc_6B47B8
0x6B46ED: mov     ecx, [esi+10h]
0x6B46F0: push    ecx
0x6B46F1: lea     edx, [esp+34h+var_24]
0x6B46F5: push    edx
0x6B46F6: call    sub_43F3E0
0x6B46FB: mov     eax, [esi+14h]
0x6B46FE: add     esp, 8
0x6B4701: test    eax, eax
0x6B4703: jz      short loc_6B4719
0x6B4705: movzx   eax, word ptr [eax+4]
0x6B4709: mov     [esp+30h+arg_0], eax
0x6B470D: fild    [esp+30h+arg_0]
0x6B4711: fmul    qword ptr ds:0A4C2D0h
0x6B4717: jmp     short loc_6B471F
0x6B4719: fld     dword ptr ds:0A3744Ch
0x6B471F: mov     edx, [esi]
0x6B4721: fstp    [esp+30h+var_14]
0x6B4725: push    ebx
0x6B4726: lea     ecx, [esp+34h+var_24]
0x6B472A: push    ecx
0x6B472B: push    edx
0x6B472C: call    sub_536140
0x6B4731: mov     ecx, [esi+4]
0x6B4734: mov     [esp+3Ch+var_10], al
0x6B4738: lea     eax, [esp+3Ch+var_24]
0x6B473C: push    eax
0x6B473D: push    ecx
0x6B473E: call    sub_536140
0x6B4743: xor     esi, esi
0x6B4745: mov     bl, al
0x6B4747: add     esp, 10h
0x6B474A: mov     [esp+34h+var_F], bl
0x6B474E: mov     [esp+34h+var_8], esi
0x6B4752: mov     [esp+34h+var_4], esi
0x6B4756: cmp     byte ptr [edi+18h], 1
0x6B475A: jnz     short loc_6B4770
0x6B475C: push    edi
0x6B475D: call    sub_47DE00
0x6B4762: add     esp, 4
0x6B4765: cmp     eax, esi
0x6B4767: jz      short loc_6B4770
0x6B4769: mov     edx, [eax+0Ch]
0x6B476C: mov     [esp+34h+var_8], edx
0x6B4770: cmp     byte ptr [ebp+18h], 1
0x6B4774: jnz     short loc_6B478A
0x6B4776: push    ebp
0x6B4777: call    sub_47DE00
0x6B477C: add     esp, 4
0x6B477F: cmp     eax, esi
0x6B4781: jz      short loc_6B478A
0x6B4783: mov     eax, [eax+0Ch]
0x6B4786: mov     [esp+34h+var_4], eax
0x6B478A: movsx   edx, [esp+34h+var_10]
0x6B478F: movsx   ecx, bl
0x6B4792: add     ecx, 1
0x6B4795: add     edx, 1
0x6B4798: imul    ecx, edx
0x6B479B: lea     eax, [esp+34h+var_24]
0x6B479F: push    eax
0x6B47A0: mov     [esp+38h+var_C], ecx
0x6B47A4: call    sub_6B0C70
0x6B47A9: add     esp, 4
0x6B47AC: pop     ebx
0x6B47AD: pop     ebp
0x6B47AE: pop     edi
0x6B47AF: pop     esi
0x6B47B0: add     esp, 24h
0x6B47B3: retn    4
0x6B47B6: fstp    st
0x6B47B8: pop     ebp
0x6B47B9: pop     edi
0x6B47BA: pop     esi
0x6B47BB: add     esp, 24h
0x6B47BE: retn    4
