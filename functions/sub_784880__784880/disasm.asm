0x784880: sub     esp, 8
0x784883: mov     edx, [esp+8+arg_8]
0x784887: push    ebx
0x784888: mov     ebx, [esp+0Ch+arg_0]
0x78488C: push    esi
0x78488D: mov     esi, [esp+10h+arg_4]
0x784891: push    edi
0x784892: mov     edi, [esp+14h+arg_8]
0x784896: xor     al, al
0x784898: mov     byte ptr [esp+14h+var_4], al
0x78489C: mov     ecx, [esp+14h+var_4]
0x7848A0: mov     byte ptr [esp+14h+var_8], al
0x7848A4: mov     eax, [esp+14h+var_8]
0x7848A8: push    eax
0x7848A9: push    ecx
0x7848AA: push    edx
0x7848AB: push    edi
0x7848AC: push    esi
0x7848AD: push    ebx
0x7848AE: call    sub_784180
0x7848B3: sub     esi, ebx
0x7848B5: mov     eax, 2AAAAAABh
0x7848BA: imul    esi
0x7848BC: sar     edx, 2
0x7848BF: add     esp, 18h
0x7848C2: mov     eax, edx
0x7848C4: shr     eax, 1Fh
0x7848C7: add     eax, edx
0x7848C9: lea     eax, [eax+eax*2]
0x7848CC: lea     eax, [edi+eax*8]
0x7848CF: pop     edi
0x7848D0: pop     esi
0x7848D1: pop     ebx
0x7848D2: add     esp, 8
0x7848D5: retn
