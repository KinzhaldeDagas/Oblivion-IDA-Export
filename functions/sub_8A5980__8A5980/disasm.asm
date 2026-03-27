0x8A5980: push    0FFFFFFFFh
0x8A5982: push    offset SEH_8B97A0
0x8A5987: mov     eax, large fs:0
0x8A598D: push    eax
0x8A598E: push    ecx
0x8A598F: push    esi
0x8A5990: mov     eax, ds:0B30AACh
0x8A5995: xor     eax, esp
0x8A5997: push    eax
0x8A5998: lea     eax, [esp+18h+var_C]
0x8A599C: mov     large fs:0, eax
0x8A59A2: mov     esi, ecx
0x8A59A4: cmp     dword ptr [esi+0Ch], 0
0x8A59A8: jnz     short loc_8A5A01
0x8A59AA: push    1
0x8A59AC: push    0F0h ; 'ð'
0x8A59B1: mov     ecx, offset FormHeap
0x8A59B6: call    j_MemoryHeap_Alloc
0x8A59BB: mov     dl, al
0x8A59BD: and     dl, 0Fh
0x8A59C0: mov     cl, 10h
0x8A59C2: sub     cl, dl
0x8A59C4: movzx   edx, cl
0x8A59C7: add     eax, edx
0x8A59C9: mov     [eax-1], cl
0x8A59CC: mov     [esp+18h+var_10], eax
0x8A59D0: mov     ecx, eax
0x8A59D2: mov     [esp+18h+var_4], 0
0x8A59DA: call    sub_8A5790
0x8A59DF: cmp     dword ptr [esi+8], 0
0x8A59E3: mov     [esp+18h+var_4], 0FFFFFFFFh
0x8A59EB: mov     [esi+0Ch], eax
0x8A59EE: jz      short loc_8A59F8
0x8A59F0: push    eax
0x8A59F1: mov     ecx, esi
0x8A59F3: call    sub_8A2DE0
0x8A59F8: mov     eax, [esp+18h+arg_0]
0x8A59FC: mov     byte ptr [eax], 1
0x8A59FF: jmp     short loc_8A5A08
0x8A5A01: mov     ecx, [esp+18h+arg_0]
0x8A5A05: mov     byte ptr [ecx], 0
0x8A5A08: mov     eax, [esi+0Ch]
0x8A5A0B: mov     ecx, [esp+18h+var_C]
0x8A5A0F: mov     large fs:0, ecx
0x8A5A16: pop     ecx
0x8A5A17: pop     esi
0x8A5A18: add     esp, 10h
0x8A5A1B: retn    4
