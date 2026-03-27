0x4DE980: push    esi
0x4DE981: mov     esi, ecx
0x4DE983: mov     eax, [esi+8]
0x4DE986: shr     eax, 0Dh
0x4DE989: test    al, 1
0x4DE98B: jz      short loc_4DE991
0x4DE98D: xor     eax, eax
0x4DE98F: pop     esi
0x4DE990: retn
0x4DE991: mov     edx, [esi]
0x4DE993: mov     eax, [edx+170h]
0x4DE999: push    edi
0x4DE99A: call    eax
0x4DE99C: movzx   eax, byte ptr [eax+4]
0x4DE9A0: add     eax, 0FFFFFFEEh; switch 26 cases
0x4DE9A3: cmp     eax, 19h
0x4DE9A6: ja      def_4DE9B3; jumptable 004DE9B3 default case, cases 28-30,37,41,42
0x4DE9AC: movzx   ecx, ds:byte_4DEBD0[eax]
0x4DE9B3: jmp     ds:jpt_4DE9B3[ecx*4]; switch jump
0x4DE9BA: mov     edx, [esi+1Ch]; jumptable 004DE9B3 case 21
0x4DE9BD: mov     eax, [edx+64h]
0x4DE9C0: neg     eax
0x4DE9C2: sbb     eax, eax
0x4DE9C4: and     eax, 0FFFFFFFBh
0x4DE9C7: pop     edi
0x4DE9C8: add     eax, 6
0x4DE9CB: pop     esi
0x4DE9CC: retn
0x4DE9CD: pop     edi; jumptable 004DE9B3 case 24
0x4DE9CE: mov     eax, 8
0x4DE9D3: pop     esi
0x4DE9D4: retn
0x4DE9D5: mov     eax, [esi+1Ch]; jumptable 004DE9B3 case 18
0x4DE9D8: push    eax
0x4DE9D9: call    sub_4D9890
0x4DE9DE: add     esp, 4
0x4DE9E1: neg     eax
0x4DE9E3: sbb     eax, eax
0x4DE9E5: pop     edi
0x4DE9E6: and     eax, 4
0x4DE9E9: pop     esi
0x4DE9EA: retn
0x4DE9EB: mov     ecx, [esi+1Ch]; jumptable 004DE9B3 case 32
0x4DE9EE: call    sub_4AE590
0x4DE9F3: test    al, al
0x4DE9F5: jz      short loc_4DE9FF
0x4DE9F7: pop     edi
0x4DE9F8: mov     eax, 3
0x4DE9FD: pop     esi
0x4DE9FE: retn
0x4DE9FF: mov     ecx, [esi+1Ch]
0x4DEA02: call    sub_4AE5A0
0x4DEA07: neg     al
0x4DEA09: pop     edi
0x4DEA0A: pop     esi
0x4DEA0B: sbb     eax, eax
0x4DEA0D: and     eax, 5
0x4DEA10: retn
0x4DEA11: mov     edx, [esi]; jumptable 004DE9B3 case 35
0x4DEA13: mov     eax, [edx+190h]
0x4DEA19: mov     ecx, esi
0x4DEA1B: xor     edi, edi
0x4DEA1D: call    eax
0x4DEA1F: test    al, al
0x4DEA21: jz      short loc_4DEA25
0x4DEA23: mov     edi, esi
0x4DEA25: cmp     edi, ds:0B333C4h
0x4DEA2B: jz      def_4DE9B3; jumptable 004DE9B3 default case, cases 28-30,37,41,42
0x4DEA31: mov     edx, [esi]
0x4DEA33: mov     eax, [edx+198h]
0x4DEA39: push    0
0x4DEA3B: mov     ecx, esi
0x4DEA3D: call    eax
0x4DEA3F: test    al, al
0x4DEA41: jz      short loc_4DEA4F
0x4DEA43: mov     ecx, edi; this
0x4DEA45: call    ?GetAnonymousScheduleGroup@SchedulerBase@details@Concurrency@@QAEPAVScheduleGroupBase@23@XZ; Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(void)
0x4DEA4A: cmp     eax, 6
0x4DEA4D: jnz     short loc_4DEAB9; jumptable 004DE9B3 case 23
0x4DEA4F: test    edi, edi
0x4DEA51: jz      short loc_4DEA75
0x4DEA53: mov     ecx, edi
0x4DEA55: call    sub_5E0F30
0x4DEA5A: test    al, al
0x4DEA5C: jz      short loc_4DEA75
0x4DEA5E: mov     ecx, ds:0B333C4h
0x4DEA64: call    sub_5E04C0
0x4DEA69: test    al, al
0x4DEA6B: jz      short loc_4DEA75
0x4DEA6D: pop     edi
0x4DEA6E: mov     eax, 0Bh
0x4DEA73: pop     esi
0x4DEA74: retn
0x4DEA75: mov     ecx, ds:0B333C4h
0x4DEA7B: call    Actor_IsSneaking
0x4DEA80: test    al, al
0x4DEA82: jnz     loc_4DEB98; jumptable 004DE9B3 cases 19,20,22,25,27,31,33,34,38-40,43
0x4DEA88: test    edi, edi
0x4DEA8A: jz      loc_4DEB5E
0x4DEA90: mov     ecx, edi
0x4DEA92: call    Actor__IsEssential
0x4DEA97: test    al, al
0x4DEA99: jz      loc_4DEB5E
0x4DEA9F: pop     edi
0x4DEAA0: mov     eax, 0Ah
0x4DEAA5: pop     esi
0x4DEAA6: retn
0x4DEAA7: mov     edx, [esi]; jumptable 004DE9B3 case 36
0x4DEAA9: mov     eax, [edx+198h]
0x4DEAAF: push    0
0x4DEAB1: mov     ecx, esi
0x4DEAB3: call    eax
0x4DEAB5: test    al, al
0x4DEAB7: jz      short loc_4DEAC1
0x4DEAB9: pop     edi; jumptable 004DE9B3 case 23
0x4DEABA: mov     eax, 2
0x4DEABF: pop     esi
0x4DEAC0: retn
0x4DEAC1: mov     ecx, esi
0x4DEAC3: call    sub_4D74D0
0x4DEAC8: test    al, al
0x4DEACA: jz      loc_4DEB8B; jumptable 004DE9B3 case 26
0x4DEAD0: mov     edx, [esi]
0x4DEAD2: mov     eax, [edx+190h]
0x4DEAD8: mov     ecx, esi
0x4DEADA: xor     edi, edi
0x4DEADC: call    eax
0x4DEADE: test    al, al
0x4DEAE0: jz      short loc_4DEAE4
0x4DEAE2: mov     edi, esi
0x4DEAE4: mov     edx, [edi]
0x4DEAE6: mov     eax, [edx+388h]
0x4DEAEC: mov     ecx, edi
0x4DEAEE: call    eax
0x4DEAF0: test    eax, eax
0x4DEAF2: jz      loc_4DEB83
0x4DEAF8: mov     edx, [edi]
0x4DEAFA: mov     eax, [edx+388h]
0x4DEB00: mov     ecx, edi
0x4DEB02: call    eax
0x4DEB04: cmp     eax, ds:0B333C4h
0x4DEB0A: jz      def_4DE9B3; jumptable 004DE9B3 default case, cases 28-30,37,41,42
0x4DEB10: mov     edx, [edi]
0x4DEB12: mov     eax, [edx+388h]
0x4DEB18: mov     ecx, edi
0x4DEB1A: call    eax
0x4DEB1C: mov     edx, [eax]
0x4DEB1E: mov     ecx, eax
0x4DEB20: mov     eax, [edx+198h]
0x4DEB26: push    0
0x4DEB28: call    eax
0x4DEB2A: test    al, al
0x4DEB2C: jnz     short def_4DE9B3; jumptable 004DE9B3 default case, cases 28-30,37,41,42
0x4DEB2E: mov     edx, [edi]
0x4DEB30: mov     eax, [edx+388h]
0x4DEB36: mov     ecx, edi
0x4DEB38: call    eax
0x4DEB3A: cmp     dword ptr [eax+58h], 0
0x4DEB3E: jz      short def_4DE9B3; jumptable 004DE9B3 default case, cases 28-30,37,41,42
0x4DEB40: mov     edx, [edi]
0x4DEB42: mov     eax, [edx+388h]
0x4DEB48: mov     ecx, edi
0x4DEB4A: call    eax
0x4DEB4C: mov     ecx, [eax+58h]
0x4DEB4F: mov     edx, [ecx]
0x4DEB51: mov     eax, [edx+36Ch]
0x4DEB57: call    eax
0x4DEB59: cmp     eax, 4
0x4DEB5C: jnz     short loc_4DEB66
0x4DEB5E: pop     edi
0x4DEB5F: mov     eax, 7
0x4DEB64: pop     esi
0x4DEB65: retn
0x4DEB66: mov     edx, [edi]
0x4DEB68: mov     eax, [edx+388h]
0x4DEB6E: mov     ecx, edi
0x4DEB70: call    eax
0x4DEB72: mov     ecx, [eax+58h]
0x4DEB75: mov     edx, [ecx]
0x4DEB77: mov     eax, [edx+36Ch]
0x4DEB7D: call    eax
0x4DEB7F: test    eax, eax
0x4DEB81: jnz     short loc_4DEB8B; jumptable 004DE9B3 case 26
0x4DEB83: pop     edi
0x4DEB84: mov     eax, 9
0x4DEB89: pop     esi
0x4DEB8A: retn
0x4DEB8B: mov     ecx, [esi+1Ch]; jumptable 004DE9B3 case 26
0x4DEB8E: mov     edx, [ecx+7Ch]
0x4DEB91: shr     edx, 1
0x4DEB93: test    dl, 1
0x4DEB96: jz      short def_4DE9B3; jumptable 004DE9B3 default case, cases 28-30,37,41,42
0x4DEB98: pop     edi; jumptable 004DE9B3 cases 19,20,22,25,27,31,33,34,38-40,43
0x4DEB99: mov     eax, 1
0x4DEB9E: pop     esi
0x4DEB9F: retn
0x4DEBA0: pop     edi; jumptable 004DE9B3 default case, cases 28-30,37,41,42
0x4DEBA1: xor     eax, eax
0x4DEBA3: pop     esi
0x4DEBA4: retn
