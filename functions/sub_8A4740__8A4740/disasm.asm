0x8A4740: sub     esp, 8
0x8A4743: push    ebx
0x8A4744: push    ebp
0x8A4745: push    esi
0x8A4746: xor     ebx, ebx
0x8A4748: push    edi
0x8A4749: mov     [esp+18h+var_4], ebx
0x8A474D: xor     ebp, ebp
0x8A474F: lea     edi, [ecx+10h]
0x8A4752: test    edi, edi
0x8A4754: jz      short loc_8A476F
0x8A4756: lea     eax, [esp+18h+var_4]
0x8A475A: push    eax
0x8A475B: mov     ecx, edi
0x8A475D: call    sub_677C70
0x8A4762: or      ebx, 1
0x8A4765: cmp     dword ptr [eax], 0
0x8A4768: mov     [esp+18h+var_5], 1
0x8A476D: jnz     short loc_8A4774
0x8A476F: mov     [esp+18h+var_5], 0
0x8A4774: test    bl, 1
0x8A4777: jz      short loc_8A47A0
0x8A4779: mov     esi, [esp+18h+var_4]
0x8A477D: and     ebx, 0FFFFFFFEh
0x8A4780: test    esi, esi
0x8A4782: jz      short loc_8A47A0
0x8A4784: lea     ecx, [esi+4]
0x8A4787: push    ecx; lpAddend
0x8A4788: call    dword ptr ds:0A2807Ch
0x8A478E: test    eax, eax
0x8A4790: jnz     short loc_8A47A0
0x8A4792: test    esi, esi
0x8A4794: jz      short loc_8A47A0
0x8A4796: mov     edx, [esi]
0x8A4798: mov     eax, [edx]
0x8A479A: push    1
0x8A479C: mov     ecx, esi
0x8A479E: call    eax
0x8A47A0: cmp     [esp+18h+var_5], 0
0x8A47A5: jz      short loc_8A47AF
0x8A47A7: mov     edi, [edi+4]
0x8A47AA: add     ebp, 1
0x8A47AD: jmp     short loc_8A4752
0x8A47AF: pop     edi
0x8A47B0: pop     esi
0x8A47B1: mov     eax, ebp
0x8A47B3: pop     ebp
0x8A47B4: pop     ebx
0x8A47B5: add     esp, 8
0x8A47B8: retn
