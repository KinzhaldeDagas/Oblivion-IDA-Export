0x5BF875: add     edi, 1; jumptable 005BF850 default case
0x5BF878: cmp     edi, 4
0x5BF87B: jl      short loc_5BF821
0x5BF87D: mov     ebx, 64h ; 'd'
0x5BF882: mov     [esp+arg_14], 4
0x5BF88A: lea     ebx, [ebx+0]
0x5BF890: push    0; Seed
0x5BF892: call    GetRandomLargeInteger?
0x5BF897: fld     dword ptr ds:0B33E9Ch
0x5BF89D: fnstcw  word ptr [esp+4+arg_10+2]
0x5BF8A1: mov     ebp, eax
0x5BF8A3: movzx   eax, word ptr [esp+4+arg_10+2]
0x5BF8A8: or      eax, 0C00h
0x5BF8AD: mov     [esp+4+Seed], eax
0x5BF8B1: fldcw   word ptr [esp+4+Seed]
0x5BF8B5: fistp   qword ptr [esp+4+Seed]
0x5BF8B9: mov     edx, [esp+4+Seed]
0x5BF8BD: push    edx; Seed
0x5BF8BE: fldcw   word ptr [esp+8+arg_10+2]
0x5BF8C2: call    GetRandomLargeInteger?
0x5BF8C7: push    ebp; Seed
0x5BF8C8: mov     edi, eax
0x5BF8CA: call    GetRandomLargeInteger?
0x5BF8CF: add     esp, 0Ch
0x5BF8D2: and     edi, 3
0x5BF8D5: mov     ebp, 0
0x5BF8DA: mov     eax, ebp
0x5BF8DC: jl      short loc_5BF8FB
0x5BF8DE: mov     edi, edi
0x5BF8E0: add     eax, 1
0x5BF8E3: cmp     eax, 3
0x5BF8E6: jle     short loc_5BF8EA
0x5BF8E8: xor     eax, eax
0x5BF8EA: lea     ecx, [eax+eax*4]
0x5BF8ED: cmp     dword ptr [esi+ecx*4+34h], 0FFFFFFFFh
0x5BF8F2: jnz     short loc_5BF8F7
0x5BF8F4: sub     edi, 1
0x5BF8F7: cmp     edi, ebp
0x5BF8F9: jge     short loc_5BF8E0
0x5BF8FB: lea     edx, [eax+eax*4]
0x5BF8FE: mov     [esi+edx*4+34h], ebx
0x5BF902: sub     ebx, 19h
0x5BF905: sub     [esp+arg_14], 1
0x5BF90A: jnz     short loc_5BF890
0x5BF90C: mov     ecx, esi
0x5BF90E: call    sub_5BE380
0x5BF913: lea     edi, [esi+30h]
0x5BF916: mov     ebx, 4
0x5BF91B: jmp     short loc_5BF920
0x5BF91D: align 10h
0x5BF920: mov     eax, [edi+4]
0x5BF923: add     eax, 0FFFFFFE7h; switch 76 cases
0x5BF926: cmp     eax, 4Bh
0x5BF929: ja      short def_5BF932; jumptable 005BF932 default case, cases 26-49,51-74,76-99
0x5BF92B: movzx   eax, ds:byte_5BFB44[eax]
0x5BF932: jmp     ds:jpt_5BF932[eax*4]; switch jump
0x5BF939: mov     ecx, [edi]; jumptable 005BF932 case 25
0x5BF93B: add     ecx, 1
0x5BF93E: mov     [esp+Seed], ecx
0x5BF942: mov     ecx, [esi+98h]
0x5BF948: jmp     short loc_5BF97B
0x5BF94A: mov     edx, [edi]; jumptable 005BF932 case 50
0x5BF94C: mov     ecx, [esi+9Ch]
0x5BF952: add     edx, 1
0x5BF955: mov     [esp+Seed], edx
0x5BF959: jmp     short loc_5BF97B
0x5BF95B: mov     eax, [edi]; jumptable 005BF932 case 75
0x5BF95D: mov     ecx, [esi+0A0h]
0x5BF963: add     eax, 1
0x5BF966: mov     [esp+Seed], eax
0x5BF96A: jmp     short loc_5BF97B
0x5BF96C: mov     ecx, [edi]; jumptable 005BF932 case 100
0x5BF96E: add     ecx, 1
0x5BF971: mov     [esp+Seed], ecx
0x5BF975: mov     ecx, [esi+0A4h]; this
0x5BF97B: fild    [esp+Seed]
0x5BF97F: push    ecx
0x5BF980: fstp    [esp+4+a2]; a3
0x5BF983: push    0FAEh; a2
0x5BF988: call    Tile_SetFloat
0x5BF98D: add     edi, 14h; jumptable 005BF932 default case, cases 26-49,51-74,76-99
0x5BF990: sub     ebx, 1
0x5BF993: jnz     short loc_5BF920
0x5BF995: push    ebp
0x5BF996: call    sub_5BEA90
0x5BF99B: fld     dword ptr ds:0A379B4h
0x5BF9A1: mov     ecx, [esi+0BCh]; this
0x5BF9A7: fstp    [esp+4+a2]; a3
0x5BF9AA: push    0FAFh; a2
0x5BF9AF: mov     [esi+88h], ebp
0x5BF9B5: call    Tile_SetFloat
0x5BF9BA: call    sub_5BE870
0x5BF9BF: test    al, al
0x5BF9C1: mov     ecx, [esi+0B8h]; this
0x5BF9C7: push    ecx
0x5BF9C8: jnz     short loc_5BF9CE
0x5BF9CA: fld1
0x5BF9CC: jmp     short loc_5BF9D4
0x5BF9CE: fld     dword ptr ds:0A379B4h
0x5BF9D4: fstp    [esp+4+a2]; a3
0x5BF9D7: push    0FAFh; a2
0x5BF9DC: call    Tile_SetFloat
0x5BF9E1: mov     ecx, ds:0B333C4h
0x5BF9E7: push    20h ; ' '
0x5BF9E9: call    Actor_GetSkillMasteryLevel
0x5BF9EE: cmp     eax, 1
0x5BF9F1: mov     ecx, [esi+0C0h]; this
0x5BF9F7: push    ecx
0x5BF9F8: jl      short loc_5BFA20
0x5BF9FA: fld     dword ptr ds:0A379B4h
0x5BFA00: fstp    [esp+4+a2]; a3
0x5BFA03: push    0FB1h; a2
0x5BFA08: call    Tile_SetFloat
0x5BFA0D: fld1
0x5BFA0F: mov     ecx, [esi+0C0h]
0x5BFA15: push    ecx; a2
0x5BFA16: fstp    [esp+4+a2]
0x5BFA19: push    0FAFh
0x5BFA1E: jmp     short loc_5BFA2A
0x5BFA20: fld1
0x5BFA22: fstp    [esp+4+a2]; a3
0x5BFA25: push    0FB1h; a2
0x5BFA2A: call    Tile_SetFloat
0x5BFA2F: fld     dword ptr ds:0B38E20h
0x5BFA35: mov     edx, [esi+0D8h]
0x5BFA3B: sub     esp, 8
0x5BFA3E: fstp    [esp+8+a2]
0x5BFA42: mov     edi, edx
0x5BFA44: fld     dword ptr ds:0B38E18h
0x5BFA4A: mov     eax, [edi]
0x5BFA4C: mov     edx, [eax+284h]
0x5BFA52: fstp    dword ptr [esp+0]
0x5BFA55: push    20h ; ' '
0x5BFA57: mov     ecx, edi
0x5BFA59: call    edx
0x5BFA5B: mov     ecx, ds:0B333C4h
0x5BFA61: push    eax; float
0x5BFA62: mov     eax, [ecx]
0x5BFA64: mov     edx, [eax+284h]
0x5BFA6A: push    20h ; ' '; float
0x5BFA6C: call    edx
0x5BFA6E: mov     ecx, ds:0B333C4h
0x5BFA74: push    eax; int
0x5BFA75: mov     eax, [edi]
0x5BFA77: mov     edx, [eax+224h]
0x5BFA7D: push    ecx; int
0x5BFA7E: mov     ecx, edi
0x5BFA80: call    edx
0x5BFA82: push    eax; int
0x5BFA83: call    sub_547A90
0x5BFA88: mov     [esp+20h+arg_C], eax
0x5BFA8C: fild    [esp+20h+arg_C]
0x5BFA90: mov     word ptr [esp+20h+arg_10], bp
0x5BFA95: mov     word ptr [esp+20h+arg_10+2], bp
0x5BFA9A: fstp    [esp+20h+arg_C]
0x5BFA9E: fld     [esp+20h+arg_C]
0x5BFAA2: mov     [esp+20h+arg_C], ebp
0x5BFAA6: fst     dword ptr [esi+7Ch]
0x5BFAA9: mov     [esp+40h], ebp
0x5BFAAD: call    Double_To_SInt32
0x5BFAB2: push    eax; ArgList
0x5BFAB3: lea     eax, [esp+24h+arg_C]
0x5BFAB7: push    offset aI; "%i"
0x5BFABC: push    eax; int
0x5BFABD: call    BSStringT_Static_Format
0x5BFAC2: mov     edi, [esp+2Ch+arg_C]
0x5BFAC6: mov     ecx, [esi+90h]
0x5BFACC: add     esp, 20h
0x5BFACF: push    edi
0x5BFAD0: push    0FDEh
0x5BFAD5: call    Tile_SetString
0x5BFADA: mov     ecx, [esi+0D8h]
0x5BFAE0: mov     edx, [ecx]
0x5BFAE2: mov     eax, ds:0B333C4h
0x5BFAE7: mov     edx, [edx+224h]
0x5BFAED: push    eax
0x5BFAEE: call    edx
0x5BFAF0: push    ebp
0x5BFAF1: mov     [esi+0ECh], eax
0x5BFAF7: mov     [esi+0F0h], ebp
0x5BFAFD: call    sub_5BF170
0x5BFB02: push    edi
0x5BFB03: call    FormHeapFree
0x5BFB08: add     esp, 8
0x5BFB0B: mov     ecx, [esp+10h+arg_10]
0x5BFB0F: mov     large fs:0, ecx
0x5BFB16: pop     ecx
0x5BFB17: pop     edi
0x5BFB18: pop     esi
0x5BFB19: pop     ebp
0x5BFB1A: pop     ebx
0x5BFB1B: add     esp, 1Ch
0x5BFB1E: retn
