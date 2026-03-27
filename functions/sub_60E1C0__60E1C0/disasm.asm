0x60E1C0: fldz
0x60E1C2: sub     esp, 0Ch
0x60E1C5: push    edi
0x60E1C6: mov     edi, ecx
0x60E1C8: fcomp   dword ptr [edi+3Ch]
0x60E1CB: fnstsw  ax
0x60E1CD: test    ah, 41h
0x60E1D0: jz      short loc_60E24E
0x60E1D2: cmp     dword ptr [edi+40h], 0
0x60E1D6: jz      short loc_60E24E
0x60E1D8: cmp     dword ptr ds:0B333C4h, 0
0x60E1DF: jz      short loc_60E24E
0x60E1E1: mov     eax, [edi+30h]
0x60E1E4: push    esi
0x60E1E5: push    eax
0x60E1E6: push    offset dword_B3FA80
0x60E1EB: call    NiRTTI_Cast
0x60E1F0: mov     esi, eax
0x60E1F2: add     esp, 8
0x60E1F5: test    esi, esi
0x60E1F7: jz      short loc_60E24D
0x60E1F9: mov     ecx, ds:0B333C4h
0x60E1FF: mov     edx, [ecx]
0x60E201: mov     eax, [edx+174h]
0x60E207: call    eax
0x60E209: fld     dword ptr [eax]
0x60E20B: fsub    dword ptr [esi+88h]
0x60E211: lea     ecx, [esp+14h+var_C]
0x60E215: fstp    [esp+14h+var_C]
0x60E219: fld     dword ptr [eax+4]
0x60E21C: fsub    dword ptr [esi+8Ch]
0x60E222: fstp    [esp+14h+var_8]
0x60E226: fld     dword ptr [eax+8]
0x60E229: fsub    dword ptr [esi+90h]
0x60E22F: fstp    [esp+14h+var_4]
0x60E233: call    sub_404C90
0x60E238: fld     dword ptr [edi+3Ch]
0x60E23B: fcompp
0x60E23D: fnstsw  ax
0x60E23F: test    ah, 41h
0x60E242: jnz     short loc_60E24D
0x60E244: mov     ecx, [edi+40h]
0x60E247: push    esi
0x60E248: call    ecx
0x60E24A: add     esp, 4
0x60E24D: pop     esi
0x60E24E: pop     edi
0x60E24F: add     esp, 0Ch
0x60E252: retn    4
